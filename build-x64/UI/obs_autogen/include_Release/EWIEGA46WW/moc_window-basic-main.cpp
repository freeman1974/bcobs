/****************************************************************************
** Meta object code from reading C++ file 'window-basic-main.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "window-basic-main.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-main.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OBSBasic_t {
    QByteArrayData data[295];
    char stringdata0[5932];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasic_t qt_meta_stringdata_OBSBasic = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OBSBasic"
QT_MOC_LITERAL(1, 9, 14), // "DeferSaveBegin"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "DeferSaveEnd"
QT_MOC_LITERAL(4, 38, 14), // "StartStreaming"
QT_MOC_LITERAL(5, 53, 13), // "StopStreaming"
QT_MOC_LITERAL(6, 67, 18), // "ForceStopStreaming"
QT_MOC_LITERAL(7, 86, 19), // "StreamDelayStarting"
QT_MOC_LITERAL(8, 106, 3), // "sec"
QT_MOC_LITERAL(9, 110, 19), // "StreamDelayStopping"
QT_MOC_LITERAL(10, 130, 14), // "StreamingStart"
QT_MOC_LITERAL(11, 145, 14), // "StreamStopping"
QT_MOC_LITERAL(12, 160, 13), // "StreamingStop"
QT_MOC_LITERAL(13, 174, 9), // "errorcode"
QT_MOC_LITERAL(14, 184, 10), // "last_error"
QT_MOC_LITERAL(15, 195, 14), // "StartRecording"
QT_MOC_LITERAL(16, 210, 13), // "StopRecording"
QT_MOC_LITERAL(17, 224, 14), // "RecordingStart"
QT_MOC_LITERAL(18, 239, 14), // "RecordStopping"
QT_MOC_LITERAL(19, 254, 13), // "RecordingStop"
QT_MOC_LITERAL(20, 268, 4), // "code"
QT_MOC_LITERAL(21, 273, 28), // "ShowReplayBufferPauseWarning"
QT_MOC_LITERAL(22, 302, 17), // "StartReplayBuffer"
QT_MOC_LITERAL(23, 320, 16), // "StopReplayBuffer"
QT_MOC_LITERAL(24, 337, 17), // "ReplayBufferStart"
QT_MOC_LITERAL(25, 355, 16), // "ReplayBufferSave"
QT_MOC_LITERAL(26, 372, 20), // "ReplayBufferStopping"
QT_MOC_LITERAL(27, 393, 16), // "ReplayBufferStop"
QT_MOC_LITERAL(28, 410, 19), // "SaveProjectDeferred"
QT_MOC_LITERAL(29, 430, 11), // "SaveProject"
QT_MOC_LITERAL(30, 442, 13), // "SetTransition"
QT_MOC_LITERAL(31, 456, 9), // "OBSSource"
QT_MOC_LITERAL(32, 466, 10), // "transition"
QT_MOC_LITERAL(33, 477, 18), // "OverrideTransition"
QT_MOC_LITERAL(34, 496, 17), // "TransitionToScene"
QT_MOC_LITERAL(35, 514, 8), // "OBSScene"
QT_MOC_LITERAL(36, 523, 5), // "scene"
QT_MOC_LITERAL(37, 529, 5), // "force"
QT_MOC_LITERAL(38, 535, 15), // "quickTransition"
QT_MOC_LITERAL(39, 551, 13), // "quickDuration"
QT_MOC_LITERAL(40, 565, 5), // "black"
QT_MOC_LITERAL(41, 571, 6), // "manual"
QT_MOC_LITERAL(42, 578, 15), // "SetCurrentScene"
QT_MOC_LITERAL(43, 594, 18), // "AddSceneCollection"
QT_MOC_LITERAL(44, 613, 10), // "create_new"
QT_MOC_LITERAL(45, 624, 4), // "name"
QT_MOC_LITERAL(46, 629, 16), // "UpdatePatronJson"
QT_MOC_LITERAL(47, 646, 4), // "text"
QT_MOC_LITERAL(48, 651, 5), // "error"
QT_MOC_LITERAL(49, 657, 14), // "PauseRecording"
QT_MOC_LITERAL(50, 672, 16), // "UnpauseRecording"
QT_MOC_LITERAL(51, 689, 12), // "AddSceneItem"
QT_MOC_LITERAL(52, 702, 12), // "OBSSceneItem"
QT_MOC_LITERAL(53, 715, 4), // "item"
QT_MOC_LITERAL(54, 720, 8), // "AddScene"
QT_MOC_LITERAL(55, 729, 6), // "source"
QT_MOC_LITERAL(56, 736, 11), // "RemoveScene"
QT_MOC_LITERAL(57, 748, 13), // "RenameSources"
QT_MOC_LITERAL(58, 762, 7), // "newName"
QT_MOC_LITERAL(59, 770, 8), // "prevName"
QT_MOC_LITERAL(60, 779, 15), // "SelectSceneItem"
QT_MOC_LITERAL(61, 795, 6), // "select"
QT_MOC_LITERAL(62, 802, 19), // "ActivateAudioSource"
QT_MOC_LITERAL(63, 822, 21), // "DeactivateAudioSource"
QT_MOC_LITERAL(64, 844, 22), // "DuplicateSelectedScene"
QT_MOC_LITERAL(65, 867, 19), // "RemoveSelectedScene"
QT_MOC_LITERAL(66, 887, 23), // "RemoveSelectedSceneItem"
QT_MOC_LITERAL(67, 911, 17), // "ToggleAlwaysOnTop"
QT_MOC_LITERAL(68, 929, 14), // "ReorderSources"
QT_MOC_LITERAL(69, 944, 14), // "RefreshSources"
QT_MOC_LITERAL(70, 959, 13), // "ProcessHotkey"
QT_MOC_LITERAL(71, 973, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(72, 987, 2), // "id"
QT_MOC_LITERAL(73, 990, 7), // "pressed"
QT_MOC_LITERAL(74, 998, 13), // "AddTransition"
QT_MOC_LITERAL(75, 1012, 16), // "RenameTransition"
QT_MOC_LITERAL(76, 1029, 17), // "TransitionClicked"
QT_MOC_LITERAL(77, 1047, 17), // "TransitionStopped"
QT_MOC_LITERAL(78, 1065, 22), // "TransitionFullyStopped"
QT_MOC_LITERAL(79, 1088, 22), // "TriggerQuickTransition"
QT_MOC_LITERAL(80, 1111, 20), // "SetDeinterlacingMode"
QT_MOC_LITERAL(81, 1132, 21), // "SetDeinterlacingOrder"
QT_MOC_LITERAL(82, 1154, 14), // "SetScaleFilter"
QT_MOC_LITERAL(83, 1169, 13), // "IconActivated"
QT_MOC_LITERAL(84, 1183, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(85, 1217, 6), // "reason"
QT_MOC_LITERAL(86, 1224, 10), // "SetShowing"
QT_MOC_LITERAL(87, 1235, 7), // "showing"
QT_MOC_LITERAL(88, 1243, 14), // "ToggleShowHide"
QT_MOC_LITERAL(89, 1258, 16), // "HideAudioControl"
QT_MOC_LITERAL(90, 1275, 22), // "UnhideAllAudioControls"
QT_MOC_LITERAL(91, 1298, 15), // "ToggleHideMixer"
QT_MOC_LITERAL(92, 1314, 17), // "MixerRenameSource"
QT_MOC_LITERAL(93, 1332, 46), // "on_vMixerScrollArea_customCon..."
QT_MOC_LITERAL(94, 1379, 46), // "on_hMixerScrollArea_customCon..."
QT_MOC_LITERAL(95, 1426, 29), // "on_actionCopySource_triggered"
QT_MOC_LITERAL(96, 1456, 27), // "on_actionPasteRef_triggered"
QT_MOC_LITERAL(97, 1484, 27), // "on_actionPasteDup_triggered"
QT_MOC_LITERAL(98, 1512, 30), // "on_actionCopyFilters_triggered"
QT_MOC_LITERAL(99, 1543, 31), // "on_actionPasteFilters_triggered"
QT_MOC_LITERAL(100, 1575, 11), // "ColorChange"
QT_MOC_LITERAL(101, 1587, 26), // "GetItemWidgetFromSceneItem"
QT_MOC_LITERAL(102, 1614, 15), // "SourceTreeItem*"
QT_MOC_LITERAL(103, 1630, 16), // "obs_sceneitem_t*"
QT_MOC_LITERAL(104, 1647, 9), // "sceneItem"
QT_MOC_LITERAL(105, 1657, 28), // "on_actionShowAbout_triggered"
QT_MOC_LITERAL(106, 1686, 21), // "AudioMixerCopyFilters"
QT_MOC_LITERAL(107, 1708, 22), // "AudioMixerPasteFilters"
QT_MOC_LITERAL(108, 1731, 13), // "EnablePreview"
QT_MOC_LITERAL(109, 1745, 14), // "DisablePreview"
QT_MOC_LITERAL(110, 1760, 16), // "SceneCopyFilters"
QT_MOC_LITERAL(111, 1777, 17), // "ScenePasteFilters"
QT_MOC_LITERAL(112, 1795, 23), // "CheckDiskSpaceRemaining"
QT_MOC_LITERAL(113, 1819, 18), // "OpenSavedProjector"
QT_MOC_LITERAL(114, 1838, 19), // "SavedProjectorInfo*"
QT_MOC_LITERAL(115, 1858, 4), // "info"
QT_MOC_LITERAL(116, 1863, 15), // "ScenesReordered"
QT_MOC_LITERAL(117, 1879, 11), // "QModelIndex"
QT_MOC_LITERAL(118, 1891, 6), // "parent"
QT_MOC_LITERAL(119, 1898, 5), // "start"
QT_MOC_LITERAL(120, 1904, 3), // "end"
QT_MOC_LITERAL(121, 1908, 11), // "destination"
QT_MOC_LITERAL(122, 1920, 3), // "row"
QT_MOC_LITERAL(123, 1924, 16), // "ResetStatsHotkey"
QT_MOC_LITERAL(124, 1941, 12), // "SetImageIcon"
QT_MOC_LITERAL(125, 1954, 4), // "icon"
QT_MOC_LITERAL(126, 1959, 12), // "SetColorIcon"
QT_MOC_LITERAL(127, 1972, 16), // "SetSlideshowIcon"
QT_MOC_LITERAL(128, 1989, 17), // "SetAudioInputIcon"
QT_MOC_LITERAL(129, 2007, 18), // "SetAudioOutputIcon"
QT_MOC_LITERAL(130, 2026, 17), // "SetDesktopCapIcon"
QT_MOC_LITERAL(131, 2044, 16), // "SetWindowCapIcon"
QT_MOC_LITERAL(132, 2061, 14), // "SetGameCapIcon"
QT_MOC_LITERAL(133, 2076, 13), // "SetCameraIcon"
QT_MOC_LITERAL(134, 2090, 11), // "SetTextIcon"
QT_MOC_LITERAL(135, 2102, 12), // "SetMediaIcon"
QT_MOC_LITERAL(136, 2115, 14), // "SetBrowserIcon"
QT_MOC_LITERAL(137, 2130, 12), // "SetGroupIcon"
QT_MOC_LITERAL(138, 2143, 12), // "SetSceneIcon"
QT_MOC_LITERAL(139, 2156, 14), // "SetDefaultIcon"
QT_MOC_LITERAL(140, 2171, 11), // "TBarChanged"
QT_MOC_LITERAL(141, 2183, 5), // "value"
QT_MOC_LITERAL(142, 2189, 12), // "TBarReleased"
QT_MOC_LITERAL(143, 2202, 17), // "LockVolumeControl"
QT_MOC_LITERAL(144, 2220, 4), // "lock"
QT_MOC_LITERAL(145, 2225, 38), // "on_actionFullscreenInterface_..."
QT_MOC_LITERAL(146, 2264, 34), // "on_actionShow_Recordings_trig..."
QT_MOC_LITERAL(147, 2299, 24), // "on_actionRemux_triggered"
QT_MOC_LITERAL(148, 2324, 28), // "on_action_Settings_triggered"
QT_MOC_LITERAL(149, 2353, 37), // "on_actionAdvAudioProperties_t..."
QT_MOC_LITERAL(150, 2391, 24), // "on_advAudioProps_clicked"
QT_MOC_LITERAL(151, 2416, 26), // "on_advAudioProps_destroyed"
QT_MOC_LITERAL(152, 2443, 27), // "on_actionShowLogs_triggered"
QT_MOC_LITERAL(153, 2471, 35), // "on_actionUploadCurrentLog_tri..."
QT_MOC_LITERAL(154, 2507, 32), // "on_actionUploadLastLog_triggered"
QT_MOC_LITERAL(155, 2540, 33), // "on_actionViewCurrentLog_trigg..."
QT_MOC_LITERAL(156, 2574, 34), // "on_actionCheckForUpdates_trig..."
QT_MOC_LITERAL(157, 2609, 32), // "on_actionShowCrashLogs_triggered"
QT_MOC_LITERAL(158, 2642, 37), // "on_actionUploadLastCrashLog_t..."
QT_MOC_LITERAL(159, 2680, 32), // "on_actionEditTransform_triggered"
QT_MOC_LITERAL(160, 2713, 32), // "on_actionCopyTransform_triggered"
QT_MOC_LITERAL(161, 2746, 33), // "on_actionPasteTransform_trigg..."
QT_MOC_LITERAL(162, 2780, 29), // "on_actionRotate90CW_triggered"
QT_MOC_LITERAL(163, 2810, 30), // "on_actionRotate90CCW_triggered"
QT_MOC_LITERAL(164, 2841, 28), // "on_actionRotate180_triggered"
QT_MOC_LITERAL(165, 2870, 33), // "on_actionFlipHorizontal_trigg..."
QT_MOC_LITERAL(166, 2904, 31), // "on_actionFlipVertical_triggered"
QT_MOC_LITERAL(167, 2936, 30), // "on_actionFitToScreen_triggered"
QT_MOC_LITERAL(168, 2967, 34), // "on_actionStretchToScreen_trig..."
QT_MOC_LITERAL(169, 3002, 33), // "on_actionCenterToScreen_trigg..."
QT_MOC_LITERAL(170, 3036, 33), // "on_actionVerticalCenter_trigg..."
QT_MOC_LITERAL(171, 3070, 35), // "on_actionHorizontalCenter_tri..."
QT_MOC_LITERAL(172, 3106, 29), // "on_customContextMenuRequested"
QT_MOC_LITERAL(173, 3136, 3), // "pos"
QT_MOC_LITERAL(174, 3140, 28), // "on_scenes_currentItemChanged"
QT_MOC_LITERAL(175, 3169, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(176, 3186, 7), // "current"
QT_MOC_LITERAL(177, 3194, 4), // "prev"
QT_MOC_LITERAL(178, 3199, 36), // "on_scenes_customContextMenuRe..."
QT_MOC_LITERAL(179, 3236, 27), // "on_actionGridMode_triggered"
QT_MOC_LITERAL(180, 3264, 27), // "on_actionAddScene_triggered"
QT_MOC_LITERAL(181, 3292, 30), // "on_actionRemoveScene_triggered"
QT_MOC_LITERAL(182, 3323, 26), // "on_actionSceneUp_triggered"
QT_MOC_LITERAL(183, 3350, 28), // "on_actionSceneDown_triggered"
QT_MOC_LITERAL(184, 3379, 37), // "on_sources_customContextMenuR..."
QT_MOC_LITERAL(185, 3417, 27), // "on_scenes_itemDoubleClicked"
QT_MOC_LITERAL(186, 3445, 28), // "on_actionAddSource_triggered"
QT_MOC_LITERAL(187, 3474, 31), // "on_actionRemoveSource_triggered"
QT_MOC_LITERAL(188, 3506, 27), // "on_actionInteract_triggered"
QT_MOC_LITERAL(189, 3534, 35), // "on_actionSourceProperties_tri..."
QT_MOC_LITERAL(190, 3570, 27), // "on_actionSourceUp_triggered"
QT_MOC_LITERAL(191, 3598, 29), // "on_actionSourceDown_triggered"
QT_MOC_LITERAL(192, 3628, 25), // "on_actionMoveUp_triggered"
QT_MOC_LITERAL(193, 3654, 27), // "on_actionMoveDown_triggered"
QT_MOC_LITERAL(194, 3682, 28), // "on_actionMoveToTop_triggered"
QT_MOC_LITERAL(195, 3711, 31), // "on_actionMoveToBottom_triggered"
QT_MOC_LITERAL(196, 3743, 30), // "on_actionLockPreview_triggered"
QT_MOC_LITERAL(197, 3774, 26), // "on_scalingMenu_aboutToShow"
QT_MOC_LITERAL(198, 3801, 30), // "on_actionScaleWindow_triggered"
QT_MOC_LITERAL(199, 3832, 30), // "on_actionScaleCanvas_triggered"
QT_MOC_LITERAL(200, 3863, 30), // "on_actionScaleOutput_triggered"
QT_MOC_LITERAL(201, 3894, 23), // "on_streamButton_clicked"
QT_MOC_LITERAL(202, 3918, 23), // "on_recordButton_clicked"
QT_MOC_LITERAL(203, 3942, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(204, 3968, 29), // "on_actionHelpPortal_triggered"
QT_MOC_LITERAL(205, 3998, 26), // "on_actionWebsite_triggered"
QT_MOC_LITERAL(206, 4025, 26), // "on_actionDiscord_triggered"
QT_MOC_LITERAL(207, 4052, 37), // "on_preview_customContextMenuR..."
QT_MOC_LITERAL(208, 4090, 37), // "on_program_customContextMenuR..."
QT_MOC_LITERAL(209, 4128, 19), // "PreviewDisabledMenu"
QT_MOC_LITERAL(210, 4148, 37), // "on_actionNewSceneCollection_t..."
QT_MOC_LITERAL(211, 4186, 37), // "on_actionDupSceneCollection_t..."
QT_MOC_LITERAL(212, 4224, 40), // "on_actionRenameSceneCollectio..."
QT_MOC_LITERAL(213, 4265, 40), // "on_actionRemoveSceneCollectio..."
QT_MOC_LITERAL(214, 4306, 40), // "on_actionImportSceneCollectio..."
QT_MOC_LITERAL(215, 4347, 40), // "on_actionExportSceneCollectio..."
QT_MOC_LITERAL(216, 4388, 29), // "on_actionNewProfile_triggered"
QT_MOC_LITERAL(217, 4418, 29), // "on_actionDupProfile_triggered"
QT_MOC_LITERAL(218, 4448, 32), // "on_actionRenameProfile_triggered"
QT_MOC_LITERAL(219, 4481, 32), // "on_actionRemoveProfile_triggered"
QT_MOC_LITERAL(220, 4514, 32), // "on_actionImportProfile_triggered"
QT_MOC_LITERAL(221, 4547, 32), // "on_actionExportProfile_triggered"
QT_MOC_LITERAL(222, 4580, 37), // "on_actionShowSettingsFolder_t..."
QT_MOC_LITERAL(223, 4618, 36), // "on_actionShowProfileFolder_tr..."
QT_MOC_LITERAL(224, 4655, 30), // "on_actionAlwaysOnTop_triggered"
QT_MOC_LITERAL(225, 4686, 32), // "on_toggleListboxToolbars_toggled"
QT_MOC_LITERAL(226, 4719, 7), // "visible"
QT_MOC_LITERAL(227, 4727, 26), // "on_toggleStatusBar_toggled"
QT_MOC_LITERAL(228, 4754, 28), // "on_toggleSourceIcons_toggled"
QT_MOC_LITERAL(229, 4783, 34), // "on_transitions_currentIndexCh..."
QT_MOC_LITERAL(230, 4818, 5), // "index"
QT_MOC_LITERAL(231, 4824, 24), // "on_transitionAdd_clicked"
QT_MOC_LITERAL(232, 4849, 27), // "on_transitionRemove_clicked"
QT_MOC_LITERAL(233, 4877, 26), // "on_transitionProps_clicked"
QT_MOC_LITERAL(234, 4904, 34), // "on_transitionDuration_valueCh..."
QT_MOC_LITERAL(235, 4939, 21), // "on_modeSwitch_clicked"
QT_MOC_LITERAL(236, 4961, 26), // "on_autoConfigure_triggered"
QT_MOC_LITERAL(237, 4988, 18), // "on_stats_triggered"
QT_MOC_LITERAL(238, 5007, 20), // "on_resetUI_triggered"
QT_MOC_LITERAL(239, 5028, 17), // "on_lockUI_toggled"
QT_MOC_LITERAL(240, 5046, 12), // "PauseToggled"
QT_MOC_LITERAL(241, 5059, 17), // "logUploadFinished"
QT_MOC_LITERAL(242, 5077, 19), // "updateCheckFinished"
QT_MOC_LITERAL(243, 5097, 19), // "AddSourceFromAction"
QT_MOC_LITERAL(244, 5117, 14), // "MoveSceneToTop"
QT_MOC_LITERAL(245, 5132, 17), // "MoveSceneToBottom"
QT_MOC_LITERAL(246, 5150, 13), // "EditSceneName"
QT_MOC_LITERAL(247, 5164, 17), // "EditSceneItemName"
QT_MOC_LITERAL(248, 5182, 15), // "SceneNameEdited"
QT_MOC_LITERAL(249, 5198, 8), // "QWidget*"
QT_MOC_LITERAL(250, 5207, 6), // "editor"
QT_MOC_LITERAL(251, 5214, 34), // "QAbstractItemDelegate::EndEdi..."
QT_MOC_LITERAL(252, 5249, 7), // "endHint"
QT_MOC_LITERAL(253, 5257, 16), // "OpenSceneFilters"
QT_MOC_LITERAL(254, 5274, 11), // "OpenFilters"
QT_MOC_LITERAL(255, 5286, 20), // "EnablePreviewDisplay"
QT_MOC_LITERAL(256, 5307, 6), // "enable"
QT_MOC_LITERAL(257, 5314, 13), // "TogglePreview"
QT_MOC_LITERAL(258, 5328, 7), // "NudgeUp"
QT_MOC_LITERAL(259, 5336, 9), // "NudgeDown"
QT_MOC_LITERAL(260, 5346, 9), // "NudgeLeft"
QT_MOC_LITERAL(261, 5356, 10), // "NudgeRight"
QT_MOC_LITERAL(262, 5367, 26), // "OpenStudioProgramProjector"
QT_MOC_LITERAL(263, 5394, 20), // "OpenPreviewProjector"
QT_MOC_LITERAL(264, 5415, 19), // "OpenSourceProjector"
QT_MOC_LITERAL(265, 5435, 22), // "OpenMultiviewProjector"
QT_MOC_LITERAL(266, 5458, 18), // "OpenSceneProjector"
QT_MOC_LITERAL(267, 5477, 23), // "OpenStudioProgramWindow"
QT_MOC_LITERAL(268, 5501, 17), // "OpenPreviewWindow"
QT_MOC_LITERAL(269, 5519, 16), // "OpenSourceWindow"
QT_MOC_LITERAL(270, 5536, 19), // "OpenMultiviewWindow"
QT_MOC_LITERAL(271, 5556, 15), // "OpenSceneWindow"
QT_MOC_LITERAL(272, 5572, 19), // "DeferredSysTrayLoad"
QT_MOC_LITERAL(273, 5592, 12), // "requeueCount"
QT_MOC_LITERAL(274, 5605, 36), // "StackedMixerAreaContextMenuRe..."
QT_MOC_LITERAL(275, 5642, 24), // "ResizeOutputSizeOfSource"
QT_MOC_LITERAL(276, 5667, 33), // "on_actionResetTransform_trigg..."
QT_MOC_LITERAL(277, 5701, 15), // "StreamingActive"
QT_MOC_LITERAL(278, 5717, 15), // "RecordingActive"
QT_MOC_LITERAL(279, 5733, 18), // "ReplayBufferActive"
QT_MOC_LITERAL(280, 5752, 9), // "imageIcon"
QT_MOC_LITERAL(281, 5762, 9), // "colorIcon"
QT_MOC_LITERAL(282, 5772, 13), // "slideshowIcon"
QT_MOC_LITERAL(283, 5786, 14), // "audioInputIcon"
QT_MOC_LITERAL(284, 5801, 15), // "audioOutputIcon"
QT_MOC_LITERAL(285, 5817, 14), // "desktopCapIcon"
QT_MOC_LITERAL(286, 5832, 13), // "windowCapIcon"
QT_MOC_LITERAL(287, 5846, 11), // "gameCapIcon"
QT_MOC_LITERAL(288, 5858, 10), // "cameraIcon"
QT_MOC_LITERAL(289, 5869, 8), // "textIcon"
QT_MOC_LITERAL(290, 5878, 9), // "mediaIcon"
QT_MOC_LITERAL(291, 5888, 11), // "browserIcon"
QT_MOC_LITERAL(292, 5900, 9), // "groupIcon"
QT_MOC_LITERAL(293, 5910, 9), // "sceneIcon"
QT_MOC_LITERAL(294, 5920, 11) // "defaultIcon"

    },
    "OBSBasic\0DeferSaveBegin\0\0DeferSaveEnd\0"
    "StartStreaming\0StopStreaming\0"
    "ForceStopStreaming\0StreamDelayStarting\0"
    "sec\0StreamDelayStopping\0StreamingStart\0"
    "StreamStopping\0StreamingStop\0errorcode\0"
    "last_error\0StartRecording\0StopRecording\0"
    "RecordingStart\0RecordStopping\0"
    "RecordingStop\0code\0ShowReplayBufferPauseWarning\0"
    "StartReplayBuffer\0StopReplayBuffer\0"
    "ReplayBufferStart\0ReplayBufferSave\0"
    "ReplayBufferStopping\0ReplayBufferStop\0"
    "SaveProjectDeferred\0SaveProject\0"
    "SetTransition\0OBSSource\0transition\0"
    "OverrideTransition\0TransitionToScene\0"
    "OBSScene\0scene\0force\0quickTransition\0"
    "quickDuration\0black\0manual\0SetCurrentScene\0"
    "AddSceneCollection\0create_new\0name\0"
    "UpdatePatronJson\0text\0error\0PauseRecording\0"
    "UnpauseRecording\0AddSceneItem\0"
    "OBSSceneItem\0item\0AddScene\0source\0"
    "RemoveScene\0RenameSources\0newName\0"
    "prevName\0SelectSceneItem\0select\0"
    "ActivateAudioSource\0DeactivateAudioSource\0"
    "DuplicateSelectedScene\0RemoveSelectedScene\0"
    "RemoveSelectedSceneItem\0ToggleAlwaysOnTop\0"
    "ReorderSources\0RefreshSources\0"
    "ProcessHotkey\0obs_hotkey_id\0id\0pressed\0"
    "AddTransition\0RenameTransition\0"
    "TransitionClicked\0TransitionStopped\0"
    "TransitionFullyStopped\0TriggerQuickTransition\0"
    "SetDeinterlacingMode\0SetDeinterlacingOrder\0"
    "SetScaleFilter\0IconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0SetShowing\0showing\0ToggleShowHide\0"
    "HideAudioControl\0UnhideAllAudioControls\0"
    "ToggleHideMixer\0MixerRenameSource\0"
    "on_vMixerScrollArea_customContextMenuRequested\0"
    "on_hMixerScrollArea_customContextMenuRequested\0"
    "on_actionCopySource_triggered\0"
    "on_actionPasteRef_triggered\0"
    "on_actionPasteDup_triggered\0"
    "on_actionCopyFilters_triggered\0"
    "on_actionPasteFilters_triggered\0"
    "ColorChange\0GetItemWidgetFromSceneItem\0"
    "SourceTreeItem*\0obs_sceneitem_t*\0"
    "sceneItem\0on_actionShowAbout_triggered\0"
    "AudioMixerCopyFilters\0AudioMixerPasteFilters\0"
    "EnablePreview\0DisablePreview\0"
    "SceneCopyFilters\0ScenePasteFilters\0"
    "CheckDiskSpaceRemaining\0OpenSavedProjector\0"
    "SavedProjectorInfo*\0info\0ScenesReordered\0"
    "QModelIndex\0parent\0start\0end\0destination\0"
    "row\0ResetStatsHotkey\0SetImageIcon\0"
    "icon\0SetColorIcon\0SetSlideshowIcon\0"
    "SetAudioInputIcon\0SetAudioOutputIcon\0"
    "SetDesktopCapIcon\0SetWindowCapIcon\0"
    "SetGameCapIcon\0SetCameraIcon\0SetTextIcon\0"
    "SetMediaIcon\0SetBrowserIcon\0SetGroupIcon\0"
    "SetSceneIcon\0SetDefaultIcon\0TBarChanged\0"
    "value\0TBarReleased\0LockVolumeControl\0"
    "lock\0on_actionFullscreenInterface_triggered\0"
    "on_actionShow_Recordings_triggered\0"
    "on_actionRemux_triggered\0"
    "on_action_Settings_triggered\0"
    "on_actionAdvAudioProperties_triggered\0"
    "on_advAudioProps_clicked\0"
    "on_advAudioProps_destroyed\0"
    "on_actionShowLogs_triggered\0"
    "on_actionUploadCurrentLog_triggered\0"
    "on_actionUploadLastLog_triggered\0"
    "on_actionViewCurrentLog_triggered\0"
    "on_actionCheckForUpdates_triggered\0"
    "on_actionShowCrashLogs_triggered\0"
    "on_actionUploadLastCrashLog_triggered\0"
    "on_actionEditTransform_triggered\0"
    "on_actionCopyTransform_triggered\0"
    "on_actionPasteTransform_triggered\0"
    "on_actionRotate90CW_triggered\0"
    "on_actionRotate90CCW_triggered\0"
    "on_actionRotate180_triggered\0"
    "on_actionFlipHorizontal_triggered\0"
    "on_actionFlipVertical_triggered\0"
    "on_actionFitToScreen_triggered\0"
    "on_actionStretchToScreen_triggered\0"
    "on_actionCenterToScreen_triggered\0"
    "on_actionVerticalCenter_triggered\0"
    "on_actionHorizontalCenter_triggered\0"
    "on_customContextMenuRequested\0pos\0"
    "on_scenes_currentItemChanged\0"
    "QListWidgetItem*\0current\0prev\0"
    "on_scenes_customContextMenuRequested\0"
    "on_actionGridMode_triggered\0"
    "on_actionAddScene_triggered\0"
    "on_actionRemoveScene_triggered\0"
    "on_actionSceneUp_triggered\0"
    "on_actionSceneDown_triggered\0"
    "on_sources_customContextMenuRequested\0"
    "on_scenes_itemDoubleClicked\0"
    "on_actionAddSource_triggered\0"
    "on_actionRemoveSource_triggered\0"
    "on_actionInteract_triggered\0"
    "on_actionSourceProperties_triggered\0"
    "on_actionSourceUp_triggered\0"
    "on_actionSourceDown_triggered\0"
    "on_actionMoveUp_triggered\0"
    "on_actionMoveDown_triggered\0"
    "on_actionMoveToTop_triggered\0"
    "on_actionMoveToBottom_triggered\0"
    "on_actionLockPreview_triggered\0"
    "on_scalingMenu_aboutToShow\0"
    "on_actionScaleWindow_triggered\0"
    "on_actionScaleCanvas_triggered\0"
    "on_actionScaleOutput_triggered\0"
    "on_streamButton_clicked\0on_recordButton_clicked\0"
    "on_settingsButton_clicked\0"
    "on_actionHelpPortal_triggered\0"
    "on_actionWebsite_triggered\0"
    "on_actionDiscord_triggered\0"
    "on_preview_customContextMenuRequested\0"
    "on_program_customContextMenuRequested\0"
    "PreviewDisabledMenu\0"
    "on_actionNewSceneCollection_triggered\0"
    "on_actionDupSceneCollection_triggered\0"
    "on_actionRenameSceneCollection_triggered\0"
    "on_actionRemoveSceneCollection_triggered\0"
    "on_actionImportSceneCollection_triggered\0"
    "on_actionExportSceneCollection_triggered\0"
    "on_actionNewProfile_triggered\0"
    "on_actionDupProfile_triggered\0"
    "on_actionRenameProfile_triggered\0"
    "on_actionRemoveProfile_triggered\0"
    "on_actionImportProfile_triggered\0"
    "on_actionExportProfile_triggered\0"
    "on_actionShowSettingsFolder_triggered\0"
    "on_actionShowProfileFolder_triggered\0"
    "on_actionAlwaysOnTop_triggered\0"
    "on_toggleListboxToolbars_toggled\0"
    "visible\0on_toggleStatusBar_toggled\0"
    "on_toggleSourceIcons_toggled\0"
    "on_transitions_currentIndexChanged\0"
    "index\0on_transitionAdd_clicked\0"
    "on_transitionRemove_clicked\0"
    "on_transitionProps_clicked\0"
    "on_transitionDuration_valueChanged\0"
    "on_modeSwitch_clicked\0on_autoConfigure_triggered\0"
    "on_stats_triggered\0on_resetUI_triggered\0"
    "on_lockUI_toggled\0PauseToggled\0"
    "logUploadFinished\0updateCheckFinished\0"
    "AddSourceFromAction\0MoveSceneToTop\0"
    "MoveSceneToBottom\0EditSceneName\0"
    "EditSceneItemName\0SceneNameEdited\0"
    "QWidget*\0editor\0QAbstractItemDelegate::EndEditHint\0"
    "endHint\0OpenSceneFilters\0OpenFilters\0"
    "EnablePreviewDisplay\0enable\0TogglePreview\0"
    "NudgeUp\0NudgeDown\0NudgeLeft\0NudgeRight\0"
    "OpenStudioProgramProjector\0"
    "OpenPreviewProjector\0OpenSourceProjector\0"
    "OpenMultiviewProjector\0OpenSceneProjector\0"
    "OpenStudioProgramWindow\0OpenPreviewWindow\0"
    "OpenSourceWindow\0OpenMultiviewWindow\0"
    "OpenSceneWindow\0DeferredSysTrayLoad\0"
    "requeueCount\0StackedMixerAreaContextMenuRequested\0"
    "ResizeOutputSizeOfSource\0"
    "on_actionResetTransform_triggered\0"
    "StreamingActive\0RecordingActive\0"
    "ReplayBufferActive\0imageIcon\0colorIcon\0"
    "slideshowIcon\0audioInputIcon\0"
    "audioOutputIcon\0desktopCapIcon\0"
    "windowCapIcon\0gameCapIcon\0cameraIcon\0"
    "textIcon\0mediaIcon\0browserIcon\0groupIcon\0"
    "sceneIcon\0defaultIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasic[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     232,   14, // methods
      15, 1614, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0, 1174,    2, 0x0a /* Public */,
       3,    0, 1175,    2, 0x0a /* Public */,
       4,    0, 1176,    2, 0x0a /* Public */,
       5,    0, 1177,    2, 0x0a /* Public */,
       6,    0, 1178,    2, 0x0a /* Public */,
       7,    1, 1179,    2, 0x0a /* Public */,
       9,    1, 1182,    2, 0x0a /* Public */,
      10,    0, 1185,    2, 0x0a /* Public */,
      11,    0, 1186,    2, 0x0a /* Public */,
      12,    2, 1187,    2, 0x0a /* Public */,
      15,    0, 1192,    2, 0x0a /* Public */,
      16,    0, 1193,    2, 0x0a /* Public */,
      17,    0, 1194,    2, 0x0a /* Public */,
      18,    0, 1195,    2, 0x0a /* Public */,
      19,    2, 1196,    2, 0x0a /* Public */,
      21,    0, 1201,    2, 0x0a /* Public */,
      22,    0, 1202,    2, 0x0a /* Public */,
      23,    0, 1203,    2, 0x0a /* Public */,
      24,    0, 1204,    2, 0x0a /* Public */,
      25,    0, 1205,    2, 0x0a /* Public */,
      26,    0, 1206,    2, 0x0a /* Public */,
      27,    1, 1207,    2, 0x0a /* Public */,
      28,    0, 1210,    2, 0x0a /* Public */,
      29,    0, 1211,    2, 0x0a /* Public */,
      30,    1, 1212,    2, 0x0a /* Public */,
      33,    1, 1215,    2, 0x0a /* Public */,
      34,    2, 1218,    2, 0x0a /* Public */,
      34,    1, 1223,    2, 0x2a /* Public | MethodCloned */,
      34,    6, 1226,    2, 0x0a /* Public */,
      34,    5, 1239,    2, 0x2a /* Public | MethodCloned */,
      34,    4, 1250,    2, 0x2a /* Public | MethodCloned */,
      34,    3, 1259,    2, 0x2a /* Public | MethodCloned */,
      34,    2, 1266,    2, 0x2a /* Public | MethodCloned */,
      34,    1, 1271,    2, 0x2a /* Public | MethodCloned */,
      42,    2, 1274,    2, 0x0a /* Public */,
      42,    1, 1279,    2, 0x2a /* Public | MethodCloned */,
      43,    2, 1282,    2, 0x0a /* Public */,
      43,    1, 1287,    2, 0x2a /* Public | MethodCloned */,
      46,    2, 1290,    2, 0x0a /* Public */,
      49,    0, 1295,    2, 0x0a /* Public */,
      50,    0, 1296,    2, 0x0a /* Public */,
      51,    1, 1297,    2, 0x08 /* Private */,
      54,    1, 1300,    2, 0x08 /* Private */,
      56,    1, 1303,    2, 0x08 /* Private */,
      57,    3, 1306,    2, 0x08 /* Private */,
      60,    3, 1313,    2, 0x08 /* Private */,
      62,    1, 1320,    2, 0x08 /* Private */,
      63,    1, 1323,    2, 0x08 /* Private */,
      64,    0, 1326,    2, 0x08 /* Private */,
      65,    0, 1327,    2, 0x08 /* Private */,
      66,    0, 1328,    2, 0x08 /* Private */,
      67,    0, 1329,    2, 0x08 /* Private */,
      68,    1, 1330,    2, 0x08 /* Private */,
      69,    1, 1333,    2, 0x08 /* Private */,
      70,    2, 1336,    2, 0x08 /* Private */,
      74,    0, 1341,    2, 0x08 /* Private */,
      75,    0, 1342,    2, 0x08 /* Private */,
      76,    0, 1343,    2, 0x08 /* Private */,
      77,    0, 1344,    2, 0x08 /* Private */,
      78,    0, 1345,    2, 0x08 /* Private */,
      79,    1, 1346,    2, 0x08 /* Private */,
      80,    0, 1349,    2, 0x08 /* Private */,
      81,    0, 1350,    2, 0x08 /* Private */,
      82,    0, 1351,    2, 0x08 /* Private */,
      83,    1, 1352,    2, 0x08 /* Private */,
      86,    1, 1355,    2, 0x08 /* Private */,
      88,    0, 1358,    2, 0x08 /* Private */,
      89,    0, 1359,    2, 0x08 /* Private */,
      90,    0, 1360,    2, 0x08 /* Private */,
      91,    0, 1361,    2, 0x08 /* Private */,
      92,    0, 1362,    2, 0x08 /* Private */,
      93,    0, 1363,    2, 0x08 /* Private */,
      94,    0, 1364,    2, 0x08 /* Private */,
      95,    0, 1365,    2, 0x08 /* Private */,
      96,    0, 1366,    2, 0x08 /* Private */,
      97,    0, 1367,    2, 0x08 /* Private */,
      98,    0, 1368,    2, 0x08 /* Private */,
      99,    0, 1369,    2, 0x08 /* Private */,
     100,    0, 1370,    2, 0x08 /* Private */,
     101,    1, 1371,    2, 0x08 /* Private */,
     105,    0, 1374,    2, 0x08 /* Private */,
     106,    0, 1375,    2, 0x08 /* Private */,
     107,    0, 1376,    2, 0x08 /* Private */,
     108,    0, 1377,    2, 0x08 /* Private */,
     109,    0, 1378,    2, 0x08 /* Private */,
     110,    0, 1379,    2, 0x08 /* Private */,
     111,    0, 1380,    2, 0x08 /* Private */,
     112,    0, 1381,    2, 0x08 /* Private */,
     113,    1, 1382,    2, 0x08 /* Private */,
     116,    5, 1385,    2, 0x08 /* Private */,
     123,    0, 1396,    2, 0x08 /* Private */,
     124,    1, 1397,    2, 0x08 /* Private */,
     126,    1, 1400,    2, 0x08 /* Private */,
     127,    1, 1403,    2, 0x08 /* Private */,
     128,    1, 1406,    2, 0x08 /* Private */,
     129,    1, 1409,    2, 0x08 /* Private */,
     130,    1, 1412,    2, 0x08 /* Private */,
     131,    1, 1415,    2, 0x08 /* Private */,
     132,    1, 1418,    2, 0x08 /* Private */,
     133,    1, 1421,    2, 0x08 /* Private */,
     134,    1, 1424,    2, 0x08 /* Private */,
     135,    1, 1427,    2, 0x08 /* Private */,
     136,    1, 1430,    2, 0x08 /* Private */,
     137,    1, 1433,    2, 0x08 /* Private */,
     138,    1, 1436,    2, 0x08 /* Private */,
     139,    1, 1439,    2, 0x08 /* Private */,
     140,    1, 1442,    2, 0x08 /* Private */,
     142,    0, 1445,    2, 0x08 /* Private */,
     143,    1, 1446,    2, 0x08 /* Private */,
     145,    0, 1449,    2, 0x08 /* Private */,
     146,    0, 1450,    2, 0x08 /* Private */,
     147,    0, 1451,    2, 0x08 /* Private */,
     148,    0, 1452,    2, 0x08 /* Private */,
     149,    0, 1453,    2, 0x08 /* Private */,
     150,    0, 1454,    2, 0x08 /* Private */,
     151,    0, 1455,    2, 0x08 /* Private */,
     152,    0, 1456,    2, 0x08 /* Private */,
     153,    0, 1457,    2, 0x08 /* Private */,
     154,    0, 1458,    2, 0x08 /* Private */,
     155,    0, 1459,    2, 0x08 /* Private */,
     156,    0, 1460,    2, 0x08 /* Private */,
     157,    0, 1461,    2, 0x08 /* Private */,
     158,    0, 1462,    2, 0x08 /* Private */,
     159,    0, 1463,    2, 0x08 /* Private */,
     160,    0, 1464,    2, 0x08 /* Private */,
     161,    0, 1465,    2, 0x08 /* Private */,
     162,    0, 1466,    2, 0x08 /* Private */,
     163,    0, 1467,    2, 0x08 /* Private */,
     164,    0, 1468,    2, 0x08 /* Private */,
     165,    0, 1469,    2, 0x08 /* Private */,
     166,    0, 1470,    2, 0x08 /* Private */,
     167,    0, 1471,    2, 0x08 /* Private */,
     168,    0, 1472,    2, 0x08 /* Private */,
     169,    0, 1473,    2, 0x08 /* Private */,
     170,    0, 1474,    2, 0x08 /* Private */,
     171,    0, 1475,    2, 0x08 /* Private */,
     172,    1, 1476,    2, 0x08 /* Private */,
     174,    2, 1479,    2, 0x08 /* Private */,
     178,    1, 1484,    2, 0x08 /* Private */,
     179,    0, 1487,    2, 0x08 /* Private */,
     180,    0, 1488,    2, 0x08 /* Private */,
     181,    0, 1489,    2, 0x08 /* Private */,
     182,    0, 1490,    2, 0x08 /* Private */,
     183,    0, 1491,    2, 0x08 /* Private */,
     184,    1, 1492,    2, 0x08 /* Private */,
     185,    1, 1495,    2, 0x08 /* Private */,
     186,    0, 1498,    2, 0x08 /* Private */,
     187,    0, 1499,    2, 0x08 /* Private */,
     188,    0, 1500,    2, 0x08 /* Private */,
     189,    0, 1501,    2, 0x08 /* Private */,
     190,    0, 1502,    2, 0x08 /* Private */,
     191,    0, 1503,    2, 0x08 /* Private */,
     192,    0, 1504,    2, 0x08 /* Private */,
     193,    0, 1505,    2, 0x08 /* Private */,
     194,    0, 1506,    2, 0x08 /* Private */,
     195,    0, 1507,    2, 0x08 /* Private */,
     196,    0, 1508,    2, 0x08 /* Private */,
     197,    0, 1509,    2, 0x08 /* Private */,
     198,    0, 1510,    2, 0x08 /* Private */,
     199,    0, 1511,    2, 0x08 /* Private */,
     200,    0, 1512,    2, 0x08 /* Private */,
     201,    0, 1513,    2, 0x08 /* Private */,
     202,    0, 1514,    2, 0x08 /* Private */,
     203,    0, 1515,    2, 0x08 /* Private */,
     204,    0, 1516,    2, 0x08 /* Private */,
     205,    0, 1517,    2, 0x08 /* Private */,
     206,    0, 1518,    2, 0x08 /* Private */,
     207,    1, 1519,    2, 0x08 /* Private */,
     208,    1, 1522,    2, 0x08 /* Private */,
     209,    1, 1525,    2, 0x08 /* Private */,
     210,    0, 1528,    2, 0x08 /* Private */,
     211,    0, 1529,    2, 0x08 /* Private */,
     212,    0, 1530,    2, 0x08 /* Private */,
     213,    0, 1531,    2, 0x08 /* Private */,
     214,    0, 1532,    2, 0x08 /* Private */,
     215,    0, 1533,    2, 0x08 /* Private */,
     216,    0, 1534,    2, 0x08 /* Private */,
     217,    0, 1535,    2, 0x08 /* Private */,
     218,    0, 1536,    2, 0x08 /* Private */,
     219,    0, 1537,    2, 0x08 /* Private */,
     220,    0, 1538,    2, 0x08 /* Private */,
     221,    0, 1539,    2, 0x08 /* Private */,
     222,    0, 1540,    2, 0x08 /* Private */,
     223,    0, 1541,    2, 0x08 /* Private */,
     224,    0, 1542,    2, 0x08 /* Private */,
     225,    1, 1543,    2, 0x08 /* Private */,
     227,    1, 1546,    2, 0x08 /* Private */,
     228,    1, 1549,    2, 0x08 /* Private */,
     229,    1, 1552,    2, 0x08 /* Private */,
     231,    0, 1555,    2, 0x08 /* Private */,
     232,    0, 1556,    2, 0x08 /* Private */,
     233,    0, 1557,    2, 0x08 /* Private */,
     234,    1, 1558,    2, 0x08 /* Private */,
     235,    0, 1561,    2, 0x08 /* Private */,
     236,    0, 1562,    2, 0x08 /* Private */,
     237,    0, 1563,    2, 0x08 /* Private */,
     238,    0, 1564,    2, 0x08 /* Private */,
     239,    1, 1565,    2, 0x08 /* Private */,
     240,    0, 1568,    2, 0x08 /* Private */,
     241,    2, 1569,    2, 0x08 /* Private */,
     242,    0, 1574,    2, 0x08 /* Private */,
     243,    0, 1575,    2, 0x08 /* Private */,
     244,    0, 1576,    2, 0x08 /* Private */,
     245,    0, 1577,    2, 0x08 /* Private */,
     246,    0, 1578,    2, 0x08 /* Private */,
     247,    0, 1579,    2, 0x08 /* Private */,
     248,    2, 1580,    2, 0x08 /* Private */,
     253,    0, 1585,    2, 0x08 /* Private */,
     254,    0, 1586,    2, 0x08 /* Private */,
     255,    1, 1587,    2, 0x08 /* Private */,
     257,    0, 1590,    2, 0x08 /* Private */,
     258,    0, 1591,    2, 0x08 /* Private */,
     259,    0, 1592,    2, 0x08 /* Private */,
     260,    0, 1593,    2, 0x08 /* Private */,
     261,    0, 1594,    2, 0x08 /* Private */,
     262,    0, 1595,    2, 0x08 /* Private */,
     263,    0, 1596,    2, 0x08 /* Private */,
     264,    0, 1597,    2, 0x08 /* Private */,
     265,    0, 1598,    2, 0x08 /* Private */,
     266,    0, 1599,    2, 0x08 /* Private */,
     267,    0, 1600,    2, 0x08 /* Private */,
     268,    0, 1601,    2, 0x08 /* Private */,
     269,    0, 1602,    2, 0x08 /* Private */,
     270,    0, 1603,    2, 0x08 /* Private */,
     271,    0, 1604,    2, 0x08 /* Private */,
     272,    1, 1605,    2, 0x08 /* Private */,
     274,    0, 1608,    2, 0x08 /* Private */,
     275,    0, 1609,    2, 0x08 /* Private */,
     276,    0, 1610,    2, 0x0a /* Public */,
     277,    0, 1611,    2, 0x0a /* Public */,
     278,    0, 1612,    2, 0x0a /* Public */,
     279,    0, 1613,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Bool,   36,   37,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Bool, QMetaType::Bool, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   36,   37,   38,   39,   40,   41,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Bool, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,   36,   37,   38,   39,   40,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Bool, QMetaType::Bool, QMetaType::Int,   36,   37,   38,   39,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Bool, QMetaType::Bool,   36,   37,   38,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Bool,   36,   37,
    QMetaType::Void, 0x80000000 | 31,   36,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Bool,   36,   37,
    QMetaType::Void, 0x80000000 | 31,   36,
    QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   44,   45,
    QMetaType::Bool, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   47,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void, 0x80000000 | 31,   55,
    QMetaType::Void, 0x80000000 | 31,   55,
    QMetaType::Void, 0x80000000 | 31, QMetaType::QString, QMetaType::QString,   55,   58,   59,
    QMetaType::Void, 0x80000000 | 35, 0x80000000 | 52, QMetaType::Bool,   36,   53,   61,
    QMetaType::Void, 0x80000000 | 31,   55,
    QMetaType::Void, 0x80000000 | 31,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 71, QMetaType::Bool,   72,   73,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 84,   85,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 102, 0x80000000 | 103,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 114,  115,
    QMetaType::Void, 0x80000000 | 117, QMetaType::Int, QMetaType::Int, 0x80000000 | 117, QMetaType::Int,  118,  119,  120,  121,  122,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::QIcon,  125,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  144,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void, 0x80000000 | 175, 0x80000000 | 175,  176,  177,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void, 0x80000000 | 175,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void, QMetaType::QPoint,  173,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  226,
    QMetaType::Void, QMetaType::Bool,  226,
    QMetaType::Void, QMetaType::Bool,  226,
    QMetaType::Void, QMetaType::Int,  230,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  144,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   47,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 249, 0x80000000 | 251,  250,  252,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  256,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  273,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
     280, QMetaType::QIcon, 0x00095003,
     281, QMetaType::QIcon, 0x00095003,
     282, QMetaType::QIcon, 0x00095003,
     283, QMetaType::QIcon, 0x00095003,
     284, QMetaType::QIcon, 0x00095003,
     285, QMetaType::QIcon, 0x00095003,
     286, QMetaType::QIcon, 0x00095003,
     287, QMetaType::QIcon, 0x00095003,
     288, QMetaType::QIcon, 0x00095003,
     289, QMetaType::QIcon, 0x00095003,
     290, QMetaType::QIcon, 0x00095003,
     291, QMetaType::QIcon, 0x00095003,
     292, QMetaType::QIcon, 0x00095003,
     293, QMetaType::QIcon, 0x00095003,
     294, QMetaType::QIcon, 0x00095003,

       0        // eod
};

void OBSBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DeferSaveBegin(); break;
        case 1: _t->DeferSaveEnd(); break;
        case 2: _t->StartStreaming(); break;
        case 3: _t->StopStreaming(); break;
        case 4: _t->ForceStopStreaming(); break;
        case 5: _t->StreamDelayStarting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->StreamDelayStopping((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->StreamingStart(); break;
        case 8: _t->StreamStopping(); break;
        case 9: _t->StreamingStop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->StartRecording(); break;
        case 11: _t->StopRecording(); break;
        case 12: _t->RecordingStart(); break;
        case 13: _t->RecordStopping(); break;
        case 14: _t->RecordingStop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->ShowReplayBufferPauseWarning(); break;
        case 16: _t->StartReplayBuffer(); break;
        case 17: _t->StopReplayBuffer(); break;
        case 18: _t->ReplayBufferStart(); break;
        case 19: _t->ReplayBufferSave(); break;
        case 20: _t->ReplayBufferStopping(); break;
        case 21: _t->ReplayBufferStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->SaveProjectDeferred(); break;
        case 23: _t->SaveProject(); break;
        case 24: _t->SetTransition((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 25: _t->OverrideTransition((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 26: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 27: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 28: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 29: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 30: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 31: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 32: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 34: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 36: { bool _r = _t->AddSceneCollection((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->AddSceneCollection((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->UpdatePatronJson((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 39: _t->PauseRecording(); break;
        case 40: _t->UnpauseRecording(); break;
        case 41: _t->AddSceneItem((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 42: _t->AddScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 43: _t->RemoveScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 44: _t->RenameSources((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 45: _t->SelectSceneItem((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< OBSSceneItem(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 46: _t->ActivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 47: _t->DeactivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 48: _t->DuplicateSelectedScene(); break;
        case 49: _t->RemoveSelectedScene(); break;
        case 50: _t->RemoveSelectedSceneItem(); break;
        case 51: _t->ToggleAlwaysOnTop(); break;
        case 52: _t->ReorderSources((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 53: _t->RefreshSources((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 54: _t->ProcessHotkey((*reinterpret_cast< obs_hotkey_id(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 55: _t->AddTransition(); break;
        case 56: _t->RenameTransition(); break;
        case 57: _t->TransitionClicked(); break;
        case 58: _t->TransitionStopped(); break;
        case 59: _t->TransitionFullyStopped(); break;
        case 60: _t->TriggerQuickTransition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->SetDeinterlacingMode(); break;
        case 62: _t->SetDeinterlacingOrder(); break;
        case 63: _t->SetScaleFilter(); break;
        case 64: _t->IconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 65: _t->SetShowing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->ToggleShowHide(); break;
        case 67: _t->HideAudioControl(); break;
        case 68: _t->UnhideAllAudioControls(); break;
        case 69: _t->ToggleHideMixer(); break;
        case 70: _t->MixerRenameSource(); break;
        case 71: _t->on_vMixerScrollArea_customContextMenuRequested(); break;
        case 72: _t->on_hMixerScrollArea_customContextMenuRequested(); break;
        case 73: _t->on_actionCopySource_triggered(); break;
        case 74: _t->on_actionPasteRef_triggered(); break;
        case 75: _t->on_actionPasteDup_triggered(); break;
        case 76: _t->on_actionCopyFilters_triggered(); break;
        case 77: _t->on_actionPasteFilters_triggered(); break;
        case 78: _t->ColorChange(); break;
        case 79: { SourceTreeItem* _r = _t->GetItemWidgetFromSceneItem((*reinterpret_cast< obs_sceneitem_t*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< SourceTreeItem**>(_a[0]) = std::move(_r); }  break;
        case 80: _t->on_actionShowAbout_triggered(); break;
        case 81: _t->AudioMixerCopyFilters(); break;
        case 82: _t->AudioMixerPasteFilters(); break;
        case 83: _t->EnablePreview(); break;
        case 84: _t->DisablePreview(); break;
        case 85: _t->SceneCopyFilters(); break;
        case 86: _t->ScenePasteFilters(); break;
        case 87: _t->CheckDiskSpaceRemaining(); break;
        case 88: _t->OpenSavedProjector((*reinterpret_cast< SavedProjectorInfo*(*)>(_a[1]))); break;
        case 89: _t->ScenesReordered((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 90: _t->ResetStatsHotkey(); break;
        case 91: _t->SetImageIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 92: _t->SetColorIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 93: _t->SetSlideshowIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 94: _t->SetAudioInputIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 95: _t->SetAudioOutputIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 96: _t->SetDesktopCapIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 97: _t->SetWindowCapIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 98: _t->SetGameCapIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 99: _t->SetCameraIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 100: _t->SetTextIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 101: _t->SetMediaIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 102: _t->SetBrowserIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 103: _t->SetGroupIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 104: _t->SetSceneIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 105: _t->SetDefaultIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 106: _t->TBarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 107: _t->TBarReleased(); break;
        case 108: _t->LockVolumeControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 109: _t->on_actionFullscreenInterface_triggered(); break;
        case 110: _t->on_actionShow_Recordings_triggered(); break;
        case 111: _t->on_actionRemux_triggered(); break;
        case 112: _t->on_action_Settings_triggered(); break;
        case 113: _t->on_actionAdvAudioProperties_triggered(); break;
        case 114: _t->on_advAudioProps_clicked(); break;
        case 115: _t->on_advAudioProps_destroyed(); break;
        case 116: _t->on_actionShowLogs_triggered(); break;
        case 117: _t->on_actionUploadCurrentLog_triggered(); break;
        case 118: _t->on_actionUploadLastLog_triggered(); break;
        case 119: _t->on_actionViewCurrentLog_triggered(); break;
        case 120: _t->on_actionCheckForUpdates_triggered(); break;
        case 121: _t->on_actionShowCrashLogs_triggered(); break;
        case 122: _t->on_actionUploadLastCrashLog_triggered(); break;
        case 123: _t->on_actionEditTransform_triggered(); break;
        case 124: _t->on_actionCopyTransform_triggered(); break;
        case 125: _t->on_actionPasteTransform_triggered(); break;
        case 126: _t->on_actionRotate90CW_triggered(); break;
        case 127: _t->on_actionRotate90CCW_triggered(); break;
        case 128: _t->on_actionRotate180_triggered(); break;
        case 129: _t->on_actionFlipHorizontal_triggered(); break;
        case 130: _t->on_actionFlipVertical_triggered(); break;
        case 131: _t->on_actionFitToScreen_triggered(); break;
        case 132: _t->on_actionStretchToScreen_triggered(); break;
        case 133: _t->on_actionCenterToScreen_triggered(); break;
        case 134: _t->on_actionVerticalCenter_triggered(); break;
        case 135: _t->on_actionHorizontalCenter_triggered(); break;
        case 136: _t->on_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 137: _t->on_scenes_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 138: _t->on_scenes_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 139: _t->on_actionGridMode_triggered(); break;
        case 140: _t->on_actionAddScene_triggered(); break;
        case 141: _t->on_actionRemoveScene_triggered(); break;
        case 142: _t->on_actionSceneUp_triggered(); break;
        case 143: _t->on_actionSceneDown_triggered(); break;
        case 144: _t->on_sources_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 145: _t->on_scenes_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 146: _t->on_actionAddSource_triggered(); break;
        case 147: _t->on_actionRemoveSource_triggered(); break;
        case 148: _t->on_actionInteract_triggered(); break;
        case 149: _t->on_actionSourceProperties_triggered(); break;
        case 150: _t->on_actionSourceUp_triggered(); break;
        case 151: _t->on_actionSourceDown_triggered(); break;
        case 152: _t->on_actionMoveUp_triggered(); break;
        case 153: _t->on_actionMoveDown_triggered(); break;
        case 154: _t->on_actionMoveToTop_triggered(); break;
        case 155: _t->on_actionMoveToBottom_triggered(); break;
        case 156: _t->on_actionLockPreview_triggered(); break;
        case 157: _t->on_scalingMenu_aboutToShow(); break;
        case 158: _t->on_actionScaleWindow_triggered(); break;
        case 159: _t->on_actionScaleCanvas_triggered(); break;
        case 160: _t->on_actionScaleOutput_triggered(); break;
        case 161: _t->on_streamButton_clicked(); break;
        case 162: _t->on_recordButton_clicked(); break;
        case 163: _t->on_settingsButton_clicked(); break;
        case 164: _t->on_actionHelpPortal_triggered(); break;
        case 165: _t->on_actionWebsite_triggered(); break;
        case 166: _t->on_actionDiscord_triggered(); break;
        case 167: _t->on_preview_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 168: _t->on_program_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 169: _t->PreviewDisabledMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 170: _t->on_actionNewSceneCollection_triggered(); break;
        case 171: _t->on_actionDupSceneCollection_triggered(); break;
        case 172: _t->on_actionRenameSceneCollection_triggered(); break;
        case 173: _t->on_actionRemoveSceneCollection_triggered(); break;
        case 174: _t->on_actionImportSceneCollection_triggered(); break;
        case 175: _t->on_actionExportSceneCollection_triggered(); break;
        case 176: _t->on_actionNewProfile_triggered(); break;
        case 177: _t->on_actionDupProfile_triggered(); break;
        case 178: _t->on_actionRenameProfile_triggered(); break;
        case 179: _t->on_actionRemoveProfile_triggered(); break;
        case 180: _t->on_actionImportProfile_triggered(); break;
        case 181: _t->on_actionExportProfile_triggered(); break;
        case 182: _t->on_actionShowSettingsFolder_triggered(); break;
        case 183: _t->on_actionShowProfileFolder_triggered(); break;
        case 184: _t->on_actionAlwaysOnTop_triggered(); break;
        case 185: _t->on_toggleListboxToolbars_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 186: _t->on_toggleStatusBar_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 187: _t->on_toggleSourceIcons_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 188: _t->on_transitions_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 189: _t->on_transitionAdd_clicked(); break;
        case 190: _t->on_transitionRemove_clicked(); break;
        case 191: _t->on_transitionProps_clicked(); break;
        case 192: _t->on_transitionDuration_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 193: _t->on_modeSwitch_clicked(); break;
        case 194: _t->on_autoConfigure_triggered(); break;
        case 195: _t->on_stats_triggered(); break;
        case 196: _t->on_resetUI_triggered(); break;
        case 197: _t->on_lockUI_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 198: _t->PauseToggled(); break;
        case 199: _t->logUploadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 200: _t->updateCheckFinished(); break;
        case 201: _t->AddSourceFromAction(); break;
        case 202: _t->MoveSceneToTop(); break;
        case 203: _t->MoveSceneToBottom(); break;
        case 204: _t->EditSceneName(); break;
        case 205: _t->EditSceneItemName(); break;
        case 206: _t->SceneNameEdited((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 207: _t->OpenSceneFilters(); break;
        case 208: _t->OpenFilters(); break;
        case 209: _t->EnablePreviewDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 210: _t->TogglePreview(); break;
        case 211: _t->NudgeUp(); break;
        case 212: _t->NudgeDown(); break;
        case 213: _t->NudgeLeft(); break;
        case 214: _t->NudgeRight(); break;
        case 215: _t->OpenStudioProgramProjector(); break;
        case 216: _t->OpenPreviewProjector(); break;
        case 217: _t->OpenSourceProjector(); break;
        case 218: _t->OpenMultiviewProjector(); break;
        case 219: _t->OpenSceneProjector(); break;
        case 220: _t->OpenStudioProgramWindow(); break;
        case 221: _t->OpenPreviewWindow(); break;
        case 222: _t->OpenSourceWindow(); break;
        case 223: _t->OpenMultiviewWindow(); break;
        case 224: _t->OpenSceneWindow(); break;
        case 225: _t->DeferredSysTrayLoad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 226: _t->StackedMixerAreaContextMenuRequested(); break;
        case 227: _t->ResizeOutputSizeOfSource(); break;
        case 228: _t->on_actionResetTransform_triggered(); break;
        case 229: { bool _r = _t->StreamingActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 230: { bool _r = _t->RecordingActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 231: { bool _r = _t->ReplayBufferActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 206:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OBSBasic *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->GetImageIcon(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->GetColorIcon(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = _t->GetSlideshowIcon(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioInputIcon(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioOutputIcon(); break;
        case 5: *reinterpret_cast< QIcon*>(_v) = _t->GetDesktopCapIcon(); break;
        case 6: *reinterpret_cast< QIcon*>(_v) = _t->GetWindowCapIcon(); break;
        case 7: *reinterpret_cast< QIcon*>(_v) = _t->GetGameCapIcon(); break;
        case 8: *reinterpret_cast< QIcon*>(_v) = _t->GetCameraIcon(); break;
        case 9: *reinterpret_cast< QIcon*>(_v) = _t->GetTextIcon(); break;
        case 10: *reinterpret_cast< QIcon*>(_v) = _t->GetMediaIcon(); break;
        case 11: *reinterpret_cast< QIcon*>(_v) = _t->GetBrowserIcon(); break;
        case 12: *reinterpret_cast< QIcon*>(_v) = _t->GetGroupIcon(); break;
        case 13: *reinterpret_cast< QIcon*>(_v) = _t->GetSceneIcon(); break;
        case 14: *reinterpret_cast< QIcon*>(_v) = _t->GetDefaultIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OBSBasic *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetImageIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->SetColorIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->SetSlideshowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: _t->SetAudioInputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 4: _t->SetAudioOutputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: _t->SetDesktopCapIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 6: _t->SetWindowCapIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 7: _t->SetGameCapIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 8: _t->SetCameraIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 9: _t->SetTextIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 10: _t->SetMediaIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 11: _t->SetBrowserIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 12: _t->SetGroupIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 13: _t->SetSceneIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 14: _t->SetDefaultIcon(*reinterpret_cast< QIcon*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OBSBasic::staticMetaObject = { {
    QMetaObject::SuperData::link<OBSMainWindow::staticMetaObject>(),
    qt_meta_stringdata_OBSBasic.data,
    qt_meta_data_OBSBasic,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OBSBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasic.stringdata0))
        return static_cast<void*>(this);
    return OBSMainWindow::qt_metacast(_clname);
}

int OBSBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 232)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 232;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 232)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 232;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_SceneRenameDelegate_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SceneRenameDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SceneRenameDelegate_t qt_meta_stringdata_SceneRenameDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19) // "SceneRenameDelegate"

    },
    "SceneRenameDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SceneRenameDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SceneRenameDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SceneRenameDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_SceneRenameDelegate.data,
    qt_meta_data_SceneRenameDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SceneRenameDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneRenameDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SceneRenameDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int SceneRenameDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
