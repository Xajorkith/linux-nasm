%ifndef __NASMX_SETUPAPI_INC__
%define __NASMX_SETUPAPI_INC__

IMPORT CMP_GetBlockedDriverInfo, 16
IMPORT CMP_GetServerSideDeviceInstallFlags, 12
IMPORT CMP_Init_Detection, 4
IMPORT CMP_RegisterNotification, 16
IMPORT CMP_Report_LogOn, 8
IMPORT CMP_UnregisterNotification, 4
IMPORT CMP_WaitNoPendingInstallEvents, 4
IMPORT CMP_WaitServicesAvailable, 4
IMPORT CM_Add_Empty_Log_Conf, 16
IMPORT CM_Add_Empty_Log_Conf_Ex, 20
IMPORT CM_Add_IDA, 12
IMPORT CM_Add_IDW, 12
IMPORT CM_Add_ID_ExA, 16
IMPORT CM_Add_ID_ExW, 16
IMPORT CM_Add_Range, 24
IMPORT CM_Add_Res_Des, 24
IMPORT CM_Add_Res_Des_Ex, 28
IMPORT CM_Connect_MachineA, 8
IMPORT CM_Connect_MachineW, 8
IMPORT CM_Create_DevNodeA, 16
IMPORT CM_Create_DevNodeW, 16
IMPORT CM_Create_DevNode_ExA, 20
IMPORT CM_Create_DevNode_ExW, 20
IMPORT CM_Create_Range_List, 8
IMPORT CM_Delete_Class_Key, 8
IMPORT CM_Delete_Class_Key_Ex, 12
IMPORT CM_Delete_DevNode_Key, 12
IMPORT CM_Delete_DevNode_Key_Ex, 16
IMPORT CM_Delete_Range, 24
IMPORT CM_Detect_Resource_Conflict, 24
IMPORT CM_Detect_Resource_Conflict_Ex, 28
IMPORT CM_Disable_DevNode, 8
IMPORT CM_Disable_DevNode_Ex, 12
IMPORT CM_Disconnect_Machine, 4
IMPORT CM_Dup_Range_List, 12
IMPORT CM_Enable_DevNode, 8
IMPORT CM_Enable_DevNode_Ex, 12
IMPORT CM_Enumerate_Classes, 12
IMPORT CM_Enumerate_Classes_Ex, 16
IMPORT CM_Enumerate_EnumeratorsA, 16
IMPORT CM_Enumerate_EnumeratorsW, 16
IMPORT CM_Enumerate_Enumerators_ExA, 20
IMPORT CM_Enumerate_Enumerators_ExW, 20
IMPORT CM_Find_Range, 40
IMPORT CM_First_Range, 20
IMPORT CM_Free_Log_Conf, 8
IMPORT CM_Free_Log_Conf_Ex, 12
IMPORT CM_Free_Log_Conf_Handle, 4
IMPORT CM_Free_Range_List, 8
IMPORT CM_Free_Res_Des, 12
IMPORT CM_Free_Res_Des_Ex, 16
IMPORT CM_Free_Res_Des_Handle, 4
IMPORT CM_Free_Resource_Conflict_Handle, 4
IMPORT CM_Get_Child, 12
IMPORT CM_Get_Child_Ex, 16
IMPORT CM_Get_Class_Key_NameA, 16
IMPORT CM_Get_Class_Key_NameW, 16
IMPORT CM_Get_Class_Key_Name_ExA, 20
IMPORT CM_Get_Class_Key_Name_ExW, 20
IMPORT CM_Get_Class_NameA, 16
IMPORT CM_Get_Class_NameW, 16
IMPORT CM_Get_Class_Name_ExA, 20
IMPORT CM_Get_Class_Name_ExW, 20
IMPORT CM_Get_Class_Registry_PropertyA, 28
IMPORT CM_Get_Class_Registry_PropertyW, 28
IMPORT CM_Get_Depth, 12
IMPORT CM_Get_Depth_Ex, 16
IMPORT CM_Get_DevNode_Custom_PropertyA, 24
IMPORT CM_Get_DevNode_Custom_PropertyW, 24
IMPORT CM_Get_DevNode_Custom_Property_ExA, 28
IMPORT CM_Get_DevNode_Custom_Property_ExW, 28
IMPORT CM_Get_DevNode_Registry_PropertyA, 24
IMPORT CM_Get_DevNode_Registry_PropertyW, 24
IMPORT CM_Get_DevNode_Registry_Property_ExA, 28
IMPORT CM_Get_DevNode_Registry_Property_ExW, 28
IMPORT CM_Get_DevNode_Status, 16
IMPORT CM_Get_DevNode_Status_Ex, 20
IMPORT CM_Get_Device_IDA, 16
IMPORT CM_Get_Device_IDW, 16
IMPORT CM_Get_Device_ID_ExA, 20
IMPORT CM_Get_Device_ID_ExW, 20
IMPORT CM_Get_Device_ID_ListA, 16
IMPORT CM_Get_Device_ID_ListW, 16
IMPORT CM_Get_Device_ID_List_ExA, 20
IMPORT CM_Get_Device_ID_List_ExW, 20
IMPORT CM_Get_Device_ID_List_SizeA, 12
IMPORT CM_Get_Device_ID_List_SizeW, 12
IMPORT CM_Get_Device_ID_List_Size_ExA, 16
IMPORT CM_Get_Device_ID_List_Size_ExW, 16
IMPORT CM_Get_Device_ID_Size, 12
IMPORT CM_Get_Device_ID_Size_Ex, 16
IMPORT CM_Get_Device_Interface_AliasA, 20
IMPORT CM_Get_Device_Interface_AliasW, 20
IMPORT CM_Get_Device_Interface_Alias_ExA, 24
IMPORT CM_Get_Device_Interface_Alias_ExW, 24
IMPORT CM_Get_Device_Interface_ListA, 20
IMPORT CM_Get_Device_Interface_ListW, 20
IMPORT CM_Get_Device_Interface_List_ExA, 24
IMPORT CM_Get_Device_Interface_List_ExW, 24
IMPORT CM_Get_Device_Interface_List_SizeA, 16
IMPORT CM_Get_Device_Interface_List_SizeW, 16
IMPORT CM_Get_Device_Interface_List_Size_ExA, 20
IMPORT CM_Get_Device_Interface_List_Size_ExW, 20
IMPORT CM_Get_First_Log_Conf, 12
IMPORT CM_Get_First_Log_Conf_Ex, 16
IMPORT CM_Get_Global_State, 8
IMPORT CM_Get_Global_State_Ex, 12
IMPORT CM_Get_HW_Prof_FlagsA, 16
IMPORT CM_Get_HW_Prof_FlagsW, 16
IMPORT CM_Get_HW_Prof_Flags_ExA, 20
IMPORT CM_Get_HW_Prof_Flags_ExW, 20
IMPORT CM_Get_Hardware_Profile_InfoA, 12
IMPORT CM_Get_Hardware_Profile_InfoW, 12
IMPORT CM_Get_Hardware_Profile_Info_ExA, 16
IMPORT CM_Get_Hardware_Profile_Info_ExW, 16
IMPORT CM_Get_Log_Conf_Priority, 12
IMPORT CM_Get_Log_Conf_Priority_Ex, 16
IMPORT CM_Get_Next_Log_Conf, 12
IMPORT CM_Get_Next_Log_Conf_Ex, 16
IMPORT CM_Get_Next_Res_Des, 20
IMPORT CM_Get_Next_Res_Des_Ex, 24
IMPORT CM_Get_Parent, 12
IMPORT CM_Get_Parent_Ex, 16
IMPORT CM_Get_Res_Des_Data, 16
IMPORT CM_Get_Res_Des_Data_Ex, 20
IMPORT CM_Get_Res_Des_Data_Size, 12
IMPORT CM_Get_Res_Des_Data_Size_Ex, 16
IMPORT CM_Get_Resource_Conflict_Count, 8
IMPORT CM_Get_Resource_Conflict_DetailsA, 12
IMPORT CM_Get_Resource_Conflict_DetailsW, 12
IMPORT CM_Get_Sibling, 12
IMPORT CM_Get_Sibling_Ex, 16
IMPORT CM_Get_Version, 0
IMPORT CM_Get_Version_Ex, 4
IMPORT CM_Intersect_Range_List, 16
IMPORT CM_Invert_Range_List, 20
IMPORT CM_Is_Dock_Station_Present, 4
IMPORT CM_Is_Dock_Station_Present_Ex, 8
IMPORT CM_Is_Version_Available, 4
IMPORT CM_Is_Version_Available_Ex, 8
IMPORT CM_Locate_DevNodeA, 12
IMPORT CM_Locate_DevNodeW, 12
IMPORT CM_Locate_DevNode_ExA, 16
IMPORT CM_Locate_DevNode_ExW, 16
IMPORT CM_Merge_Range_List, 16
IMPORT CM_Modify_Res_Des, 24
IMPORT CM_Modify_Res_Des_Ex, 28
IMPORT CM_Move_DevNode, 12
IMPORT CM_Move_DevNode_Ex, 16
IMPORT CM_Next_Range, 16
IMPORT CM_Open_Class_KeyA, 24
IMPORT CM_Open_Class_KeyW, 24
IMPORT CM_Open_Class_Key_ExA, 28
IMPORT CM_Open_Class_Key_ExW, 28
IMPORT CM_Open_DevNode_Key, 24
IMPORT CM_Open_DevNode_Key_Ex, 28
IMPORT CM_Query_And_Remove_SubTreeA, 20
IMPORT CM_Query_And_Remove_SubTreeW, 20
IMPORT CM_Query_And_Remove_SubTree_ExA, 24
IMPORT CM_Query_And_Remove_SubTree_ExW, 24
IMPORT CM_Query_Arbitrator_Free_Data, 20
IMPORT CM_Query_Arbitrator_Free_Data_Ex, 24
IMPORT CM_Query_Arbitrator_Free_Size, 16
IMPORT CM_Query_Arbitrator_Free_Size_Ex, 20
IMPORT CM_Query_Remove_SubTree, 8
IMPORT CM_Query_Remove_SubTree_Ex, 12
IMPORT CM_Query_Resource_Conflict_List, 28
IMPORT CM_Reenumerate_DevNode, 8
IMPORT CM_Reenumerate_DevNode_Ex, 12
IMPORT CM_Register_Device_Driver, 8
IMPORT CM_Register_Device_Driver_Ex, 12
IMPORT CM_Register_Device_InterfaceA, 24
IMPORT CM_Register_Device_InterfaceW, 24
IMPORT CM_Register_Device_Interface_ExA, 28
IMPORT CM_Register_Device_Interface_ExW, 28
IMPORT CM_Remove_SubTree, 8
IMPORT CM_Remove_SubTree_Ex, 12
IMPORT CM_Request_Device_EjectA, 20
IMPORT CM_Request_Device_EjectW, 20
IMPORT CM_Request_Device_Eject_ExA, 24
IMPORT CM_Request_Device_Eject_ExW, 24
IMPORT CM_Request_Eject_PC, 0
IMPORT CM_Request_Eject_PC_Ex, 4
IMPORT CM_Run_Detection, 4
IMPORT CM_Run_Detection_Ex, 8
IMPORT CM_Set_Class_Registry_PropertyA, 24
IMPORT CM_Set_Class_Registry_PropertyW, 24
IMPORT CM_Set_DevNode_Problem, 12
IMPORT CM_Set_DevNode_Problem_Ex, 16
IMPORT CM_Set_DevNode_Registry_PropertyA, 20
IMPORT CM_Set_DevNode_Registry_PropertyW, 20
IMPORT CM_Set_DevNode_Registry_Property_ExA, 24
IMPORT CM_Set_DevNode_Registry_Property_ExW, 24
IMPORT CM_Set_HW_Prof, 8
IMPORT CM_Set_HW_Prof_Ex, 12
IMPORT CM_Set_HW_Prof_FlagsA, 16
IMPORT CM_Set_HW_Prof_FlagsW, 16
IMPORT CM_Set_HW_Prof_Flags_ExA, 20
IMPORT CM_Set_HW_Prof_Flags_ExW, 20
IMPORT CM_Setup_DevNode, 8
IMPORT CM_Setup_DevNode_Ex, 12
IMPORT CM_Test_Range_Available, 24
IMPORT CM_Uninstall_DevNode, 8
IMPORT CM_Uninstall_DevNode_Ex, 12
IMPORT CM_Unregister_Device_InterfaceA, 8
IMPORT CM_Unregister_Device_InterfaceW, 8
IMPORT CM_Unregister_Device_Interface_ExA, 12
IMPORT CM_Unregister_Device_Interface_ExW, 12
IMPORT ExtensionPropSheetPageProc, 12
IMPORT InstallHinfSectionA, 16
IMPORT InstallHinfSectionW, 16
IMPORT SetupAddInstallSectionToDiskSpaceListA, 24
IMPORT SetupAddInstallSectionToDiskSpaceListW, 24
IMPORT SetupAddSectionToDiskSpaceListA, 28
IMPORT SetupAddSectionToDiskSpaceListW, 28
IMPORT SetupAddToDiskSpaceListA, 28
IMPORT SetupAddToDiskSpaceListW, 28
IMPORT SetupAddToSourceListA, 8
IMPORT SetupAddToSourceListW, 8
IMPORT SetupAdjustDiskSpaceListA, 24
IMPORT SetupAdjustDiskSpaceListW, 24
IMPORT SetupBackupErrorA, 24
IMPORT SetupBackupErrorW, 24
IMPORT SetupCancelTemporarySourceList, 0
IMPORT SetupCloseFileQueue, 4
IMPORT SetupCloseInfFile, 4
IMPORT SetupCloseLog, 0
IMPORT SetupCommitFileQueueA, 16
IMPORT SetupCommitFileQueueW, 16
IMPORT SetupConfigureWmiFromInfSectionA, 12
IMPORT SetupConfigureWmiFromInfSectionW, 12
IMPORT SetupCopyErrorA, 44
IMPORT SetupCopyErrorW, 44
IMPORT SetupCopyOEMInfA, 32
IMPORT SetupCopyOEMInfW, 32
IMPORT SetupCreateDiskSpaceListA, 12
IMPORT SetupCreateDiskSpaceListW, 12
IMPORT SetupDecompressOrCopyFileA, 12
IMPORT SetupDecompressOrCopyFileW, 12
IMPORT SetupDefaultQueueCallbackA, 16
IMPORT SetupDefaultQueueCallbackW, 16
IMPORT SetupDeleteErrorA, 20
IMPORT SetupDeleteErrorW, 20
IMPORT SetupDestroyDiskSpaceList, 4
IMPORT SetupDiAskForOEMDisk, 8
IMPORT SetupDiBuildClassInfoList, 16
IMPORT SetupDiBuildClassInfoListExA, 24
IMPORT SetupDiBuildClassInfoListExW, 24
IMPORT SetupDiBuildDriverInfoList, 12
IMPORT SetupDiCallClassInstaller, 12
IMPORT SetupDiCancelDriverInfoSearch, 4
IMPORT SetupDiChangeState, 8
IMPORT SetupDiClassGuidsFromNameA, 16
IMPORT SetupDiClassGuidsFromNameExA, 24
IMPORT SetupDiClassGuidsFromNameExW, 24
IMPORT SetupDiClassGuidsFromNameW, 16
IMPORT SetupDiClassNameFromGuidA, 16
IMPORT SetupDiClassNameFromGuidExA, 24
IMPORT SetupDiClassNameFromGuidExW, 24
IMPORT SetupDiClassNameFromGuidW, 16
IMPORT SetupDiCreateDevRegKeyA, 28
IMPORT SetupDiCreateDevRegKeyW, 28
IMPORT SetupDiCreateDeviceInfoA, 28
IMPORT SetupDiCreateDeviceInfoList, 8
IMPORT SetupDiCreateDeviceInfoListExA, 16
IMPORT SetupDiCreateDeviceInfoListExW, 16
IMPORT SetupDiCreateDeviceInfoW, 28
IMPORT SetupDiCreateDeviceInterfaceA, 24
IMPORT SetupDiCreateDeviceInterfaceRegKeyA, 24
IMPORT SetupDiCreateDeviceInterfaceRegKeyW, 24
IMPORT SetupDiCreateDeviceInterfaceW, 24
IMPORT SetupDiDeleteDevRegKey, 20
IMPORT SetupDiDeleteDeviceInfo, 8
IMPORT SetupDiDeleteDeviceInterfaceData, 8
IMPORT SetupDiDeleteDeviceInterfaceRegKey, 12
IMPORT SetupDiDestroyClassImageList, 4
IMPORT SetupDiDestroyDeviceInfoList, 4
IMPORT SetupDiDestroyDriverInfoList, 12
IMPORT SetupDiDrawMiniIcon, 28
IMPORT SetupDiEnumDeviceInfo, 12
IMPORT SetupDiEnumDeviceInterfaces, 20
IMPORT SetupDiEnumDriverInfoA, 20
IMPORT SetupDiEnumDriverInfoW, 20
IMPORT SetupDiGetActualModelsSectionA, 24
IMPORT SetupDiGetActualModelsSectionW, 24
IMPORT SetupDiGetActualSectionToInstallA, 24
IMPORT SetupDiGetActualSectionToInstallExA, 32
IMPORT SetupDiGetActualSectionToInstallExW, 32
IMPORT SetupDiGetActualSectionToInstallW, 24
IMPORT SetupDiGetClassBitmapIndex, 8
IMPORT SetupDiGetClassDescriptionA, 16
IMPORT SetupDiGetClassDescriptionExA, 24
IMPORT SetupDiGetClassDescriptionExW, 24
IMPORT SetupDiGetClassDescriptionW, 16
IMPORT SetupDiGetClassDevPropertySheetsA, 24
IMPORT SetupDiGetClassDevPropertySheetsW, 24
IMPORT SetupDiGetClassDevsA, 16
IMPORT SetupDiGetClassDevsExA, 28
IMPORT SetupDiGetClassDevsExW, 28
IMPORT SetupDiGetClassDevsW, 16
IMPORT SetupDiGetClassImageIndex, 12
IMPORT SetupDiGetClassImageList, 4
IMPORT SetupDiGetClassImageListExA, 12
IMPORT SetupDiGetClassImageListExW, 12
IMPORT SetupDiGetClassInstallParamsA, 20
IMPORT SetupDiGetClassInstallParamsW, 20
IMPORT SetupDiGetClassRegistryPropertyA, 32
IMPORT SetupDiGetClassRegistryPropertyW, 32
IMPORT SetupDiGetCustomDevicePropertyA, 32
IMPORT SetupDiGetCustomDevicePropertyW, 32
IMPORT SetupDiGetDeviceInfoListClass, 8
IMPORT SetupDiGetDeviceInfoListDetailA, 8
IMPORT SetupDiGetDeviceInfoListDetailW, 8
IMPORT SetupDiGetDeviceInstallParamsA, 12
IMPORT SetupDiGetDeviceInstallParamsW, 12
IMPORT SetupDiGetDeviceInstanceIdA, 20
IMPORT SetupDiGetDeviceInstanceIdW, 20
IMPORT SetupDiGetDeviceInterfaceAlias, 16
IMPORT SetupDiGetDeviceInterfaceDetailA, 24
IMPORT SetupDiGetDeviceInterfaceDetailW, 24
IMPORT SetupDiGetDeviceRegistryPropertyA, 28
IMPORT SetupDiGetDeviceRegistryPropertyW, 28
IMPORT SetupDiGetDriverInfoDetailA, 24
IMPORT SetupDiGetDriverInfoDetailW, 24
IMPORT SetupDiGetDriverInstallParamsA, 16
IMPORT SetupDiGetDriverInstallParamsW, 16
IMPORT SetupDiGetHwProfileFriendlyNameA, 16
IMPORT SetupDiGetHwProfileFriendlyNameExA, 24
IMPORT SetupDiGetHwProfileFriendlyNameExW, 24
IMPORT SetupDiGetHwProfileFriendlyNameW, 16
IMPORT SetupDiGetHwProfileList, 16
IMPORT SetupDiGetHwProfileListExA, 24
IMPORT SetupDiGetHwProfileListExW, 24
IMPORT SetupDiGetINFClassA, 20
IMPORT SetupDiGetINFClassW, 20
IMPORT SetupDiGetSelectedDevice, 8
IMPORT SetupDiGetSelectedDriverA, 12
IMPORT SetupDiGetSelectedDriverW, 12
IMPORT SetupDiGetWizardPage, 20
IMPORT SetupDiInstallClassA, 16
IMPORT SetupDiInstallClassExA, 28
IMPORT SetupDiInstallClassExW, 28
IMPORT SetupDiInstallClassW, 16
IMPORT SetupDiInstallDevice, 8
IMPORT SetupDiInstallDeviceInterfaces, 8
IMPORT SetupDiInstallDriverFiles, 8
IMPORT SetupDiLoadClassIcon, 12
IMPORT SetupDiMoveDuplicateDevice, 8
IMPORT SetupDiOpenClassRegKey, 8
IMPORT SetupDiOpenClassRegKeyExA, 20
IMPORT SetupDiOpenClassRegKeyExW, 20
IMPORT SetupDiOpenDevRegKey, 24
IMPORT SetupDiOpenDeviceInfoA, 20
IMPORT SetupDiOpenDeviceInfoW, 20
IMPORT SetupDiOpenDeviceInterfaceA, 16
IMPORT SetupDiOpenDeviceInterfaceRegKey, 16
IMPORT SetupDiOpenDeviceInterfaceW, 16
IMPORT SetupDiRegisterCoDeviceInstallers, 8
IMPORT SetupDiRegisterDeviceInfo, 24
IMPORT SetupDiRemoveDevice, 8
IMPORT SetupDiRemoveDeviceInterface, 8
IMPORT SetupDiRestartDevices, 8
IMPORT SetupDiSelectBestCompatDrv, 8
IMPORT SetupDiSelectDevice, 8
IMPORT SetupDiSelectOEMDrv, 12
IMPORT SetupDiSetClassInstallParamsA, 16
IMPORT SetupDiSetClassInstallParamsW, 16
IMPORT SetupDiSetClassRegistryPropertyA, 24
IMPORT SetupDiSetClassRegistryPropertyW, 24
IMPORT SetupDiSetDeviceInstallParamsA, 12
IMPORT SetupDiSetDeviceInstallParamsW, 12
IMPORT SetupDiSetDeviceInterfaceDefault, 16
IMPORT SetupDiSetDeviceRegistryPropertyA, 20
IMPORT SetupDiSetDeviceRegistryPropertyW, 20
IMPORT SetupDiSetDriverInstallParamsA, 16
IMPORT SetupDiSetDriverInstallParamsW, 16
IMPORT SetupDiSetSelectedDevice, 8
IMPORT SetupDiSetSelectedDriverA, 12
IMPORT SetupDiSetSelectedDriverW, 12
IMPORT SetupDiUnremoveDevice, 8
IMPORT SetupDuplicateDiskSpaceListA, 16
IMPORT SetupDuplicateDiskSpaceListW, 16
IMPORT SetupEnumInfSectionsA, 20
IMPORT SetupEnumInfSectionsW, 20
IMPORT SetupFindFirstLineA, 16
IMPORT SetupFindFirstLineW, 16
IMPORT SetupFindNextLine, 8
IMPORT SetupFindNextMatchLineA, 12
IMPORT SetupFindNextMatchLineW, 12
IMPORT SetupFreeSourceListA, 8
IMPORT SetupFreeSourceListW, 8
IMPORT SetupGetBackupInformationA, 8
IMPORT SetupGetBackupInformationW, 8
IMPORT SetupGetBinaryField, 20
IMPORT SetupGetFieldCount, 4
IMPORT SetupGetFileCompressionInfoA, 20
IMPORT SetupGetFileCompressionInfoExA, 28
IMPORT SetupGetFileCompressionInfoExW, 28
IMPORT SetupGetFileCompressionInfoW, 20
IMPORT SetupGetFileQueueCount, 12
IMPORT SetupGetFileQueueFlags, 8
IMPORT SetupGetInfFileListA, 20
IMPORT SetupGetInfFileListW, 20
IMPORT SetupGetInfInformationA, 20
IMPORT SetupGetInfInformationW, 20
IMPORT SetupGetInfSections, 16
IMPORT SetupGetIntField, 12
IMPORT SetupGetLineByIndexA, 16
IMPORT SetupGetLineByIndexW, 16
IMPORT SetupGetLineCountA, 8
IMPORT SetupGetLineCountW, 8
IMPORT SetupGetLineTextA, 28
IMPORT SetupGetLineTextW, 28
IMPORT SetupGetMultiSzFieldA, 20
IMPORT SetupGetMultiSzFieldW, 20
IMPORT SetupGetNonInteractiveMode, 0
IMPORT SetupGetSourceFileLocationA, 28
IMPORT SetupGetSourceFileLocationW, 28
IMPORT SetupGetSourceFileSizeA, 24
IMPORT SetupGetSourceFileSizeW, 24
IMPORT SetupGetSourceInfoA, 24
IMPORT SetupGetSourceInfoW, 24
IMPORT SetupGetStringFieldA, 20
IMPORT SetupGetStringFieldW, 20
IMPORT SetupGetTargetPathA, 24
IMPORT SetupGetTargetPathW, 24
IMPORT SetupInitDefaultQueueCallback, 4
IMPORT SetupInitDefaultQueueCallbackEx, 20
IMPORT SetupInitializeFileLogA, 8
IMPORT SetupInitializeFileLogW, 8
IMPORT SetupInstallFileA, 32
IMPORT SetupInstallFileExA, 36
IMPORT SetupInstallFileExW, 36
IMPORT SetupInstallFileW, 32
IMPORT SetupInstallFilesFromInfSectionA, 24
IMPORT SetupInstallFilesFromInfSectionW, 24
IMPORT SetupInstallFromInfSectionA, 44
IMPORT SetupInstallFromInfSectionW, 44
IMPORT SetupInstallServicesFromInfSectionA, 12
IMPORT SetupInstallServicesFromInfSectionExA, 28
IMPORT SetupInstallServicesFromInfSectionExW, 28
IMPORT SetupInstallServicesFromInfSectionW, 12
IMPORT SetupIterateCabinetA, 16
IMPORT SetupIterateCabinetW, 16
IMPORT SetupLogErrorA, 8
IMPORT SetupLogErrorW, 8
IMPORT SetupLogFileA, 36
IMPORT SetupLogFileW, 36
IMPORT SetupOpenAppendInfFileA, 12
IMPORT SetupOpenAppendInfFileW, 12
IMPORT SetupOpenFileQueue, 0
IMPORT SetupOpenInfFileA, 16
IMPORT SetupOpenInfFileW, 16
IMPORT SetupOpenLog, 4
IMPORT SetupOpenMasterInf, 0
IMPORT SetupPrepareQueueForRestoreA, 12
IMPORT SetupPrepareQueueForRestoreW, 12
IMPORT SetupPromptForDiskA, 40
IMPORT SetupPromptForDiskW, 40
IMPORT SetupPromptReboot, 12
IMPORT SetupQueryDrivesInDiskSpaceListA, 16
IMPORT SetupQueryDrivesInDiskSpaceListW, 16
IMPORT SetupQueryFileLogA, 28
IMPORT SetupQueryFileLogW, 28
IMPORT SetupQueryInfFileInformationA, 20
IMPORT SetupQueryInfFileInformationW, 20
IMPORT SetupQueryInfOriginalFileInformationA, 16
IMPORT SetupQueryInfOriginalFileInformationW, 16
IMPORT SetupQueryInfVersionInformationA, 24
IMPORT SetupQueryInfVersionInformationW, 24
IMPORT SetupQuerySourceListA, 12
IMPORT SetupQuerySourceListW, 12
IMPORT SetupQuerySpaceRequiredOnDriveA, 20
IMPORT SetupQuerySpaceRequiredOnDriveW, 20
IMPORT SetupQueueCopyA, 36
IMPORT SetupQueueCopyIndirectA, 4
IMPORT SetupQueueCopyIndirectW, 4
IMPORT SetupQueueCopySectionA, 24
IMPORT SetupQueueCopySectionW, 24
IMPORT SetupQueueCopyW, 36
IMPORT SetupQueueDefaultCopyA, 24
IMPORT SetupQueueDefaultCopyW, 24
IMPORT SetupQueueDeleteA, 12
IMPORT SetupQueueDeleteSectionA, 16
IMPORT SetupQueueDeleteSectionW, 16
IMPORT SetupQueueDeleteW, 12
IMPORT SetupQueueRenameA, 20
IMPORT SetupQueueRenameSectionA, 16
IMPORT SetupQueueRenameSectionW, 16
IMPORT SetupQueueRenameW, 20
IMPORT SetupRemoveFileLogEntryA, 12
IMPORT SetupRemoveFileLogEntryW, 12
IMPORT SetupRemoveFromDiskSpaceListA, 20
IMPORT SetupRemoveFromDiskSpaceListW, 20
IMPORT SetupRemoveFromSourceListA, 8
IMPORT SetupRemoveFromSourceListW, 8
IMPORT SetupRemoveInstallSectionFromDiskSpaceListA, 24
IMPORT SetupRemoveInstallSectionFromDiskSpaceListW, 24
IMPORT SetupRemoveSectionFromDiskSpaceListA, 28
IMPORT SetupRemoveSectionFromDiskSpaceListW, 28
IMPORT SetupRenameErrorA, 24
IMPORT SetupRenameErrorW, 24
IMPORT SetupScanFileQueueA, 24
IMPORT SetupScanFileQueueW, 24
IMPORT SetupSetDirectoryIdA, 12
IMPORT SetupSetDirectoryIdExA, 24
IMPORT SetupSetDirectoryIdExW, 24
IMPORT SetupSetDirectoryIdW, 12
IMPORT SetupSetFileQueueAlternatePlatformA, 12
IMPORT SetupSetFileQueueAlternatePlatformW, 12
IMPORT SetupSetFileQueueFlags, 12
IMPORT SetupSetNonInteractiveMode, 4
IMPORT SetupSetPlatformPathOverrideA, 4
IMPORT SetupSetPlatformPathOverrideW, 4
IMPORT SetupSetSourceListA, 12
IMPORT SetupSetSourceListW, 12
IMPORT SetupTermDefaultQueueCallback, 4
IMPORT SetupTerminateFileLog, 4
IMPORT SetupUninstallNewlyCopiedInfs, 12
IMPORT SetupUninstallOEMInfA, 12
IMPORT SetupUninstallOEMInfW, 12
IMPORT SetupVerifyInfFileA, 12
IMPORT SetupVerifyInfFileW, 12

