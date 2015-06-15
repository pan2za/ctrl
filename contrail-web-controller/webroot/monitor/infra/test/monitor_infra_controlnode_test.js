/*
 * Copyright (c) 2014 Juniper Networks, Inc. All rights reserved.
 */
module("Infra Control Node",{
    //Called before executing any test case under this module
    setup: function() {
    },
    //Called when any test case is completed 
    teardown: function() {

    }
});

test("testProcessPeerInfo", function() {
//Declare the number of assert statements in current test case
expect(4);
deepEqual(monitorInfraControlPeersClass.processPeerInfo(infraControlMockData.getInput({fnName:'processPeerInfo',type:'test1'})),
  infraControlMockData.getOutput({fnName:'processPeerInfo',type:'test1'}),'Test processPeerInfo with valid data');
deepEqual(monitorInfraControlPeersClass.processPeerInfo(infraControlMockData.getInput({fnName:'processPeerInfo',type:'test2'})),
      infraControlMockData.getOutput({fnName:'processPeerInfo',type:'test2'}),'Test processPeerInfo with valid data');
deepEqual(monitorInfraControlPeersClass.processPeerInfo(infraControlMockData.getInput({fnName:'processPeerInfo',type:'test3'})),
      infraControlMockData.getOutput({fnName:'processPeerInfo',type:'test3'}),'Test processPeerInfo with empty object data');
deepEqual(monitorInfraControlPeersClass.processPeerInfo(infraControlMockData.getInput({fnName:'processPeerInfo',type:'test4'})),
      infraControlMockData.getOutput({fnName:'processPeerInfo',type:'test4'}),'Test processPeerInfo with null data');
});

//test("testParseRoutes", function() {
//	//Declare the number of assert statements in current test case
//	expect(2);
//	var selectedValues = {'selAddFamily':'All','selPeerSrc':'All','selProtocol':'All'};
//	deepEqual(monitorInfraControlRoutesClass.parseRoutes(infraControlMockData.getInput({fnName:'parseRoutes',type:'test1'}),selectedValues),
//	  infraControlMockData.getOutput({fnName:'parseRoutes',type:'test1'}),'Test parseRoutes with valid data');
//	deepEqual(monitorInfraControlRoutesClass.parseRoutes(infraControlMockData.getInput({fnName:'parseRoutes',type:'test2'},selectedValues)),
//	      infraControlMockData.getOutput({fnName:'parseRoutes',type:'test2'}),'Test parseRoutes with valid data');
//	deepEqual(monitorInfraControlRoutesClass.parseRoutes(infraControlMockData.getInput({fnName:'parseRoutes',type:'test3'},selectedValues)),
//	      infraControlMockData.getOutput({fnName:'parseRoutes',type:'test3'}),'Test parseRoutes with empty object data');
//	deepEqual(monitorInfraControlRoutesClass.parseRoutes(infraControlMockData.getInput({fnName:'parseRoutes',type:'test4'},selectedValues)),
//	      infraControlMockData.getOutput({fnName:'parseRoutes',type:'test4'}),'Test parseRoutes with null data');
//});