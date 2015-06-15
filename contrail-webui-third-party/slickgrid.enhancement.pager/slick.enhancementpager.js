/**
 * SlickGrid Enhancement Pager
 *
 * An easy-to-use slickgrid pager.
 * https://github.com/kingleema/SlickGridEnhancementPager
 * Released under the MIT license.
 * 
 * Copyright 2012 KingleeMa <https://github.com/kingleema>
 *
 */
(function ($) {
	function EnhancementPager(paramObj) {
		var ajaxPostData = paramObj.params,
			defaultPageSize = 100,
			csgCurrentPageDropDown = null, 
			csgPagerSizesDropdown = null,
			events = paramObj.events,
            gridDSConfig = paramObj.gridConfig.body.dataSource,
            sortable = paramObj.gridConfig.body.options.sortable,
            timeout = gridDSConfig.remote.timeout;
		if (isNaN(timeout)) {
			timeout = 30000;
		}
		var postedData = {};
		postedData['pageSize'] = defaultPageSize;
        postedData['page'] = 1;
		if (ajaxPostData !== null && ajaxPostData != undefined) {
			$.each(ajaxPostData, function (k, v) {
				postedData[k] = v;
			});
		}
		
		initPager(paramObj.pagerType, paramObj.trans, timeout);
		getData(1, paramObj.remoteUrl, paramObj.pagerType, ajaxPostData, timeout);

		function populatePagerSelect(data){
			var returnData = [];
			$.each(data,function(key,val){
				returnData.push({
					id: val,
					text: String(val)
				});
			});
			return returnData;
		}

		function initPager(pagertype, trans, waiting) {
			var container = paramObj.container;
				
			if(paramObj.options.pageSizeSelect != undefined){
				csgPagerSizesDropdown = container.find('.csg-pager-sizes').contrailDropdown({
					placeholder: 'Select..',
					data: populatePagerSelect(paramObj.options.pageSizeSelect),
					change: function(e){
						var pageIndex = 1;
						getData(pageIndex, paramObj.remoteUrl, pagertype, ajaxPostData, waiting);
		
						var pagesize = parseInt(e.val);
						var total = parseInt(paramObj.container.find('.totalrecords').text());
						var totalpages = parseInt(Math.floor(parseFloat(total / pagesize)) + 1);
						csgCurrentPageDropDown = paramObj.container.find('.csg-current-page').contrailDropdown({ 
							data: populateCurrentPageSelect(totalpages),
							placeholder: 'Select..',
							change: function(e){
								var pageIndex = e.val;
								if (pageIndex < 1) {
									pageIndex = 1;
								}
								if (pageIndex > parseInt(paramObj.container.find('.csg-total-page-count').text())) {
									pageIndex = parseInt(paramObj.container.find('.csg-total-page-count').text());
								}
								csgCurrentPageDropDown.value(String(pageIndex));
								getData(pageIndex, paramObj.remoteUrl, pagertype, ajaxPostData, waiting);
							}
						});
						csgCurrentPageDropDown.value('1');
					}
				}).data('contrailDropdown');
				csgPagerSizesDropdown.value(String(paramObj.options.pageSize));
			} else {
				container.find('.csg-pager-sizes').append(paramObj.options.pageSize + ' Records');
				container.find('.csg-pager-sizes').width(60);
			}

			container.find(".slick-pager-info").empty().append('Total: <span class="totalrecords"></span> records');

			container.find(".pager-control-first").click(function () {
				var pageIndex = 1;
				getData(pageIndex, paramObj.remoteUrl, pagertype, ajaxPostData, waiting);
			});
			container.find(".pager-control-prev").click(function () {
				if (isNaN(parseInt(csgCurrentPageDropDown.value()))) {
					csgCurrentPageDropDown.value('1');
				}
				var pageIndex = parseInt(csgCurrentPageDropDown.value()) - 1;
				if (pageIndex < 1) {
					pageIndex = 1;
				}
				getData(pageIndex, paramObj.remoteUrl, pagertype, ajaxPostData, waiting);
			});
			container.find(".pager-control-next").click(function () {
				if (isNaN(parseInt(csgCurrentPageDropDown.value()))) {
					csgCurrentPageDropDown.value('1');
				}
				var pageIndex = parseInt(csgCurrentPageDropDown.value()) + 1;
				if (pageIndex > parseInt(paramObj.container.find('.csg-total-page-count').text())) {
					pageIndex = parseInt(paramObj.container.find('.csg-total-page-count').text());
				}
				getData(pageIndex, paramObj.remoteUrl, pagertype, ajaxPostData, waiting);
			});
			container.find(".pager-control-last").click(function () {
				var pageIndex = parseInt(paramObj.container.find('.csg-total-page-count').text());
				getData(pageIndex, paramObj.remoteUrl, pagertype, ajaxPostData, waiting);
			});
			
            if(sortable != null && sortable) {
                paramObj.datagrid.onSort.subscribe(function (e, args) {
                	var argsSortColsField = (args.multiColumnSort) ? args.sortCols[0].sortCol.field : args.sortCol.field,
                    	sortAsc = (args.multiColumnSort) ? args.sortCols[0].sortAsc : args.sortAsc;
                        sortDir = sortAsc ? 'asc' : 'desc',
                        sortOptions = [{field: argsSortColsField, dir: sortDir}],
                        pageNumber = csgCurrentPageDropDown.value();
                    if (isNaN(parseInt(pageNumber))) {
                        pageNumber = '1';
                        csgCurrentPageDropDown.value(pageNumber);
                    }
                    getData(pageNumber, paramObj.remoteUrl, pagertype, ajaxPostData, waiting, sortOptions);
                });
            }
		}

		function populateCurrentPageSelect(n){
			var returnData = [];
			for(var i = 1 ; i <= n ; i++){
				returnData.push({
					id: i,
					text: 'Page ' + String((i))
				});
			}
			return returnData;
		};

		function getData(pageIndex, url, pagertype, ajaxPostData, timeout, sortOptions) {
			var pagesize = parseInt((paramObj.options.pageSizeSelect != undefined) ? csgPagerSizesDropdown.value() : paramObj.options.pageSize);
			postedData['pageSize'] = pagesize;
			postedData['page'] = pageIndex;
			if (ajaxPostData !== null && ajaxPostData != undefined) {
				$.each(ajaxPostData, function (k, v) {
					postedData[k] = v;
				});
                if(sortable) {
                   postedData['sort'] = sortOptions;
                }
			}
			$.ajax({
				url: url,
				type: gridDSConfig.requestType,
				cache: false,
				dataType: "json",
				crossDomain: true,
				data: postedData,
				timeout: timeout,
				beforeSend: function() {
					paramObj.datagrid.setData([], true);
					paramObj.datagrid.render();
					paramObj.gridContainer.data('contrailGrid').showGridMessage('loading');
					paramObj.gridContainer.find('.grid-footer').hide();
					if(events.onRequestStartCB && typeof events.onRequestStartCB === 'function') {
                        events.onRequestStartCB();
                    }
				},
				error: function (xhr) {
					var errorMsg = contrail.parseErrorMsgFromXHR(xhr);
                    if(xhr.status && xhr.statusText != 'abort') {
                        showMessagePopup('Error', 'Error: ' + errorMsg);
                        paramObj.gridContainer.data('contrailGrid').showGridMessage('Error','Error: ' + errorMsg);
                    }
					if(events.onRequestErrorCB && typeof events.onRequestErrorCB === 'function') {
                        events.onRequestErrorCB();
                    }
				},
				success: function (results) {
					var requestSuccessFlag = true;
					if(events.onRequestSuccessCB && typeof events.onRequestSuccessCB === 'function') {
                        requestSuccessFlag = events.onRequestSuccessCB(results);
                    }
					if(requestSuccessFlag != false) {
						if(typeof results.total === 'undefined' || results.total == 0){
							paramObj.gridContainer.data('contrailGrid').showGridMessage('empty');
						}
						else{
							setTimeout(function(){
								paramObj.gridContainer.data('contrailGrid').removeGridMessage();
								paramObj.gridContainer.find('.grid-footer').show();
							
								var total = results.total;
								var rows = results.data;
								
								if (rows.length > 0 && rows[0].cgrid == undefined) {
					            	$.each(rows, function (key, val) {
										rows[key].cgrid = 'id_' + key;
						            });
						        }
								
								paramObj.datagrid.setData(rows, true);
								paramObj.datagrid.render();
			
								var pagesize = parseInt((paramObj.options.pageSizeSelect != undefined) ? paramObj.container.find('.csg-pager-sizes').select2('val') : paramObj.options.pageSize);
			
								if(total == parseInt(paramObj.container.find('.totalrecords').text()) || pageIndex == 1){
									paramObj.container.find('.totalrecords').text(total);
									var totalpages = parseInt(Math.ceil(parseFloat(total / pagesize)));
			
									var currentPageSelectData = populateCurrentPageSelect(totalpages);
									csgCurrentPageDropDown = paramObj.container.find('.csg-current-page').contrailDropdown({ 
										val: '1',
										data: currentPageSelectData,
										placeholder: 'Select..',
										change: function(e){
											var changedPageIndex = e.val;
											if (changedPageIndex < 1) {
												changedPageIndex = 1;
											}
											if (changedPageIndex > parseInt(paramObj.container.find('.csg-total-page-count').text())) {
												changedPageIndex = parseInt(paramObj.container.find('.csg-total-page-count').text());
											}
											csgCurrentPageDropDown.value(String(changedPageIndex));
											getData(changedPageIndex, paramObj.remoteUrl, pagertype, ajaxPostData, timeout);
										}
									}).data('contrailDropdown');
									
									csgCurrentPageDropDown.value(String(pageIndex));
			
									paramObj.container.find('.csg-total-page-count').text(totalpages);
									paramObj.container.find('.slick-pager').show();
									
									if(events.onDataBoundCB && typeof events.onDataBoundCB === 'function') {
			                			events.onDataBoundCB();
			            			}
								}
								paramObj.gridContainer.data('contrailGrid').adjustAllRowHeight();
							}, 500);					
						}
					}
				}
			});
		}
	}
	$.extend(true, window, { Slick: { Controls: { EnhancementPager: EnhancementPager}} });
})(jQuery);