%ifdef UNICODE

%define CM_Add_ID CM_Add_IDW
%define CM_Add_ID_Ex CM_Add_ID_ExW
%define CM_Connect_Machine CM_Connect_MachineW
%define CM_Create_DevNode CM_Create_DevNodeW
%define CM_Create_DevNode_Ex CM_Create_DevNode_ExW
%define CM_Enumerate_Enumerators CM_Enumerate_EnumeratorsW
%define CM_Enumerate_Enumerators_Ex CM_Enumerate_Enumerators_ExW
%define CM_Get_Class_Key_Name CM_Get_Class_Key_NameW
%define CM_Get_Class_Key_Name_Ex CM_Get_Class_Key_Name_ExW
%define CM_Get_Class_Name CM_Get_Class_NameW
%define CM_Get_Class_Name_Ex CM_Get_Class_Name_ExW
%define CM_Get_Class_Registry_Property CM_Get_Class_Registry_PropertyW
%define CM_Get_DevNode_Custom_Property CM_Get_DevNode_Custom_PropertyW
%define CM_Get_DevNode_Custom_Property_Ex CM_Get_DevNode_Custom_Property_ExW
%define CM_Get_DevNode_Registry_Property CM_Get_DevNode_Registry_PropertyW
%define CM_Get_DevNode_Registry_Property_Ex CM_Get_DevNode_Registry_Property_ExW
%define CM_Get_Device_ID CM_Get_Device_IDW
%define CM_Get_Device_ID_Ex CM_Get_Device_ID_ExW
%define CM_Get_Device_ID_List CM_Get_Device_ID_ListW
%define CM_Get_Device_ID_List_Ex CM_Get_Device_ID_List_ExW
%define CM_Get_Device_ID_List_Size CM_Get_Device_ID_List_SizeW
%define CM_Get_Device_ID_List_Size_Ex CM_Get_Device_ID_List_Size_ExW
%define CM_Get_Device_Interface_Alias CM_Get_Device_Interface_AliasW
%define CM_Get_Device_Interface_Alias_Ex CM_Get_Device_Interface_Alias_ExW
%define CM_Get_Device_Interface_List CM_Get_Device_Interface_ListW
%define CM_Get_Device_Interface_List_Ex CM_Get_Device_Interface_List_ExW
%define CM_Get_Device_Interface_List_Size CM_Get_Device_Interface_List_SizeW
%define CM_Get_Device_Interface_List_Size_Ex CM_Get_Device_Interface_List_Size_ExW
%define CM_Get_HW_Prof_Flags CM_Get_HW_Prof_FlagsW
%define CM_Get_HW_Prof_Flags_Ex CM_Get_HW_Prof_Flags_ExW
%define CM_Get_Hardware_Profile_Info CM_Get_Hardware_Profile_InfoW
%define CM_Get_Hardware_Profile_Info_Ex CM_Get_Hardware_Profile_Info_ExW
%define CM_Get_Resource_Conflict_Details CM_Get_Resource_Conflict_DetailsW
%define CM_Locate_DevNode CM_Locate_DevNodeW
%define CM_Locate_DevNode_Ex CM_Locate_DevNode_ExW
%define CM_Open_Class_Key CM_Open_Class_KeyW
%define CM_Open_Class_Key_Ex CM_Open_Class_Key_ExW
%define CM_Query_And_Remove_SubTree CM_Query_And_Remove_SubTreeW
%define CM_Query_And_Remove_SubTree_Ex CM_Query_And_Remove_SubTree_ExW
%define CM_Register_Device_Interface CM_Register_Device_InterfaceW
%define CM_Register_Device_Interface_Ex CM_Register_Device_Interface_ExW
%define CM_Request_Device_Eject CM_Request_Device_EjectW
%define CM_Request_Device_Eject_Ex CM_Request_Device_Eject_ExW
%define CM_Set_Class_Registry_Property CM_Set_Class_Registry_PropertyW
%define CM_Set_DevNode_Registry_Property CM_Set_DevNode_Registry_PropertyW
%define CM_Set_DevNode_Registry_Property_Ex CM_Set_DevNode_Registry_Property_ExW
%define CM_Set_HW_Prof_Flags CM_Set_HW_Prof_FlagsW
%define CM_Set_HW_Prof_Flags_Ex CM_Set_HW_Prof_Flags_ExW
%define CM_Unregister_Device_Interface CM_Unregister_Device_InterfaceW
%define CM_Unregister_Device_Interface_Ex CM_Unregister_Device_Interface_ExW
%define InstallHinfSection InstallHinfSectionW
%define SetupAddInstallSectionToDiskSpaceList SetupAddInstallSectionToDiskSpaceListW
%define SetupAddSectionToDiskSpaceList SetupAddSectionToDiskSpaceListW
%define SetupAddToDiskSpaceList SetupAddToDiskSpaceListW
%define SetupAddToSourceList SetupAddToSourceListW
%define SetupAdjustDiskSpaceList SetupAdjustDiskSpaceListW
%define SetupBackupError SetupBackupErrorW
%define SetupCommitFileQueue SetupCommitFileQueueW
%define SetupConfigureWmiFromInfSection SetupConfigureWmiFromInfSectionW
%define SetupCopyError SetupCopyErrorW
%define SetupCopyOEMInf SetupCopyOEMInfW
%define SetupCreateDiskSpaceList SetupCreateDiskSpaceListW
%define SetupDecompressOrCopyFile SetupDecompressOrCopyFileW
%define SetupDefaultQueueCallback SetupDefaultQueueCallbackW
%define SetupDeleteError SetupDeleteErrorW
%define SetupDiBuildClassInfoListEx SetupDiBuildClassInfoListExW
%define SetupDiClassGuidsFromName SetupDiClassGuidsFromNameW
%define SetupDiClassGuidsFromNameEx SetupDiClassGuidsFromNameExW
%define SetupDiClassNameFromGuid SetupDiClassNameFromGuidW
%define SetupDiClassNameFromGuidEx SetupDiClassNameFromGuidExW
%define SetupDiCreateDevRegKey SetupDiCreateDevRegKeyW
%define SetupDiCreateDeviceInfo SetupDiCreateDeviceInfoW
%define SetupDiCreateDeviceInfoListEx SetupDiCreateDeviceInfoListExW
%define SetupDiCreateDeviceInterface SetupDiCreateDeviceInterfaceW
%define SetupDiCreateDeviceInterfaceRegKey SetupDiCreateDeviceInterfaceRegKeyW
%define SetupDiEnumDriverInfo SetupDiEnumDriverInfoW
%define SetupDiGetActualModelsSection SetupDiGetActualModelsSectionW
%define SetupDiGetActualSectionToInstall SetupDiGetActualSectionToInstallW
%define SetupDiGetActualSectionToInstallEx SetupDiGetActualSectionToInstallExW
%define SetupDiGetClassDescription SetupDiGetClassDescriptionW
%define SetupDiGetClassDescriptionEx SetupDiGetClassDescriptionExW
%define SetupDiGetClassDevPropertySheets SetupDiGetClassDevPropertySheetsW
%define SetupDiGetClassDevs SetupDiGetClassDevsW
%define SetupDiGetClassDevsEx SetupDiGetClassDevsExW
%define SetupDiGetClassImageListEx SetupDiGetClassImageListExW
%define SetupDiGetClassInstallParams SetupDiGetClassInstallParamsW
%define SetupDiGetClassRegistryProperty SetupDiGetClassRegistryPropertyW
%define SetupDiGetCustomDeviceProperty SetupDiGetCustomDevicePropertyW
%define SetupDiGetDeviceInfoListDetail SetupDiGetDeviceInfoListDetailW
%define SetupDiGetDeviceInstallParams SetupDiGetDeviceInstallParamsW
%define SetupDiGetDeviceInstanceId SetupDiGetDeviceInstanceIdW
%define SetupDiGetDeviceInterfaceDetail SetupDiGetDeviceInterfaceDetailW
%define SetupDiGetDeviceRegistryProperty SetupDiGetDeviceRegistryPropertyW
%define SetupDiGetDriverInfoDetail SetupDiGetDriverInfoDetailW
%define SetupDiGetDriverInstallParams SetupDiGetDriverInstallParamsW
%define SetupDiGetHwProfileFriendlyName SetupDiGetHwProfileFriendlyNameW
%define SetupDiGetHwProfileFriendlyNameEx SetupDiGetHwProfileFriendlyNameExW
%define SetupDiGetHwProfileListEx SetupDiGetHwProfileListExW
%define SetupDiGetINFClass SetupDiGetINFClassW
%define SetupDiGetSelectedDriver SetupDiGetSelectedDriverW
%define SetupDiInstallClass SetupDiInstallClassW
%define SetupDiInstallClassEx SetupDiInstallClassExW
%define SetupDiOpenClassRegKeyEx SetupDiOpenClassRegKeyExW
%define SetupDiOpenDeviceInfo SetupDiOpenDeviceInfoW
%define SetupDiOpenDeviceInterface SetupDiOpenDeviceInterfaceW
%define SetupDiSetClassInstallParams SetupDiSetClassInstallParamsW
%define SetupDiSetClassRegistryProperty SetupDiSetClassRegistryPropertyW
%define SetupDiSetDeviceInstallParams SetupDiSetDeviceInstallParamsW
%define SetupDiSetDeviceRegistryProperty SetupDiSetDeviceRegistryPropertyW
%define SetupDiSetDriverInstallParams SetupDiSetDriverInstallParamsW
%define SetupDiSetSelectedDriver SetupDiSetSelectedDriverW
%define SetupDuplicateDiskSpaceList SetupDuplicateDiskSpaceListW
%define SetupEnumInfSections SetupEnumInfSectionsW
%define SetupFindFirstLine SetupFindFirstLineW
%define SetupFindNextMatchLine SetupFindNextMatchLineW
%define SetupFreeSourceList SetupFreeSourceListW
%define SetupGetBackupInformation SetupGetBackupInformationW
%define SetupGetFileCompressionInfo SetupGetFileCompressionInfoW
%define SetupGetFileCompressionInfoEx SetupGetFileCompressionInfoExW
%define SetupGetInfFileList SetupGetInfFileListW
%define SetupGetInfInformation SetupGetInfInformationW
%define SetupGetLineByIndex SetupGetLineByIndexW
%define SetupGetLineCount SetupGetLineCountW
%define SetupGetLineText SetupGetLineTextW
%define SetupGetMultiSzField SetupGetMultiSzFieldW
%define SetupGetSourceFileLocation SetupGetSourceFileLocationW
%define SetupGetSourceFileSize SetupGetSourceFileSizeW
%define SetupGetSourceInfo SetupGetSourceInfoW
%define SetupGetStringField SetupGetStringFieldW
%define SetupGetTargetPath SetupGetTargetPathW
%define SetupInitializeFileLog SetupInitializeFileLogW
%define SetupInstallFile SetupInstallFileW
%define SetupInstallFileEx SetupInstallFileExW
%define SetupInstallFilesFromInfSection SetupInstallFilesFromInfSectionW
%define SetupInstallFromInfSection SetupInstallFromInfSectionW
%define SetupInstallServicesFromInfSection SetupInstallServicesFromInfSectionW
%define SetupInstallServicesFromInfSectionEx SetupInstallServicesFromInfSectionExW
%define SetupIterateCabinet SetupIterateCabinetW
%define SetupLogError SetupLogErrorW
%define SetupLogFile SetupLogFileW
%define SetupOpenAppendInfFile SetupOpenAppendInfFileW
%define SetupOpenInfFile SetupOpenInfFileW
%define SetupPrepareQueueForRestore SetupPrepareQueueForRestoreW
%define SetupPromptForDisk SetupPromptForDiskW
%define SetupQueryDrivesInDiskSpaceList SetupQueryDrivesInDiskSpaceListW
%define SetupQueryFileLog SetupQueryFileLogW
%define SetupQueryInfFileInformation SetupQueryInfFileInformationW
%define SetupQueryInfOriginalFileInformation SetupQueryInfOriginalFileInformationW
%define SetupQueryInfVersionInformation SetupQueryInfVersionInformationW
%define SetupQuerySourceList SetupQuerySourceListW
%define SetupQuerySpaceRequiredOnDrive SetupQuerySpaceRequiredOnDriveW
%define SetupQueueCopy SetupQueueCopyW
%define SetupQueueCopyIndirect SetupQueueCopyIndirectW
%define SetupQueueCopySection SetupQueueCopySectionW
%define SetupQueueDefaultCopy SetupQueueDefaultCopyW
%define SetupQueueDelete SetupQueueDeleteW
%define SetupQueueDeleteSection SetupQueueDeleteSectionW
%define SetupQueueRename SetupQueueRenameW
%define SetupQueueRenameSection SetupQueueRenameSectionW
%define SetupRemoveFileLogEntry SetupRemoveFileLogEntryW
%define SetupRemoveFromDiskSpaceList SetupRemoveFromDiskSpaceListW
%define SetupRemoveFromSourceList SetupRemoveFromSourceListW
%define SetupRemoveInstallSectionFromDiskSpaceList SetupRemoveInstallSectionFromDiskSpaceListW
%define SetupRemoveSectionFromDiskSpaceList SetupRemoveSectionFromDiskSpaceListW
%define SetupRenameError SetupRenameErrorW
%define SetupScanFileQueue SetupScanFileQueueW
%define SetupSetDirectoryId SetupSetDirectoryIdW
%define SetupSetDirectoryIdEx SetupSetDirectoryIdExW
%define SetupSetFileQueueAlternatePlatform SetupSetFileQueueAlternatePlatformW
%define SetupSetPlatformPathOverride SetupSetPlatformPathOverrideW
%define SetupSetSourceList SetupSetSourceListW
%define SetupUninstallOEMInf SetupUninstallOEMInfW
%define SetupVerifyInfFile SetupVerifyInfFileW

