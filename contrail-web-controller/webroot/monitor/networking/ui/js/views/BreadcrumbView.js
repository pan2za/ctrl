/*
 * Copyright (c) 2015 Juniper Networks, Inc. All rights reserved.
 */

define([
    'underscore',
    'backbone',
    'contrail-list-model'
], function (_, Backbone, ContrailListModel) {
    var BreadcrumbView = Backbone.View.extend({

        renderDomainBreadcrumbDropdown: function(fqName, initCB, changeCB) {
            var contrailListModel = cowch.getAllDomains();

            if(contrailListModel.loadedFromCache || !(contrailListModel.isRequestInProgress())) {
                populateDomainBreadcrumbDropdown(contrailListModel, fqName, initCB, changeCB);
            }

            contrailListModel.onAllRequestsComplete.subscribe(function() {
                populateDomainBreadcrumbDropdown(contrailListModel, fqName, initCB, changeCB);
            });
        },

        renderProjectBreadcrumbDropdown: function(fqName, initCB, changeCB) {
            var domain = getDomainFromFQN(fqName),
                contrailListModel = cowch.getProjects4Domain(domain);

            if(contrailListModel != null) {
                if(contrailListModel.loadedFromCache || !(contrailListModel.isRequestInProgress())) {
                    populateProjectBreadcrumbDropdown(contrailListModel, fqName, initCB, changeCB);
                } else {
                    contrailListModel.onAllRequestsComplete.subscribe(function() {
                        populateProjectBreadcrumbDropdown(contrailListModel, fqName, initCB, changeCB);
                    });
                }
            }
        },

        renderNetworkBreadcrumbDropdown: function(fqName, initCB, changeCB) {
            var domain = getDomainFromFQN(fqName),
                project = getProjectFromFQN(fqName),
                projectFQN = domain + ':' + project,
                contrailListModel = cowch.getNetworks4Project(projectFQN);

            if(contrailListModel.loadedFromCache || !(contrailListModel.isRequestInProgress())) {
                populateNetworkBreadcrumbDropdown(contrailListModel, fqName, initCB, changeCB);
            }
            contrailListModel.onAllRequestsComplete.subscribe(function() {
                populateNetworkBreadcrumbDropdown(contrailListModel, fqName, initCB, changeCB);
            });
        }

    });

    var populateDomainBreadcrumbDropdown = function(contrailListModel, fqName, initCB, changeCB) {
        var dropdownData = contrailListModel.getItems();

        if (dropdownData.length > 0) {
            var selectedValueData = null,
                urlDomainFQN = ((contrail.checkIfExist(fqName)) ? fqName.split(':').splice(0,1).join(':') : null),
                cookieDomainFQN = contrail.getCookie(cowc.COOKIE_DOMAIN),
                urlDataKey = null, cookieDataKey = null;

            $.each(dropdownData, function (key, value) {
                if (urlDomainFQN == value.fq_name) {
                    urlDataKey = key;
                }

                if (cookieDomainFQN == value.fq_name) {
                    cookieDataKey = key;
                }
            });

            if(urlDomainFQN != null && urlDataKey == null) {
                var notFoundTemplate = contrail.getTemplate4Id(cowc.TMPL_NOT_FOUND_MESSAGE),
                    notFoundConfig = $.extend(true, {}, cowc.DEFAULT_CONFIG_NOT_FOUND_PAGE, {errorMessage: urlDomainFQN + ' was not found.'});

                $(contentContainer).html(notFoundTemplate(notFoundConfig));
            } else {
                var domainDropdownElementId = ctwl.DOMAINS_BREADCRUMB_DROPDOWN,
                    domainDropdownElement = constructBreadcrumbDropdownDOM(domainDropdownElementId);

                selectedValueData = (selectedValueData == null && urlDataKey != null) ? dropdownData[urlDataKey] : selectedValueData;
                selectedValueData = (selectedValueData == null && cookieDataKey != null) ? dropdownData[cookieDataKey] : selectedValueData;
                selectedValueData = (selectedValueData == null) ? dropdownData[0] : selectedValueData;

                var domainDropdown = domainDropdownElement.contrailDropdown({
                    dataTextField: "name",
                    dataValueField: "value",
                    data: dropdownData,
                    dropdownCssClass: 'min-width-150',
                    change: function (e) {
                        var selectedValueData = {
                            name: domainDropdownElement.data('contrailDropdown').text(),
                            value: domainDropdownElement.data('contrailDropdown').value()
                        };

                        (contrail.checkIfFunction(changeCB) ? changeCB(selectedValueData, true) : initCB(selectedValueData, true));
                        destroyBreadcrumbDropdownDOM(ctwl.PROJECTS_BREADCRUMB_DROPDOWN);
                        destroyBreadcrumbDropdownDOM(ctwl.NETWORKS_BREADCRUMB_DROPDOWN);
                    }
                }).data('contrailDropdown');

                domainDropdown.text(selectedValueData.name);
                initCB(selectedValueData, false);
            }


        } else {
            //TODO - Empty message - that.$el.html(ctwm.NO_PROJECT_FOUND);
        }

    };

    var populateProjectBreadcrumbDropdown = function(contrailListModel, fqName, initCB, changeCB) {
        var dropdownData = contrailListModel.getItems();

        if (dropdownData.length > 0) {
            var selectedValueData = null,
                urlProjectFQN = ((contrail.checkIfExist(fqName)) ? fqName.split(':').splice(0,2).join(':') : null),
                cookieProjectFQN = contrail.getCookie(cowc.COOKIE_DOMAIN) + ':' + contrail.getCookie(cowc.COOKIE_PROJECT),
                urlDataKey = null, cookieDataKey = null;

            $.each(dropdownData, function (key, value) {
                if (urlProjectFQN == value.fq_name) {
                    urlDataKey = key;
                }

                if (cookieProjectFQN == value.fq_name) {
                    cookieDataKey = key;
                }
            });

            if(urlProjectFQN != null && urlDataKey == null) {
                var notFoundTemplate = contrail.getTemplate4Id(cowc.TMPL_NOT_FOUND_MESSAGE),
                    notFoundConfig = $.extend(true, {}, cowc.DEFAULT_CONFIG_NOT_FOUND_PAGE, {errorMessage: urlProjectFQN + ' was not found.'});

                $(contentContainer).html(notFoundTemplate(notFoundConfig));
            } else {
                var projectDropdownElementId = ctwl.PROJECTS_BREADCRUMB_DROPDOWN,
                    projectDropdownElement = constructBreadcrumbDropdownDOM(projectDropdownElementId);

                selectedValueData = (selectedValueData == null && urlDataKey != null) ? dropdownData[urlDataKey] : selectedValueData;
                selectedValueData = (selectedValueData == null && cookieDataKey != null) ? dropdownData[cookieDataKey] : selectedValueData;
                selectedValueData = (selectedValueData == null) ? dropdownData[0] : selectedValueData;

                var projectDropdown = projectDropdownElement.contrailDropdown({
                    dataTextField: "name",
                    dataValueField: "value",
                    data: dropdownData,
                    dropdownCssClass: 'min-width-150',
                    selecting: function (e) {
                        var selectedValueData = {
                            name: e.object['name'],
                            value: e.object['value']
                        };
                        (contrail.checkIfFunction(changeCB) ? changeCB(selectedValueData, true) : initCB(selectedValueData, true));
                        destroyBreadcrumbDropdownDOM(ctwl.NETWORKS_BREADCRUMB_DROPDOWN);
                    }
                }).data('contrailDropdown');

                projectDropdown.text(selectedValueData.name);
                initCB(selectedValueData, false);
            }

        } else {
            //TODO - Empty message - that.$el.html(ctwm.NO_PROJECT_FOUND);
        }
    };

    var populateNetworkBreadcrumbDropdown = function(contrailListModel, fqName, initCB, changeCB) {
        var dropdownData = contrailListModel.getItems();

        if (dropdownData.length > 0) {
            var selectedValueData = null,
                urlNetworkFQN = ((contrail.checkIfExist(fqName)) ? fqName.split(':').splice(0,3).join(':') : null),
                cookieNetworkFQN = contrail.getCookie(cowc.COOKIE_DOMAIN) + ':' + contrail.getCookie(cowc.COOKIE_PROJECT) + ':' + contrail.getCookie(cowc.COOKIE_VIRTUAL_NETWORK),
                urlDataKey = null, cookieDataKey = null;

            $.each(dropdownData, function (key, value) {
                if (urlNetworkFQN == value.fq_name) {
                    urlDataKey = key;
                }

                if (cookieNetworkFQN == value.fq_name) {
                    cookieDataKey = key;
                }
            });

            if(urlNetworkFQN != null && urlDataKey == null) {
                var notFoundTemplate = contrail.getTemplate4Id(cowc.TMPL_NOT_FOUND_MESSAGE),
                    notFoundConfig = $.extend(true, {}, cowc.DEFAULT_CONFIG_NOT_FOUND_PAGE, {errorMessage: urlNetworkFQN + ' was not found.'});

                $(contentContainer).html(notFoundTemplate(notFoundConfig));
            } else {
                var networkDropdownElementId = ctwl.NETWORKS_BREADCRUMB_DROPDOWN,
                    networkDropdownElement = constructBreadcrumbDropdownDOM(networkDropdownElementId);

                selectedValueData = (selectedValueData == null && urlDataKey != null) ? dropdownData[urlDataKey] : selectedValueData;
                selectedValueData = (selectedValueData == null && cookieDataKey != null) ? dropdownData[cookieDataKey] : selectedValueData;
                selectedValueData = (selectedValueData == null) ? dropdownData[0] : selectedValueData;

                var networkDropdown = networkDropdownElement.contrailDropdown({
                    dataTextField: "name",
                    dataValueField: "value",
                    data: dropdownData,
                    dropdownCssClass: 'min-width-150',
                    change: function (e) {
                        var selectedValueData = {
                            name: networkDropdownElement.data('contrailDropdown').text(),
                            value: networkDropdownElement.data('contrailDropdown').value()
                        };

                        (contrail.checkIfFunction(changeCB) ? changeCB(selectedValueData, true) : initCB(selectedValueData, true));
                    }
                }).data('contrailDropdown');

                networkDropdown.text(selectedValueData.name);
                initCB(selectedValueData, false);
            }

        } else {
            //TODO - Empty message - that.$el.html(ctwm.NO_PROJECT_FOUND);
        }
    };

    var getDomainFromFQN = function(fqName) {
        return contrail.checkIfExist(fqName) ? fqName.split(':')[0] : contrail.getCookie(cowc.COOKIE_DOMAIN);
    };

    var getProjectFromFQN = function(fqName) {
        return contrail.checkIfExist(fqName) ? fqName.split(':')[1] : contrail.getCookie(cowc.COOKIE_DOMAIN);
    };

    var constructBreadcrumbDropdownDOM = function(breadcrumbDropdownId) {
        var breadcrumbElement = $('#breadcrumb'); //TODO - move to constants

        destroyBreadcrumbDropdownDOM(breadcrumbDropdownId);

        breadcrumbElement.children('li').removeClass('active');
        breadcrumbElement.children('li:last').append('<span class="divider"><i class="icon-angle-right"></i></span>');
        breadcrumbElement.append('<li class="active ' + breadcrumbDropdownId +'"><div id="' + breadcrumbDropdownId + '"></div></li>');

        return $('#' + breadcrumbDropdownId);
    };

    var destroyBreadcrumbDropdownDOM = function(breadcrumbDropdownId){
        if (contrail.checkIfExist($('#' + breadcrumbDropdownId).data('contrailDropdown'))) {
            $('#' + breadcrumbDropdownId).data('contrailDropdown').destroy();
            if($('li.' + breadcrumbDropdownId).hasClass('active')) {
                $('li.' + breadcrumbDropdownId).prev().addClass('active')
            }
            $('li.' + breadcrumbDropdownId).prev().find('.divider').remove();
            $('li.' + breadcrumbDropdownId).remove();
        }
    };

    return BreadcrumbView;
});