%else  ;// ANSI

%define CM_Add_ID CM_Add_IDA
%define CM_Add_ID_Ex CM_Add_ID_ExA
%define CM_Connect_Machine CM_Connect_MachineA
%define CM_Create_DevNode CM_Create_DevNodeA
%define CM_Create_DevNode_Ex CM_Create_DevNode_ExA
%define CM_Enumerate_Enumerators CM_Enumerate_EnumeratorsA
%define CM_Enumerate_Enumerators_Ex CM_Enumerate_Enumerators_ExA
%define CM_Get_Class_Key_Name CM_Get_Class_Key_NameA
%define CM_Get_Class_Key_Name_Ex CM_Get_Class_Key_Name_ExA
%define CM_Get_Class_Name CM_Get_Class_NameA
%define CM_Get_Class_Name_Ex CM_Get_Class_Name_ExA
%define CM_Get_Class_Registry_Property CM_Get_Class_Registry_PropertyA
%define CM_Get_DevNode_Custom_Property CM_Get_DevNode_Custom_PropertyA
%define CM_Get_DevNode_Custom_Property_Ex CM_Get_DevNode_Custom_Property_ExA
%define CM_Get_DevNode_Registry_Property CM_Get_DevNode_Registry_PropertyA
%define CM_Get_DevNode_Registry_Property_Ex CM_Get_DevNode_Registry_Property_ExA
%define CM_Get_Device_ID CM_Get_Device_IDA
%define CM_Get_Device_ID_Ex CM_Get_Device_ID_ExA
%define CM_Get_Device_ID_List CM_Get_Device_ID_ListA
%define CM_Get_Device_ID_List_Ex CM_Get_Device_ID_List_ExA
%define CM_Get_Device_ID_List_Size CM_Get_Device_ID_List_SizeA
%define CM_Get_Device_ID_List_Size_Ex CM_Get_Device_ID_List_Size_ExA
%define CM_Get_Device_Interface_Alias CM_Get_Device_Interface_AliasA
%define CM_Get_Device_Interface_Alias_Ex CM_Get_Device_Interface_Alias_ExA
%define CM_Get_Device_Interface_List CM_Get_Device_Interface_ListA
%define CM_Get_Device_Interface_List_Ex CM_Get_Device_Interface_List_ExA
%define CM_Get_Device_Interface_List_Size CM_Get_Device_Interface_List_SizeA
%define CM_Get_Device_Interface_List_Size_Ex CM_Get_Device_Interface_List_Size_ExA
%define CM_Get_HW_Prof_Flags CM_Get_HW_Prof_FlagsA
%define CM_Get_HW_Prof_Flags_Ex CM_Get_HW_Prof_Flags_ExA
%define CM_Get_Hardware_Profile_Info CM_Get_Hardware_Profile_InfoA
%define CM_Get_Hardware_Profile_Info_Ex CM_Get_Hardware_Profile_Info_ExA
%define CM_Get_Resource_Conflict_Details CM_Get_Resource_Conflict_DetailsA
%define CM_Locate_DevNode CM_Locate_DevNodeA
%define CM_Locate_DevNode_Ex CM_Locate_DevNode_ExA
%define CM_Open_Class_Key CM_Open_Class_KeyA
%define CM_Open_Class_Key_Ex CM_Open_Class_Key_ExA
%define CM_Query_And_Remove_SubTree CM_Query_And_Remove_SubTreeA
%define CM_Query_And_Remove_SubTree_Ex CM_Query_And_Remove_SubTree_ExA
%define CM_Register_Device_Interface CM_Register_Device_InterfaceA
%define CM_Register_Device_Interface_Ex CM_Register_Device_Interface_ExA
%define CM_Request_Device_Eject CM_Request_Device_EjectA
%define CM_Request_Device_Eject_Ex CM_Request_Device_Eject_ExA
%define CM_Set_Class_Registry_Property CM_Set_Class_Registry_PropertyA
%define CM_Set_DevNode_Registry_Property CM_Set_DevNode_Registry_PropertyA
%define CM_Set_DevNode_Registry_Property_Ex CM_Set_DevNode_Registry_Property_ExA
%define CM_Set_HW_Prof_Flags CM_Set_HW_Prof_FlagsA
%define CM_Set_HW_Prof_Flags_Ex CM_Set_HW_Prof_Flags_ExA
%define CM_Unregister_Device_Interface CM_Unregister_Device_InterfaceA
%define CM_Unregister_Device_Interface_Ex CM_Unregister_Device_Interface_ExA
%define InstallHinfSection InstallHinfSectionA
%define SetupAddInstallSectionToDiskSpaceList SetupAddInstallSectionToDiskSpaceListA
%define SetupAddSectionToDiskSpaceList SetupAddSectionToDiskSpaceListA
%define SetupAddToDiskSpaceList SetupAddToDiskSpaceListA
%define SetupAddToSourceList SetupAddToSourceListA
%define SetupAdjustDiskSpaceList SetupAdjustDiskSpaceListA
%define SetupBackupError SetupBackupErrorA
%define SetupCommitFileQueue SetupCommitFileQueueA
%define SetupConfigureWmiFromInfSection SetupConfigureWmiFromInfSectionA
%define SetupCopyError SetupCopyErrorA
%define SetupCopyOEMInf SetupCopyOEMInfA
%define SetupCreateDiskSpaceList SetupCreateDiskSpaceListA
%define SetupDecompressOrCopyFile SetupDecompressOrCopyFileA
%define SetupDefaultQueueCallback SetupDefaultQueueCallbackA
%define SetupDeleteError SetupDeleteErrorA
%define SetupDiBuildClassInfoListEx SetupDiBuildClassInfoListExA
%define SetupDiClassGuidsFromName SetupDiClassGuidsFromNameA
%define SetupDiClassGuidsFromNameEx SetupDiClassGuidsFromNameExA
%define SetupDiClassNameFromGuid SetupDiClassNameFromGuidA
%define SetupDiClassNameFromGuidEx SetupDiClassNameFromGuidExA
%define SetupDiCreateDevRegKey SetupDiCreateDevRegKeyA
%define SetupDiCreateDeviceInfo SetupDiCreateDeviceInfoA
%define SetupDiCreateDeviceInfoListEx SetupDiCreateDeviceInfoListExA
%define SetupDiCreateDeviceInterface SetupDiCreateDeviceInterfaceA
%define SetupDiCreateDeviceInterfaceRegKey SetupDiCreateDeviceInterfaceRegKeyA
%define SetupDiEnumDriverInfo SetupDiEnumDriverInfoA
%define SetupDiGetActualModelsSection SetupDiGetActualModelsSectionA
%define SetupDiGetActualSectionToInstall SetupDiGetActualSectionToInstallA
%define SetupDiGetActualSectionToInstallEx SetupDiGetActualSectionToInstallExA
%define SetupDiGetClassDescription SetupDiGetClassDescriptionA
%define SetupDiGetClassDescriptionEx SetupDiGetClassDescriptionExA
%define SetupDiGetClassDevPropertySheets SetupDiGetClassDevPropertySheetsA
%define SetupDiGetClassDevs SetupDiGetClassDevsA
%define SetupDiGetClassDevsEx SetupDiGetClassDevsExA
%define SetupDiGetClassImageListEx SetupDiGetClassImageListExA
%define SetupDiGetClassInstallParams SetupDiGetClassInstallParamsA
%define SetupDiGetClassRegistryProperty SetupDiGetClassRegistryPropertyA
%define SetupDiGetCustomDeviceProperty SetupDiGetCustomDevicePropertyA
%define SetupDiGetDeviceInfoListDetail SetupDiGetDeviceInfoListDetailA
%define SetupDiGetDeviceInstallParams SetupDiGetDeviceInstallParamsA
%define SetupDiGetDeviceInstanceId SetupDiGetDeviceInstanceIdA
%define SetupDiGetDeviceInterfaceDetail SetupDiGetDeviceInterfaceDetailA
%define SetupDiGetDeviceRegistryProperty SetupDiGetDeviceRegistryPropertyA
%define SetupDiGetDriverInfoDetail SetupDiGetDriverInfoDetailA
%define SetupDiGetDriverInstallParams SetupDiGetDriverInstallParamsA
%define SetupDiGetHwProfileFriendlyName SetupDiGetHwProfileFriendlyNameA
%define SetupDiGetHwProfileFriendlyNameEx SetupDiGetHwProfileFriendlyNameExA
%define SetupDiGetHwProfileListEx SetupDiGetHwProfileListExA
%define SetupDiGetINFClass SetupDiGetINFClassA
%define SetupDiGetSelectedDriver SetupDiGetSelectedDriverA
%define SetupDiInstallClass SetupDiInstallClassA
%define SetupDiInstallClassEx SetupDiInstallClassExA
%define SetupDiOpenClassRegKeyEx SetupDiOpenClassRegKeyExA
%define SetupDiOpenDeviceInfo SetupDiOpenDeviceInfoA
%define SetupDiOpenDeviceInterface SetupDiOpenDeviceInterfaceA
%define SetupDiSetClassInstallParams SetupDiSetClassInstallParamsA
%define SetupDiSetClassRegistryProperty SetupDiSetClassRegistryPropertyA
%define SetupDiSetDeviceInstallParams SetupDiSetDeviceInstallParamsA
%define SetupDiSetDeviceRegistryProperty SetupDiSetDeviceRegistryPropertyA
%define SetupDiSetDriverInstallParams SetupDiSetDriverInstallParamsA
%define SetupDiSetSelectedDriver SetupDiSetSelectedDriverA
%define SetupDuplicateDiskSpaceList SetupDuplicateDiskSpaceListA
%define SetupEnumInfSections SetupEnumInfSectionsA
%define SetupFindFirstLine SetupFindFirstLineA
%define SetupFindNextMatchLine SetupFindNextMatchLineA
%define SetupFreeSourceList SetupFreeSourceListA
%define SetupGetBackupInformation SetupGetBackupInformationA
%define SetupGetFileCompressionInfo SetupGetFileCompressionInfoA
%define SetupGetFileCompressionInfoEx SetupGetFileCompressionInfoExA
%define SetupGetInfFileList SetupGetInfFileListA
%define SetupGetInfInformation SetupGetInfInformationA
%define SetupGetLineByIndex SetupGetLineByIndexA
%define SetupGetLineCount SetupGetLineCountA
%define SetupGetLineText SetupGetLineTextA
%define SetupGetMultiSzField SetupGetMultiSzFieldA
%define SetupGetSourceFileLocation SetupGetSourceFileLocationA
%define SetupGetSourceFileSize SetupGetSourceFileSizeA
%define SetupGetSourceInfo SetupGetSourceInfoA
%define SetupGetStringField SetupGetStringFieldA
%define SetupGetTargetPath SetupGetTargetPathA
%define SetupInitializeFileLog SetupInitializeFileLogA
%define SetupInstallFile SetupInstallFileA
%define SetupInstallFileEx SetupInstallFileExA
%define SetupInstallFilesFromInfSection SetupInstallFilesFromInfSectionA
%define SetupInstallFromInfSection SetupInstallFromInfSectionA
%define SetupInstallServicesFromInfSection SetupInstallServicesFromInfSectionA
%define SetupInstallServicesFromInfSectionEx SetupInstallServicesFromInfSectionExA
%define SetupIterateCabinet SetupIterateCabinetA
%define SetupLogError SetupLogErrorA
%define SetupLogFile SetupLogFileA
%define SetupOpenAppendInfFile SetupOpenAppendInfFileA
%define SetupOpenInfFile SetupOpenInfFileA
%define SetupPrepareQueueForRestore SetupPrepareQueueForRestoreA
%define SetupPromptForDisk SetupPromptForDiskA
%define SetupQueryDrivesInDiskSpaceList SetupQueryDrivesInDiskSpaceListA
%define SetupQueryFileLog SetupQueryFileLogA
%define SetupQueryInfFileInformation SetupQueryInfFileInformationA
%define SetupQueryInfOriginalFileInformation SetupQueryInfOriginalFileInformationA
%define SetupQueryInfVersionInformation SetupQueryInfVersionInformationA
%define SetupQuerySourceList SetupQuerySourceListA
%define SetupQuerySpaceRequiredOnDrive SetupQuerySpaceRequiredOnDriveA
%define SetupQueueCopy SetupQueueCopyA
%define SetupQueueCopyIndirect SetupQueueCopyIndirectA
%define SetupQueueCopySection SetupQueueCopySectionA
%define SetupQueueDefaultCopy SetupQueueDefaultCopyA
%define SetupQueueDelete SetupQueueDeleteA
%define SetupQueueDeleteSection SetupQueueDeleteSectionA
%define SetupQueueRename SetupQueueRenameA
%define SetupQueueRenameSection SetupQueueRenameSectionA
%define SetupRemoveFileLogEntry SetupRemoveFileLogEntryA
%define SetupRemoveFromDiskSpaceList SetupRemoveFromDiskSpaceListA
%define SetupRemoveFromSourceList SetupRemoveFromSourceListA
%define SetupRemoveInstallSectionFromDiskSpaceList SetupRemoveInstallSectionFromDiskSpaceListA
%define SetupRemoveSectionFromDiskSpaceList SetupRemoveSectionFromDiskSpaceListA
%define SetupRenameError SetupRenameErrorA
%define SetupScanFileQueue SetupScanFileQueueA
%define SetupSetDirectoryId SetupSetDirectoryIdA
%define SetupSetDirectoryIdEx SetupSetDirectoryIdExA
%define SetupSetFileQueueAlternatePlatform SetupSetFileQueueAlternatePlatformA
%define SetupSetPlatformPathOverride SetupSetPlatformPathOverrideA
%define SetupSetSourceList SetupSetSourceListA
%define SetupUninstallOEMInf SetupUninstallOEMInfA
%define SetupVerifyInfFile SetupVerifyInfFileA

%endif  ;// UNICODE

%endif  ;// __NASMX_SETUPAPI_INC__