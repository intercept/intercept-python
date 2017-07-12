// Created automatically from python script at 07.07.2017 17:14:52

#pragma once
#include <intercept.hpp>
#include <boost/python.hpp>

using namespace intercept;
using namespace intercept::sqf;
using namespace intercept::types;

BOOST_PYTHON_MODULE(__sqf_ai)
{
	boost::python::def("attackEnabled", static_cast<bool(*)(const object &)>(&attack_enabled));
	boost::python::def("attackEnabled", static_cast<bool(*)(const group &)>(&attack_enabled));
	boost::python::def("commandArtilleryFire", static_cast<void(*)(const object &,const vector3 &,sqf_string_const_ref,int)>(&command_artillery_fire));
	boost::python::def("commandArtilleryFire", static_cast<void(*)(const object &,const vector2 &,sqf_string_const_ref,int)>(&command_artillery_fire));
	boost::python::def("commandArtilleryFire", static_cast<void(*)(const std::vector<object> &,const vector3 &,sqf_string_const_ref,int)>(&command_artillery_fire));
	boost::python::def("commandArtilleryFire", static_cast<void(*)(const std::vector<object> &,const vector2 &,sqf_string_const_ref,int)>(&command_artillery_fire));
	boost::python::def("commandFire", static_cast<void(*)(const object &,const object &)>(&command_fire));
	boost::python::def("commandFire", static_cast<void(*)(const std::vector<object> &,const object &)>(&command_fire));
	boost::python::def("commandFollow", static_cast<void(*)(const object &,const object &)>(&command_follow));
	boost::python::def("commandFollow", static_cast<void(*)(const std::vector<object> &,const object &)>(&command_follow));
	boost::python::def("commandFsm", static_cast<void(*)(const object &,sqf_string_const_ref,const vector3 &,const object &)>(&command_fsm));
	boost::python::def("commandFsm", static_cast<void(*)(const object &,sqf_string_const_ref,const vector2 &,const object &)>(&command_fsm));
	boost::python::def("commandFsm", static_cast<void(*)(const std::vector<object> &,sqf_string_const_ref,const vector3 &,const object &)>(&command_fsm));
	boost::python::def("commandFsm", static_cast<void(*)(const std::vector<object> &,sqf_string_const_ref,const vector2 &,const object &)>(&command_fsm));
	boost::python::def("commandMove", static_cast<void(*)(const object &,const vector3 &)>(&command_move));
	boost::python::def("commandMove", static_cast<void(*)(const object &,const vector2 &)>(&command_move));
	boost::python::def("commandMove", static_cast<void(*)(const std::vector<object> &,const vector3 &)>(&command_move));
	boost::python::def("commandMove", static_cast<void(*)(const std::vector<object> &,const vector2 &)>(&command_move));
	boost::python::def("commandRadio", static_cast<void(*)(const object &,sqf_string_const_ref)>(&command_radio));
	boost::python::def("commandRadio", static_cast<void(*)(const std::vector<object> &,sqf_string_const_ref)>(&command_radio));
	boost::python::def("commandTarget", static_cast<void(*)(const object &,const object &)>(&command_target));
	boost::python::def("commandTarget", static_cast<void(*)(const std::vector<object> &,const object &)>(&command_target));
	boost::python::def("commandWatch", static_cast<void(*)(const object &,const vector3 &)>(&command_watch));
	boost::python::def("commandWatch", static_cast<void(*)(const object &,const vector2 &)>(&command_watch));
	boost::python::def("commandWatch", static_cast<void(*)(const std::vector<object> &,const vector3 &)>(&command_watch));
	boost::python::def("commandWatch", static_cast<void(*)(const std::vector<object> &,const vector2 &)>(&command_watch));
	boost::python::def("commandWatch", static_cast<void(*)(const object &,const object &)>(&command_watch));
	boost::python::def("commandWatch", static_cast<void(*)(const std::vector<object> &,const object &)>(&command_watch));
	boost::python::def("commandGetOut", static_cast<void(*)(const object &)>(&command_get_out));
	boost::python::def("commandGetOut", static_cast<void(*)(const std::vector<object> &)>(&command_get_out));
	boost::python::def("commandStop", static_cast<void(*)(const object &)>(&command_stop));
	boost::python::def("commandStop", static_cast<void(*)(const std::vector<object> &)>(&command_stop));
	boost::python::def("allowFleeing", static_cast<void(*)(const object &,float)>(&allow_fleeing));
	boost::python::def("allowFleeing", static_cast<void(*)(const group &,float)>(&allow_fleeing));
	boost::python::def("allowGetIn", static_cast<void(*)(const std::vector<object> &,bool)>(&allow_get_in));
	boost::python::def("assignAsCommander", static_cast<void(*)(const object &,const object &)>(&assign_as_commander));
	boost::python::def("assignAsDriver", static_cast<void(*)(const object &,const object &)>(&assign_as_driver));
	boost::python::def("assignAsGunner", static_cast<void(*)(const object &,const object &)>(&assign_as_gunner));
	boost::python::def("assignAsTurret", static_cast<void(*)(const object &,const object &,const std::vector<float> &)>(&assign_as_turret));
	boost::python::def("assignAsCargo", static_cast<void(*)(const object &,const object &)>(&assign_as_cargo));
	boost::python::def("assignAsCargoIndex", static_cast<void(*)(const object &,const object &,int)>(&assign_as_cargo_index));
	boost::python::def("kbAddTopic", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,std::variant<std::reference_wrapper<const code>, sqf_string_const_ref_wrapper>)>(&kb_add_topic));
	boost::python::def("kbReact", static_cast<void(*)()>(&kb_react));
	boost::python::def("kbTell", static_cast<void(*)(const object &,const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,const code &,sqf_string_const_ref,sqf_string_list_const_ref,std::variant<std::reference_wrapper<bool>, std::reference_wrapper<int>, sqf_string_const_ref_wrapper>)>(&kb_tell));
	boost::python::def("kbWasSaid", static_cast<bool(*)(const object &,const object &,sqf_string_const_ref,sqf_string_const_ref,int)>(&kb_was_said));
	boost::python::def("kbAddDatabase", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&kb_add_database));
	boost::python::def("kbAddDatabaseTargets", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&kb_add_database_targets));
	boost::python::def("kbHasTopic", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&kb_has_topic));
	boost::python::def("kbRemoveTopic", static_cast<void(*)(const object &,sqf_string_const_ref)>(&kb_remove_topic));
	boost::python::def("setSkill", static_cast<void(*)(const object &,float)>(&set_skill));
	boost::python::def("setSkill", static_cast<void(*)(const object &,set_skill_type,float)>(&set_skill));
	boost::python::def("sendSimpleCommand", static_cast<void(*)(const object &,simple_command_type)>(&send_simple_command));
	boost::python::def("speedMode", static_cast<sqf_return_string(*)(const object &)>(&speed_mode));
	boost::python::def("speedMode", static_cast<sqf_return_string(*)(const group &)>(&speed_mode));
	boost::python::def("doArtilleryFire", static_cast<void(*)(const object &,const vector3 &,float,int)>(&do_artillery_fire));
	boost::python::def("doArtilleryFire", static_cast<void(*)(const std::vector<object> &,const vector3 &,float,int)>(&do_artillery_fire));
	boost::python::def("doFire", static_cast<void(*)(const object &,const object &)>(&do_fire));
	boost::python::def("doFire", static_cast<void(*)(const std::vector<object> &,const object &)>(&do_fire));
	boost::python::def("doFollow", static_cast<void(*)(const object &,const object &)>(&do_follow));
	boost::python::def("doFollow", static_cast<void(*)(const std::vector<object> &,const object &)>(&do_follow));
	boost::python::def("doFsm", static_cast<void(*)(const object &,sqf_string_const_ref,const vector3 &,const object &)>(&do_fsm));
	boost::python::def("doFsm", static_cast<void(*)(const std::vector<object> &,sqf_string_const_ref,const vector3 &,const object &)>(&do_fsm));
	boost::python::def("doMove", static_cast<void(*)(const object &,const vector3 &)>(&do_move));
	boost::python::def("doMove", static_cast<void(*)(const std::vector<object> &,const vector3 &)>(&do_move));
	boost::python::def("doSuppressiveFire", static_cast<void(*)(const object &,const object &)>(&do_suppressive_fire));
	boost::python::def("doSuppressiveFire", static_cast<void(*)(const object &,const vector3 &)>(&do_suppressive_fire));
	boost::python::def("doSuppressiveFire", static_cast<void(*)(const std::vector<object> &,const object &)>(&do_suppressive_fire));
	boost::python::def("doSuppressiveFire", static_cast<void(*)(const std::vector<object> &,const vector3 &)>(&do_suppressive_fire));
	boost::python::def("doTarget", static_cast<void(*)(const object &,const object &)>(&do_target));
	boost::python::def("doTarget", static_cast<void(*)(const std::vector<object> &,const object &)>(&do_target));
	boost::python::def("doWatch", static_cast<void(*)(const object &,const vector3 &)>(&do_watch));
	boost::python::def("doWatch", static_cast<void(*)(const std::vector<object> &,const vector3 &)>(&do_watch));
	boost::python::def("doWatch", static_cast<void(*)(const object &,const object &)>(&do_watch));
	boost::python::def("doWatch", static_cast<void(*)(const std::vector<object> &,const object &)>(&do_watch));
	boost::python::def("enableAttack", static_cast<void(*)(const group &,bool)>(&enable_attack));
	boost::python::def("combatMode", static_cast<sqf_return_string(*)(const object &)>(&combat_mode));
	boost::python::def("formation", static_cast<sqf_return_string(*)(const object &)>(&formation));
	boost::python::def("formation", static_cast<sqf_return_string(*)(const group &)>(&formation));
	boost::python::def("formationMembers", static_cast<std::vector<object>(*)(const object &)>(&formation_members));
	boost::python::def("formationPosition", static_cast<vector3(*)(const object &)>(&formation_position));
	boost::python::def("behaviour", static_cast<sqf_return_string(*)(const object &)>(&behaviour));
	boost::python::def("checkAifeature", static_cast<bool(*)(sqf_string_const_ref)>(&check_aifeature));
	boost::python::def("fleeing", static_cast<bool(*)(const object &)>(&fleeing));
	boost::python::def("skill", static_cast<float(*)(const object &)>(&skill));
	boost::python::def("landResult", static_cast<sqf_return_string(*)(const object &)>(&land_result));
	boost::python::def("moveToCompleted", static_cast<bool(*)(const object &)>(&move_to_completed));
	boost::python::def("moveToFailed", static_cast<bool(*)(const object &)>(&move_to_failed));
	boost::python::def("disableAi", static_cast<void(*)(const object &,ai_behaviour_types)>(&disable_ai));
	boost::python::def("enableAi", static_cast<void(*)(const object &,ai_behaviour_types)>(&enable_ai));
	boost::python::def("enableAifeature", static_cast<void(*)(bool,ai_feature_types)>(&enable_aifeature));
	boost::python::def("flyInHeight", static_cast<void(*)(const object &,float)>(&fly_in_height));
	boost::python::def("knowsAbout", static_cast<float(*)(const object &,const object &)>(&knows_about));
	boost::python::def("knowsAbout", static_cast<float(*)(const group &,const object &)>(&knows_about));
	boost::python::def("knowsAbout", static_cast<float(*)(const side &,const object &)>(&knows_about));
	boost::python::def("land", static_cast<void(*)(const object &,sqf_string_const_ref)>(&land));
	boost::python::def("landAt", static_cast<void(*)(const object &,float)>(&land_at));
	boost::python::def("landAt", static_cast<void(*)(const object &,const object &)>(&land_at));
	boost::python::def("skill", static_cast<float(*)(const object &,sqf_string_const_ref)>(&skill));
	boost::python::def("skillFinal", static_cast<float(*)(const object &,sqf_string_const_ref)>(&skill_final));
	boost::python::def("stop", static_cast<void(*)(const object &,bool)>(&stop));
	boost::python::def("suppressFor", static_cast<void(*)(const object &,float)>(&suppress_for));
	boost::python::def("moveTo", static_cast<void(*)(const object &,const vector3 &)>(&move_to));
	boost::python::def("expectedDestination", static_cast<rv_expected_destination(*)(const object &)>(&expected_destination));
	boost::python::def("useAiOperMapObstructionTest", static_cast<void(*)(bool)>(&use_ai_oper_map_obstruction_test));
	boost::python::def("useAiSteeringComponent", static_cast<void(*)(bool)>(&use_ai_steering_component));
	boost::python::def("commandSuppressiveFire", static_cast<void(*)(const object &,const object &)>(&command_suppressive_fire));
	boost::python::def("commandSuppressiveFire", static_cast<void(*)(const object &,const vector3 &)>(&command_suppressive_fire));
	boost::python::def("setBehaviour", static_cast<void(*)(std::variant<group, object>,sqf_string_const_ref)>(&set_behaviour));
	boost::python::def("setCombatMode", static_cast<void(*)(std::variant<group, object>,sqf_string_const_ref)>(&set_combat_mode));
	boost::python::def("setFormation", static_cast<void(*)(std::variant<group, object>,sqf_string_const_ref)>(&set_formation));
	boost::python::def("setConvoySeperation", static_cast<void(*)(const object &,float)>(&set_convoy_seperation));
	boost::python::def("setDestination", static_cast<void(*)(const object &,const vector3 &,sqf_string_const_ref,bool)>(&set_destination));
	boost::python::def("setDriveOnPath", static_cast<void(*)(const object &,const std::vector<vector3> &)>(&set_drive_on_path));
	boost::python::def("setFormDir", static_cast<void(*)(std::variant<group, object>,float)>(&set_form_dir));
	boost::python::def("enableGunLights", static_cast<void(*)(const object &,bool &)>(&enable_gun_lights));
	boost::python::def("enableGunLights", static_cast<void(*)(const group &,bool &)>(&enable_gun_lights));
	boost::python::def("enableIrLasers", static_cast<void(*)(const object &,bool &)>(&enable_ir_lasers));
	boost::python::def("enableIrLasers", static_cast<void(*)(const group &,bool &)>(&enable_ir_lasers));
	boost::python::def("enablePersonTurret", static_cast<void(*)(const object &,const std::vector<int> &,bool)>(&enable_person_turret));
	boost::python::def("findCover", static_cast<object(*)(const object &,const vector3 &,const vector3 &,float,std::optional<float>,std::optional<vector3>,std::optional<object>)>(&find_cover));
	boost::python::def("flyInHeightAsl", static_cast<void(*)(const object &,float,float,float)>(&fly_in_height_asl));
	boost::python::def("forceFollowRoad", static_cast<void(*)(const object &,bool)>(&force_follow_road));
	boost::python::def("forceWeaponFire", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&force_weapon_fire));
	boost::python::def("glanceAt", static_cast<void(*)(std::variant<std::reference_wrapper<const object>, std::reference_wrapper<const std::vector<object> > >,std::variant<std::reference_wrapper<const object>, std::reference_wrapper<const vector3> >)>(&glance_at));
	boost::python::def("orderGetIn", static_cast<void(*)(const std::vector<object> &,bool)>(&order_get_in));
	boost::python::def("setUnloadInCombat", static_cast<void(*)(const object &,bool,bool)>(&set_unload_in_combat));
	boost::python::def("swimInDepth", static_cast<void(*)(const object &,float)>(&swim_in_depth));
	boost::python::enum_<set_skill_type>("setSkillType")
		.value("aimingAccuracy", static_cast<set_skill_type>(0))
		.value("aimingShake", static_cast<set_skill_type>(1))
		.value("aimingSpeed", static_cast<set_skill_type>(2))
		.value("endurance", static_cast<set_skill_type>(3))
		.value("spotDistance", static_cast<set_skill_type>(4))
		.value("spotTime", static_cast<set_skill_type>(5))
		.value("courage", static_cast<set_skill_type>(6))
		.value("reloadSpeed", static_cast<set_skill_type>(7))
		.value("commanding", static_cast<set_skill_type>(8))
		.value("general", static_cast<set_skill_type>(9));
	boost::python::enum_<simple_command_type>("simpleCommandType")
		.value("FIRE", static_cast<simple_command_type>(0))
		.value("CEASE_FIRE", static_cast<simple_command_type>(1))
		.value("MANUAL_FIRE", static_cast<simple_command_type>(2))
		.value("CANCEL_MANUAL_FIRE", static_cast<simple_command_type>(3))
		.value("KEY_FIRE", static_cast<simple_command_type>(4))
		.value("FORWARD", static_cast<simple_command_type>(5))
		.value("STOP", static_cast<simple_command_type>(6))
		.value("BACK", static_cast<simple_command_type>(7))
		.value("FAST", static_cast<simple_command_type>(8))
		.value("KEY_FAST", static_cast<simple_command_type>(9))
		.value("SLOW", static_cast<simple_command_type>(10))
		.value("KEY_SLOW", static_cast<simple_command_type>(11))
		.value("LEFT", static_cast<simple_command_type>(12))
		.value("RIGHT", static_cast<simple_command_type>(13))
		.value("KEY_UP", static_cast<simple_command_type>(14))
		.value("KEY_DOWN", static_cast<simple_command_type>(15));
	boost::python::enum_<ai_behaviour_types>("aiBehaviourTypes")
		.value("TARGET", static_cast<ai_behaviour_types>(0))
		.value("AUTOTARGET", static_cast<ai_behaviour_types>(1))
		.value("MOVE", static_cast<ai_behaviour_types>(2))
		.value("ANIM", static_cast<ai_behaviour_types>(3))
		.value("TEAMSWITCH", static_cast<ai_behaviour_types>(4))
		.value("FSM", static_cast<ai_behaviour_types>(5))
		.value("AIMINGERROR", static_cast<ai_behaviour_types>(6))
		.value("SUPPRESSION", static_cast<ai_behaviour_types>(7))
		.value("CHECKVISIBLE", static_cast<ai_behaviour_types>(8))
		.value("COVER", static_cast<ai_behaviour_types>(9))
		.value("AUTOCOMBAT", static_cast<ai_behaviour_types>(10))
		.value("PATH", static_cast<ai_behaviour_types>(11))
		.value("ALL", static_cast<ai_behaviour_types>(12));
	boost::python::enum_<ai_feature_types>("aiFeatureTypes")
		.value("AwareFormationSoft", static_cast<ai_feature_types>(0))
		.value("CombatFormationSoft", static_cast<ai_feature_types>(1));
	boost::python::class_<rv_expected_destination>("rvExpectedDestination", boost::python::init<const game_value &>())
		.def_readwrite("position", &rv_expected_destination::position)
		.def_readwrite("planningMode", &rv_expected_destination::planning_mode)
		.def_readwrite("forceReplan", &rv_expected_destination::force_replan);
}

BOOST_PYTHON_MODULE(__sqf_camera)
{
	boost::python::def("addCamShake", static_cast<void(*)(float,float,float)>(&add_cam_shake));
	boost::python::def("resetCamShake", static_cast<void(*)()>(&reset_cam_shake));
	boost::python::def("enableCamShake", static_cast<void(*)(bool)>(&enable_cam_shake));
	boost::python::def("camCommitted", static_cast<bool(*)(const object &)>(&cam_committed));
	boost::python::def("camDestroy", static_cast<void(*)(const object &)>(&cam_destroy));
	boost::python::def("camPreloaded", static_cast<bool(*)(const object &)>(&cam_preloaded));
	boost::python::def("camTarget", static_cast<object(*)(const object &)>(&cam_target));
	boost::python::def("camUseNvg", static_cast<void(*)(bool)>(&cam_use_nvg));
	boost::python::def("cameraEffectEnableHud", static_cast<void(*)(bool)>(&camera_effect_enable_hud));
	boost::python::def("cameraInterest", static_cast<float(*)(const object &)>(&camera_interest));
	boost::python::def("camConstuctionSetParams", static_cast<void(*)(const object &,const vector3 &,float,float)>(&cam_constuction_set_params));
	boost::python::def("camCreate", static_cast<object(*)(sqf_string_const_ref,const vector3 &)>(&cam_create));
	boost::python::def("cameraEffect", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&camera_effect));
	boost::python::def("cameraEffect", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&camera_effect));
	boost::python::def("camPrepareFocus", static_cast<void(*)(const object &,float,float)>(&cam_prepare_focus));
	boost::python::def("camPrepareFovRange", static_cast<void(*)(const object &,float,float)>(&cam_prepare_fov_range));
	boost::python::def("camPreparePos", static_cast<void(*)(const object &,const vector3 &)>(&cam_prepare_pos));
	boost::python::def("camPrepareRelPos", static_cast<void(*)(const object &,const vector3 &)>(&cam_prepare_rel_pos));
	boost::python::def("camPrepareTarget", static_cast<void(*)(const object &,const object &)>(&cam_prepare_target));
	boost::python::def("camPrepareTarget", static_cast<void(*)(const object &,const vector3 &)>(&cam_prepare_target));
	boost::python::def("camSetFocus", static_cast<void(*)(const object &,float,float)>(&cam_set_focus));
	boost::python::def("camSetFovRange", static_cast<void(*)(const object &,float,float)>(&cam_set_fov_range));
	boost::python::def("camSetPos", static_cast<void(*)(const object &,const vector3 &)>(&cam_set_pos));
	boost::python::def("camSetRelativePos", static_cast<void(*)(const object &,const vector3 &)>(&cam_set_relative_pos));
	boost::python::def("camSetTarget", static_cast<void(*)(const object &,const object &)>(&cam_set_target));
	boost::python::def("camSetTarget", static_cast<void(*)(const object &,const vector3 &)>(&cam_set_target));
	boost::python::def("camCommand", static_cast<void(*)(const object &,sqf_string_const_ref)>(&cam_command));
	boost::python::def("camCommit", static_cast<void(*)(const object &,float)>(&cam_commit));
	boost::python::def("camCommitPrepared", static_cast<void(*)(const object &,float)>(&cam_commit_prepared));
	boost::python::def("camPreload", static_cast<void(*)(const object &,float)>(&cam_preload));
	boost::python::def("camPrepareBank", static_cast<void(*)(const object &,float)>(&cam_prepare_bank));
	boost::python::def("camPrepareDir", static_cast<void(*)(const object &,float)>(&cam_prepare_dir));
	boost::python::def("camPrepareDive", static_cast<void(*)(const object &,float)>(&cam_prepare_dive));
	boost::python::def("camPrepareFov", static_cast<void(*)(const object &,float)>(&cam_prepare_fov));
	boost::python::def("camSetBank", static_cast<void(*)(const object &,float)>(&cam_set_bank));
	boost::python::def("camSetDive", static_cast<void(*)(const object &,float)>(&cam_set_dive));
	boost::python::def("camSetFov", static_cast<void(*)(const object &,float)>(&cam_set_fov));
	boost::python::def("setCamUseTi", static_cast<void(*)(thermal_modes,bool)>(&set_cam_use_ti));
	boost::python::def("setAperture", static_cast<void(*)(float)>(&set_aperture));
	boost::python::def("setApertureNew", static_cast<void(*)(float,float,float,float)>(&set_aperture_new));
	boost::python::def("setCamShakeDefParams", static_cast<void(*)(float,float,float,float,float,float,float)>(&set_cam_shake_def_params));
	boost::python::def("setCamShakeParams", static_cast<void(*)(float,float,float,float,bool)>(&set_cam_shake_params));
	boost::python::def("preloadCamera", static_cast<bool(*)(const vector3 &)>(&preload_camera));
	boost::python::def("setDefaultCamera", static_cast<void(*)(const vector3 &,const vector3 &)>(&set_default_camera));
	boost::python::def("getCameraViewDirection", static_cast<vector3(*)(const object &)>(&get_camera_view_direction));
	boost::python::def("switchCamera", static_cast<void(*)(const object &,sqf_string_const_ref)>(&switch_camera));
	boost::python::def("setCameraInterest", static_cast<void(*)(const object &,float)>(&set_camera_interest));
	boost::python::def("cameraView", static_cast<sqf_return_string(*)()>(&camera_view));
	boost::python::def("ppEffectCreate", static_cast<float(*)(sqf_string_const_ref,const float &)>(&pp_effect_create));
	boost::python::def("ppEffectCreate", static_cast<std::vector<float>(*)(const std::vector<rv_pp_effect> &)>(&pp_effect_create));
	boost::python::def("ppEffectCommitted", static_cast<bool(*)(sqf_string_const_ref)>(&pp_effect_committed));
	boost::python::def("ppEffectCommitted", static_cast<bool(*)(float)>(&pp_effect_committed));
	boost::python::def("ppEffectDestroy", static_cast<void(*)(float)>(&pp_effect_destroy));
	boost::python::def("ppEffectEnabled", static_cast<bool(*)(float)>(&pp_effect_enabled));
	boost::python::def("ppEffectCommit", static_cast<void(*)(float,sqf_string_const_ref)>(&pp_effect_commit));
	boost::python::def("ppEffectEnable", static_cast<void(*)(bool,sqf_string_const_ref)>(&pp_effect_enable));
	boost::python::def("ppEffectEnable", static_cast<void(*)(float,bool)>(&pp_effect_enable));
	boost::python::def("ppEffectForceInNvg", static_cast<void(*)(float,bool)>(&pp_effect_force_in_nvg));
	boost::python::def("ppEffectDestroy", static_cast<void(*)(std::vector<float>)>(&pp_effect_destroy));
	boost::python::def("ppEffectAdjust", static_cast<void(*)(std::variant<sqf_string_const_ref_wrapper, std::reference_wrapper<int> >,const game_value &)>(&pp_effect_adjust));
	boost::python::def("ppEffectCommit", static_cast<void(*)(std::variant<std::reference_wrapper<const std::vector<int> >, std::reference_wrapper<int> >,const float &)>(&pp_effect_commit));
	boost::python::def("ppEffectEnable", static_cast<void(*)(const std::vector<int> &,bool)>(&pp_effect_enable));
	boost::python::def("getPilotCameraDirection", static_cast<vector3(*)(const object &)>(&get_pilot_camera_direction));
	boost::python::def("getPilotCameraPosition", static_cast<vector3(*)(const object &)>(&get_pilot_camera_position));
	boost::python::def("getPilotCameraRotation", static_cast<vector3(*)(const object &)>(&get_pilot_camera_rotation));
	boost::python::def("getPilotCameraTarget", static_cast<rv_camera_target(*)(const object &)>(&get_pilot_camera_target));
	boost::python::def("hasPilotCamera", static_cast<bool(*)(const object &)>(&has_pilot_camera));
	boost::python::enum_<thermal_modes>("thermalModes")
		.value("white_hot", static_cast<thermal_modes>(0))
		.value("black_hot", static_cast<thermal_modes>(1))
		.value("lightgreen_hot", static_cast<thermal_modes>(2))
		.value("black_hot_green_cold", static_cast<thermal_modes>(3))
		.value("red_hot", static_cast<thermal_modes>(4))
		.value("black_hot_red_cold", static_cast<thermal_modes>(5))
		.value("white_hot_red_cold", static_cast<thermal_modes>(6))
		.value("thermal", static_cast<thermal_modes>(7));
	boost::python::class_<rv_pp_effect>("rvPpEffect", boost::python::init<>())
		.def_readwrite("name", &rv_pp_effect::name)
		.def_readwrite("priority", &rv_pp_effect::priority);
	boost::python::class_<rv_camera_target>("rvCameraTarget")
		.def_readwrite("isTracking", &rv_camera_target::is_tracking)
		.def_readwrite("targetPosition", &rv_camera_target::target_position)
		.def_readwrite("targetObject", &rv_camera_target::target_object);
}

BOOST_PYTHON_MODULE(__sqf_cargo)
{
	boost::python::def("setVehicleCargo", static_cast<bool(*)(const object &,const object &)>(&set_vehicle_cargo));
	boost::python::def("assignedCargo", static_cast<std::vector<object>(*)(const object &)>(&assigned_cargo));
	boost::python::def("getVehicleCargo", static_cast<std::vector<object>(*)(const object &)>(&get_vehicle_cargo));
	boost::python::def("isVehicleCargo", static_cast<object(*)(const object &)>(&is_vehicle_cargo));
	boost::python::def("vehicleCargoEnabled", static_cast<bool(*)(const object &)>(&vehicle_cargo_enabled));
	boost::python::def("canVehicleCargo", static_cast<std::pair<bool , bool>(*)(const object &,const object &)>(&can_vehicle_cargo));
	boost::python::def("enableVehicleCargo", static_cast<void(*)(const object &,bool)>(&enable_vehicle_cargo));
	boost::python::def("canSlingLoad", static_cast<bool(*)(const object &,const object &)>(&can_sling_load));
	boost::python::def("slingLoadAssistantShown", static_cast<bool(*)()>(&sling_load_assistant_shown));
	boost::python::def("setSlingLoad", static_cast<bool(*)(const object &,const object &)>(&set_sling_load));
	boost::python::def("getSlingLoad", static_cast<object(*)(const object &)>(&get_sling_load));
	boost::python::def("ropeAttachTo", static_cast<void(*)(const object &,const vector3 &,const vector3 &,const object &)>(&rope_attach_to));
	boost::python::def("ropeDetach", static_cast<void(*)(const object &,const object &)>(&rope_detach));
	boost::python::def("ropeAttachEnabled", static_cast<bool(*)(const object &)>(&rope_attach_enabled));
	boost::python::def("ropeAttachedTo", static_cast<object(*)(const object &)>(&rope_attached_to));
	boost::python::def("ropeDestroy", static_cast<void(*)(const object &)>(&rope_destroy));
	boost::python::def("ropeLength", static_cast<float(*)(const object &)>(&rope_length));
	boost::python::def("ropeUnwound", static_cast<bool(*)(const object &)>(&rope_unwound));
	boost::python::def("enableRopeAttach", static_cast<void(*)(const object &,bool)>(&enable_rope_attach));
	boost::python::def("ropeAttachedObjects", static_cast<std::vector<object>(*)(const object &)>(&rope_attached_objects));
	boost::python::def("ropes", static_cast<std::vector<object>(*)(const object &)>(&ropes));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,const vector3 &,const object &,const vector3 &,float)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,const vector3 &,const object &,const vector3 &,float,float)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,sqf_string_const_ref,const object &,const vector3 &,float)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,sqf_string_const_ref,const object &,const vector3 &,float,float)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,const vector3 &,const object &,sqf_string_const_ref,float)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,const vector3 &,const object &,sqf_string_const_ref,float,float)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,sqf_string_const_ref,const object &,sqf_string_const_ref,float)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,sqf_string_const_ref,const object &,sqf_string_const_ref,float,float)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,const vector3 &)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,const vector3 &,float)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,sqf_string_const_ref)>(&rope_create));
	boost::python::def("ropeCreate", static_cast<object(*)(const object &,sqf_string_const_ref,float)>(&rope_create));
	boost::python::def("ropeCut", static_cast<void(*)(const object &,float)>(&rope_cut));
	boost::python::def("ropeEndPosition", static_cast<std::vector<vector3>(*)(const object &)>(&rope_end_position));
	boost::python::def("ropeUnwind", static_cast<void(*)(const object &,float,float)>(&rope_unwind));
	boost::python::def("ropeUnwind", static_cast<void(*)(const object &,float,float,bool)>(&rope_unwind));
	boost::python::def("lightAttachObject", static_cast<void(*)(const object &,const object &,const vector3 &)>(&light_attach_object));
	boost::python::def("lightDetachObject", static_cast<void(*)(const object &)>(&light_detach_object));
	boost::python::def("attachedObjects", static_cast<std::vector<object>(*)(const object &)>(&attached_objects));
	boost::python::def("attachedTo", static_cast<object(*)(const object &)>(&attached_to));
	boost::python::def("attachTo", static_cast<void(*)(const object &,const object &,const vector3 &,sqf_string_const_ref)>(&attach_to));
	boost::python::def("attachTo", static_cast<void(*)(const object &,const object &,const vector3 &)>(&attach_to));
	boost::python::def("detach", static_cast<void(*)(const object &)>(&detach));
	boost::python::def("getCargoIndex", static_cast<int(*)(const object &,const object &)>(&get_cargo_index));
}

BOOST_PYTHON_MODULE(__sqf_chat)
{
	boost::python::def("sideChat", static_cast<void(*)(const object &,sqf_string_const_ref)>(&side_chat));
	boost::python::def("globalChat", static_cast<void(*)(const object &,sqf_string_const_ref)>(&global_chat));
	boost::python::def("groupChat", static_cast<void(*)(const object &,sqf_string_const_ref)>(&group_chat));
	boost::python::def("vehicleChat", static_cast<void(*)(const object &,sqf_string_const_ref)>(&vehicle_chat));
	boost::python::def("commandChat", static_cast<void(*)(const object &,sqf_string_const_ref)>(&command_chat));
	boost::python::def("systemChat", static_cast<void(*)(sqf_string_const_ref)>(&system_chat));
	boost::python::def("customChat", static_cast<void(*)(const object &,uint32_t,sqf_string_const_ref)>(&custom_chat));
	boost::python::def("shownChat", static_cast<bool(*)()>(&shown_chat));
	boost::python::def("showChat", static_cast<void(*)(bool)>(&show_chat));
	boost::python::def("enableChannel", static_cast<void(*)(float,bool)>(&enable_channel));
	boost::python::def("radioChannelSetCallSign", static_cast<void(*)(float,sqf_string_const_ref)>(&radio_channel_set_call_sign));
	boost::python::def("radioChannelSetLabel", static_cast<void(*)(float,sqf_string_const_ref)>(&radio_channel_set_label));
	boost::python::def("radioChannelCreate", static_cast<float(*)(const rv_color &,sqf_string_const_ref,sqf_string_const_ref,const std::vector<object> &)>(&radio_channel_create));
	boost::python::def("radioChannelCreate", static_cast<float(*)(const rv_color &,sqf_string_const_ref,sqf_string_const_ref,const std::vector<object> &,bool)>(&radio_channel_create));
	boost::python::def("currentChannel", static_cast<float(*)()>(&current_channel));
	boost::python::def("channelEnabled", static_cast<std::pair<bool , bool>(*)(float)>(&channel_enabled));
	boost::python::def("getPlayerChannel", static_cast<float(*)(const object &)>(&get_player_channel));
	boost::python::def("setCurrentChannel", static_cast<bool(*)(float)>(&set_current_channel));
	boost::python::def("radioChannelAdd", static_cast<void(*)(int,const std::vector<object> &)>(&radio_channel_add));
	boost::python::def("radioChannelRemove", static_cast<void(*)(int,const std::vector<object> &)>(&radio_channel_remove));
	boost::python::def("clearRadio", static_cast<void(*)()>(&clear_radio));
	boost::python::def("enableRadio", static_cast<void(*)(bool)>(&enable_radio));
	boost::python::def("globalRadio", static_cast<void(*)(const object &,sqf_string_const_ref)>(&global_radio));
	boost::python::def("setRadioMsg", static_cast<void(*)(float,sqf_string_const_ref)>(&set_radio_msg));
	boost::python::def("vehicleRadio", static_cast<void(*)(const object &,sqf_string_const_ref)>(&vehicle_radio));
	boost::python::def("customRadio", static_cast<void(*)(const object &,int,sqf_string_const_ref)>(&custom_radio));
	boost::python::def("sideradio", static_cast<void(*)(const object &,sqf_string_const_ref)>(&sideradio));
	boost::python::def("sideradio", static_cast<void(*)(const side &,sqf_string_const_ref,sqf_string_const_ref)>(&sideradio));
	boost::python::def("enableChannel", static_cast<void(*)(int,bool,bool)>(&enable_channel));
}

BOOST_PYTHON_MODULE(__sqf_config)
{
	boost::python::def("configHierarchy", static_cast<std::vector<config>(*)(const config &)>(&config_hierarchy));
	boost::python::def("configName", static_cast<sqf_return_string(*)(const config &)>(&config_name));
	boost::python::def("configProperties", static_cast<std::vector<config>(*)(const config &,sqf_string_const_ref,bool)>(&config_properties));
	boost::python::def("configSourceMod", static_cast<sqf_return_string(*)(const config &)>(&config_source_mod));
	boost::python::def("configSourceModList", static_cast<sqf_return_string_list(*)(const config &)>(&config_source_mod_list));
	boost::python::def("count", static_cast<float(*)(const config &)>(&count));
	boost::python::def("getMissionConfig", static_cast<config(*)(sqf_string_const_ref)>(&get_mission_config));
	boost::python::def("getNumber", static_cast<float(*)(const config &)>(&get_number));
	boost::python::def("getText", static_cast<sqf_return_string(*)(const config &)>(&get_text));
	boost::python::def("inheritsFrom", static_cast<config(*)(const config &)>(&inherits_from));
	boost::python::def("isArray", static_cast<bool(*)(const config &)>(&is_array));
	boost::python::def("isClass", static_cast<bool(*)(const config &)>(&is_class));
	boost::python::def("isNull", static_cast<bool(*)(const config &)>(&is_null));
	boost::python::def("isNumber", static_cast<bool(*)(const config &)>(&is_number));
	boost::python::def("isText", static_cast<bool(*)(const config &)>(&is_text));
	boost::python::def("configClasses", static_cast<std::vector<config>(*)(sqf_string_const_ref,const config &)>(&config_classes));
	boost::python::def("select", static_cast<config(*)(const config &,float)>(&select));
	boost::python::def("campaignConfigFile", static_cast<config(*)()>(&campaign_config_file));
	boost::python::def("configFile", static_cast<config(*)()>(&config_file));
	boost::python::def("configNull", static_cast<config(*)()>(&config_null));
	boost::python::def("missionConfigFile", static_cast<config(*)()>(&mission_config_file));
	boost::python::def("getArray", static_cast<game_value(*)(const config)>(&get_array));
	boost::python::def("getMissionConfigValue", static_cast<game_value(*)(sqf_string_const_ref)>(&get_mission_config_value));
	boost::python::def("getMissionConfigValue", static_cast<game_value(*)(sqf_string_const_ref,game_value)>(&get_mission_config_value));
	boost::python::def("isKindOf", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&is_kind_of));
	boost::python::def("isKindOf", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref)>(&is_kind_of));
	boost::python::def("isKindOf", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref,const config &)>(&is_kind_of));
	boost::python::def("configSourceAddonList", static_cast<sqf_return_string_list(*)(const config &)>(&config_source_addon_list));
	boost::python::def("modParams", static_cast<std::vector<game_value>(*)(sqf_string_const_ref,mod_params_options)>(&mod_params));
	boost::python::def("typeOf", static_cast<sqf_return_string(*)(const object &)>(&type_of));
	boost::python::enum_<mod_params_options>("modParamsOptions")
		.value("name", static_cast<mod_params_options>(0))
		.value("picture", static_cast<mod_params_options>(1))
		.value("logo", static_cast<mod_params_options>(2))
		.value("logoOver", static_cast<mod_params_options>(3))
		.value("logoSmall", static_cast<mod_params_options>(4))
		.value("tooltip", static_cast<mod_params_options>(5))
		.value("tooltipOwned", static_cast<mod_params_options>(6))
		.value("action", static_cast<mod_params_options>(7))
		.value("actionName", static_cast<mod_params_options>(8))
		.value("overview", static_cast<mod_params_options>(9))
		.value("hidePicture", static_cast<mod_params_options>(10))
		.value("hideName", static_cast<mod_params_options>(11))
		.value("defaultMod", static_cast<mod_params_options>(12))
		.value("serverOnly", static_cast<mod_params_options>(13))
		.value("active", static_cast<mod_params_options>(14));
	boost::python::class_<config_entry>("configEntry", boost::python::init<>())
		.def(boost::python::init<types::config>())
		.def(boost::python::init<config_entry const &>());
}

BOOST_PYTHON_MODULE(__sqf_core)
{
	boost::python::def("callExtension", static_cast<sqf_return_string(*)(sqf_string_const_ref,sqf_string_const_ref)>(&call_extension));
	boost::python::def("callExtension", static_cast<std::vector<game_value>(*)(sqf_string_const_ref,sqf_string_const_ref,std::vector<game_value> &)>(&call_extension));
	boost::python::def("call", static_cast<game_value(*)(const code &,game_value)>(&call));
	boost::python::def("call", static_cast<game_value(*)(const code &)>(&call));
	boost::python::def("isNilCode", static_cast<bool(*)(const code &)>(&is_nil_code));
	boost::python::def("compile", static_cast<code(*)(sqf_string_const_ref)>(&compile));
	boost::python::def("compileFinal", static_cast<code(*)(sqf_string_const_ref)>(&compile_final));
	boost::python::def("isNil", static_cast<bool(*)(sqf_string_const_ref)>(&is_nil));
	boost::python::def("preprocessFile", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&preprocess_file));
	boost::python::def("preprocessFileLineNumbers", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&preprocess_file_line_numbers));
	boost::python::def("loadFile", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&load_file));
	boost::python::def("parseNumber", static_cast<float(*)(sqf_string_const_ref)>(&parse_number));
	boost::python::def("parseNumber", static_cast<float(*)(bool)>(&parse_number));
	boost::python::def("parseText", static_cast<rv_text(*)(sqf_string_const_ref)>(&parse_text));
	boost::python::def("parseSimpleArray", static_cast<std::vector<game_value>(*)(sqf_string_const_ref)>(&parse_simple_array));
	boost::python::def("select", static_cast<game_value(*)(game_value,const code &)>(&select));
	boost::python::def("selectMax", static_cast<game_value(*)(const game_value &)>(&select_max));
	boost::python::def("selectMin", static_cast<game_value(*)(const game_value &)>(&select_min));
	boost::python::def("pushBackUnique", static_cast<int(*)(const std::vector<game_value> &,const game_value &)>(&push_back_unique));
	boost::python::def("random", static_cast<float(*)(float,float,std::optional<float>)>(&random));
	boost::python::def("apply", static_cast<std::vector<game_value>(*)(const std::vector<game_value> &,const code &)>(&apply));
	boost::python::def("canSuspend", static_cast<bool(*)()>(&can_suspend));
	boost::python::def("isEqualTo", static_cast<bool(*)(const object &,const object &)>(&is_equal_to));
	boost::python::def("linearConversion", static_cast<float(*)(float,float,float,float,float)>(&linear_conversion));
	boost::python::def("linearConversion", static_cast<float(*)(float,float,float,float,float,bool)>(&linear_conversion));
	boost::python::def("execVm", static_cast<script(*)(sqf_string_const_ref)>(&exec_vm));
	boost::python::def("scriptDone", static_cast<bool(*)(script)>(&script_done));
	boost::python::def("terminate", static_cast<void(*)(script)>(&terminate));
	boost::python::def("debugFsm", static_cast<void(*)(float,bool)>(&debug_fsm));
	boost::python::def("uisleep", static_cast<void(*)(float)>(&uisleep));
	boost::python::def("toLower", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&to_lower));
	boost::python::def("toUpper", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&to_upper));
	boost::python::def("sleep", static_cast<void(*)(float)>(&sleep));
	boost::python::def("finite", static_cast<bool(*)(float)>(&finite));
	boost::python::def("execFsm", static_cast<float(*)(sqf_string_const_ref)>(&exec_fsm));
	boost::python::def("saveProfileNamespace", static_cast<void(*)()>(&save_profile_namespace));
	boost::python::def("exit", static_cast<void(*)()>(&exit));
	boost::python::def("copyFromClipboard", static_cast<sqf_return_string(*)()>(&copy_from_clipboard));
	boost::python::def("copyToClipboard", static_cast<void(*)(sqf_string_const_ref)>(&copy_to_clipboard));
	boost::python::def("completedFsm", static_cast<bool(*)(float)>(&completed_fsm));
	boost::python::def("getFsmVariable", static_cast<game_value(*)(int &,sqf_string_const_ref,std::optional<game_value>)>(&get_fsm_variable));
	boost::python::def("setFsmVariable", static_cast<void(*)(float,sqf_string_const_ref,game_value)>(&set_fsm_variable));
	boost::python::def("setFsmVariable", static_cast<void(*)(int,sqf_string_const_ref,const game_value &)>(&set_fsm_variable));
	boost::python::def("execFsm", static_cast<int(*)(const game_value &,sqf_string_const_ref)>(&exec_fsm));
	boost::python::def("execVm", static_cast<script(*)(const game_value &,sqf_string_const_ref)>(&exec_vm));
	boost::python::def("exec", static_cast<void(*)(const game_value &,sqf_string_const_ref)>(&exec));
	boost::python::def("str", static_cast<sqf_return_string(*)(game_value)>(&str));
	boost::python::def("toFixed", static_cast<sqf_return_string(*)(float,int)>(&to_fixed));
	boost::python::def("setVariable", static_cast<void(*)(const display &,sqf_string_const_ref,game_value)>(&set_variable));
	boost::python::def("setVariable", static_cast<void(*)(const control &,sqf_string_const_ref,game_value)>(&set_variable));
	boost::python::def("setVariable", static_cast<void(*)(const object &,sqf_string_const_ref,game_value)>(&set_variable));
	boost::python::def("setVariable", static_cast<void(*)(const object &,sqf_string_const_ref,game_value,bool)>(&set_variable));
	boost::python::def("setVariable", static_cast<void(*)(const group &,sqf_string_const_ref,game_value)>(&set_variable));
	boost::python::def("setVariable", static_cast<void(*)(const team_member &,sqf_string_const_ref,game_value)>(&set_variable));
	boost::python::def("setVariable", static_cast<void(*)(const task &,sqf_string_const_ref,game_value)>(&set_variable));
	boost::python::def("setVariable", static_cast<void(*)(const location &,sqf_string_const_ref,game_value)>(&set_variable));
	boost::python::def("setVariable", static_cast<void(*)(const rv_namespace &,sqf_string_const_ref,game_value)>(&set_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const rv_namespace &,sqf_string_const_ref)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const rv_namespace &,sqf_string_const_ref,game_value)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const display &,sqf_string_const_ref,game_value)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const object &,sqf_string_const_ref)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const object &,sqf_string_const_ref,game_value)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const group &,sqf_string_const_ref)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const group &,sqf_string_const_ref,game_value)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const team_member &,sqf_string_const_ref)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const team_member &,sqf_string_const_ref,game_value)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const task &,sqf_string_const_ref)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const task &,sqf_string_const_ref,game_value)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const control &,sqf_string_const_ref)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const control &,sqf_string_const_ref,game_value)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const location &,sqf_string_const_ref)>(&get_variable));
	boost::python::def("getVariable", static_cast<game_value(*)(const location &,sqf_string_const_ref,game_value)>(&get_variable));
	boost::python::def("isNull", static_cast<bool(*)(const object &)>(&is_null));
	boost::python::def("isNull", static_cast<bool(*)(const control &)>(&is_null));
	boost::python::def("isNull", static_cast<bool(*)(const display &)>(&is_null));
	boost::python::def("isNull", static_cast<bool(*)(const script &)>(&is_null));
	boost::python::def("isNull", static_cast<bool(*)(const task &)>(&is_null));
	boost::python::def("scriptNull", static_cast<script(*)()>(&script_null));
	boost::python::def("uiNamespace", static_cast<rv_namespace(*)()>(&ui_namespace));
	boost::python::def("taskNull", static_cast<task(*)()>(&task_null));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const object &)>(&all_variables));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const team_member &)>(&all_variables));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(rv_namespace)>(&all_variables));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const task &)>(&all_variables));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const control &)>(&all_variables));
	boost::python::def("currentNamespace", static_cast<rv_namespace(*)()>(&current_namespace));
	boost::python::def("missionName", static_cast<sqf_return_string(*)()>(&mission_name));
	boost::python::def("missionNamespace", static_cast<rv_namespace(*)()>(&mission_namespace));
	boost::python::def("profileName", static_cast<sqf_return_string(*)()>(&profile_name));
	boost::python::def("parsingNamespace", static_cast<rv_namespace(*)()>(&parsing_namespace));
	boost::python::def("profileNamespace", static_cast<rv_namespace(*)()>(&profile_namespace));
	boost::python::def("profileNamesteam", static_cast<sqf_return_string(*)()>(&profile_namesteam));
	boost::python::def("Sqfassert", static_cast<bool(*)(bool)>(&__sqfassert));
	boost::python::def("objNull", static_cast<object(*)()>(&obj_null));
	boost::python::def("blufor", static_cast<side(*)()>(&blufor));
	boost::python::def("civilian", static_cast<side(*)()>(&civilian));
	boost::python::def("east", static_cast<side(*)()>(&east));
	boost::python::def("independent", static_cast<side(*)()>(&independent));
	boost::python::def("opfor", static_cast<side(*)()>(&opfor));
	boost::python::def("resistance", static_cast<side(*)()>(&resistance));
	boost::python::def("sideEnemy", static_cast<side(*)()>(&side_enemy));
	boost::python::def("sideFriendly", static_cast<side(*)()>(&side_friendly));
	boost::python::def("sideLogic", static_cast<side(*)()>(&side_logic));
	boost::python::def("sideUnknown", static_cast<side(*)()>(&side_unknown));
	boost::python::def("teamMemberNull", static_cast<team_member(*)()>(&team_member_null));
	boost::python::def("west", static_cast<side(*)()>(&west));
	boost::python::def("sideAmbientLife", static_cast<side(*)()>(&side_ambient_life));
	boost::python::def("sideEmpty", static_cast<side(*)()>(&side_empty));
	boost::python::def("lineBreak", static_cast<sqf_return_string(*)()>(&line_break));
	boost::python::def("onCommandModeChanged", static_cast<void(*)(const code &)>(&on_command_mode_changed));
	boost::python::def("onCommandModeChanged", static_cast<void(*)(sqf_string_const_ref)>(&on_command_mode_changed));
	boost::python::def("onDoubleClick", static_cast<game_value(*)(const control &,sqf_string_const_ref)>(&on_double_click));
	boost::python::def("onMapSingleClick", static_cast<void(*)(const game_value &,std::variant<sqf_string_const_ref_wrapper, std::reference_wrapper<const code> >)>(&on_map_single_click));
	boost::python::def("onShowNewObject", static_cast<game_value(*)(const object &,sqf_string_const_ref)>(&on_show_new_object));
	boost::python::def("addEventHandler", static_cast<float(*)(const object &,sqf_string_const_ref,const code &)>(&add_event_handler));
	boost::python::def("addEventHandler", static_cast<float(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&add_event_handler));
	boost::python::def("removeEventHandler", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&remove_event_handler));
	boost::python::def("addMissionEventHandler", static_cast<float(*)(sqf_string_const_ref,const code &)>(&add_mission_event_handler));
	boost::python::def("addMissionEventHandler", static_cast<float(*)(sqf_string_const_ref,sqf_string_const_ref)>(&add_mission_event_handler));
	boost::python::def("removeAllMissionEventHandlers", static_cast<void(*)(sqf_string_const_ref)>(&remove_all_mission_event_handlers));
	boost::python::def("removeAllEventHandlers", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_all_event_handlers));
	boost::python::def("removeAllMpeventHandlers", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_all_mpevent_handlers));
	boost::python::def("removeMissionEventHandler", static_cast<void(*)(sqf_string_const_ref,float)>(&remove_mission_event_handler));
	boost::python::def("addMpEventHandler", static_cast<int(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&add_mp_event_handler));
	boost::python::def("addMpEventHandler", static_cast<int(*)(const object &,sqf_string_const_ref,const code &)>(&add_mp_event_handler));
	boost::python::def("removeMpEventHandler", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&remove_mp_event_handler));
	boost::python::def("addPublicVariableEventhandler", static_cast<void(*)(sqf_string_const_ref,const code &)>(&add_public_variable_eventhandler));
	boost::python::def("addPublicVariableEventhandler", static_cast<void(*)(sqf_string_const_ref,const object &,const code &)>(&add_public_variable_eventhandler));
	boost::python::def("userInputDisabled", static_cast<bool(*)()>(&user_input_disabled));
	boost::python::def("screenShot", static_cast<bool(*)(sqf_string_const_ref)>(&screen_shot));
	boost::python::def("cursorObject", static_cast<object(*)()>(&cursor_object));
	boost::python::def("cursorTarget", static_cast<object(*)()>(&cursor_target));
	boost::python::def("supportInfo", static_cast<sqf_return_string_list(*)(sqf_string_const_ref)>(&support_info));
	boost::python::def("allMissionObjects", static_cast<std::vector<object>(*)(sqf_string_const_ref)>(&all_mission_objects));
	boost::python::def("allCurators", static_cast<std::vector<object>(*)()>(&all_curators));
	boost::python::def("allDead", static_cast<std::vector<object>(*)()>(&all_dead));
	boost::python::def("allDeadmen", static_cast<std::vector<object>(*)()>(&all_deadmen));
	boost::python::def("allDisplays", static_cast<std::vector<display>(*)()>(&all_displays));
	boost::python::def("allGroups", static_cast<std::vector<group>(*)()>(&all_groups));
	boost::python::def("allMines", static_cast<std::vector<object>(*)()>(&all_mines));
	boost::python::def("allPlayers", static_cast<std::vector<object>(*)()>(&all_players));
	boost::python::def("allUnits", static_cast<std::vector<object>(*)()>(&all_units));
	boost::python::def("allUnitsUav", static_cast<std::vector<object>(*)()>(&all_units_uav));
	boost::python::def("allSimpleObjects", static_cast<std::vector<object>(*)(sqf_string_list_const_ref)>(&all_simple_objects));
	boost::python::def("activatedAddons", static_cast<sqf_return_string_list(*)()>(&activated_addons));
	boost::python::def("image", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&image));
	boost::python::def("isLocalized", static_cast<bool(*)(sqf_string_const_ref)>(&is_localized));
	boost::python::def("localize", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&localize));
	boost::python::def("text", static_cast<game_value(*)(sqf_string_const_ref)>(&text));
	boost::python::def("format", static_cast<sqf_return_string(*)(const std::vector<game_value> &)>(&format));
	boost::python::def("composeText", static_cast<sqf_return_string(*)(sqf_string_list_const_ref)>(&compose_text));
	boost::python::def("endl", static_cast<sqf_return_string(*)()>(&endl));
	boost::python::def("verifySignature", static_cast<bool(*)(sqf_string_const_ref)>(&verify_signature));
	boost::python::def("scriptName", static_cast<void(*)(sqf_string_const_ref)>(&script_name));
	boost::python::def("requiredVersion", static_cast<bool(*)(sqf_string_const_ref)>(&required_version));
	boost::python::def("saveVar", static_cast<void(*)(sqf_string_const_ref)>(&save_var));
	boost::python::def("scopeName", static_cast<void(*)(sqf_string_const_ref)>(&scope_name));
	boost::python::def("playableSlotsNumber", static_cast<float(*)(const side &)>(&playable_slots_number));
	boost::python::def("playersNumber", static_cast<float(*)(const side &)>(&players_number));
	boost::python::def("pi", static_cast<float(*)()>(&pi));
	boost::python::def("playableUnits", static_cast<std::vector<object>(*)()>(&playable_units));
	boost::python::def("player", static_cast<object(*)()>(&player));
	boost::python::def("playerRespawnTime", static_cast<float(*)()>(&player_respawn_time));
	boost::python::def("playerSide", static_cast<side(*)()>(&player_side));
	boost::python::def("switchableUnits", static_cast<std::vector<object>(*)()>(&switchable_units));
	boost::python::def("addSwitchableUnit", static_cast<void(*)(const object &)>(&add_switchable_unit));
	boost::python::def("createCenter", static_cast<side(*)(const side &)>(&create_center));
	boost::python::def("deleteCenter", static_cast<void(*)(const side &)>(&delete_center));
	boost::python::def("disableUserInput", static_cast<void(*)(bool)>(&disable_user_input));
	boost::python::def("echo", static_cast<void(*)(sqf_string_const_ref)>(&echo));
	boost::python::def("endMission", static_cast<void(*)(sqf_string_const_ref)>(&end_mission));
	boost::python::def("estimatedTimeLeft", static_cast<void(*)(float)>(&estimated_time_left));
	boost::python::def("failMission", static_cast<void(*)(sqf_string_const_ref)>(&fail_mission));
	boost::python::def("countEnemy", static_cast<int(*)(const object &,const std::vector<object> &)>(&count_enemy));
	boost::python::def("countFriendly", static_cast<int(*)(const object &,const std::vector<object> &)>(&count_friendly));
	boost::python::def("countType", static_cast<int(*)(sqf_string_const_ref,const std::vector<object> &)>(&count_type));
	boost::python::def("countUnknown", static_cast<int(*)(const object &,const std::vector<object> &)>(&count_unknown));
	boost::python::def("getCursorObjectParams", static_cast<rv_cursor_object_params(*)()>(&get_cursor_object_params));
}

BOOST_PYTHON_MODULE(__sqf_ctrl)
{
	boost::python::def("ctrlCreate", static_cast<control(*)(const display &,sqf_string_const_ref,int)>(&ctrl_create));
	boost::python::def("ctrlCreate", static_cast<control(*)(const display &,sqf_string_const_ref,int,const control &)>(&ctrl_create));
	boost::python::def("ctrlAutoScrollRewind", static_cast<bool(*)(const control &)>(&ctrl_auto_scroll_rewind));
	boost::python::def("ctrlChecked", static_cast<bool(*)(const control &)>(&ctrl_checked));
	boost::python::def("ctrlCommitted", static_cast<bool(*)(const control &)>(&ctrl_committed));
	boost::python::def("ctrlDelete", static_cast<bool(*)(const control &)>(&ctrl_delete));
	boost::python::def("ctrlEnabled", static_cast<bool(*)(const control &)>(&ctrl_enabled));
	boost::python::def("ctrlEnabled", static_cast<bool(*)(float)>(&ctrl_enabled));
	boost::python::def("ctrlHtmlloaded", static_cast<bool(*)(const control &)>(&ctrl_htmlloaded));
	boost::python::def("ctrlMapAnimDone", static_cast<bool(*)(const control &)>(&ctrl_map_anim_done));
	boost::python::def("ctrlShown", static_cast<bool(*)(const control &)>(&ctrl_shown));
	boost::python::def("ctrlVisible", static_cast<bool(*)(float)>(&ctrl_visible));
	boost::python::def("ctrlCommit", static_cast<void(*)(const control &,float)>(&ctrl_commit));
	boost::python::def("ctrlEnable", static_cast<void(*)(int,bool)>(&ctrl_enable));
	boost::python::def("ctrlEnable", static_cast<void(*)(const control &,bool)>(&ctrl_enable));
	boost::python::def("ctrlSetDisabledColor", static_cast<void(*)(const control &,const rv_color &)>(&ctrl_set_disabled_color));
	boost::python::def("ctrlSetFade", static_cast<void(*)(const control &,float)>(&ctrl_set_fade));
	boost::python::def("ctrlSetFont", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font));
	boost::python::def("ctrlSetFontH1", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h1));
	boost::python::def("ctrlSetFontH1B", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h1b));
	boost::python::def("ctrlSetFontH2", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h2));
	boost::python::def("ctrlSetFontH2B", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h2b));
	boost::python::def("ctrlSetFontH3", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h3));
	boost::python::def("ctrlSetFontH3B", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h3b));
	boost::python::def("ctrlSetFontH4", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h4));
	boost::python::def("ctrlSetFontH4B", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h4b));
	boost::python::def("ctrlSetFontH5", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h5));
	boost::python::def("ctrlSetFontH5B", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h5b));
	boost::python::def("ctrlSetFontH6", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h6));
	boost::python::def("ctrlSetFontH6B", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_h6b));
	boost::python::def("ctrlSetFontHeight", static_cast<void(*)(const control &,float)>(&ctrl_set_font_height));
	boost::python::def("ctrlSetFontHeightH1", static_cast<void(*)(const control &,float)>(&ctrl_set_font_height_h1));
	boost::python::def("ctrlSetFontHeightH2", static_cast<void(*)(const control &,float)>(&ctrl_set_font_height_h2));
	boost::python::def("ctrlSetFontHeightH3", static_cast<void(*)(const control &,float)>(&ctrl_set_font_height_h3));
	boost::python::def("ctrlSetFontHeightH4", static_cast<void(*)(const control &,float)>(&ctrl_set_font_height_h4));
	boost::python::def("ctrlSetFontHeightH5", static_cast<void(*)(const control &,float)>(&ctrl_set_font_height_h5));
	boost::python::def("ctrlSetFontHeightH6", static_cast<void(*)(const control &,float)>(&ctrl_set_font_height_h6));
	boost::python::def("ctrlSetFontHeightSecondary", static_cast<void(*)(const control &,float)>(&ctrl_set_font_height_secondary));
	boost::python::def("ctrlSetFontP", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_p));
	boost::python::def("ctrlSetFontP", static_cast<void(*)(const control &,float)>(&ctrl_set_font_p));
	boost::python::def("ctrlSetFontPb", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_pb));
	boost::python::def("ctrlSetFontSecondary", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_secondary));
	boost::python::def("ctrlSetModel", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_model));
	boost::python::def("ctrlSetModelScale", static_cast<void(*)(const control &,float)>(&ctrl_set_model_scale));
	boost::python::def("ctrlSetScale", static_cast<void(*)(const control &,float)>(&ctrl_set_scale));
	boost::python::def("ctrlSetStructuredText", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_structured_text));
	boost::python::def("ctrlSetText", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_text));
	boost::python::def("ctrlSetText", static_cast<void(*)(int,sqf_string_const_ref)>(&ctrl_set_text));
	boost::python::def("ctrlSetTextSecondary", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_text_secondary));
	boost::python::def("ctrlSetTooltip", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_tooltip));
	boost::python::def("ctrlShow", static_cast<void(*)(const control &,bool)>(&ctrl_show));
	boost::python::def("ctrlShow", static_cast<void(*)(int,bool)>(&ctrl_show));
	boost::python::def("ctrlSetForegroundColor", static_cast<void(*)(const control &,const rv_color &)>(&ctrl_set_foreground_color));
	boost::python::def("ctrlSetModelDirAndUp", static_cast<void(*)(const control &,const vector3 &,const vector3 &)>(&ctrl_set_model_dir_and_up));
	boost::python::def("ctrlSetTextColor", static_cast<void(*)(const control &,const rv_color &)>(&ctrl_set_text_color));
	boost::python::def("ctrlSetTooltipColorBox", static_cast<void(*)(const control &,const rv_color &)>(&ctrl_set_tooltip_color_box));
	boost::python::def("ctrlSetTooltipColorShade", static_cast<void(*)(const control &,const rv_color &)>(&ctrl_set_tooltip_color_shade));
	boost::python::def("ctrlSetTooltipColorText", static_cast<void(*)(const control &,const rv_color &)>(&ctrl_set_tooltip_color_text));
	boost::python::def("ctrlActivate", static_cast<void(*)(const control &)>(&ctrl_activate));
	boost::python::def("ctrlMapAnimClear", static_cast<void(*)(const control &)>(&ctrl_map_anim_clear));
	boost::python::def("ctrlMapAnimCommit", static_cast<void(*)(const control &)>(&ctrl_map_anim_commit));
	boost::python::def("ctrlMapCursor", static_cast<void(*)(const control &,sqf_string_const_ref,sqf_string_const_ref)>(&ctrl_map_cursor));
	boost::python::def("ctrlRemoveAllEventHandlers", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_remove_all_event_handlers));
	boost::python::def("ctrlRemoveEventHandler", static_cast<void(*)(const control &,sqf_string_const_ref,float &)>(&ctrl_remove_event_handler));
	boost::python::def("ctrlSetActiveColor", static_cast<void(*)(const control &,const rv_color &)>(&ctrl_set_active_color));
	boost::python::def("ctrlSetAutoScrollDelay", static_cast<void(*)(const control &,float)>(&ctrl_set_auto_scroll_delay));
	boost::python::def("ctrlSetAutoScrollRewind", static_cast<void(*)(const control &,bool)>(&ctrl_set_auto_scroll_rewind));
	boost::python::def("ctrlSetAutoScrollSpeed", static_cast<void(*)(const control &,float)>(&ctrl_set_auto_scroll_speed));
	boost::python::def("ctrlSetBackgroundColor", static_cast<void(*)(const control &,const rv_color &)>(&ctrl_set_background_color));
	boost::python::def("ctrlSetChecked", static_cast<void(*)(const control &,bool)>(&ctrl_set_checked));
	boost::python::def("ctrlSetFocus", static_cast<void(*)(const control &)>(&ctrl_set_focus));
	boost::python::def("ctrlAutoScrollDelay", static_cast<float(*)(const control &)>(&ctrl_auto_scroll_delay));
	boost::python::def("ctrlAutoScrollSpeed", static_cast<float(*)(const control &)>(&ctrl_auto_scroll_speed));
	boost::python::def("ctrlFade", static_cast<float(*)(const control &)>(&ctrl_fade));
	boost::python::def("ctrlIdc", static_cast<float(*)(const control &)>(&ctrl_idc));
	boost::python::def("ctrlIdd", static_cast<float(*)(const display &)>(&ctrl_idd));
	boost::python::def("ctrlMapScale", static_cast<float(*)(const control &)>(&ctrl_map_scale));
	boost::python::def("ctrlModelScale", static_cast<float(*)(const control &)>(&ctrl_model_scale));
	boost::python::def("ctrlScale", static_cast<float(*)(const control &)>(&ctrl_scale));
	boost::python::def("ctrlTextHeight", static_cast<float(*)(const control &)>(&ctrl_text_height));
	boost::python::def("ctrlType", static_cast<float(*)(const control &)>(&ctrl_type));
	boost::python::def("ctrlClassName", static_cast<sqf_return_string(*)(const control &)>(&ctrl_class_name));
	boost::python::def("ctrlModel", static_cast<sqf_return_string(*)(const control &)>(&ctrl_model));
	boost::python::def("ctrlText", static_cast<sqf_return_string(*)(const control &)>(&ctrl_text));
	boost::python::def("ctrlText", static_cast<sqf_return_string(*)(float)>(&ctrl_text));
	boost::python::def("ctrlTextSecondary", static_cast<sqf_return_string(*)(const control &)>(&ctrl_text_secondary));
	boost::python::def("ctrlSetPosition", static_cast<void(*)(const control &,float,float,float,float)>(&ctrl_set_position));
	boost::python::def("ctrlPosition", static_cast<std::vector<float>(*)(const control &)>(&ctrl_position));
	boost::python::def("ctrlMapAnimAdd", static_cast<void(*)(const control &,float,float,vector2)>(&ctrl_map_anim_add));
	boost::python::def("ctrlParent", static_cast<display(*)(const control &)>(&ctrl_parent));
	boost::python::def("ctrlParentControlsGroup", static_cast<control(*)(const control &)>(&ctrl_parent_controls_group));
	boost::python::def("ctrlModelDirAndUp", static_cast<std::vector<vector3>(*)(const control &)>(&ctrl_model_dir_and_up));
	boost::python::def("ctrlMapWorldToScreen", static_cast<vector2(*)(const control &,const std::variant<vector2, vector3> &)>(&ctrl_map_world_to_screen));
	boost::python::def("ctrlMapScreenToWorld", static_cast<vector2(*)(const control &,const vector2 &)>(&ctrl_map_screen_to_world));
	boost::python::def("ctrlSetEventHandler", static_cast<void(*)(const control &,sqf_string_const_ref,sqf_string_const_ref)>(&ctrl_set_event_handler));
	boost::python::def("ctrlAddEventHandler", static_cast<float(*)(const control &,sqf_string_const_ref,sqf_string_const_ref)>(&ctrl_add_event_handler));
	boost::python::def("ctrlAddEventHandler", static_cast<float(*)(const control &,sqf_string_const_ref,const code &)>(&ctrl_add_event_handler));
	boost::python::def("lnbDeleteColumn", static_cast<void(*)(const control &,float)>(&lnb_delete_column));
	boost::python::def("lnbDeleteRow", static_cast<void(*)(const control &,float)>(&lnb_delete_row));
	boost::python::def("lnbSetCurSelRow", static_cast<void(*)(float,float)>(&lnb_set_cur_sel_row));
	boost::python::def("lnbSetCurSelRow", static_cast<void(*)(const control &,float)>(&lnb_set_cur_sel_row));
	boost::python::def("lnbDeleteColumn", static_cast<void(*)(float,float)>(&lnb_delete_column));
	boost::python::def("lnbDeleteRow", static_cast<void(*)(float,float)>(&lnb_delete_row));
	boost::python::def("lnbSetColor", static_cast<void(*)(float,float,float,const rv_color &)>(&lnb_set_color));
	boost::python::def("lnbSetColor", static_cast<void(*)(const control &,float,float,const rv_color &)>(&lnb_set_color));
	boost::python::def("lnbSetColumnsPos", static_cast<void(*)(float,std::vector<float>)>(&lnb_set_columns_pos));
	boost::python::def("lnbSetColumnsPos", static_cast<void(*)(const control &,std::vector<float>)>(&lnb_set_columns_pos));
	boost::python::def("lnbSetData", static_cast<void(*)(float,float,float,sqf_string_const_ref)>(&lnb_set_data));
	boost::python::def("lnbSetData", static_cast<void(*)(const control &,float,float,sqf_string_const_ref)>(&lnb_set_data));
	boost::python::def("lnbSetPicture", static_cast<void(*)(float,float,float,sqf_string_const_ref)>(&lnb_set_picture));
	boost::python::def("lnbSetPicture", static_cast<void(*)(const control &,float,float,sqf_string_const_ref)>(&lnb_set_picture));
	boost::python::def("lnbSetText", static_cast<void(*)(float,float,float,const game_value &)>(&lnb_set_text));
	boost::python::def("lnbSetText", static_cast<void(*)(const control &,float,float,const game_value &)>(&lnb_set_text));
	boost::python::def("lnbSetValue", static_cast<void(*)(float,float,float,float)>(&lnb_set_value));
	boost::python::def("lnbSetValue", static_cast<void(*)(const control &,float,float,float)>(&lnb_set_value));
	boost::python::def("lnbClear", static_cast<void(*)(const control &)>(&lnb_clear));
	boost::python::def("lnbClear", static_cast<void(*)(float)>(&lnb_clear));
	boost::python::def("lnbAddArray", static_cast<float(*)(float,const std::vector<rv_lnb_array> &)>(&lnb_add_array));
	boost::python::def("lnbAddArray", static_cast<float(*)(const control &,const std::vector<rv_lnb_array> &)>(&lnb_add_array));
	boost::python::def("lnbAddRow", static_cast<float(*)(float,sqf_string_list_const_ref)>(&lnb_add_row));
	boost::python::def("lnbAddRow", static_cast<float(*)(const control &,sqf_string_list_const_ref)>(&lnb_add_row));
	boost::python::def("lnbValue", static_cast<float(*)(float,float,float)>(&lnb_value));
	boost::python::def("lnbValue", static_cast<float(*)(const control &,float,float)>(&lnb_value));
	boost::python::def("lnbAddColumn", static_cast<float(*)(const control &,float)>(&lnb_add_column));
	boost::python::def("lnbCurSelRow", static_cast<float(*)(const control &)>(&lnb_cur_sel_row));
	boost::python::def("lnbCurSelRow", static_cast<float(*)(float)>(&lnb_cur_sel_row));
	boost::python::def("lnbData", static_cast<sqf_return_string(*)(float,float,float)>(&lnb_data));
	boost::python::def("lnbData", static_cast<sqf_return_string(*)(const control &,float,float)>(&lnb_data));
	boost::python::def("lnbPicture", static_cast<sqf_return_string(*)(float,float,float)>(&lnb_picture));
	boost::python::def("lnbPicture", static_cast<sqf_return_string(*)(const control &,float,float)>(&lnb_picture));
	boost::python::def("lnbText", static_cast<sqf_return_string(*)(float,float,float)>(&lnb_text));
	boost::python::def("lnbText", static_cast<sqf_return_string(*)(const control &,float,float)>(&lnb_text));
	boost::python::def("lnbGetColumnsPosition", static_cast<std::vector<float>(*)(float)>(&lnb_get_columns_position));
	boost::python::def("lnbGetColumnsPosition", static_cast<std::vector<float>(*)(const control &)>(&lnb_get_columns_position));
	boost::python::def("lnbSize", static_cast<std::vector<float>(*)(float)>(&lnb_size));
	boost::python::def("lnbSize", static_cast<std::vector<float>(*)(const control &)>(&lnb_size));
	boost::python::def("lnbColor", static_cast<rv_color(*)(float,float,float)>(&lnb_color));
	boost::python::def("lnbColor", static_cast<rv_color(*)(const control &,float,float)>(&lnb_color));
	boost::python::def("lbIsSelected", static_cast<bool(*)(const control &,float)>(&lb_is_selected));
	boost::python::def("lbDelete", static_cast<void(*)(int,int)>(&lb_delete));
	boost::python::def("lbDelete", static_cast<void(*)(const control &,int)>(&lb_delete));
	boost::python::def("lbSetColor", static_cast<void(*)(int,int,rv_color)>(&lb_set_color));
	boost::python::def("lbSetColor", static_cast<void(*)(const control &,int,const rv_color &)>(&lb_set_color));
	boost::python::def("lbSetColorRight", static_cast<void(*)(int,int,const rv_color &)>(&lb_set_color_right));
	boost::python::def("lbSetColorRight", static_cast<void(*)(const control &,int,const rv_color &)>(&lb_set_color_right));
	boost::python::def("lbSetCurSel", static_cast<void(*)(int,int)>(&lb_set_cur_sel));
	boost::python::def("lbSetCurSel", static_cast<void(*)(const control &,int)>(&lb_set_cur_sel));
	boost::python::def("lbSetData", static_cast<void(*)(int,int,sqf_string_const_ref)>(&lb_set_data));
	boost::python::def("lbSetData", static_cast<void(*)(const control &,int,sqf_string_const_ref)>(&lb_set_data));
	boost::python::def("lbSetPicture", static_cast<void(*)(int,int,sqf_string_const_ref)>(&lb_set_picture));
	boost::python::def("lbSetPicture", static_cast<void(*)(const control &,int,sqf_string_const_ref)>(&lb_set_picture));
	boost::python::def("lbSetPictureRight", static_cast<void(*)(int,int,sqf_string_const_ref)>(&lb_set_picture_right));
	boost::python::def("lbSetPictureRight", static_cast<void(*)(const control &,int,sqf_string_const_ref)>(&lb_set_picture_right));
	boost::python::def("lbSetPictureColor", static_cast<void(*)(int,int,const rv_color &)>(&lb_set_picture_color));
	boost::python::def("lbSetPictureColor", static_cast<void(*)(const control &,int,const rv_color &)>(&lb_set_picture_color));
	boost::python::def("lbSetPictureColorDisabled", static_cast<void(*)(int,int,const rv_color &)>(&lb_set_picture_color_disabled));
	boost::python::def("lbSetPictureColorDisabled", static_cast<void(*)(const control &,int,const rv_color &)>(&lb_set_picture_color_disabled));
	boost::python::def("lbSetPictureColorSelected", static_cast<void(*)(int,int,const rv_color &)>(&lb_set_picture_color_selected));
	boost::python::def("lbSetPictureColorSelected", static_cast<void(*)(const control &,int,const rv_color &)>(&lb_set_picture_color_selected));
	boost::python::def("lbSetPictureRightColor", static_cast<void(*)(const control &,int,const rv_color &)>(&lb_set_picture_right_color));
	boost::python::def("lbSetPictureRightColorDisabled", static_cast<void(*)(const control &,int,const rv_color &)>(&lb_set_picture_right_color_disabled));
	boost::python::def("lbSetPictureRightColorSelected", static_cast<void(*)(const control &,int,const rv_color &)>(&lb_set_picture_right_color_selected));
	boost::python::def("lbSetText", static_cast<void(*)(const control &,int,sqf_string_const_ref)>(&lb_set_text));
	boost::python::def("lbSetTooltip", static_cast<void(*)(int,int,sqf_string_const_ref)>(&lb_set_tooltip));
	boost::python::def("lbSetTooltip", static_cast<void(*)(const control &,int,sqf_string_const_ref)>(&lb_set_tooltip));
	boost::python::def("lbSetValue", static_cast<void(*)(int,int,float)>(&lb_set_value));
	boost::python::def("lbSetValue", static_cast<void(*)(const control &,int,float)>(&lb_set_value));
	boost::python::def("lbSetSelectColor", static_cast<void(*)(int,int,const rv_color &)>(&lb_set_select_color));
	boost::python::def("lbSetSelectColorRight", static_cast<void(*)(int,int,const rv_color &)>(&lb_set_select_color_right));
	boost::python::def("lbClear", static_cast<void(*)(const control &)>(&lb_clear));
	boost::python::def("lbClear", static_cast<void(*)(float)>(&lb_clear));
	boost::python::def("lbAdd", static_cast<float(*)(int,sqf_string_const_ref)>(&lb_add));
	boost::python::def("lbAdd", static_cast<float(*)(const control &,sqf_string_const_ref)>(&lb_add));
	boost::python::def("lbColor", static_cast<float(*)(int,int)>(&lb_color));
	boost::python::def("lbColor", static_cast<float(*)(const control &,int)>(&lb_color));
	boost::python::def("lbColorRight", static_cast<float(*)(int,int)>(&lb_color_right));
	boost::python::def("lbColorRight", static_cast<float(*)(const control &,int)>(&lb_color_right));
	boost::python::def("lbValue", static_cast<float(*)(int,int)>(&lb_value));
	boost::python::def("lbValue", static_cast<float(*)(const control &,int)>(&lb_value));
	boost::python::def("lbCurSel", static_cast<float(*)(const control &)>(&lb_cur_sel));
	boost::python::def("lbCurSel", static_cast<float(*)(float)>(&lb_cur_sel));
	boost::python::def("lbSize", static_cast<float(*)(const control &)>(&lb_size));
	boost::python::def("lbSize", static_cast<float(*)(float)>(&lb_size));
	boost::python::def("lbData", static_cast<sqf_return_string(*)(int,int)>(&lb_data));
	boost::python::def("lbData", static_cast<sqf_return_string(*)(const control &,int)>(&lb_data));
	boost::python::def("lbPicture", static_cast<sqf_return_string(*)(int,int)>(&lb_picture));
	boost::python::def("lbPicture", static_cast<sqf_return_string(*)(const control &,int)>(&lb_picture));
	boost::python::def("lbPictureRight", static_cast<sqf_return_string(*)(int,int)>(&lb_picture_right));
	boost::python::def("lbPictureRight", static_cast<sqf_return_string(*)(const control &,int)>(&lb_picture_right));
	boost::python::def("lbText", static_cast<sqf_return_string(*)(int,int)>(&lb_text));
	boost::python::def("lbText", static_cast<sqf_return_string(*)(const control &,int)>(&lb_text));
	boost::python::def("lbTextRight", static_cast<sqf_return_string(*)(int,int)>(&lb_text_right));
	boost::python::def("lbTextRight", static_cast<sqf_return_string(*)(const control &,int)>(&lb_text_right));
	boost::python::def("lbDelete", static_cast<void(*)(const control &,float)>(&lb_delete));
	boost::python::def("lbSetCurSel", static_cast<void(*)(const control &,float)>(&lb_set_cur_sel));
	boost::python::def("lbValue", static_cast<float(*)(const control &,float)>(&lb_value));
	boost::python::def("lbData", static_cast<sqf_return_string(*)(const control &,float)>(&lb_data));
	boost::python::def("lbPicture", static_cast<sqf_return_string(*)(const control &,float)>(&lb_picture));
	boost::python::def("lbPictureRight", static_cast<sqf_return_string(*)(const control &,float)>(&lb_picture_right));
	boost::python::def("lbText", static_cast<sqf_return_string(*)(const control &,float)>(&lb_text));
	boost::python::def("lbTextRight", static_cast<sqf_return_string(*)(const control &,float)>(&lb_text_right));
	boost::python::def("tvSetText", static_cast<void(*)(float,const std::vector<float> &,sqf_string_const_ref)>(&tv_set_text));
	boost::python::def("tvSetText", static_cast<void(*)(const control &,const std::vector<float> &,sqf_string_const_ref)>(&tv_set_text));
	boost::python::def("tvCollapse", static_cast<void(*)(int,const std::vector<int> &)>(&tv_collapse));
	boost::python::def("tvCollapse", static_cast<void(*)(const control &,const std::vector<int> &)>(&tv_collapse));
	boost::python::def("tvDelete", static_cast<void(*)(int,const std::vector<int> &)>(&tv_delete));
	boost::python::def("tvDelete", static_cast<void(*)(const control &,const std::vector<int> &)>(&tv_delete));
	boost::python::def("tvExpand", static_cast<void(*)(int,const std::vector<int> &)>(&tv_expand));
	boost::python::def("tvExpand", static_cast<void(*)(const control &,const std::vector<int> &)>(&tv_expand));
	boost::python::def("tvSetCurSel", static_cast<void(*)(int,const std::vector<int> &)>(&tv_set_cur_sel));
	boost::python::def("tvSetCurSel", static_cast<void(*)(const control &,const std::vector<int> &)>(&tv_set_cur_sel));
	boost::python::def("tvSetData", static_cast<void(*)(int,const std::vector<int> &,sqf_string_const_ref)>(&tv_set_data));
	boost::python::def("tvSetData", static_cast<void(*)(const control &,const std::vector<int> &,sqf_string_const_ref)>(&tv_set_data));
	boost::python::def("tvSetPicture", static_cast<void(*)(int,const std::vector<int> &,sqf_string_const_ref)>(&tv_set_picture));
	boost::python::def("tvSetPicture", static_cast<void(*)(const control &,const std::vector<int> &,sqf_string_const_ref)>(&tv_set_picture));
	boost::python::def("tvSetPictureRight", static_cast<void(*)(int,const std::vector<int> &,sqf_string_const_ref)>(&tv_set_picture_right));
	boost::python::def("tvSetPictureRight", static_cast<void(*)(const control &,const std::vector<int> &,sqf_string_const_ref)>(&tv_set_picture_right));
	boost::python::def("tvSetPictureColor", static_cast<void(*)(int,const std::vector<int> &,const rv_color &)>(&tv_set_picture_color));
	boost::python::def("tvSetPictureColor", static_cast<void(*)(const control &,const std::vector<int> &,const rv_color &)>(&tv_set_picture_color));
	boost::python::def("tvSetPictureRightColor", static_cast<void(*)(int,const std::vector<int> &,const rv_color &)>(&tv_set_picture_right_color));
	boost::python::def("tvSetPictureRightColor", static_cast<void(*)(const control &,const std::vector<int> &,const rv_color &)>(&tv_set_picture_right_color));
	boost::python::def("tvSetTooltip", static_cast<void(*)(int,const std::vector<int> &,sqf_string_const_ref)>(&tv_set_tooltip));
	boost::python::def("tvSetTooltip", static_cast<void(*)(const control &,const std::vector<int> &,sqf_string_const_ref)>(&tv_set_tooltip));
	boost::python::def("tvSetValue", static_cast<void(*)(const control &,const std::vector<int> &,float)>(&tv_set_value));
	boost::python::def("tvSetValue", static_cast<void(*)(int,const std::vector<int> &,float)>(&tv_set_value));
	boost::python::def("tvSort", static_cast<void(*)(const control &,const std::vector<int> &,bool)>(&tv_sort));
	boost::python::def("tvSortByValue", static_cast<void(*)(const control &,const std::vector<int> &,bool)>(&tv_sort_by_value));
	boost::python::def("tvClear", static_cast<void(*)(float)>(&tv_clear));
	boost::python::def("tvClear", static_cast<void(*)(const control &)>(&tv_clear));
	boost::python::def("tvData", static_cast<sqf_return_string(*)(int,const std::vector<int> &)>(&tv_data));
	boost::python::def("tvData", static_cast<sqf_return_string(*)(const control &,const std::vector<int> &)>(&tv_data));
	boost::python::def("tvPicture", static_cast<sqf_return_string(*)(int,const std::vector<int> &)>(&tv_picture));
	boost::python::def("tvPicture", static_cast<sqf_return_string(*)(const control &,const std::vector<int> &)>(&tv_picture));
	boost::python::def("tvPictureRight", static_cast<sqf_return_string(*)(int,const std::vector<int> &)>(&tv_picture_right));
	boost::python::def("tvPictureRight", static_cast<sqf_return_string(*)(const control &,const std::vector<int> &)>(&tv_picture_right));
	boost::python::def("tvText", static_cast<sqf_return_string(*)(int,const std::vector<int> &)>(&tv_text));
	boost::python::def("tvText", static_cast<sqf_return_string(*)(const control &,const std::vector<int> &)>(&tv_text));
	boost::python::def("tvValue", static_cast<float(*)(int,const std::vector<int> &)>(&tv_value));
	boost::python::def("tvValue", static_cast<float(*)(const control &,const std::vector<int> &)>(&tv_value));
	boost::python::def("tvAdd", static_cast<int(*)(int,const std::vector<int> &,sqf_string_const_ref)>(&tv_add));
	boost::python::def("tvAdd", static_cast<int(*)(const control &,const std::vector<int> &,sqf_string_const_ref)>(&tv_add));
	boost::python::def("tvCount", static_cast<int(*)(int,const std::vector<int> &)>(&tv_count));
	boost::python::def("tvCount", static_cast<int(*)(const control &,const std::vector<int> &)>(&tv_count));
	boost::python::def("tvCursel", static_cast<std::vector<int>(*)(int)>(&tv_cursel));
	boost::python::def("tvCursel", static_cast<std::vector<int>(*)(const control &)>(&tv_cursel));
	boost::python::def("tvSetColor", static_cast<void(*)(const control &,const std::vector<int> &,const rv_color &)>(&tv_set_color));
	boost::python::def("tvSetPictureColorDisabled", static_cast<void(*)(const control &,const std::vector<int> &,const rv_color &)>(&tv_set_picture_color_disabled));
	boost::python::def("tvSetPictureColorSelected", static_cast<void(*)(const control &,const std::vector<int> &,const rv_color &)>(&tv_set_picture_color_selected));
	boost::python::def("tvSetPictureColorRightSelected", static_cast<void(*)(const control &,const std::vector<int> &,const rv_color &)>(&tv_set_picture_color__right_selected));
	boost::python::def("tvSetPictureColorRightDisabled", static_cast<void(*)(const control &,const std::vector<int> &,const rv_color &)>(&tv_set_picture_color__right_disabled));
	boost::python::def("tvSetSelectColor", static_cast<void(*)(const control &,const std::vector<int> &,const rv_color &)>(&tv_set_select_color));
	boost::python::def("tvSetText", static_cast<void(*)(const control &,const std::vector<int> &,sqf_string_const_ref)>(&tv_set_text));
	boost::python::def("tvTooltip", static_cast<sqf_return_string(*)(const control &,const std::vector<int> &)>(&tv_tooltip));
	boost::python::def("tvCollapseAll", static_cast<void(*)(int)>(&tv_collapse_all));
	boost::python::def("tvCollapseAll", static_cast<void(*)(const control &)>(&tv_collapse_all));
	boost::python::def("tvExpandAll", static_cast<void(*)(int)>(&tv_expand_all));
	boost::python::def("tvExpandAll", static_cast<void(*)(const control &)>(&tv_expand_all));
	boost::python::def("sliderSetRange", static_cast<void(*)(float,float,float)>(&slider_set_range));
	boost::python::def("sliderSetRange", static_cast<void(*)(const control &,float,float)>(&slider_set_range));
	boost::python::def("sliderSetSpeed", static_cast<void(*)(float,float,float)>(&slider_set_speed));
	boost::python::def("sliderSetSpeed", static_cast<void(*)(const control &,float,float)>(&slider_set_speed));
	boost::python::def("sliderSetPosition", static_cast<void(*)(float,float)>(&slider_set_position));
	boost::python::def("sliderSetPosition", static_cast<void(*)(const control &,float)>(&slider_set_position));
	boost::python::def("sliderRange", static_cast<vector2(*)(const float &)>(&slider_range));
	boost::python::def("sliderRange", static_cast<vector2(*)(const control &)>(&slider_range));
	boost::python::def("sliderSpeed", static_cast<vector2(*)(const float &)>(&slider_speed));
	boost::python::def("sliderSpeed", static_cast<vector2(*)(const control &)>(&slider_speed));
	boost::python::def("sliderPosition", static_cast<float(*)(const control &)>(&slider_position));
	boost::python::def("sliderPosition", static_cast<float(*)(float)>(&slider_position));
	boost::python::def("clearOverlay", static_cast<void(*)(const control &)>(&clear_overlay));
	boost::python::def("closeOverlay", static_cast<void(*)(const control &)>(&close_overlay));
	boost::python::def("commitOverlay", static_cast<void(*)(const control &)>(&commit_overlay));
	boost::python::def("saveOverlay", static_cast<void(*)(const control &)>(&save_overlay));
	boost::python::def("loadOverlay", static_cast<void(*)(const control &,const config &)>(&load_overlay));
	boost::python::def("newOverlay", static_cast<void(*)(const control &,const config &)>(&new_overlay));
	boost::python::def("allCutLayers", static_cast<sqf_return_string_list(*)()>(&all_cut_layers));
	boost::python::def("cutFadeOut", static_cast<int(*)(sqf_string_const_ref,float)>(&cut_fade_out));
	boost::python::def("cutFadeOut", static_cast<int(*)(int,float)>(&cut_fade_out));
	boost::python::def("cutObj", static_cast<int(*)(sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_obj));
	boost::python::def("cutObj", static_cast<int(*)(int,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_obj));
	boost::python::def("cutRsc", static_cast<int(*)(sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_rsc));
	boost::python::def("cutRsc", static_cast<int(*)(int,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_rsc));
	boost::python::def("cutText", static_cast<int(*)(sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_text));
	boost::python::def("cutText", static_cast<int(*)(int,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_text));
	boost::python::def("titleFadeOut", static_cast<void(*)(float)>(&title_fade_out));
	boost::python::def("openDlcPage", static_cast<bool(*)(float)>(&open_dlc_page));
	boost::python::def("openMap", static_cast<bool(*)(bool)>(&open_map));
	boost::python::def("openYoutubeVideo", static_cast<bool(*)(sqf_string_const_ref)>(&open_youtube_video));
	boost::python::def("showSubtitles", static_cast<bool(*)(bool)>(&show_subtitles));
	boost::python::def("openMap", static_cast<bool(*)(bool,bool)>(&open_map));
	boost::python::def("createGearDialog", static_cast<void(*)(const object &,sqf_string_const_ref)>(&create_gear_dialog));
	boost::python::def("dialog", static_cast<bool(*)()>(&dialog));
	boost::python::def("displayNull", static_cast<display(*)()>(&display_null));
	boost::python::def("disableSerialization", static_cast<void(*)()>(&disable_serialization));
	boost::python::def("enableEndDialog", static_cast<void(*)()>(&enable_end_dialog));
	boost::python::def("endLoadingScreen", static_cast<void(*)()>(&end_loading_screen));
	boost::python::def("pixelH", static_cast<float(*)()>(&pixel_h));
	boost::python::def("pixelW", static_cast<float(*)()>(&pixel_w));
	boost::python::def("setCompassOscillation", static_cast<void(*)(float,float,float)>(&set_compass_oscillation));
	boost::python::def("setHudMovementLevels", static_cast<void(*)(float,float,float,float,float,float,const object &)>(&set_hud_movement_levels));
	boost::python::def("setHudMovementLevels", static_cast<void(*)(float,float,float,float,float,float,const vector3 &)>(&set_hud_movement_levels));
	boost::python::def("startLoadingScreen", static_cast<void(*)(sqf_string_const_ref)>(&start_loading_screen));
	boost::python::def("startLoadingScreen", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&start_loading_screen));
	boost::python::def("createMissionDisplay", static_cast<display(*)(const display &,sqf_string_const_ref)>(&create_mission_display));
	boost::python::def("createMpCampaignDisplay", static_cast<display(*)(const display &,sqf_string_const_ref)>(&create_mp_campaign_display));
	boost::python::def("pixelGrid", static_cast<float(*)()>(&pixel_grid));
	boost::python::def("pixelGridBase", static_cast<float(*)()>(&pixel_grid_base));
	boost::python::def("pixelGridNoUiScale", static_cast<float(*)()>(&pixel_grid_no_ui_scale));
	boost::python::def("shownScoreTable", static_cast<int(*)()>(&shown_score_table));
	boost::python::def("displayAddEventHandler", static_cast<int(*)(const display &,sqf_string_const_ref,sqf_string_const_ref)>(&display_add_event_handler));
	boost::python::def("displayAddEventHandler", static_cast<int(*)(const display &,sqf_string_const_ref,const code &)>(&display_add_event_handler));
	boost::python::def("displayRemoveEventhandler", static_cast<void(*)(const display &,sqf_string_const_ref,int)>(&display_remove_eventhandler));
	boost::python::def("displaySetEventhandler", static_cast<void(*)(const display &,sqf_string_const_ref,sqf_string_const_ref)>(&display_set_eventhandler));
	boost::python::def("displayRemoveAllEventHandlers", static_cast<void(*)(sqf_string_const_ref,const display &)>(&display_remove_all_event_handlers));
	boost::python::def("findDisplay", static_cast<display(*)(float)>(&find_display));
	boost::python::def("isTutHintsEnabled", static_cast<bool(*)()>(&is_tut_hints_enabled));
	boost::python::def("hintC", static_cast<void(*)(sqf_string_const_ref)>(&hint_c));
	boost::python::def("hintC", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&hint_c));
	boost::python::def("hint", static_cast<void(*)(sqf_string_const_ref)>(&hint));
	boost::python::def("hintCadet", static_cast<void(*)(sqf_string_const_ref)>(&hint_cadet));
	boost::python::def("hintSilent", static_cast<void(*)(sqf_string_const_ref)>(&hint_silent));
	boost::python::def("hintc", static_cast<void(*)(sqf_string_const_ref,sqf_string_list_const_ref)>(&hintc));
	boost::python::def("taskHint", static_cast<void(*)(sqf_string_const_ref,const rv_color &,sqf_string_const_ref)>(&task_hint));
	boost::python::def("visibleWatch", static_cast<bool(*)()>(&visible_watch));
	boost::python::def("visibleMap", static_cast<bool(*)()>(&visible_map));
	boost::python::def("visibleGps", static_cast<bool(*)()>(&visible_gps));
	boost::python::def("visibleCompass", static_cast<bool(*)()>(&visible_compass));
	boost::python::def("cbChecked", static_cast<bool(*)(const control &)>(&cb_checked));
	boost::python::def("cbSetChecked", static_cast<void(*)(const control &,bool)>(&cb_set_checked));
	boost::python::def("createDialog", static_cast<bool(*)(sqf_string_const_ref)>(&create_dialog));
	boost::python::def("isRealTime", static_cast<bool(*)(const control &)>(&is_real_time));
	boost::python::def("isShowing", static_cast<bool(*)(const control &)>(&is_showing));
	boost::python::def("mapAnimDone", static_cast<bool(*)()>(&map_anim_done));
	boost::python::def("shownArtillerycomputer", static_cast<bool(*)()>(&shown_artillerycomputer));
	boost::python::def("shownCompass", static_cast<bool(*)()>(&shown_compass));
	boost::python::def("shownGps", static_cast<bool(*)()>(&shown_gps));
	boost::python::def("shownHud", static_cast<bool(*)()>(&shown_hud));
	boost::python::def("shownMap", static_cast<bool(*)()>(&shown_map));
	boost::python::def("shownPad", static_cast<bool(*)()>(&shown_pad));
	boost::python::def("shownRadio", static_cast<bool(*)()>(&shown_radio));
	boost::python::def("shownUavfeed", static_cast<bool(*)()>(&shown_uavfeed));
	boost::python::def("shownWarrant", static_cast<bool(*)()>(&shown_warrant));
	boost::python::def("shownWatch", static_cast<bool(*)()>(&shown_watch));
	boost::python::def("showCinemaBorder", static_cast<void(*)(bool)>(&show_cinema_border));
	boost::python::def("showCommandingMenu", static_cast<void(*)(sqf_string_const_ref)>(&show_commanding_menu));
	boost::python::def("showCompass", static_cast<void(*)(bool)>(&show_compass));
	boost::python::def("showGps", static_cast<void(*)(bool)>(&show_gps));
	boost::python::def("showHud", static_cast<void(*)(bool)>(&show_hud));
	boost::python::def("showHud", static_cast<void(*)(bool,bool,bool,bool,bool,bool,bool,bool)>(&show_hud));
	boost::python::def("showMap", static_cast<void(*)(bool)>(&show_map));
	boost::python::def("showPad", static_cast<void(*)(bool)>(&show_pad));
	boost::python::def("showRadio", static_cast<void(*)(bool)>(&show_radio));
	boost::python::def("showUavfeed", static_cast<void(*)(bool)>(&show_uavfeed));
	boost::python::def("showWarrant", static_cast<void(*)(bool)>(&show_warrant));
	boost::python::def("showWatch", static_cast<void(*)(bool)>(&show_watch));
	boost::python::def("hcShownBar", static_cast<bool(*)()>(&hc_shown_bar));
	boost::python::def("hcShowBar", static_cast<void(*)(bool)>(&hc_show_bar));
	boost::python::def("preloadTitleObj", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref)>(&preload_title_obj));
	boost::python::def("preloadTitleObj", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&preload_title_obj));
	boost::python::def("preloadTitleRsc", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref)>(&preload_title_rsc));
	boost::python::def("preloadTitleRsc", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&preload_title_rsc));
	boost::python::def("cutObj", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,float)>(&cut_obj));
	boost::python::def("cutRsc", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_rsc));
	boost::python::def("cutText", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_text));
	boost::python::def("titleCut", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,const float &)>(&title_cut));
	boost::python::def("titleObj", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,const float &,bool)>(&title_obj));
	boost::python::def("titleRsc", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,const float &)>(&title_rsc));
	boost::python::def("titleText", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,const float &)>(&title_text));
	boost::python::def("mapAnimAdd", static_cast<void(*)(float,float,const object &)>(&map_anim_add));
	boost::python::def("mapAnimAdd", static_cast<void(*)(float,float,const vector3 &)>(&map_anim_add));
	boost::python::def("closeDialog", static_cast<void(*)(float)>(&close_dialog));
	boost::python::def("closeDisplay", static_cast<void(*)(float,const display &)>(&close_display));
	boost::python::def("drawIcon", static_cast<void(*)(const control &,sqf_string_const_ref,const rv_color &,const vector2 &,float,float,float,sqf_string_const_ref,uint32_t,float,sqf_string_const_ref,sqf_string_const_ref)>(&draw_icon));
	boost::python::def("drawIcon", static_cast<void(*)(const control &,sqf_string_const_ref,const rv_color &,const object &,float,float,float,sqf_string_const_ref,uint32_t,float,sqf_string_const_ref,sqf_string_const_ref)>(&draw_icon));
	boost::python::def("drawRectangle", static_cast<void(*)(const control &,const vector2,float,float,float,const rv_color &,sqf_string_const_ref)>(&draw_rectangle));
	boost::python::def("collapseObjectTree", static_cast<void(*)(const control &)>(&collapse_object_tree));
	boost::python::def("importAllGroups", static_cast<void(*)(const control &)>(&import_all_groups));
	boost::python::def("restartEditorCamera", static_cast<void(*)(const control &)>(&restart_editor_camera));
	boost::python::def("selectedEditorObjects", static_cast<void(*)(const control &)>(&selected_editor_objects));
	boost::python::def("updateObjectTree", static_cast<void(*)(const control &)>(&update_object_tree));
	boost::python::def("allow3dmode", static_cast<void(*)(const control &,bool)>(&allow3dmode));
	boost::python::def("allowFileOperations", static_cast<void(*)(const control &,bool)>(&allow_file_operations));
	boost::python::def("createMenu", static_cast<void(*)(const control &,float)>(&create_menu));
	boost::python::def("htmlLoad", static_cast<void(*)(const control &,sqf_string_const_ref)>(&html_load));
	boost::python::def("mapCenterOnCamera", static_cast<void(*)(const control &,bool)>(&map_center_on_camera));
	boost::python::def("moveObjectToEnd", static_cast<void(*)(const control &,sqf_string_const_ref)>(&move_object_to_end));
	boost::python::def("progressSetPosition", static_cast<void(*)(const control &,float)>(&progress_set_position));
	boost::python::def("removeMenuItem", static_cast<void(*)(const control &,float)>(&remove_menu_item));
	boost::python::def("removeMenuItem", static_cast<void(*)(const control &,sqf_string_const_ref)>(&remove_menu_item));
	boost::python::def("setEditorMode", static_cast<void(*)(const control &,sqf_string_const_ref)>(&set_editor_mode));
	boost::python::def("show3dicons", static_cast<void(*)(const control &,bool)>(&show3dicons));
	boost::python::def("showLegend", static_cast<void(*)(const control &,bool)>(&show_legend));
	boost::python::def("buttonSetAction", static_cast<void(*)(int,sqf_string_const_ref)>(&button_set_action));
	boost::python::def("buttonSetAction", static_cast<void(*)(const control &,sqf_string_const_ref)>(&button_set_action));
	boost::python::def("mapAnimClear", static_cast<void(*)()>(&map_anim_clear));
	boost::python::def("mapAnimCommit", static_cast<void(*)()>(&map_anim_commit));
	boost::python::def("forceMap", static_cast<void(*)(bool)>(&force_map));
	boost::python::def("inGameUiSetEventHandler", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&in_game_ui_set_event_handler));
	boost::python::def("gearSlotAmmoCount", static_cast<float(*)(const control &)>(&gear_slot_ammo_count));
	boost::python::def("nextMenuItemIndex", static_cast<float(*)(const control &)>(&next_menu_item_index));
	boost::python::def("progressPosition", static_cast<float(*)(const control &)>(&progress_position));
	boost::python::def("safeZoneX", static_cast<float(*)()>(&safe_zone_x));
	boost::python::def("safeZoneY", static_cast<float(*)()>(&safe_zone_y));
	boost::python::def("safeZoneH", static_cast<float(*)()>(&safe_zone_h));
	boost::python::def("safeZoneW", static_cast<float(*)()>(&safe_zone_w));
	boost::python::def("safeZoneXAbs", static_cast<float(*)()>(&safe_zone_x_abs));
	boost::python::def("safeZoneWAbs", static_cast<float(*)()>(&safe_zone_w_abs));
	boost::python::def("buttonAction", static_cast<sqf_return_string(*)(const control &)>(&button_action));
	boost::python::def("buttonAction", static_cast<sqf_return_string(*)(int)>(&button_action));
	boost::python::def("gearSlotData", static_cast<sqf_return_string(*)(const control &)>(&gear_slot_data));
	boost::python::def("getEditorMode", static_cast<sqf_return_string(*)(const control &)>(&get_editor_mode));
	boost::python::def("getEditorObjectScope", static_cast<sqf_return_string(*)(const control &,sqf_string_const_ref)>(&get_editor_object_scope));
	boost::python::def("mapGridPosition", static_cast<sqf_return_string(*)(const object &)>(&map_grid_position));
	boost::python::def("mapGridPosition", static_cast<sqf_return_string(*)(const vector2 &)>(&map_grid_position));
	boost::python::def("createDisplay", static_cast<display(*)(sqf_string_const_ref,const display &)>(&create_display));
	boost::python::def("createMissionDisplay", static_cast<display(*)(sqf_string_const_ref,const display &)>(&create_mission_display));
	boost::python::def("controlNull", static_cast<control(*)()>(&control_null));
	boost::python::def("controlsGroupCtrl", static_cast<control(*)(const control &,float)>(&controls_group_ctrl));
	boost::python::def("displayCtrl", static_cast<control(*)(float,const display &)>(&display_ctrl));
	boost::python::def("mapCenterOnCamera", static_cast<vector3(*)(const control &)>(&map_center_on_camera));
	boost::python::def("posScreenToWorld", static_cast<vector2(*)(const control &,const vector2 &)>(&pos_screen_to_world));
	boost::python::def("posWorldToScreen", static_cast<vector2(*)(const control &,const vector2 &)>(&pos_world_to_screen));
	boost::python::def("allControls", static_cast<std::vector<control>(*)(const display &)>(&all_controls));
	boost::python::def("getEditorCamera", static_cast<object(*)(const control &)>(&get_editor_camera));
	boost::python::def("getObjectProxy", static_cast<object(*)(const control &,sqf_string_const_ref)>(&get_object_proxy));
	boost::python::def("displayParent", static_cast<display(*)(const display &)>(&display_parent));
	boost::python::def("visibleScoreTable", static_cast<bool(*)()>(&visible_score_table));
	boost::python::def("showScoreTable", static_cast<void(*)(int)>(&show_score_table));
	boost::python::def("isPipEnabled", static_cast<bool(*)()>(&is_pip_enabled));
	boost::python::def("setMousePosition", static_cast<void(*)(float,float)>(&set_mouse_position));
	boost::python::def("setPipEffect", static_cast<void(*)(sqf_string_const_ref,const game_value &)>(&set_pip_effect));
	boost::python::def("sliderSetSpeed", static_cast<void(*)(const control &,float,int)>(&slider_set_speed));
	boost::python::def("lnbAddRow", static_cast<int(*)(int,sqf_string_list_const_ref)>(&lnb_add_row));
	boost::python::def("forcedMap", static_cast<std::pair<bool , bool>(*)()>(&forced_map));
	boost::python::def("progressLoadingScreen", static_cast<void(*)(float)>(&progress_loading_screen));
	boost::python::def("lookAtPos", static_cast<void(*)(const control &,const vector3 &)>(&look_at_pos));
	boost::python::def("ctAddHeader", static_cast<rv_ct_list(*)(const control &)>(&ct_add_header));
	boost::python::def("ctAddRow", static_cast<rv_ct_list(*)(const control &)>(&ct_add_row));
	boost::python::def("ctClear", static_cast<void(*)(const control &)>(&ct_clear));
	boost::python::def("ctCurSel", static_cast<int(*)(const control &)>(&ct_cur_sel));
	boost::python::def("ctHeaderCount", static_cast<int(*)(const control &)>(&ct_header_count));
	boost::python::def("ctRowCount", static_cast<int(*)(const control &)>(&ct_row_count));
	boost::python::def("lbSort", static_cast<void(*)(const control &)>(&lb_sort));
	boost::python::def("lbSort", static_cast<void(*)(const control &,sqf_string_const_ref)>(&lb_sort));
	boost::python::def("lbSort", static_cast<void(*)(int,sqf_string_const_ref)>(&lb_sort));
	boost::python::def("lbSort", static_cast<void(*)(int)>(&lb_sort));
	boost::python::def("lbSortByValue", static_cast<void(*)(const control)>(&lb_sort_by_value));
	boost::python::def("lbSortByValue", static_cast<void(*)(int)>(&lb_sort_by_value));
	boost::python::def("lbSortByValue", static_cast<void(*)(const control &)>(&lb_sort_by_value));
	boost::python::def("ctData", static_cast<sqf_return_string(*)(const control &,int)>(&ct_data));
	boost::python::def("ctFindHeaderRows", static_cast<std::vector<game_value>(*)(const control &,int)>(&ct_find_header_rows));
	boost::python::def("ctFindRowHeader", static_cast<int(*)(const control &,int)>(&ct_find_row_header));
	boost::python::def("ctHeaderControls", static_cast<std::vector<control>(*)(const control &,int)>(&ct_header_controls));
	boost::python::def("ctRemoveHeaders", static_cast<void(*)(const control &,const std::vector<int> &)>(&ct_remove_headers));
	boost::python::def("ctRemoveRows", static_cast<void(*)(const control &,const std::vector<int> &)>(&ct_remove_rows));
	boost::python::def("ctRowControls", static_cast<std::vector<control>(*)(const control &,int)>(&ct_row_controls));
	boost::python::def("ctSetCurSel", static_cast<void(*)(const control &,int)>(&ct_set_cur_sel));
	boost::python::def("ctSetData", static_cast<void(*)(const control &,int,sqf_string_const_ref)>(&ct_set_data));
	boost::python::def("ctSetHeaderTemplate", static_cast<void(*)(const control &,const config &)>(&ct_set_header_template));
	boost::python::def("ctSetRowTemplate", static_cast<void(*)(const control &,const config &)>(&ct_set_row_template));
	boost::python::def("ctSetValue", static_cast<void(*)(const control &,float)>(&ct_set_value));
	boost::python::def("ctValue", static_cast<float(*)(const control &,float)>(&ct_value));
	boost::python::def("getResolution", static_cast<rv_resolution(*)()>(&get_resolution));
	boost::python::class_<rv_lnb_array>("rvLnbArray", boost::python::init<>())
		.def_readwrite("texts", &rv_lnb_array::texts)
		.def_readwrite("values", &rv_lnb_array::values)
		.def_readwrite("datas", &rv_lnb_array::datas);
	boost::python::class_<rv_ct_list>("rvCtList")
		.def_readwrite("headerIndex", &rv_ct_list::header_index)
		.def_readwrite("controls", &rv_ct_list::controls);
	boost::python::class_<rv_resolution>("rvResolution", boost::python::init<const vector2 &,const vector2 &,float,float>())
		.def("fromVector", static_cast<rv_resolution(*)(const std::vector<float> &)>(&rv_resolution::from_vector)).staticmethod("fromVector")
		.def_readwrite("resolution", &rv_resolution::resolution)
		.def_readwrite("viewport", &rv_resolution::viewport)
		.def_readwrite("aspectRatio", &rv_resolution::aspect_ratio)
		.def_readwrite("uiScale", &rv_resolution::ui_scale);
}

BOOST_PYTHON_MODULE(__sqf_curator)
{
	boost::python::def("curatorCamera", static_cast<object(*)()>(&curator_camera));
	boost::python::def("curatorMouseOver", static_cast<object(*)()>(&curator_mouse_over));
	boost::python::def("curatorSelected", static_cast<std::vector<object>(*)()>(&curator_selected));
	boost::python::def("openCuratorInterface", static_cast<void(*)()>(&open_curator_interface));
	boost::python::def("shownCuratorcompass", static_cast<bool(*)()>(&shown_curatorcompass));
	boost::python::def("curatorCameraAreaCeiling", static_cast<float(*)(const object &)>(&curator_camera_area_ceiling));
	boost::python::def("curatorEditingAreaType", static_cast<bool(*)(const object &)>(&curator_editing_area_type));
	boost::python::def("curatorPoints", static_cast<float(*)(const object &)>(&curator_points));
	boost::python::def("curatorWaypointCost", static_cast<float(*)(const object &)>(&curator_waypoint_cost));
	boost::python::def("getAssignedCuratorLogic", static_cast<object(*)(const object &)>(&get_assigned_curator_logic));
	boost::python::def("getAssignedCuratorUnit", static_cast<object(*)(const object &)>(&get_assigned_curator_unit));
	boost::python::def("removeAllCuratorAddons", static_cast<void(*)(const object &)>(&remove_all_curator_addons));
	boost::python::def("removeAllCuratorCameraAreas", static_cast<void(*)(const object &)>(&remove_all_curator_camera_areas));
	boost::python::def("removeAllCuratorEditingAreas", static_cast<void(*)(const object &)>(&remove_all_curator_editing_areas));
	boost::python::def("showCuratorCompass", static_cast<void(*)(bool)>(&show_curator_compass));
	boost::python::def("unassignCurator", static_cast<void(*)(const object &)>(&unassign_curator));
	boost::python::def("addCuratorPoints", static_cast<void(*)(const object &,float)>(&add_curator_points));
	boost::python::def("allowCuratorLogicIgnoreAreas", static_cast<void(*)(const object &,bool)>(&allow_curator_logic_ignore_areas));
	boost::python::def("curatorCoef", static_cast<float(*)(const object &,sqf_string_const_ref)>(&curator_coef));
	boost::python::def("removeCuratorCameraArea", static_cast<void(*)(const object &,float)>(&remove_curator_camera_area));
	boost::python::def("removeCuratorEditingArea", static_cast<void(*)(const object &,float)>(&remove_curator_editing_area));
	boost::python::def("setCuratorCameraAreaCeiling", static_cast<void(*)(const object &,float)>(&set_curator_camera_area_ceiling));
	boost::python::def("setCuratorEditingAreaType", static_cast<void(*)(const object &,bool)>(&set_curator_editing_area_type));
	boost::python::def("setCuratorWaypointCost", static_cast<void(*)(const object &,float)>(&set_curator_waypoint_cost));
	boost::python::def("addCuratorAddons", static_cast<void(*)(const object &,sqf_string_list_const_ref)>(&add_curator_addons));
	boost::python::def("addCuratorCameraArea", static_cast<void(*)(const object &,int,const vector2 &,float)>(&add_curator_camera_area));
	boost::python::def("addCuratorCameraArea", static_cast<void(*)(const object &,int,const vector3 &,float)>(&add_curator_camera_area));
	boost::python::def("addCuratorEditableObject", static_cast<void(*)(const object &,const std::vector<object> &,bool)>(&add_curator_editable_object));
	boost::python::def("addCuratorEditingArea", static_cast<void(*)(const object &,int,const vector2 &,float)>(&add_curator_editing_area));
	boost::python::def("curatorAddons", static_cast<sqf_return_string_list(*)(const object &)>(&curator_addons));
	boost::python::def("curatorEditableObjects", static_cast<std::vector<object>(*)(const object &)>(&curator_editable_objects));
	boost::python::def("curatorRegisteredObjects", static_cast<std::vector<object>(*)(const object &)>(&curator_registered_objects));
	boost::python::def("objectCurators", static_cast<std::vector<object>(*)(const object &)>(&object_curators));
	boost::python::def("removeCuratorAddons", static_cast<void(*)(const object &,sqf_string_list_const_ref)>(&remove_curator_addons));
	boost::python::def("removeCuratorEditableObjects", static_cast<void(*)(const object &,const std::vector<object> &,bool &)>(&remove_curator_editable_objects));
	boost::python::def("setCuratorCoef", static_cast<void(*)(const object &,sqf_string_const_ref,std::variant<float, bool>)>(&set_curator_coef));
	boost::python::def("assignCurator", static_cast<void(*)(const object &,const object &)>(&assign_curator));
}

BOOST_PYTHON_MODULE(__sqf_debug)
{
	boost::python::def("diagFps", static_cast<float(*)()>(&diag_fps));
	boost::python::def("diagFpsmin", static_cast<float(*)()>(&diag_fpsmin));
	boost::python::def("diagFrameno", static_cast<float(*)()>(&diag_frameno));
	boost::python::def("diagTicktime", static_cast<float(*)()>(&diag_ticktime));
	boost::python::def("diagActiveMissionFsms", static_cast<std::vector<script>(*)()>(&diag_active_mission_fsms));
	boost::python::def("diagActiveSqfScripts", static_cast<std::vector<script>(*)()>(&diag_active_sqf_scripts));
	boost::python::def("diagActiveSqsScripts", static_cast<std::vector<script>(*)()>(&diag_active_sqs_scripts));
	boost::python::def("diagActiveScripts", static_cast<std::vector<script>(*)()>(&diag_active_scripts));
	boost::python::def("diagCaptureFrame", static_cast<void(*)(float)>(&diag_capture_frame));
	boost::python::def("diagCaptureFrameToFile", static_cast<void(*)(float)>(&diag_capture_frame_to_file));
	boost::python::def("diagCaptureSlowFrame", static_cast<void(*)(sqf_string_const_ref,float)>(&diag_capture_slow_frame));
	boost::python::def("diagCodePerformance", static_cast<void(*)(const code &,const game_value &,float)>(&diag_code_performance));
	boost::python::def("diagLog", static_cast<void(*)(game_value)>(&diag_log));
	boost::python::def("diagLogSlowFrame", static_cast<void(*)(sqf_string_const_ref,float)>(&diag_log_slow_frame));
	boost::python::def("enableDiagLegend", static_cast<void(*)(bool)>(&enable_diag_legend));
	boost::python::def("halt", static_cast<void(*)()>(&halt));
	boost::python::def("throwException", static_cast<void(*)(const game_value)>(&throw_exception));
}

BOOST_PYTHON_MODULE(__sqf_eden)
{
	boost::python::def("currentEdenOperation", static_cast<sqf_return_string(*)()>(&current_eden_operation));
	boost::python::def("getEdenCamera", static_cast<object(*)()>(&get_eden_camera));
	boost::python::def("getEdenIconsVisible", static_cast<std::pair<bool , bool>(*)()>(&get_eden_icons_visible));
	boost::python::def("getEdenLinesVisible", static_cast<std::pair<bool , bool>(*)()>(&get_eden_lines_visible));
	boost::python::def("isEden", static_cast<bool(*)()>(&is_eden));
	boost::python::def("isEdenMultiplayer", static_cast<bool(*)()>(&is_eden_multiplayer));
	boost::python::def("getEdenActionState", static_cast<float(*)(sqf_string_const_ref)>(&get_eden_action_state));
	boost::python::def("editEdenMissionAttributes", static_cast<void(*)(sqf_string_const_ref)>(&edit_eden_mission_attributes));
	boost::python::def("addEdenLayer", static_cast<float(*)(int,sqf_string_const_ref)>(&add_eden_layer));
	boost::python::def("removeEdenLayer", static_cast<bool(*)(float)>(&remove_eden_layer));
	boost::python::def("removeAllEdenEventhandlers", static_cast<void(*)(sqf_string_const_ref)>(&remove_all_eden_eventhandlers));
	boost::python::def("addEdenEventHandler", static_cast<float(*)(sqf_string_const_ref,const code &)>(&add_eden_event_handler));
	boost::python::def("create3DenComposition", static_cast<std::vector<game_value>(*)(const config &,const vector3 &)>(&create_3den_composition));
	boost::python::def("create3DenEntity", static_cast<game_value(*)(sqf_string_const_ref,sqf_string_const_ref,const vector3 &,bool)>(&create_3den_entity));
	boost::python::def("create3DenConnections", static_cast<std::vector<game_value>(*)(const game_value &)>(&create_3den_connections));
	boost::python::def("get3DenEntity", static_cast<game_value(*)(const float &)>(&get_3den_entity));
	boost::python::def("get3DenLayerEntities", static_cast<std::vector<game_value>(*)(const float &)>(&get_3den_layer_entities));
	boost::python::def("get3DenSelected", static_cast<std::vector<game_value>(*)(sqf_string_const_ref)>(&get_3den_selected));
	boost::python::def("set3DenAttributes", static_cast<bool(*)(const std::vector<game_value> &)>(&set_3den_attributes));
	boost::python::def("allEdenEntities", static_cast<std::vector<object>(*)()>(&all_eden_entities));
	boost::python::def("doEdenAction", static_cast<void(*)(sqf_string_const_ref)>(&do_eden_action));
	boost::python::def("getEdenGrid", static_cast<void(*)(sqf_string_const_ref)>(&get_eden_grid));
	boost::python::def("getEdenMouseOver", static_cast<rv_eden_mouse_over(*)()>(&get_eden_mouse_over));
	boost::python::def("collectEdenHistory", static_cast<void(*)(const code &)>(&collect_eden_history));
	boost::python::def("getEdenEntityId", static_cast<float(*)(const object &)>(&get_eden_entity_id));
	boost::python::def("getEdenEntityId", static_cast<float(*)(const group &)>(&get_eden_entity_id));
	boost::python::def("getEdenEntityId", static_cast<float(*)(const vector3 &)>(&get_eden_entity_id));
	boost::python::def("getEdenEntityId", static_cast<float(*)(const marker &)>(&get_eden_entity_id));
	boost::python::def("deleteEdenEntities", static_cast<void(*)(const object &)>(&delete_eden_entities));
	boost::python::def("deleteEdenEntities", static_cast<void(*)(const group &)>(&delete_eden_entities));
	boost::python::def("deleteEdenEntities", static_cast<void(*)(const vector3 &)>(&delete_eden_entities));
	boost::python::def("deleteEdenEntities", static_cast<void(*)(const marker &)>(&delete_eden_entities));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<object> &,const object &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<object> &,const group &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<object> &,const vector3 &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<object> &,const marker &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<group> &,const object &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<group> &,const group &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<group> &,const vector3 &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<group> &,const marker &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<vector3> &,const object &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<vector3> &,const group &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<vector3> &,const vector3 &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<vector3> &,const marker &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<marker> &,const object &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<marker> &,const group &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<marker> &,const vector3 &)>(&add_eden_connection));
	boost::python::def("addEdenConnection", static_cast<bool(*)(sqf_string_const_ref,const std::vector<marker> &,const marker &)>(&add_eden_connection));
	boost::python::def("setEdenGrid", static_cast<void(*)(sqf_string_const_ref,float)>(&set_eden_grid));
	boost::python::def("setEdenIconsVisible", static_cast<void(*)(bool,bool)>(&set_eden_icons_visible));
	boost::python::def("setEdenLinesVisible", static_cast<void(*)(bool,bool)>(&set_eden_lines_visible));
	boost::python::def("setEdenMissionAttributes", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref,const game_value &)>(&set_eden_mission_attributes));
	boost::python::def("removeEdenEventHandler", static_cast<void(*)(sqf_string_const_ref,float)>(&remove_eden_event_handler));
	boost::python::def("moveEdenCamera", static_cast<void(*)(const vector3 &,const vector3 &)>(&move_eden_camera));
	boost::python::def("remove3DenConnection", static_cast<bool(*)(sqf_string_const_ref,eden_entity,eden_entity)>(&remove_3den_connection));
	boost::python::def("clear3DenAttribute", static_cast<void(*)(const game_value &,sqf_string_const_ref)>(&clear_3den_attribute));
	boost::python::def("create3DenEntity", static_cast<eden_entity(*)(const group &,sqf_string_const_ref,sqf_string_const_ref,const vector3 &,bool)>(&create_3den_entity));
	boost::python::def("get3DenAttribute", static_cast<std::vector<game_value>(*)(std::variant<std::reference_wrapper<const object>, std::reference_wrapper<const group>, sqf_string_const_ref_wrapper, std::reference_wrapper<float> >,sqf_string_const_ref)>(&get_3den_attribute));
	boost::python::def("get3DenMissionAttribute", static_cast<game_value(*)(sqf_string_const_ref,sqf_string_const_ref)>(&get_3den_mission_attribute));
	boost::python::def("set3DenMissionAttribute", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref,game_value)>(&set_3den_mission_attribute));
	boost::python::def("set3DenAttribute", static_cast<bool(*)(eden_entity,sqf_string_const_ref,game_value)>(&set_3den_attribute));
	boost::python::def("set3DenLayer", static_cast<bool(*)(eden_entity,float)>(&set_3den_layer));
	boost::python::def("set3DenObjectType", static_cast<void(*)(const std::vector<object> &,sqf_string_const_ref)>(&set_3den_object_type));
	boost::python::def("set3DenSelected", static_cast<void(*)(const std::vector<object> &)>(&set_3den_selected));
	boost::python::def("getMissionLayers", static_cast<sqf_return_string_list(*)()>(&get_mission_layers));
	boost::python::def("set3DenLogicType", static_cast<void(*)(const std::vector<object> &,sqf_string_const_ref)>(&set_3den_logic_type));
	boost::python::def("getMissionLayerEntities", static_cast<sqf_return_string_list(*)(sqf_string_const_ref)>(&get_mission_layer_entities));
	boost::python::class_<rv_eden_mouse_over>("rvEdenMouseOver", boost::python::init<const game_value &>())
		.def_readwrite("type", &rv_eden_mouse_over::type)
		.def_readwrite("entity", &rv_eden_mouse_over::entity);
}

BOOST_PYTHON_MODULE(__sqf_group)
{
	boost::python::def("combatMode", static_cast<sqf_return_string(*)(const group &)>(&combat_mode));
	boost::python::def("addGroupIcon", static_cast<float(*)(const group &,sqf_string_const_ref,std::optional<vector2>)>(&add_group_icon));
	boost::python::def("groupIconSelectable", static_cast<bool(*)()>(&group_icon_selectable));
	boost::python::def("grpNull", static_cast<group(*)()>(&grp_null));
	boost::python::def("clearGroupIcons", static_cast<void(*)(const group &)>(&clear_group_icons));
	boost::python::def("createGroup", static_cast<group(*)(const side &,bool)>(&create_group));
	boost::python::def("deleteGroup", static_cast<void(*)(const group &)>(&delete_group));
	boost::python::def("groupFromNetId", static_cast<group(*)(sqf_string_const_ref)>(&group_from_net_id));
	boost::python::def("groupId", static_cast<sqf_return_string(*)(const group &)>(&group_id));
	boost::python::def("groupOwner", static_cast<float(*)(const group &)>(&group_owner));
	boost::python::def("setGroupOwner", static_cast<bool(*)(const group &,int)>(&set_group_owner));
	boost::python::def("leader", static_cast<object(*)(const group &)>(&leader));
	boost::python::def("groupRadio", static_cast<void(*)(const object &,sqf_string_const_ref)>(&group_radio));
	boost::python::def("removeGroupIcon", static_cast<void(*)(const group &,int)>(&remove_group_icon));
	boost::python::def("selectLeader", static_cast<void(*)(const group &,const object &)>(&select_leader));
	boost::python::def("currentWaypoint", static_cast<float(*)(const group &)>(&current_waypoint));
	boost::python::def("setGroupIconsSelectable", static_cast<void(*)(bool)>(&set_group_icons_selectable));
	boost::python::def("setCurrentWaypoint", static_cast<void(*)(group &,waypoint &)>(&set_current_waypoint));
	boost::python::def("getGroupIconParams", static_cast<rv_group_icon_params(*)(const group &)>(&get_group_icon_params));
	boost::python::def("join", static_cast<void(*)(const std::vector<object> &,const group &)>(&join));
	boost::python::def("join", static_cast<void(*)(const std::vector<object> &,const object &)>(&join));
	boost::python::def("joinSilent", static_cast<void(*)(const std::vector<object> &,const group &)>(&join_silent));
	boost::python::def("joinSilent", static_cast<void(*)(const std::vector<object> &,const object &)>(&join_silent));
	boost::python::def("joinAs", static_cast<void(*)(const object &,const group &,int)>(&join_as));
	boost::python::def("joinAsSilent", static_cast<void(*)(const object &,const group &,int)>(&join_as_silent));
	boost::python::def("units", static_cast<std::vector<object>(*)(const group &)>(&units));
	boost::python::def("getSide", static_cast<side(*)(const group &)>(&get_side));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const group &)>(&all_variables));
	boost::python::def("isNull", static_cast<bool(*)(const group &)>(&is_null));
	boost::python::def("isGroupDeletedWhenEmpty", static_cast<bool(*)(const group &)>(&is_group_deleted_when_empty));
	boost::python::def("deleteGroupWhenEmpty", static_cast<void(*)(const group &,bool)>(&delete_group_when_empty));
	boost::python::def("addVehicle", static_cast<void(*)(const group &,const object &)>(&add_vehicle));
	boost::python::def("setGroupIconsVisible", static_cast<void(*)(bool,bool)>(&set_group_icons_visible));
	boost::python::def("groupIconsVisible", static_cast<std::vector<bool>(*)()>(&group_icons_visible));
	boost::python::def("getGroupIcon", static_cast<rv_group_icon(*)(const group &,int &)>(&get_group_icon));
	boost::python::def("groupSelectUnit", static_cast<void(*)(const object &,const object &,bool)>(&group_select_unit));
	boost::python::def("setGroupIcon", static_cast<void(*)(const group &,float,sqf_string_const_ref,const vector2)>(&set_group_icon));
	boost::python::def("setFormation", static_cast<void(*)(const group &,sqf_string_const_ref)>(&set_formation));
	boost::python::def("setFormDir", static_cast<void(*)(const group &,float)>(&set_form_dir));
	boost::python::def("setGroupIcon", static_cast<void(*)(const group &,int,sqf_string_const_ref,const vector2 &)>(&set_group_icon));
	boost::python::def("setGroupIconParams", static_cast<void(*)(const group &,const rv_color &,sqf_string_const_ref,float,bool)>(&set_group_icon_params));
	boost::python::def("setGroupId", static_cast<void(*)(const group &,sqf_string_const_ref,sqf_string_list_const_ref)>(&set_group_id));
	boost::python::def("setGroupIdGlobal", static_cast<void(*)(const group &,sqf_string_const_ref,sqf_string_list_const_ref)>(&set_group_id_global));
	boost::python::def("setSpeedMode", static_cast<void(*)(const group &,sqf_string_const_ref)>(&set_speed_mode));
	boost::python::def("createTeam", static_cast<team_member(*)(sqf_string_const_ref,sqf_string_const_ref)>(&create_team));
	boost::python::def("agent", static_cast<object(*)(const team_member &)>(&agent));
	boost::python::def("agents", static_cast<std::vector<team_member>(*)()>(&agents));
	boost::python::def("setCombatMode", static_cast<void(*)(const team_member &,sqf_string_const_ref)>(&set_combat_mode));
	boost::python::def("setFormation", static_cast<void(*)(const team_member &,sqf_string_const_ref)>(&set_formation));
	boost::python::def("deleteTeam", static_cast<void(*)(const team_member &)>(&delete_team));
	boost::python::def("formation", static_cast<sqf_return_string(*)(const team_member &)>(&formation));
	boost::python::def("setFromEditor", static_cast<void(*)(const team_member &,bool)>(&set_from_editor));
	boost::python::def("fromEditor", static_cast<bool(*)(const team_member &)>(&from_editor));
	boost::python::def("isAgent", static_cast<bool(*)(const team_member &)>(&is_agent));
	boost::python::def("leader", static_cast<team_member(*)(const team_member &)>(&leader));
	boost::python::def("teamName", static_cast<sqf_return_string(*)(const team_member &)>(&team_name));
	boost::python::def("teamType", static_cast<sqf_return_string(*)(const team_member &)>(&team_type));
	boost::python::def("members", static_cast<std::vector<object>(*)(const team_member &)>(&members));
	boost::python::def("addResources", static_cast<void(*)(const team_member &,sqf_string_list_const_ref)>(&add_resources));
	boost::python::def("addTeamMember", static_cast<void(*)(const team_member &,const team_member &)>(&add_team_member));
	boost::python::def("deleteResources", static_cast<void(*)(const team_member &,sqf_string_list_const_ref)>(&delete_resources));
	boost::python::def("removeTeamMember", static_cast<void(*)(const team_member &,const team_member &)>(&remove_team_member));
	boost::python::def("setLeader", static_cast<void(*)(const team_member &,const team_member &)>(&set_leader));
	boost::python::class_<rv_group_icon>("rvGroupIcon")
		.def_readwrite("icon", &rv_group_icon::icon)
		.def_readwrite("offset", &rv_group_icon::offset);
	boost::python::class_<rv_group_icon_params>("rvGroupIconParams", boost::python::init<const game_value &>())
		.def_readwrite("color", &rv_group_icon_params::color)
		.def_readwrite("text", &rv_group_icon_params::text)
		.def_readwrite("scale", &rv_group_icon_params::scale)
		.def_readwrite("visible", &rv_group_icon_params::visible);
}

BOOST_PYTHON_MODULE(__sqf_hc)
{
	boost::python::def("hcSelected", static_cast<std::vector<group>(*)(const object &)>(&hc_selected));
	boost::python::def("hcAllGroups", static_cast<std::vector<group>(*)(const object &)>(&hc_all_groups));
	boost::python::def("hcRemoveGroup", static_cast<void(*)(const object &,const group &)>(&hc_remove_group));
	boost::python::def("hcGroupParams", static_cast<rv_hc_group_params(*)(const object &,const group &)>(&hc_group_params));
	boost::python::def("hcSelectGroup", static_cast<void(*)(const object &,const std::vector<game_value> &)>(&hc_select_group));
	boost::python::def("hcSetGroup", static_cast<void(*)(const object &,const group &,std::optional<std::string>,std::optional<game_value>)>(&hc_set_group));
	boost::python::def("hcLeader", static_cast<object(*)(const group &)>(&hc_leader));
	boost::python::def("hcRemoveAllGroups", static_cast<void(*)(const object &)>(&hc_remove_all_groups));
	boost::python::class_<rv_hc_group_params>("rvHcGroupParams")
		.def_readwrite("string", &rv_hc_group_params::string)
		.def_readwrite("f1", &rv_hc_group_params::f1)
		.def_readwrite("f2", &rv_hc_group_params::f2)
		.def_readwrite("f3", &rv_hc_group_params::f3)
		.def_readwrite("f4", &rv_hc_group_params::f4);
}

BOOST_PYTHON_MODULE(__sqf_intersects)
{
	boost::python::def("intersect", static_cast<bool(*)(const object &,sqf_string_const_ref,const vector3 &,const vector3 &)>(&intersect));
	boost::python::def("lineIntersectsSurfaces", static_cast<intersect_surfaces_list(*)(const vector3 &,const vector3 &)>(&line_intersects_surfaces));
	boost::python::def("lineIntersectsSurfaces", static_cast<intersect_surfaces_list(*)(const vector3 &,const vector3 &,const object &)>(&line_intersects_surfaces));
	boost::python::def("lineIntersectsSurfaces", static_cast<intersect_surfaces_list(*)(const vector3 &,const vector3 &,const object &,const object &,bool,int,sqf_string_const_ref,sqf_string_const_ref)>(&line_intersects_surfaces));
	boost::python::def("lineIntersectsWith", static_cast<std::vector<object>(*)(const vector3 &,const vector3 &,bool)>(&line_intersects_with));
	boost::python::def("lineIntersectsWith", static_cast<std::vector<object>(*)(const vector3 &,const vector3 &,bool,const object &)>(&line_intersects_with));
	boost::python::def("lineIntersectsWith", static_cast<std::vector<object>(*)(const vector3 &,const vector3 &,bool,const object &,const object &)>(&line_intersects_with));
	boost::python::def("terrainIntersect", static_cast<bool(*)(const vector3 &,const vector3 &)>(&terrain_intersect));
	boost::python::def("terrainIntersectAsl", static_cast<bool(*)(const vector3 &,const vector3 &)>(&terrain_intersect_asl));
	boost::python::def("lineIntersects", static_cast<bool(*)(const vector3 &,const vector3 &)>(&line_intersects));
	boost::python::def("lineIntersects", static_cast<bool(*)(const vector3 &,const vector3 &,const object &)>(&line_intersects));
	boost::python::def("lineIntersects", static_cast<bool(*)(const vector3 &,const vector3 &,const object &,const object &)>(&line_intersects));
	boost::python::def("lineIntersectsObjs", static_cast<std::vector<object>(*)(const vector3 &,const vector3 &,const object &,const object &,bool,int)>(&line_intersects_objs));
	boost::python::def("terrainIntersectAtAsl", static_cast<vector3(*)(const vector3 &,const vector3 &)>(&terrain_intersect_at_asl));
	boost::python::class_<intersect_surfaces>("intersectSurfaces")
		.def_readwrite("intersectPosAsl", &intersect_surfaces::intersect_pos_asl)
		.def_readwrite("surfaceNormal", &intersect_surfaces::surface_normal)
		.def_readwrite("intersectObject", &intersect_surfaces::intersect_object)
		.def_readwrite("parentObject", &intersect_surfaces::parent_object);
}

BOOST_PYTHON_MODULE(__sqf_inventory)
{
	boost::python::def("addItemPool", static_cast<void(*)(sqf_string_const_ref,int)>(&add_item_pool));
	boost::python::def("addMagazinePool", static_cast<void(*)(sqf_string_const_ref,int)>(&add_magazine_pool));
	boost::python::def("addBackpackCargo", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_backpack_cargo));
	boost::python::def("addBackpackCargoGlobal", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_backpack_cargo_global));
	boost::python::def("addItemCargo", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_item_cargo));
	boost::python::def("addItemCargoGlobal", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_item_cargo_global));
	boost::python::def("addMagazine", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_magazine));
	boost::python::def("addMagazineAmmoCargo", static_cast<void(*)(const object &,sqf_string_const_ref,int,int)>(&add_magazine_ammo_cargo));
	boost::python::def("addMagazineCargo", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_magazine_cargo));
	boost::python::def("addMagazineCargoGlobal", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_magazine_cargo_global));
	boost::python::def("addMagazines", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_magazines));
	boost::python::def("addMagazineTurret", static_cast<void(*)(const object &,sqf_string_const_ref,const std::vector<int> &,int)>(&add_magazine_turret));
	boost::python::def("addWeaponTurret", static_cast<void(*)(const object &,sqf_string_const_ref,const std::vector<int> &)>(&add_weapon_turret));
	boost::python::def("addWeaponCargo", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_weapon_cargo));
	boost::python::def("addWeaponCargoGlobal", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_weapon_cargo_global));
	boost::python::def("addWeaponItem", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&add_weapon_item));
	boost::python::def("addWeaponItem", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,int)>(&add_weapon_item));
	boost::python::def("addWeaponItem", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,int,sqf_string_const_ref)>(&add_weapon_item));
	boost::python::def("magazineCargo", static_cast<sqf_return_string_list(*)(const object &)>(&magazine_cargo));
	boost::python::def("magazines", static_cast<sqf_return_string_list(*)(const object &)>(&magazines));
	boost::python::def("magazinesAllTurrets", static_cast<std::vector<rv_turret_magazine>(*)(const object &)>(&magazines_all_turrets));
	boost::python::def("magazinesAmmo", static_cast<std::vector<rv_magazine_ammo>(*)(const object &)>(&magazines_ammo));
	boost::python::def("magazinesAmmoCargo", static_cast<std::vector<rv_magazine_ammo>(*)(const object &)>(&magazines_ammo_cargo));
	boost::python::def("magazinesAmmoFull", static_cast<std::vector<rv_magazine_ammo>(*)(const object &)>(&magazines_ammo_full));
	boost::python::def("magazinesDetail", static_cast<sqf_return_string_list(*)(const object &)>(&magazines_detail));
	boost::python::def("magazinesDetailBackpack", static_cast<sqf_return_string_list(*)(const object &)>(&magazines_detail_backpack));
	boost::python::def("magazinesDetailUniform", static_cast<sqf_return_string_list(*)(const object &)>(&magazines_detail_uniform));
	boost::python::def("magazinesDetailVest", static_cast<sqf_return_string_list(*)(const object &)>(&magazines_detail_vest));
	boost::python::def("backpackCargo", static_cast<sqf_return_string_list(*)(const object &)>(&backpack_cargo));
	boost::python::def("backpackItems", static_cast<sqf_return_string_list(*)(const object &)>(&backpack_items));
	boost::python::def("backpackMagazines", static_cast<sqf_return_string_list(*)(const object &)>(&backpack_magazines));
	boost::python::def("canAdd", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&can_add));
	boost::python::def("canAdd", static_cast<bool(*)(const object &,sqf_string_const_ref,int)>(&can_add));
	boost::python::def("canAddItemToBackpack", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&can_add_item_to_backpack));
	boost::python::def("canAddItemToBackpack", static_cast<bool(*)(const object &,sqf_string_const_ref,int)>(&can_add_item_to_backpack));
	boost::python::def("canAddItemToUniform", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&can_add_item_to_uniform));
	boost::python::def("canAddItemToUniform", static_cast<bool(*)(const object &,sqf_string_const_ref,int)>(&can_add_item_to_uniform));
	boost::python::def("canAddItemToVest", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&can_add_item_to_vest));
	boost::python::def("canAddItemToVest", static_cast<bool(*)(const object &,sqf_string_const_ref,int)>(&can_add_item_to_vest));
	boost::python::def("currentMagazineDetail", static_cast<sqf_return_string(*)(const object &)>(&current_magazine_detail));
	boost::python::def("clearAllItemsFromBackpack", static_cast<void(*)(const object &)>(&clear_all_items_from_backpack));
	boost::python::def("clearBackpackCargo", static_cast<void(*)(const object &)>(&clear_backpack_cargo));
	boost::python::def("clearBackpackCargoGlobal", static_cast<void(*)(const object &)>(&clear_backpack_cargo_global));
	boost::python::def("clearItemCargo", static_cast<void(*)(const object &)>(&clear_item_cargo));
	boost::python::def("clearItemCargoGlobal", static_cast<void(*)(const object &)>(&clear_item_cargo_global));
	boost::python::def("clearMagazineCargo", static_cast<void(*)(const object &)>(&clear_magazine_cargo));
	boost::python::def("clearMagazineCargoGlobal", static_cast<void(*)(const object &)>(&clear_magazine_cargo_global));
	boost::python::def("clearWeaponCargo", static_cast<void(*)(const object &)>(&clear_weapon_cargo));
	boost::python::def("clearWeaponCargoGlobal", static_cast<void(*)(const object &)>(&clear_weapon_cargo_global));
	boost::python::def("handgunMagazine", static_cast<sqf_return_string(*)(const object &)>(&handgun_magazine));
	boost::python::def("handgunWeapon", static_cast<sqf_return_string(*)(const object &)>(&handgun_weapon));
	boost::python::def("removeAllContainers", static_cast<void(*)(const object &)>(&remove_all_containers));
	boost::python::def("removeAllHandgunItems", static_cast<void(*)(const object &)>(&remove_all_handgun_items));
	boost::python::def("removeAllItems", static_cast<void(*)(const object &)>(&remove_all_items));
	boost::python::def("removeAllItemsWithMagazines", static_cast<void(*)(const object &)>(&remove_all_items_with_magazines));
	boost::python::def("removeAllPrimaryWeaponItems", static_cast<void(*)(const object &)>(&remove_all_primary_weapon_items));
	boost::python::def("removeAllWeapons", static_cast<void(*)(const object &)>(&remove_all_weapons));
	boost::python::def("removeBackpack", static_cast<void(*)(const object &)>(&remove_backpack));
	boost::python::def("removeBackpackGlobal", static_cast<void(*)(const object &)>(&remove_backpack_global));
	boost::python::def("removeGoggles", static_cast<void(*)(const object &)>(&remove_goggles));
	boost::python::def("removeHeadgear", static_cast<void(*)(const object &)>(&remove_headgear));
	boost::python::def("removeUniform", static_cast<void(*)(const object &)>(&remove_uniform));
	boost::python::def("removeVest", static_cast<void(*)(const object &)>(&remove_vest));
	boost::python::def("uniform", static_cast<sqf_return_string(*)(const object &)>(&uniform));
	boost::python::def("uniformContainer", static_cast<object(*)(const object &)>(&uniform_container));
	boost::python::def("unitBackpack", static_cast<object(*)(const object &)>(&unit_backpack));
	boost::python::def("vest", static_cast<sqf_return_string(*)(const object &)>(&vest));
	boost::python::def("vestContainer", static_cast<object(*)(const object &)>(&vest_container));
	boost::python::def("backpack", static_cast<sqf_return_string(*)(const object &)>(&backpack));
	boost::python::def("backpackContainer", static_cast<object(*)(const object &)>(&backpack_container));
	boost::python::def("firstBackpack", static_cast<object(*)(const object &)>(&first_backpack));
	boost::python::def("addBackpack", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_backpack));
	boost::python::def("addBackpackGlobal", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_backpack_global));
	boost::python::def("addGoggles", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_goggles));
	boost::python::def("addHandgunItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_handgun_item));
	boost::python::def("addHeadgear", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_headgear));
	boost::python::def("addItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_item));
	boost::python::def("addItemToBackpack", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_item_to_backpack));
	boost::python::def("addItemToUniform", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_item_to_uniform));
	boost::python::def("addItemToVest", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_item_to_vest));
	boost::python::def("addMagazine", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_magazine));
	boost::python::def("addMagazineGlobal", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_magazine_global));
	boost::python::def("addPrimaryWeaponItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_primary_weapon_item));
	boost::python::def("addSecondaryWeaponItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_secondary_weapon_item));
	boost::python::def("addUniform", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_uniform));
	boost::python::def("addVest", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_vest));
	boost::python::def("addWeapon", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_weapon));
	boost::python::def("addWeaponGlobal", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_weapon_global));
	boost::python::def("assignItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&assign_item));
	boost::python::def("hasWeapon", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&has_weapon));
	boost::python::def("linkItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&link_item));
	boost::python::def("isUniformAllowed", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&is_uniform_allowed));
	boost::python::def("removeHandgunItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_handgun_item));
	boost::python::def("removeItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_item));
	boost::python::def("removeItemFromBackpack", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_item_from_backpack));
	boost::python::def("removeItemFromUniform", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_item_from_uniform));
	boost::python::def("removeItemFromVest", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_item_from_vest));
	boost::python::def("removeItems", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_items));
	boost::python::def("removeMagazineGlobal", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_magazine_global));
	boost::python::def("removeMagazines", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_magazines));
	boost::python::def("removePrimaryWeaponItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_primary_weapon_item));
	boost::python::def("removeSecondaryWeaponItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_secondary_weapon_item));
	boost::python::def("removeWeapon", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_weapon));
	boost::python::def("removeWeaponGlobal", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_weapon_global));
	boost::python::def("selectWeapon", static_cast<void(*)(const object &,sqf_string_const_ref)>(&select_weapon));
	boost::python::def("unassignItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&unassign_item));
	boost::python::def("unlinkItem", static_cast<void(*)(const object &,sqf_string_const_ref)>(&unlink_item));
	boost::python::def("items", static_cast<sqf_return_string_list(*)(const object &)>(&items));
	boost::python::def("currentThrowable", static_cast<rv_throwable(*)(const object &)>(&current_throwable));
	boost::python::def("everyBackpack", static_cast<std::vector<object>(*)(const object &)>(&every_backpack));
	boost::python::def("everyContainer", static_cast<std::vector<rv_container>(*)(const object &)>(&every_container));
	boost::python::def("getBackpackCargo", static_cast<std::vector<rv_cargo>(*)(const object &)>(&get_backpack_cargo));
	boost::python::def("getItemCargo", static_cast<std::vector<rv_cargo>(*)(const object &)>(&get_item_cargo));
	boost::python::def("getMagazineCargo", static_cast<std::vector<rv_cargo>(*)(const object &)>(&get_magazine_cargo));
	boost::python::def("getWeaponCargo", static_cast<std::vector<rv_cargo>(*)(const object &)>(&get_weapon_cargo));
	boost::python::def("itemCargo", static_cast<sqf_return_string_list(*)(const object &)>(&item_cargo));
	boost::python::def("weaponCargo", static_cast<sqf_return_string_list(*)(const object &)>(&weapon_cargo));
	boost::python::def("weapons", static_cast<sqf_return_string_list(*)(const object &)>(&weapons));
	boost::python::def("itemsWithMagazines", static_cast<sqf_return_string_list(*)(const object &)>(&items_with_magazines));
	boost::python::def("primaryWeaponItems", static_cast<sqf_return_string_list(*)(const object &)>(&primary_weapon_items));
	boost::python::def("primaryWeaponMagazine", static_cast<sqf_return_string_list(*)(const object &)>(&primary_weapon_magazine));
	boost::python::def("secondaryWeaponItems", static_cast<sqf_return_string_list(*)(const object &)>(&secondary_weapon_items));
	boost::python::def("secondaryWeaponMagazine", static_cast<sqf_return_string_list(*)(const object &)>(&secondary_weapon_magazine));
	boost::python::def("weaponsItems", static_cast<std::vector<rv_weapon_items>(*)(const object &)>(&weapons_items));
	boost::python::def("weaponsItemsCargo", static_cast<std::vector<rv_weapon_items>(*)(const object &)>(&weapons_items_cargo));
	boost::python::def("handgunItems", static_cast<rv_handgun_items(*)(const object &)>(&handgun_items));
	boost::python::def("soldierMagazines", static_cast<sqf_return_string_list(*)(const object &)>(&soldier_magazines));
	boost::python::def("vestMagazines", static_cast<sqf_return_string_list(*)(const object &)>(&vest_magazines));
	boost::python::def("vestItems", static_cast<sqf_return_string_list(*)(const object &)>(&vest_items));
	boost::python::def("uniformMagazines", static_cast<sqf_return_string_list(*)(const object &)>(&uniform_magazines));
	boost::python::def("uniformItems", static_cast<sqf_return_string_list(*)(const object &)>(&uniform_items));
	boost::python::def("removeAllAssignedItems", static_cast<void(*)(const object &)>(&remove_all_assigned_items));
	boost::python::def("assignedItems", static_cast<sqf_return_string_list(*)(const object &)>(&assigned_items));
	boost::python::def("currentMagazine", static_cast<sqf_return_string(*)(const object &)>(&current_magazine));
	boost::python::def("currentMuzzle", static_cast<sqf_return_string(*)(const object &)>(&current_muzzle));
	boost::python::def("currentWeapon", static_cast<sqf_return_string(*)(const object &)>(&current_weapon));
	boost::python::def("currentWeaponMode", static_cast<sqf_return_string(*)(const object &)>(&current_weapon_mode));
	boost::python::def("loadMagazine", static_cast<void(*)(const object &,const std::vector<int> &,sqf_string_const_ref,sqf_string_const_ref)>(&load_magazine));
	boost::python::def("getDescription", static_cast<rv_unit_description(*)(const object &)>(&get_description));
	boost::python::def("load", static_cast<float(*)(const object &)>(&load));
	boost::python::def("loadAbs", static_cast<float(*)(const object &)>(&load_abs));
	boost::python::def("loadBackpack", static_cast<float(*)(const object &)>(&load_backpack));
	boost::python::def("loadUniform", static_cast<float(*)(const object &)>(&load_uniform));
	boost::python::def("loadVest", static_cast<float(*)(const object &)>(&load_vest));
	boost::python::def("secondaryWeapon", static_cast<sqf_return_string(*)(const object &)>(&secondary_weapon));
	boost::python::def("primaryWeapon", static_cast<sqf_return_string(*)(const object &)>(&primary_weapon));
	boost::python::def("removeMagazine", static_cast<void(*)(const object &,sqf_string_const_ref)>(&remove_magazine));
	boost::python::def("removeMagazinesTurret", static_cast<void(*)(const object &,sqf_string_const_ref,const std::vector<int> &)>(&remove_magazines_turret));
	boost::python::def("removeMagazineTurret", static_cast<void(*)(const object &,sqf_string_const_ref,const std::vector<int> &)>(&remove_magazine_turret));
	boost::python::def("removeWeaponAttachmentCargo", static_cast<void(*)(const object &,const std::vector<game_value> &)>(&remove_weapon_attachment_cargo));
	boost::python::def("removeWeaponCargo", static_cast<void(*)(const object &,const std::vector<game_value> &)>(&remove_weapon_cargo));
	boost::python::def("removeWeaponTurret", static_cast<void(*)(const object &,sqf_string_const_ref,const std::vector<int> &)>(&remove_weapon_turret));
	boost::python::def("setAmmo", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&set_ammo));
	boost::python::def("getUnitLoadout", static_cast<rv_unit_loadout(*)(const object &)>(&get_unit_loadout));
	boost::python::def("getUnitLoadout", static_cast<rv_unit_loadout(*)(const config &)>(&get_unit_loadout));
	boost::python::def("setUnitLoadout", static_cast<void(*)(const object &,const rv_unit_loadout &,bool)>(&set_unit_loadout));
	boost::python::def("weaponAccessories", static_cast<rv_weapon_accessories(*)(const object &,sqf_string_const_ref)>(&weapon_accessories));
	boost::python::def("weaponAccessoriesCargo", static_cast<rv_weapon_accessories(*)(const object &,int,int)>(&weapon_accessories_cargo));
	boost::python::def("magazinesTurret", static_cast<sqf_return_string_list(*)(const object &,const std::vector<int> &)>(&magazines_turret));
	boost::python::def("magazineTurretAmmo", static_cast<int(*)(sqf_string_const_ref,const std::vector<int> &)>(&magazine_turret_ammo));
	boost::python::def("setMagazineTurretAmmo", static_cast<void(*)(const object &,sqf_string_const_ref,int,const std::vector<int> &)>(&set_magazine_turret_ammo));
	boost::python::def("setVehicleAmmo", static_cast<void(*)(const object &,float)>(&set_vehicle_ammo));
	boost::python::def("setVehicleAmmoDef", static_cast<void(*)(const object &,float)>(&set_vehicle_ammo_def));
	boost::python::def("setFuelCargo", static_cast<void(*)(const object &,float)>(&set_fuel_cargo));
	boost::python::def("setRepairCargo", static_cast<void(*)(const object &,float)>(&set_repair_cargo));
	boost::python::def("pickWeaponPool", static_cast<void(*)(const object &)>(&pick_weapon_pool));
	boost::python::def("putWeaponPool", static_cast<void(*)(const object &)>(&put_weapon_pool));
	boost::python::def("queryItemsPool", static_cast<float(*)(sqf_string_const_ref)>(&query_items_pool));
	boost::python::def("queryMagazinePool", static_cast<float(*)(sqf_string_const_ref)>(&query_magazine_pool));
	boost::python::def("queryWeaponPool", static_cast<float(*)(sqf_string_const_ref)>(&query_weapon_pool));
	boost::python::def("ammo", static_cast<float(*)(const object &,sqf_string_const_ref)>(&ammo));
	boost::python::def("forceAddUniform", static_cast<void(*)(const object &,sqf_string_const_ref)>(&force_add_uniform));
	boost::python::def("setAmmoCargo", static_cast<void(*)(const object &,float)>(&set_ammo_cargo));
	boost::python::def("addWeaponPool", static_cast<void(*)(sqf_string_const_ref,int)>(&add_weapon_pool));
	boost::python::def("currentMagazineDetailTurret", static_cast<sqf_return_string(*)(const object &,const std::vector<int> &)>(&current_magazine_detail_turret));
	boost::python::def("currentMagazineTurret", static_cast<sqf_return_string(*)(const object &,const std::vector<int> &)>(&current_magazine_turret));
	boost::python::def("currentWeaponTurret", static_cast<sqf_return_string(*)(const object &,const std::vector<int> &)>(&current_weapon_turret));
	boost::python::def("getArtilleryAmmo", static_cast<sqf_return_string_list(*)(const std::vector<object> &)>(&get_artillery_ammo));
	boost::python::def("clearItemPool", static_cast<void(*)()>(&clear_item_pool));
	boost::python::def("clearMagazinePool", static_cast<void(*)()>(&clear_magazine_pool));
	boost::python::def("clearWeaponPool", static_cast<void(*)()>(&clear_weapon_pool));
	boost::python::def("binocular", static_cast<sqf_return_string(*)(const object &)>(&binocular));
	boost::python::def("gearIdcammoCount", static_cast<float(*)(float)>(&gear_idcammo_count));
	boost::python::def("getAmmoCargo", static_cast<float(*)(const object &)>(&get_ammo_cargo));
	boost::python::def("getFuelCargo", static_cast<float(*)(const object &)>(&get_fuel_cargo));
	boost::python::def("getRepairCargo", static_cast<float(*)(const object &)>(&get_repair_cargo));
	boost::python::def("goggles", static_cast<sqf_return_string(*)(const object &)>(&goggles));
	boost::python::def("headgear", static_cast<sqf_return_string(*)(const object &)>(&headgear));
	boost::python::def("hmd", static_cast<sqf_return_string(*)(const object &)>(&hmd));
	boost::python::def("weaponState", static_cast<rv_weapon_state(*)(const object &)>(&weapon_state));
	boost::python::def("weaponState", static_cast<rv_weapon_state(*)(const object &,const std::vector<int> &,std::optional<sqf_return_string>)>(&weapon_state));
	boost::python::class_<rv_magazine_ammo>("rvMagazineAmmo", boost::python::init<>())
		.def_readwrite("name", &rv_magazine_ammo::name)
		.def_readwrite("count", &rv_magazine_ammo::count)
		.def_readwrite("loaded", &rv_magazine_ammo::loaded)
		.def_readwrite("type", &rv_magazine_ammo::type)
		.def_readwrite("location", &rv_magazine_ammo::location);
	boost::python::class_<rv_turret_magazine>("rvTurretMagazine")
		.def_readwrite("name", &rv_turret_magazine::name)
		.def_readwrite("turretPath", &rv_turret_magazine::turret_path)
		.def_readwrite("count", &rv_turret_magazine::count)
		.def_readwrite("id", &rv_turret_magazine::id)
		.def_readwrite("creator", &rv_turret_magazine::creator);
	boost::python::class_<rv_container>("rvContainer")
		.def_readwrite("type", &rv_container::type)
		.def_readwrite("container", &rv_container::container);
	boost::python::class_<rv_weapon_accessories>("rvWeaponAccessories")
		.def_readwrite("silencer", &rv_weapon_accessories::silencer)
		.def_readwrite("flashlightLaserpointer", &rv_weapon_accessories::flashlight_laserpointer)
		.def_readwrite("optics", &rv_weapon_accessories::optics)
		.def_readwrite("bipod", &rv_weapon_accessories::bipod);
	boost::python::class_<rv_weapon_state>("rvWeaponState", boost::python::init<game_value>())
		.def_readwrite("weapon", &rv_weapon_state::weapon)
		.def_readwrite("muzzle", &rv_weapon_state::muzzle)
		.def_readwrite("mode", &rv_weapon_state::mode)
		.def_readwrite("magazine", &rv_weapon_state::magazine)
		.def_readwrite("ammoCount", &rv_weapon_state::ammo_count);
	boost::python::class_<rv_throwable>("rvThrowable")
		.def_readwrite("magazineClassName", &rv_throwable::magazine_class_name)
		.def_readwrite("muzzleClassName", &rv_throwable::muzzle_class_name)
		.def_readwrite("ids", &rv_throwable::ids);
	boost::python::class_<rv_cargo>("rvCargo")
		.def_readwrite("types", &rv_cargo::types)
		.def_readwrite("amounts", &rv_cargo::amounts);
	boost::python::class_<rv_magazine>("rvMagazine", boost::python::init<const game_value &>())
		.def_readwrite("name", &rv_magazine::name)
		.def_readwrite("ammo", &rv_magazine::ammo);
	boost::python::class_<rv_weapon_items>("rvWeaponItems", boost::python::init<const game_value &>())
		.def_readwrite("weapon", &rv_weapon_items::weapon)
		.def_readwrite("muzzle", &rv_weapon_items::muzzle)
		.def_readwrite("laser", &rv_weapon_items::laser)
		.def_readwrite("optics", &rv_weapon_items::optics)
		.def_readwrite("magazine", &rv_weapon_items::magazine)
		.def_readwrite("grenadeLauncherMagazine", &rv_weapon_items::grenade_launcher_magazine)
		.def_readwrite("bipod", &rv_weapon_items::bipod);
	boost::python::class_<rv_handgun_items>("rvHandgunItems", boost::python::init<const game_value &>())
		.def_readwrite("silencer", &rv_handgun_items::silencer)
		.def_readwrite("laser", &rv_handgun_items::laser)
		.def_readwrite("optics", &rv_handgun_items::optics)
		.def_readwrite("bipod", &rv_handgun_items::bipod);
	boost::python::class_<rv_unit_description>("rvUnitDescription", boost::python::init<const game_value &>())
		.def_readwrite("unit", &rv_unit_description::unit)
		.def_readwrite("uniform", &rv_unit_description::uniform)
		.def_readwrite("vest", &rv_unit_description::vest)
		.def_readwrite("backpack", &rv_unit_description::backpack);
	boost::python::class_<rv_magazine_info>("rvMagazineInfo", boost::python::init<const game_value &>())
		.def_readwrite("magazine", &rv_magazine_info::magazine)
		.def_readwrite("ammo", &rv_magazine_info::ammo)
		.def_readwrite("count", &rv_magazine_info::count);
	boost::python::class_<rv_weapon_info>("rvWeaponInfo", boost::python::init<const game_value &>())
		.def_readwrite("weapon", &rv_weapon_info::weapon)
		.def_readwrite("silencer", &rv_weapon_info::silencer)
		.def_readwrite("laser", &rv_weapon_info::laser)
		.def_readwrite("optics", &rv_weapon_info::optics)
		.def_readwrite("primaryMuzzleMagazine", &rv_weapon_info::primary_muzzle_magazine)
		.def_readwrite("secondaryMuzzleMagazine", &rv_weapon_info::secondary_muzzle_magazine)
		.def_readwrite("bipod", &rv_weapon_info::bipod);
	boost::python::class_<rv_container_info>("rvContainerInfo", boost::python::init<const game_value &>())
		.def_readwrite("container", &rv_container_info::container)
		.def_readwrite("items", &rv_container_info::items);
	boost::python::class_<rv_unit_loadout>("rvUnitLoadout", boost::python::init<const game_value &>())
		.def_readwrite("primary", &rv_unit_loadout::primary)
		.def_readwrite("secondary", &rv_unit_loadout::secondary)
		.def_readwrite("handgun", &rv_unit_loadout::handgun)
		.def_readwrite("uniform", &rv_unit_loadout::uniform)
		.def_readwrite("vest", &rv_unit_loadout::vest)
		.def_readwrite("backpack", &rv_unit_loadout::backpack)
		.def_readwrite("headgear", &rv_unit_loadout::headgear)
		.def_readwrite("facewear", &rv_unit_loadout::facewear)
		.def_readwrite("binocular", &rv_unit_loadout::binocular)
		.def_readwrite("assignedItems", &rv_unit_loadout::assigned_items);
}

BOOST_PYTHON_MODULE(__sqf_marker)
{
	boost::python::def("createMarker", static_cast<sqf_return_string(*)(sqf_string_const_ref,const vector3 &)>(&create_marker));
	boost::python::def("createMarker", static_cast<sqf_return_string(*)(sqf_string_const_ref,const vector2 &)>(&create_marker));
	boost::python::def("createMarker", static_cast<sqf_return_string(*)(sqf_string_const_ref,const object &)>(&create_marker));
	boost::python::def("createMarkerLocal", static_cast<sqf_return_string(*)(sqf_string_const_ref,const vector3 &)>(&create_marker_local));
	boost::python::def("createMarkerLocal", static_cast<sqf_return_string(*)(sqf_string_const_ref,const vector2 &)>(&create_marker_local));
	boost::python::def("createMarkerLocal", static_cast<sqf_return_string(*)(sqf_string_const_ref,const object &)>(&create_marker_local));
	boost::python::def("deleteMarker", static_cast<void(*)(sqf_string_const_ref)>(&delete_marker));
	boost::python::def("deleteMarkerLocal", static_cast<void(*)(sqf_string_const_ref)>(&delete_marker_local));
	boost::python::def("setMarkerSize", static_cast<void(*)(sqf_string_const_ref,const vector2 &)>(&set_marker_size));
	boost::python::def("setMarkerSizeLocal", static_cast<void(*)(sqf_string_const_ref,const vector2 &)>(&set_marker_size_local));
	boost::python::def("setMarkerType", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_marker_type));
	boost::python::def("setMarkerTypeLocal", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_marker_type_local));
	boost::python::def("setMarkerText", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_marker_text));
	boost::python::def("setMarkerTextLocal", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_marker_text_local));
	boost::python::def("setMarkerShape", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_marker_shape));
	boost::python::def("setMarkerShapeLocal", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_marker_shape_local));
	boost::python::def("setMarkerPos", static_cast<void(*)(sqf_string_const_ref,const vector3 &)>(&set_marker_pos));
	boost::python::def("setMarkerPosLocal", static_cast<void(*)(sqf_string_const_ref,const vector3 &)>(&set_marker_pos_local));
	boost::python::def("setMarkerPos", static_cast<void(*)(sqf_string_const_ref,const vector2 &)>(&set_marker_pos));
	boost::python::def("setMarkerPosLocal", static_cast<void(*)(sqf_string_const_ref,const vector2 &)>(&set_marker_pos_local));
	boost::python::def("setMarkerBrush", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_marker_brush));
	boost::python::def("setMarkerBrushLocal", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_marker_brush_local));
	boost::python::def("setMarkerColor", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_marker_color));
	boost::python::def("setMarkerColorLocal", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_marker_color_local));
	boost::python::def("setMarkerAlpha", static_cast<void(*)(sqf_string_const_ref,float)>(&set_marker_alpha));
	boost::python::def("setMarkerAlphaLocal", static_cast<void(*)(sqf_string_const_ref,float)>(&set_marker_alpha_local));
	boost::python::def("setMarkerDir", static_cast<void(*)(sqf_string_const_ref,float)>(&set_marker_dir));
	boost::python::def("setMarkerDirLocal", static_cast<void(*)(sqf_string_const_ref,float)>(&set_marker_dir_local));
	boost::python::def("markerAlpha", static_cast<float(*)(sqf_string_const_ref)>(&marker_alpha));
	boost::python::def("markerDir", static_cast<float(*)(sqf_string_const_ref)>(&marker_dir));
	boost::python::def("markerBrush", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&marker_brush));
	boost::python::def("markerColor", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&marker_color));
	boost::python::def("markerShape", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&marker_shape));
	boost::python::def("markerText", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&marker_text));
	boost::python::def("markerType", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&marker_type));
	boost::python::def("getMarkerColor", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&get_marker_color));
	boost::python::def("getMarkerType", static_cast<sqf_return_string(*)(sqf_string_const_ref)>(&get_marker_type));
	boost::python::def("getMarkerPos", static_cast<vector3(*)(sqf_string_const_ref)>(&get_marker_pos));
	boost::python::def("getMarkerSize", static_cast<vector2(*)(sqf_string_const_ref)>(&get_marker_size));
	boost::python::def("allMapMarkers", static_cast<std::vector<marker>(*)()>(&all_map_markers));
	boost::python::def("setImportance", static_cast<void(*)(const location &,const float &)>(&set_importance));
	boost::python::def("setSide", static_cast<void(*)(const location &,const side &)>(&set_side));
	boost::python::def("setPosition", static_cast<void(*)(const location &,const vector3 &)>(&set_position));
	boost::python::def("deleteLocation", static_cast<void(*)(const location &)>(&delete_location));
	boost::python::def("attachObject", static_cast<void(*)(const location &,const object &)>(&attach_object));
	boost::python::def("isNull", static_cast<bool(*)(const location &)>(&is_null));
	boost::python::def("rectangular", static_cast<bool(*)(const location &)>(&rectangular));
	boost::python::def("in", static_cast<bool(*)(const vector3 &,const location &)>(&in));
	boost::python::def("direction", static_cast<float(*)(const location &)>(&direction));
	boost::python::def("importance", static_cast<float(*)(const location &)>(&importance));
	boost::python::def("distance", static_cast<float(*)(const location &,const location &)>(&distance));
	boost::python::def("distance", static_cast<float(*)(const location &,const vector3 &)>(&distance));
	boost::python::def("distance", static_cast<float(*)(const vector3 &,const location &)>(&distance));
	boost::python::def("nearestLocation", static_cast<location(*)(const vector3 &,sqf_string_const_ref)>(&nearest_location));
	boost::python::def("nearestLocation", static_cast<location(*)(const object &,sqf_string_const_ref)>(&nearest_location));
	boost::python::def("nearestLocationWithDubbing", static_cast<location(*)(const vector3 &)>(&nearest_location_with_dubbing));
	boost::python::def("nearestLocationWithDubbing", static_cast<location(*)(const object &)>(&nearest_location_with_dubbing));
	boost::python::def("attachedObject", static_cast<object(*)(const location &)>(&attached_object));
	boost::python::def("getSide", static_cast<side(*)(const location &)>(&get_side));
	boost::python::def("position", static_cast<vector3(*)(const location &)>(&position));
	boost::python::def("size", static_cast<vector2(*)(const location &)>(&size));
	boost::python::def("getPos", static_cast<vector3(*)(const location &)>(&get_pos));
	boost::python::def("locationPosition", static_cast<vector2(*)(const location &)>(&location_position));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const vector3 &,sqf_string_list_const_ref,float)>(&nearest_locations));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const vector3 &,sqf_string_list_const_ref,float,const vector3 &)>(&nearest_locations));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const vector3 &,sqf_string_list_const_ref,float,const object &)>(&nearest_locations));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const object &,sqf_string_list_const_ref,float)>(&nearest_locations));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const object &,sqf_string_list_const_ref,float,const vector3 &)>(&nearest_locations));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const object &,sqf_string_list_const_ref,float,const object &)>(&nearest_locations));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const location &)>(&all_variables));
	boost::python::def("name", static_cast<sqf_return_string(*)(const location &)>(&name));
	boost::python::def("type", static_cast<sqf_return_string(*)(const location &)>(&type));
	boost::python::def("className", static_cast<sqf_return_string(*)(const location &)>(&class_name));
	boost::python::def("createLocation", static_cast<location(*)(sqf_string_const_ref,const vector3 &,float,float)>(&create_location));
	boost::python::def("createLocation", static_cast<location(*)(sqf_string_const_ref,const vector2 &,float,float)>(&create_location));
	boost::python::def("createLocation", static_cast<location(*)(sqf_string_const_ref,const object &,float,float)>(&create_location));
	boost::python::def("locationNull", static_cast<location(*)()>(&location_null));
	boost::python::def("setRectangular", static_cast<void(*)(const location &,bool)>(&set_rectangular));
	boost::python::def("setSize", static_cast<void(*)(const location &,float,float)>(&set_size));
	boost::python::def("setName", static_cast<void(*)(const location &,sqf_string_const_ref)>(&set_name));
	boost::python::def("setSpeech", static_cast<void(*)(const location &,sqf_string_const_ref)>(&set_speech));
	boost::python::def("setText", static_cast<void(*)(const location &,sqf_string_const_ref)>(&set_text));
	boost::python::def("setType", static_cast<void(*)(const location &,sqf_string_const_ref)>(&set_type));
	boost::python::def("removeDrawIcon", static_cast<void(*)(const control &,sqf_string_const_ref,sqf_string_const_ref)>(&remove_draw_icon));
	boost::python::def("removeDrawLinks", static_cast<void(*)(const control &,sqf_string_const_ref,sqf_string_const_ref)>(&remove_draw_links));
	boost::python::def("setDrawIcon", static_cast<void(*)(const control &,const object &,sqf_string_const_ref,const rv_color &,const vector3 &,float,float,float,float,sqf_string_const_ref,float,bool,bool,float)>(&set_draw_icon));
	boost::python::def("updateDrawIcon", static_cast<void(*)(const control &,sqf_string_const_ref,sqf_string_const_ref,const rv_color &,const vector2 &,float,float,bool,float,int)>(&update_draw_icon));
	boost::python::def("drawArrow", static_cast<void(*)(const control &,std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3>, std::reference_wrapper<const object> >,std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3>, std::reference_wrapper<const object> >,const rv_color &)>(&draw_arrow));
	boost::python::def("drawEllipse", static_cast<void(*)(const control &,std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3>, std::reference_wrapper<const object> >,const vector2 &,float,const rv_color &,sqf_string_const_ref)>(&draw_ellipse));
	boost::python::def("drawLine", static_cast<void(*)(const control &,std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3>, std::reference_wrapper<const object> >,std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3>, std::reference_wrapper<const object> >,const rv_color &)>(&draw_line));
	boost::python::def("drawLink", static_cast<void(*)(const control &,std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3>, std::reference_wrapper<const object> >,std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3>, std::reference_wrapper<const object> >,sqf_string_const_ref,sqf_string_const_ref,rv_color &)>(&draw_link));
	boost::python::def("drawLocation", static_cast<void(*)(const control &,const location &)>(&draw_location));
	boost::python::def("drawPolygon", static_cast<void(*)(const control &,const std::vector<vector3> &,const rv_color &)>(&draw_polygon));
}

BOOST_PYTHON_MODULE(__sqf_misc)
{
	boost::python::def("canTriggerDynamicSimulation", static_cast<bool(*)(const object &)>(&can_trigger_dynamic_simulation));
	boost::python::def("enableSimulation", static_cast<void(*)(const object &,bool)>(&enable_simulation));
	boost::python::def("enableSimulationGlobal", static_cast<void(*)(const object &,bool)>(&enable_simulation_global));
	boost::python::def("simulationEnabled", static_cast<bool(*)(const object &)>(&simulation_enabled));
	boost::python::def("triggerDynamicSimulation", static_cast<void(*)(const object &,bool)>(&trigger_dynamic_simulation));
	boost::python::def("setDynamicSimulationDistance", static_cast<void(*)(sqf_string_const_ref,float)>(&set_dynamic_simulation_distance));
	boost::python::def("enableDynamicSimulation", static_cast<void(*)(const object &,bool)>(&enable_dynamic_simulation));
	boost::python::def("enableDynamicSimulation", static_cast<void(*)(const group &,bool)>(&enable_dynamic_simulation));
	boost::python::def("diagDynamicSimulationEnd", static_cast<void(*)(sqf_string_const_ref)>(&diag_dynamic_simulation_end));
	boost::python::def("dynamicSimulationDistance", static_cast<float(*)(sqf_string_const_ref)>(&dynamic_simulation_distance));
	boost::python::def("dynamicSimulationDistanceCoef", static_cast<float(*)(sqf_string_const_ref)>(&dynamic_simulation_distance_coef));
	boost::python::def("dynamicSimulationEnabled", static_cast<bool(*)(const object &)>(&dynamic_simulation_enabled));
	boost::python::def("dynamicSimulationEnabled", static_cast<bool(*)(const group &)>(&dynamic_simulation_enabled));
	boost::python::def("enableDynamicSimulationSystem", static_cast<void(*)(bool)>(&enable_dynamic_simulation_system));
	boost::python::def("dynamicSimulationSystemEnabled", static_cast<bool(*)()>(&dynamic_simulation_system_enabled));
	boost::python::def("setDynamicSimulationDistanceCoef", static_cast<void(*)(sqf_string_const_ref,float)>(&set_dynamic_simulation_distance_coef));
	boost::python::def("activateAddons", static_cast<void(*)(sqf_string_list_const_ref)>(&activate_addons));
	boost::python::def("enableSaving", static_cast<void(*)(bool)>(&enable_saving));
	boost::python::def("enableSaving", static_cast<void(*)(bool,bool)>(&enable_saving));
	boost::python::def("getDlcs", static_cast<std::vector<float>(*)(float)>(&get_dlcs));
	boost::python::def("armoryPoints", static_cast<float(*)()>(&armory_points));
	boost::python::def("cadetMode", static_cast<bool(*)()>(&cadet_mode));
	boost::python::def("cheatsEnabled", static_cast<bool(*)()>(&cheats_enabled));
	boost::python::def("difficulty", static_cast<float(*)()>(&difficulty));
	boost::python::def("distributionRegion", static_cast<float(*)()>(&distribution_region));
	boost::python::def("finishMissionInit", static_cast<void(*)()>(&finish_mission_init));
	boost::python::def("forceEnd", static_cast<void(*)()>(&force_end));
	boost::python::def("freeLook", static_cast<bool(*)()>(&free_look));
	boost::python::def("getTotalDlcUsageTime", static_cast<float(*)()>(&get_total_dlc_usage_time));
	boost::python::def("isAutotest", static_cast<bool(*)()>(&is_autotest));
	boost::python::def("isFilepatchingEnabled", static_cast<bool(*)()>(&is_filepatching_enabled));
	boost::python::def("isInstructorFigureEnabled", static_cast<bool(*)()>(&is_instructor_figure_enabled));
	boost::python::def("isSteamMission", static_cast<bool(*)()>(&is_steam_mission));
	boost::python::def("isStreamFriendlyUiEnabled", static_cast<bool(*)()>(&is_stream_friendly_ui_enabled));
	boost::python::def("loadGame", static_cast<void(*)()>(&load_game));
	boost::python::def("logEntities", static_cast<void(*)()>(&log_entities));
	boost::python::def("markAsFinishedOnSteam", static_cast<bool(*)()>(&mark_as_finished_on_steam));
	boost::python::def("missionDifficulty", static_cast<float(*)()>(&mission_difficulty));
	boost::python::def("runInitScript", static_cast<void(*)()>(&run_init_script));
	boost::python::def("reversedMouseY", static_cast<bool(*)()>(&reversed_mouse_y));
	boost::python::def("teamSwitchEnabled", static_cast<bool(*)()>(&team_switch_enabled));
	boost::python::def("teamSwitch", static_cast<void(*)()>(&team_switch));
	boost::python::def("systemOfUnits", static_cast<float(*)()>(&system_of_units));
	boost::python::def("selectNoPlayer", static_cast<void(*)()>(&select_no_player));
	boost::python::def("savingEnabled", static_cast<bool(*)()>(&saving_enabled));
	boost::python::def("difficultyEnabled", static_cast<bool(*)(sqf_string_const_ref)>(&difficulty_enabled));
	boost::python::def("activateKey", static_cast<void(*)(sqf_string_const_ref)>(&activate_key));
	boost::python::def("deActivateKey", static_cast<void(*)(sqf_string_const_ref)>(&de_activate_key));
	boost::python::def("isKeyActive", static_cast<bool(*)(sqf_string_const_ref)>(&is_key_active));
	boost::python::def("deleteCollection", static_cast<void(*)(const object &)>(&delete_collection));
	boost::python::def("deleteIdentity", static_cast<bool(*)(sqf_string_const_ref)>(&delete_identity));
	boost::python::def("deleteSite", static_cast<void(*)(const object &)>(&delete_site));
	boost::python::def("deleteStatus", static_cast<bool(*)(sqf_string_const_ref)>(&delete_status));
	boost::python::def("enableSentences", static_cast<void(*)(bool)>(&enable_sentences));
	boost::python::def("enableStressDamage", static_cast<void(*)(bool)>(&enable_stress_damage));
	boost::python::def("enableTeamSwitch", static_cast<void(*)(bool)>(&enable_team_switch));
	boost::python::def("getDlcusageTime", static_cast<float(*)(float)>(&get_dlcusage_time));
	boost::python::def("dissolveTeam", static_cast<void(*)(sqf_string_const_ref)>(&dissolve_team));
	boost::python::def("isDlcavailable", static_cast<bool(*)(float)>(&is_dlcavailable));
	boost::python::def("setArmoryPoints", static_cast<void(*)(float)>(&set_armory_points));
	boost::python::def("setSystemOfUnits", static_cast<void(*)(float)>(&set_system_of_units));
	boost::python::def("unlockAchievement", static_cast<bool(*)(sqf_string_const_ref)>(&unlock_achievement));
	boost::python::def("addLiveStats", static_cast<void(*)(const object &,float)>(&add_live_stats));
	boost::python::def("loadIdentity", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&load_identity));
	boost::python::def("loadStatus", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&load_status));
	boost::python::def("saveStatus", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&save_status));
	boost::python::def("saveGame", static_cast<void(*)()>(&save_game));
	boost::python::def("saveJoysticks", static_cast<void(*)()>(&save_joysticks));
	boost::python::def("roleDescription", static_cast<sqf_return_string(*)(const object &)>(&role_description));
	boost::python::def("setStatValue", static_cast<bool(*)(sqf_string_const_ref,float)>(&set_stat_value));
	boost::python::def("hostMission", static_cast<void(*)(const config &,const display &)>(&host_mission));
	boost::python::def("playMission", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&play_mission));
	boost::python::def("playMission", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,bool)>(&play_mission));
	boost::python::def("playMission", static_cast<void(*)(sqf_string_const_ref,const config &)>(&play_mission));
	boost::python::def("playMission", static_cast<void(*)(sqf_string_const_ref,const config &,bool)>(&play_mission));
	boost::python::def("playScriptedMission", static_cast<void(*)(sqf_string_const_ref,const code &)>(&play_scripted_mission));
	boost::python::def("playScriptedMission", static_cast<void(*)(sqf_string_const_ref,const code &,const config &)>(&play_scripted_mission));
	boost::python::def("playScriptedMission", static_cast<void(*)(sqf_string_const_ref,const code &,const config &,bool)>(&play_scripted_mission));
	boost::python::def("difficultyOption", static_cast<float(*)(sqf_string_const_ref)>(&difficulty_option));
	boost::python::def("enableWeaponDisassembly", static_cast<void(*)(bool)>(&enable_weapon_disassembly));
	boost::python::def("createSite", static_cast<object(*)(sqf_string_const_ref,const vector3 &)>(&create_site));
	boost::python::def("saveIdentity", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&save_identity));
	boost::python::def("setTrafficDensity", static_cast<void(*)(float,float,float,float,float)>(&set_traffic_density));
	boost::python::def("setTrafficGap", static_cast<void(*)(float,float,float,float,float)>(&set_traffic_gap));
	boost::python::def("setTrafficSpeed", static_cast<void(*)(float,float,float,float,float)>(&set_traffic_speed));
	boost::python::def("enableTraffic", static_cast<void(*)(bool)>(&enable_traffic));
	boost::python::def("setTrafficDistance", static_cast<void(*)(float)>(&set_traffic_distance));
	boost::python::def("inRangeOfArtillery", static_cast<bool(*)(const vector3 &,const std::vector<object> &,sqf_string_const_ref)>(&in_range_of_artillery));
	boost::python::def("getArtilleryEta", static_cast<float(*)(const object &,const vector3 &,sqf_string_const_ref)>(&get_artillery_eta));
	boost::python::def("enableEngineArtillery", static_cast<void(*)(bool)>(&enable_engine_artillery));
	boost::python::def("getArtilleryComputerSettings", static_cast<rv_artillery_computer_settings(*)()>(&get_artillery_computer_settings));
	boost::python::def("language", static_cast<sqf_return_string(*)()>(&language));
	boost::python::def("libraryCredits", static_cast<std::vector<rv_credit>(*)()>(&library_credits));
	boost::python::def("libraryDisclaimers", static_cast<sqf_return_string_list(*)()>(&library_disclaimers));
	boost::python::def("productVersion", static_cast<rv_product_version(*)()>(&product_version));
	boost::python::def("drawLine3D", static_cast<void(*)(const vector3 &,const vector3 &,const rv_color &)>(&draw_line_3d));
	boost::python::def("drawIcon3D", static_cast<void(*)(sqf_string_const_ref,const rv_color &,const vector3 &,float,float,float,sqf_string_const_ref,float,float,sqf_string_const_ref)>(&draw_icon_3d));
	boost::python::def("setParticleParams", static_cast<void(*)(const object &,const rv_particle_array &)>(&set_particle_params));
	boost::python::def("setParticleRandom", static_cast<void(*)(const object &,const rv_particle_random &)>(&set_particle_random));
	boost::python::def("setParticleCircle", static_cast<void(*)(const object &,float,const vector3 &)>(&set_particle_circle));
	boost::python::def("setParticleFire", static_cast<void(*)(const object &,float,float,float)>(&set_particle_fire));
	boost::python::def("setParticleClass", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_particle_class));
	boost::python::def("drop", static_cast<void(*)(const rv_particle_array &)>(&drop));
	boost::python::def("setParticleParams", static_cast<void(*)()>(&set_particle_params));
	boost::python::def("particlesQuality", static_cast<float(*)()>(&particles_quality));
	boost::python::def("setDropInterval", static_cast<void(*)(const object &,float)>(&set_drop_interval));
	boost::python::def("detectedMines", static_cast<std::vector<object>(*)(const side &)>(&detected_mines));
	boost::python::def("countSide", static_cast<float(*)(const side &,std::vector<object> &)>(&count_side));
	boost::python::def("setAirportSide", static_cast<void(*)(float,const side &)>(&set_airport_side));
	boost::python::def("setAirportSide", static_cast<void(*)(const object &,const side &)>(&set_airport_side));
	boost::python::def("revealMine", static_cast<void(*)(const object &,const side &)>(&reveal_mine));
	boost::python::def("mineDetectedBy", static_cast<bool(*)(const object &,const side &)>(&mine_detected_by));
	boost::python::def("addScoreSide", static_cast<void(*)(const side &,float)>(&add_score_side));
	boost::python::def("airportSide", static_cast<void(*)(int)>(&airport_side));
	boost::python::def("airportSide", static_cast<void(*)(const object &)>(&airport_side));
	boost::python::def("scoreSide", static_cast<float(*)(const side &)>(&score_side));
	boost::python::class_<rv_artillery_computer_settings>("rvArtilleryComputerSettings", boost::python::init<const game_value &>())
		.def_readwrite("name", &rv_artillery_computer_settings::name)
		.def_readwrite("ammo", &rv_artillery_computer_settings::ammo)
		.def_readwrite("mode", &rv_artillery_computer_settings::mode);
	boost::python::class_<rv_credit>("rvCredit", boost::python::init<const game_value &>())
		.def_readwrite("libraryName", &rv_credit::library_name)
		.def_readwrite("credits", &rv_credit::credits);
	boost::python::class_<rv_product_version>("rvProductVersion", boost::python::init<const game_value &>())
		.def_readwrite("name", &rv_product_version::name)
		.def_readwrite("nameShort", &rv_product_version::name_short)
		.def_readwrite("version", &rv_product_version::version)
		.def_readwrite("build", &rv_product_version::build)
		.def_readwrite("branch", &rv_product_version::branch)
		.def_readwrite("mods", &rv_product_version::mods)
		.def_readwrite("platform", &rv_product_version::platform);
}

BOOST_PYTHON_MODULE(__sqf_multiplayer)
{
	boost::python::def("remoteExec", static_cast<game_value(*)(sqf_string_const_ref,sqf_string_const_ref)>(&remote_exec));
	boost::python::def("remoteExec", static_cast<game_value(*)(sqf_string_const_ref,std::variant<int, object, side, group, sqf_string_const_ref_wrapper>,sqf_string_const_ref)>(&remote_exec));
	boost::python::def("remoteExec", static_cast<game_value(*)(sqf_string_const_ref,const game_value &,sqf_string_const_ref)>(&remote_exec));
	boost::python::def("remoteExecCall", static_cast<game_value(*)(sqf_string_const_ref,sqf_string_const_ref)>(&remote_exec_call));
	boost::python::def("remoteExecCall", static_cast<game_value(*)(sqf_string_const_ref,std::variant<int, object, side, group, sqf_string_const_ref_wrapper>,sqf_string_const_ref)>(&remote_exec_call));
	boost::python::def("remoteExecCall", static_cast<game_value(*)(sqf_string_const_ref,const game_value &,sqf_string_const_ref)>(&remote_exec_call));
	boost::python::def("logNetworkTerminate", static_cast<void(*)(float)>(&log_network_terminate));
	boost::python::def("serverTime", static_cast<float(*)()>(&server_time));
	boost::python::def("serverName", static_cast<sqf_return_string(*)()>(&server_name));
	boost::python::def("local", static_cast<bool(*)(const object &)>(&local));
	boost::python::def("local", static_cast<bool(*)(const group &)>(&local));
	boost::python::def("isServer", static_cast<bool(*)()>(&is_server));
	boost::python::def("isMultiplayer", static_cast<bool(*)()>(&is_multiplayer));
	boost::python::def("isDedicated", static_cast<bool(*)()>(&is_dedicated));
	boost::python::def("didJip", static_cast<bool(*)()>(&did_jip));
	boost::python::def("clientOwner", static_cast<float(*)()>(&client_owner));
	boost::python::def("estimatedEndServerTime", static_cast<float(*)()>(&estimated_end_server_time));
	boost::python::def("getclientstate", static_cast<sqf_return_string(*)()>(&getclientstate));
	boost::python::def("hasInterface", static_cast<bool(*)()>(&has_interface));
	boost::python::def("didJipowner", static_cast<bool(*)(const object &)>(&did_jipowner));
	boost::python::def("exportJipmessages", static_cast<void(*)(sqf_string_const_ref)>(&export_jipmessages));
	boost::python::def("leaderboardDeInit", static_cast<bool(*)(sqf_string_const_ref)>(&leaderboard_de_init));
	boost::python::def("leaderboardInit", static_cast<bool(*)(sqf_string_const_ref)>(&leaderboard_init));
	boost::python::def("leaderboardRequestRowsFriends", static_cast<bool(*)(sqf_string_const_ref)>(&leaderboard_request_rows_friends));
	boost::python::def("leaderboardState", static_cast<float(*)(sqf_string_const_ref)>(&leaderboard_state));
	boost::python::def("netId", static_cast<sqf_return_string(*)(const object &)>(&net_id));
	boost::python::def("netId", static_cast<sqf_return_string(*)(const group &)>(&net_id));
	boost::python::def("objectFromNetId", static_cast<object(*)(sqf_string_const_ref)>(&object_from_net_id));
	boost::python::def("owner", static_cast<float(*)(const object &)>(&owner));
	boost::python::def("publicVariable", static_cast<void(*)(sqf_string_const_ref)>(&public_variable));
	boost::python::def("publicVariableServer", static_cast<void(*)(sqf_string_const_ref)>(&public_variable_server));
	boost::python::def("publicVariableClient", static_cast<void(*)(float,sqf_string_const_ref)>(&public_variable_client));
	boost::python::def("serverCommand", static_cast<bool(*)(sqf_string_const_ref)>(&server_command));
	boost::python::def("serverCommandAvailable", static_cast<bool(*)(sqf_string_const_ref)>(&server_command_available));
	boost::python::def("serverCommandExecutable", static_cast<bool(*)(sqf_string_const_ref)>(&server_command_executable));
	boost::python::def("getClientStateNumber", static_cast<float(*)()>(&get_client_state_number));
	boost::python::def("setOwner", static_cast<bool(*)(const object &,float)>(&set_owner));
	boost::python::def("isMultiplayerSolo", static_cast<bool(*)()>(&is_multiplayer_solo));
	boost::python::def("isRemoteExecuted", static_cast<bool(*)()>(&is_remote_executed));
	boost::python::def("isRemoteExecutedJip", static_cast<bool(*)()>(&is_remote_executed_jip));
	boost::python::def("remoteExec", static_cast<game_value(*)(const game_value &,sqf_string_const_ref,std::variant<int, object, sqf_string_const_ref_wrapper, side, group, std::reference_wrapper<const std::vector<game_value> > >,std::optional<std::variant<sqf_string_const_ref_wrapper, bool, object, group> >)>(&remote_exec));
	boost::python::def("remoteExecCall", static_cast<game_value(*)(const game_value &,sqf_string_const_ref,std::variant<int, object, sqf_string_const_ref_wrapper, side, group, std::reference_wrapper<const std::vector<game_value> > >,std::optional<std::variant<sqf_string_const_ref_wrapper, bool, object, group> >)>(&remote_exec_call));
	boost::python::def("servercommand", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&serverCommand));
	boost::python::def("turretLocal", static_cast<bool(*)(const object &,const std::vector<int> &)>(&turret_local));
	boost::python::def("turretOwner", static_cast<int(*)(const object &,const std::vector<int> &)>(&turret_owner));
	boost::python::def("admin", static_cast<int(*)(int)>(&admin));
	boost::python::def("remoteExecutedOwner", static_cast<int(*)()>(&remote_executed_owner));
}

BOOST_PYTHON_MODULE(__sqf_position)
{
	boost::python::def("getPos", static_cast<vector3(*)(const object &)>(&get_pos));
	boost::python::def("getPosAsl", static_cast<vector3(*)(const object &)>(&get_pos_asl));
	boost::python::def("getPosAtl", static_cast<vector3(*)(const object &)>(&get_pos_atl));
	boost::python::def("getPosAslw", static_cast<vector3(*)(const object &)>(&get_pos_aslw));
	boost::python::def("visiblePosition", static_cast<vector3(*)(const object &)>(&visible_position));
	boost::python::def("visiblePositionAsl", static_cast<vector3(*)(const object &)>(&visible_position_asl));
	boost::python::def("position", static_cast<vector3(*)(const object &)>(&position));
	boost::python::def("positionCameraToWorld", static_cast<vector3(*)(const vector3 &)>(&position_camera_to_world));
	boost::python::def("getPosVisual", static_cast<vector3(*)(const object &)>(&get_pos_visual));
	boost::python::def("getPosAslVisual", static_cast<vector3(*)(const object &)>(&get_pos_asl_visual));
	boost::python::def("getPosAtlVisual", static_cast<vector3(*)(const object &)>(&get_pos_atl_visual));
	boost::python::def("aimPos", static_cast<vector3(*)(const object &)>(&aim_pos));
	boost::python::def("eyePos", static_cast<vector3(*)(const object &)>(&eye_pos));
	boost::python::def("eyeDirection", static_cast<vector3(*)(const object &)>(&eye_direction));
	boost::python::def("setPos", static_cast<void(*)(const object &,const vector3 &)>(&set_pos));
	boost::python::def("setPosAsl", static_cast<void(*)(const object &,const vector3 &)>(&set_pos_asl));
	boost::python::def("setPosAsl2", static_cast<void(*)(const object &,const vector3 &)>(&set_pos_asl2));
	boost::python::def("setPosAslw", static_cast<void(*)(const object &,const vector3 &)>(&set_pos_aslw));
	boost::python::def("setPosAtl", static_cast<void(*)(const object &,const vector3 &)>(&set_pos_atl));
	boost::python::def("aglToAsl", static_cast<vector3(*)(const vector3 &)>(&agl_to_asl));
	boost::python::def("aslToAgl", static_cast<vector3(*)(const vector3 &)>(&asl_to_agl));
	boost::python::def("atlToAsl", static_cast<vector3(*)(const vector3 &)>(&atl_to_asl));
	boost::python::def("aslToAtl", static_cast<vector3(*)(const vector3 &)>(&asl_to_atl));
	boost::python::def("getPos", static_cast<vector3(*)(const object &,float,float)>(&get_pos));
	boost::python::def("getPos", static_cast<vector3(*)(const vector3 &,float,float)>(&get_pos));
	boost::python::def("getRelPos", static_cast<vector3(*)(const object &,float,float)>(&get_rel_pos));
	boost::python::def("getRelPos", static_cast<vector3(*)(const vector3 &,float,float)>(&get_rel_pos));
	boost::python::def("getRelDir", static_cast<float(*)(const object &,const object &)>(&get_rel_dir));
	boost::python::def("getRelDir", static_cast<float(*)(const object &,const vector3 &)>(&get_rel_dir));
	boost::python::def("setVectorUp", static_cast<void(*)(const object &,const vector3 &)>(&set_vector_up));
	boost::python::def("setVectorDirAndUp", static_cast<void(*)(const object &,const vector3 &,const vector3 &)>(&set_vector_dir_and_up));
	boost::python::def("setPosWorld", static_cast<void(*)(const object &,const vector3 &)>(&set_pos_world));
	boost::python::def("getPosWorld", static_cast<vector3(*)(const object &)>(&get_pos_world));
	boost::python::def("getTerrainHeightAsl", static_cast<float(*)(const vector3)>(&get_terrain_height_asl));
	boost::python::def("worldToModel", static_cast<vector3(*)(const object &,const vector3 &)>(&world_to_model));
	boost::python::def("worldToModelVisual", static_cast<vector3(*)(const object &,const vector3 &)>(&world_to_model_visual));
	boost::python::def("velocityModelSpace", static_cast<vector3(*)(const object &)>(&velocity_model_space));
	boost::python::def("vectorUpVisual", static_cast<vector3(*)(const object &)>(&vector_up_visual));
	boost::python::def("vectorUp", static_cast<vector3(*)(const object &)>(&vector_up));
	boost::python::def("modelToWorldVisual", static_cast<vector3(*)(const object &,const vector3 &)>(&model_to_world_visual));
	boost::python::def("worldToScreen", static_cast<vector2(*)(const vector3 &)>(&world_to_screen));
	boost::python::def("worldToScreen", static_cast<vector2(*)(const vector3 &,bool &)>(&world_to_screen));
	boost::python::def("setVectorDir", static_cast<void(*)(const object &,const vector3 &)>(&set_vector_dir));
	boost::python::def("setVelocity", static_cast<void(*)(const object &,const vector3 &)>(&set_velocity));
	boost::python::def("velocity", static_cast<vector3(*)(const object &)>(&velocity));
	boost::python::def("direction", static_cast<float(*)(const object &)>(&direction));
	boost::python::def("vectorDir", static_cast<vector3(*)(const object &)>(&vector_dir));
	boost::python::def("vectorDirVisual", static_cast<vector3(*)(const object &)>(&vector_dir_visual));
	boost::python::def("selectionPositon", static_cast<vector3(*)(const object &,sqf_string_const_ref)>(&selection_positon));
	boost::python::def("boundingBox", static_cast<rv_bounding_box(*)(const object &)>(&bounding_box));
	boost::python::def("boundingBoxReal", static_cast<rv_bounding_box(*)(const object &)>(&bounding_box_real));
	boost::python::def("boundingCenter", static_cast<vector3(*)(const object &)>(&bounding_center));
	boost::python::def("setDir", static_cast<void(*)(const object &,float)>(&set_dir));
	boost::python::def("getDir", static_cast<float(*)(t_sqf_in_area_position,t_sqf_in_area_position)>(&get_dir));
	boost::python::def("setDirection", static_cast<void(*)(const location &,float)>(&set_direction));
	boost::python::def("setVelocityModelSpace", static_cast<void(*)(const object &,const vector3 &)>(&set_velocity_model_space));
	boost::python::def("setVelocityTransformation", static_cast<void(*)(const object &,const vector3 &,const vector3 &,const vector3 &,const vector3 &,const vector3 &,const vector3 &,const vector3 &,const vector3 &,float)>(&set_velocity_transformation));
	boost::python::def("weaponDirection", static_cast<vector3(*)(const object &,sqf_string_const_ref)>(&weapon_direction));
	boost::python::def("getDir", static_cast<float(*)(const object &)>(&get_dir));
	boost::python::def("getDirVisual", static_cast<float(*)(const object &)>(&get_dir_visual));
	boost::python::def("unitAimPosition", static_cast<vector3(*)(const object &)>(&unit_aim_position));
	boost::python::def("unitAimPositionVisual", static_cast<vector3(*)(const object &)>(&unit_aim_position_visual));
	boost::python::def("modelToWorldVisualWorld", static_cast<vector3(*)(const object &,const vector3)>(&model_to_world_visual_world));
	boost::python::def("modelToWorldWorld", static_cast<vector3(*)(const object &,const vector3)>(&model_to_world_world));
	boost::python::def("screenToWorld", static_cast<vector3(*)(const vector2 &)>(&screen_to_world));
	boost::python::def("modelToWorld", static_cast<vector3(*)(const object &,const vector3 &)>(&model_to_world));
	boost::python::def("inArea", static_cast<bool(*)(t_sqf_in_area_position,const object &)>(&in_area));
	boost::python::def("inArea", static_cast<bool(*)(t_sqf_in_area_position,sqf_string_const_ref)>(&in_area));
	boost::python::def("inArea", static_cast<bool(*)(t_sqf_in_area_position,t_sqf_in_area_position,float,float,float,bool,std::optional<float>)>(&in_area));
	boost::python::def("inArea", static_cast<bool(*)(const object &,const location &)>(&in_area));
	boost::python::def("inArea", static_cast<bool(*)(t_sqf_in_area_position,const location &)>(&in_area));
	boost::python::def("inAreaArray", static_cast<bool(*)(intercept::sqf::t_sqf_in_area_position_array,const object &)>(&in_area_array));
	boost::python::def("inAreaArray", static_cast<bool(*)(intercept::sqf::t_sqf_in_area_position_array,sqf_string_const_ref)>(&in_area_array));
	boost::python::def("inAreaArray", static_cast<bool(*)(intercept::sqf::t_sqf_in_area_position_array,t_sqf_in_area_position,float,float,float,bool,std::optional<float>)>(&in_area_array));
	boost::python::def("inAreaArray", static_cast<bool(*)(intercept::sqf::t_sqf_in_area_position_array,const location &)>(&in_area_array));
	boost::python::def("isFlatEmpty", static_cast<std::vector<vector3>(*)(const vector3 &,float,float,float,float,bool,const object &)>(&is_flat_empty));
	boost::python::def("inPolygon", static_cast<bool(*)(const vector3 &,const std::vector<vector3> &)>(&in_polygon));
	boost::python::def("findEmptyPosition", static_cast<vector3(*)(std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3> >,float,float,std::optional<std::string>)>(&find_empty_position));
	boost::python::def("findEmptyPositionReady", static_cast<bool(*)(std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3> >,float,float)>(&find_empty_position_ready));
	boost::python::def("distance2D", static_cast<float(*)(std::variant<object, vector3>,std::variant<object, vector3>)>(&distance_2d));
	boost::python::def("distanceSqr", static_cast<float(*)(std::variant<object, vector3, location>,std::variant<object, vector3, location>)>(&distance_sqr));
	boost::python::def("nearEntities", static_cast<std::vector<object>(*)(const vector3 &,sqf_string_list_const_ref,float)>(&near_entities));
	boost::python::def("distance", static_cast<float(*)(std::variant<object, vector3>,std::variant<object, vector3>)>(&distance));
	boost::python::def("setVehiclePosition", static_cast<bool(*)(const object &,std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3>, const object>,sqf_string_list_const_ref,float,std::optional<std::string>)>(&set_vehicle_position));
	boost::python::def("buildingExit", static_cast<vector3(*)(const object &,int)>(&building_exit));
	boost::python::def("buildingPos", static_cast<std::vector<vector3>(*)(const object &,int)>(&building_pos));
	boost::python::class_<rv_bounding_box>("rvBoundingBox")
		.def_readwrite("min", &rv_bounding_box::min)
		.def_readwrite("max", &rv_bounding_box::max);
}

BOOST_PYTHON_MODULE(__sqf_rotorlib)
{
	boost::python::def("getRotorBrakeRtd", static_cast<float(*)(const object &)>(&get_rotor_brake_rtd));
	boost::python::def("getWingsOrientationRtd", static_cast<float(*)(const object &)>(&get_wings_orientation_rtd));
	boost::python::def("getWingsPositionRtd", static_cast<float(*)(const object &)>(&get_wings_position_rtd));
	boost::python::def("isAutoTrimOnRtd", static_cast<bool(*)(const object &)>(&is_auto_trim_on_rtd));
	boost::python::def("isObjectRtd", static_cast<bool(*)(const object &)>(&is_object_rtd));
	boost::python::def("numberOfEnginesRtd", static_cast<float(*)(const object &)>(&number_of_engines_rtd));
	boost::python::def("stopEngineRtd", static_cast<void(*)(const object &)>(&stop_engine_rtd));
	boost::python::def("enableAutoStartUpRtd", static_cast<void(*)(const object &,bool)>(&enable_auto_start_up_rtd));
	boost::python::def("enableAutoTrimRtd", static_cast<bool(*)(const object &,bool)>(&enable_auto_trim_rtd));
	boost::python::def("enginesIsOnRtd", static_cast<std::vector<bool>(*)(const object &)>(&engines_is_on_rtd));
	boost::python::def("enginesRpmRtd", static_cast<std::vector<float>(*)(const object &)>(&engines_rpm_rtd));
	boost::python::def("enginesTorqueRtd", static_cast<std::vector<float>(*)(const object &)>(&engines_torque_rtd));
	boost::python::def("setRotorBrakeRtd", static_cast<void(*)(const object &,float)>(&set_rotor_brake_rtd));
	boost::python::def("setActualCollectiveRtd", static_cast<void(*)(const object &,float)>(&set_actual_collective_rtd));
	boost::python::def("setCustomWeightRtd", static_cast<void(*)(const object &,float)>(&set_custom_weight_rtd));
	boost::python::def("rotorsForcesRtd", static_cast<std::vector<rv_forces_rtd>(*)(const object &)>(&rotors_forces_rtd));
	boost::python::def("wingsForcesRtd", static_cast<std::vector<rv_forces_rtd>(*)(const object &)>(&wings_forces_rtd));
	boost::python::def("rotorsRpmRtd", static_cast<std::vector<float>(*)(const object &)>(&rotors_rpm_rtd));
	boost::python::def("weightRtd", static_cast<rv_weight_rtd(*)(const object &)>(&weight_rtd));
	boost::python::def("setBrakesRtd", static_cast<void(*)(const object &,float,int)>(&set_brakes_rtd));
	boost::python::def("setEngineRpmRtd", static_cast<void(*)(const object &,float,int)>(&set_engine_rpm_rtd));
	boost::python::def("setWantedRpmRtd", static_cast<void(*)(const object &,float,float,int)>(&set_wanted_rpm_rtd));
	boost::python::def("difficultyEnabledRtd", static_cast<bool(*)()>(&difficulty_enabled_rtd));
	boost::python::def("clearForcesRtd", static_cast<void(*)()>(&clear_forces_rtd));
	boost::python::def("airDensityRtd", static_cast<float(*)(float)>(&air_density_rtd));
	boost::python::def("collectiveRtd", static_cast<float(*)(const object &)>(&collective_rtd));
	boost::python::def("isStressDamageEnabled", static_cast<bool(*)()>(&is_stress_damage_enabled));
	boost::python::class_<rv_forces_rtd>("rvForcesRtd")
		.def_readwrite("roll", &rv_forces_rtd::roll)
		.def_readwrite("pitch", &rv_forces_rtd::pitch)
		.def_readwrite("collective", &rv_forces_rtd::collective);
	boost::python::class_<rv_weight_rtd>("rvWeightRtd", boost::python::init<float,float,float,float,float>())
		.def("fromVector", static_cast<rv_weight_rtd(*)(const std::vector<float> &)>(&rv_weight_rtd::from_vector)).staticmethod("fromVector")
		.def_readwrite("fuselage", &rv_weight_rtd::fuselage)
		.def_readwrite("crew", &rv_weight_rtd::crew)
		.def_readwrite("fuel", &rv_weight_rtd::fuel)
		.def_readwrite("custom", &rv_weight_rtd::custom)
		.def_readwrite("weapons", &rv_weight_rtd::weapons);
}

BOOST_PYTHON_MODULE(__sqf_sound)
{
	boost::python::def("soundVolume", static_cast<float(*)()>(&sound_volume));
	boost::python::def("nameSound", static_cast<sqf_return_string(*)(const object &)>(&name_sound));
	boost::python::def("setNameSound", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_name_sound));
	boost::python::def("setSpeaker", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_speaker));
	boost::python::def("say", static_cast<void(*)(const object &,sqf_string_const_ref)>(&say));
	boost::python::def("pitch", static_cast<sqf_return_string(*)(const object &)>(&pitch));
	boost::python::def("setPitch", static_cast<void(*)(const object &,float)>(&set_pitch));
	boost::python::def("say", static_cast<void(*)(const object &,sqf_string_const_ref,float,float)>(&say));
	boost::python::def("say", static_cast<void(*)(const object &,const object &,sqf_string_const_ref)>(&say));
	boost::python::def("say", static_cast<void(*)(const object &,const object &,sqf_string_const_ref,float,float)>(&say));
	boost::python::def("say2D", static_cast<void(*)(const object &,sqf_string_const_ref)>(&say_2d));
	boost::python::def("say2D", static_cast<void(*)(const object &,sqf_string_const_ref,float,float)>(&say_2d));
	boost::python::def("say2D", static_cast<void(*)(const object &,const object &,sqf_string_const_ref)>(&say_2d));
	boost::python::def("say2D", static_cast<void(*)(const object &,const object &,sqf_string_const_ref,float,float)>(&say_2d));
	boost::python::def("say3D", static_cast<void(*)(const object &,sqf_string_const_ref)>(&say_3d));
	boost::python::def("say3D", static_cast<void(*)(const object &,sqf_string_const_ref,float,float)>(&say_3d));
	boost::python::def("say3D", static_cast<void(*)(const object &,const object &,sqf_string_const_ref)>(&say_3d));
	boost::python::def("say3D", static_cast<void(*)(const object &,const object &,sqf_string_const_ref,float,float)>(&say_3d));
	boost::python::def("directSay", static_cast<void(*)(const object &,sqf_string_const_ref)>(&direct_say));
	boost::python::def("playMusic", static_cast<void(*)(sqf_string_const_ref)>(&play_music));
	boost::python::def("playMusic", static_cast<void(*)(sqf_string_const_ref,float)>(&play_music));
	boost::python::def("playSound", static_cast<void(*)(sqf_string_const_ref)>(&play_sound));
	boost::python::def("playSound", static_cast<void(*)(sqf_string_const_ref,bool)>(&play_sound));
	boost::python::def("preloadSound", static_cast<bool(*)(sqf_string_const_ref)>(&preload_sound));
	boost::python::def("playSound3D", static_cast<void(*)(sqf_string_const_ref,const object &)>(&play_sound_3d));
	boost::python::def("playSound3D", static_cast<void(*)(sqf_string_const_ref,const object &,vector3 &)>(&play_sound_3d));
	boost::python::def("playSound3D", static_cast<void(*)(sqf_string_const_ref,const object &,vector3 &,float)>(&play_sound_3d));
	boost::python::def("playSound3D", static_cast<void(*)(sqf_string_const_ref,const object &,vector3 &,float,float)>(&play_sound_3d));
	boost::python::def("playSound3D", static_cast<void(*)(sqf_string_const_ref,const object &,vector3 &,float,float,float)>(&play_sound_3d));
	boost::python::def("getAllEnvSoundControllers", static_cast<game_value(*)(const vector3 &)>(&get_all_env_sound_controllers));
	boost::python::def("getAllSoundControllers", static_cast<game_value(*)(const object &)>(&get_all_sound_controllers));
	boost::python::def("fadeMusic", static_cast<void(*)(float,float)>(&fade_music));
	boost::python::def("fadeRadio", static_cast<void(*)(float,float)>(&fade_radio));
	boost::python::def("fadeSound", static_cast<void(*)(float,float)>(&fade_sound));
	boost::python::def("fadeSpeech", static_cast<void(*)(float,float)>(&fade_speech));
	boost::python::def("getEnvSoundController", static_cast<float(*)(const vector3 &,sqf_string_const_ref)>(&get_env_sound_controller));
	boost::python::def("getSoundController", static_cast<float(*)(const object &,sqf_string_const_ref)>(&get_sound_controller));
	boost::python::def("getSoundControllerResult", static_cast<float(*)(const object &,const config &)>(&get_sound_controller_result));
	boost::python::def("radioVolume", static_cast<float(*)()>(&radio_volume));
	boost::python::def("musicVolume", static_cast<float(*)()>(&music_volume));
	boost::python::def("removeAllMusicEventHandlers", static_cast<void(*)(sqf_string_const_ref)>(&remove_all_music_event_handlers));
	boost::python::def("addMusicEventHandler", static_cast<float(*)(sqf_string_const_ref,const code &)>(&add_music_event_handler));
	boost::python::def("addMusicEventHandler", static_cast<float(*)(sqf_string_const_ref,sqf_string_const_ref)>(&add_music_event_handler));
	boost::python::def("removeMusicEventHandler", static_cast<void(*)(sqf_string_const_ref,float)>(&remove_music_event_handler));
	boost::python::def("setMusicEventHandler", static_cast<float(*)(sqf_string_const_ref,sqf_string_const_ref)>(&set_music_event_handler));
}

BOOST_PYTHON_MODULE(__sqf_tasks)
{
	boost::python::def("setFormationTask", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_formation_task));
	boost::python::def("formationTask", static_cast<sqf_return_string(*)(const object &)>(&formation_task));
	boost::python::def("unregisterTask", static_cast<bool(*)(const team_member &,sqf_string_const_ref)>(&unregister_task));
	boost::python::def("currentTask", static_cast<task(*)(const object &)>(&current_task));
	boost::python::def("priority", static_cast<float(*)(task)>(&priority));
	boost::python::def("taskCompleted", static_cast<bool(*)(task)>(&task_completed));
	boost::python::def("taskParent", static_cast<task(*)(task)>(&task_parent));
	boost::python::def("taskState", static_cast<sqf_return_string(*)(task)>(&task_state));
	boost::python::def("type", static_cast<sqf_return_string(*)(task)>(&type));
	boost::python::def("registeredTasks", static_cast<sqf_return_string_list(*)(const team_member &)>(&registered_tasks));
	boost::python::def("simpleTasks", static_cast<std::vector<task>(*)(const object &)>(&simple_tasks));
	boost::python::def("taskDescription", static_cast<sqf_return_string_list(*)(const task &)>(&task_description));
	boost::python::def("taskDestination", static_cast<vector3(*)(const task &)>(&task_destination));
	boost::python::def("taskAlwaysVisible", static_cast<bool(*)(const task &)>(&task_always_visible));
	boost::python::def("taskCustomData", static_cast<rv_task_custom_data(*)(const task &)>(&task_custom_data));
	boost::python::def("taskMarkerOffset", static_cast<vector3(*)(const object &)>(&task_marker_offset));
	boost::python::def("taskType", static_cast<sqf_return_string(*)(const task &)>(&task_type));
	boost::python::def("createSimpleTask", static_cast<task(*)(const object &,sqf_string_const_ref,std::optional<task>)>(&create_simple_task));
	boost::python::def("removeSimpleTask", static_cast<void(*)(const object &,const task &)>(&remove_simple_task));
	boost::python::def("sendTask", static_cast<task(*)(const team_member &,const team_member &,sqf_string_const_ref,float)>(&send_task));
	boost::python::def("sendTask", static_cast<task(*)(const team_member &,const team_member &,sqf_string_const_ref,const task &,float,std::vector<rv_task_variables> &)>(&send_task));
	boost::python::def("sendTaskResult", static_cast<void(*)(const task &,const game_value &,const game_value &,const game_value &)>(&send_task_result));
	boost::python::def("setCurrentTask", static_cast<void(*)(const object &,const task &)>(&set_current_task));
	boost::python::def("setSimpleTaskAlwaysVisible", static_cast<void(*)(const task &,bool)>(&set_simple_task_always_visible));
	boost::python::def("setSimpleTaskCustomData", static_cast<void(*)(const task &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_simple_task_custom_data));
	boost::python::def("setSimpleTaskDescription", static_cast<void(*)(const task &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_simple_task_description));
	boost::python::def("setSimpleTaskDestination", static_cast<void(*)(const object &,const vector3 &)>(&set_simple_task_destination));
	boost::python::def("setSimpleTaskTarget", static_cast<void(*)(const task &,const object &,bool)>(&set_simple_task_target));
	boost::python::def("setSimpleTaskType", static_cast<void(*)(const task &,sqf_string_const_ref)>(&set_simple_task_type));
	boost::python::def("setTaskMarkerOffset", static_cast<void(*)(const object &,const vector3 &)>(&set_task_marker_offset));
	boost::python::def("setTaskResult", static_cast<void(*)(const task &,const game_value &)>(&set_task_result));
	boost::python::def("setTaskState", static_cast<void(*)(const task &,sqf_string_const_ref)>(&set_task_state));
	boost::python::def("currentTasks", static_cast<std::vector<task>(*)(const team_member &)>(&current_tasks));
	boost::python::def("registerTask", static_cast<bool(*)(const team_member &,sqf_string_const_ref)>(&register_task));
	boost::python::def("cancelSimpleTaskDestination", static_cast<void(*)(task)>(&cancel_simple_task_destination));
	boost::python::def("createDiaryLink", static_cast<sqf_return_string(*)(sqf_string_const_ref,const object &,sqf_string_const_ref)>(&create_diary_link));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&create_diary_record));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,const task &)>(&create_diary_record));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,const task &,sqf_string_const_ref)>(&create_diary_record));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&create_diary_record));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,const task &)>(&create_diary_record));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,const task &,sqf_string_const_ref)>(&create_diary_record));
	boost::python::def("createDiarySubject", static_cast<float(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&create_diary_subject));
	boost::python::def("createDiarySubject", static_cast<float(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&create_diary_subject));
	boost::python::def("processDiaryLink", static_cast<void(*)(sqf_string_const_ref)>(&process_diary_link));
	boost::python::def("diarySubjectExists", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&diary_subject_exists));
	boost::python::def("selectDiarySubject", static_cast<void(*)(const object &,sqf_string_const_ref)>(&select_diary_subject));
	boost::python::def("setDebriefingText", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_debriefing_text));
	boost::python::def("enableDebriefingStats", static_cast<void(*)(float,float,float,float)>(&enable_debriefing_stats));
	boost::python::def("briefingName", static_cast<sqf_return_string(*)()>(&briefing_name));
	boost::python::def("disableDebriefingStats", static_cast<void(*)()>(&disable_debriefing_stats));
	boost::python::def("debriefingText", static_cast<float(*)(sqf_string_const_ref)>(&debriefing_text));
	boost::python::def("onBriefingGroup", static_cast<void(*)(sqf_string_const_ref)>(&on_briefing_group));
	boost::python::def("onBriefingNotes", static_cast<void(*)(sqf_string_const_ref)>(&on_briefing_notes));
	boost::python::def("onBriefingPlan", static_cast<void(*)(sqf_string_const_ref)>(&on_briefing_plan));
	boost::python::def("onBriefingTeamSwitch", static_cast<void(*)(sqf_string_const_ref)>(&on_briefing_team_switch));
	boost::python::def("objStatus", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&obj_status));
	boost::python::class_<rv_task_custom_data>("rvTaskCustomData")
		.def_readwrite("iconPath", &rv_task_custom_data::icon_path)
		.def_readwrite("iconText", &rv_task_custom_data::icon_text)
		.def_readwrite("descriptionText", &rv_task_custom_data::description_text);
	boost::python::class_<rv_task_variables>("rvTaskVariables")
		.def_readwrite("name", &rv_task_variables::name)
		.def_readwrite("value", &rv_task_variables::value);
}

BOOST_PYTHON_MODULE(__sqf_uncategorized)
{
}

BOOST_PYTHON_MODULE(__sqf_units)
{
	boost::python::def("setUserMfdValue", static_cast<void(*)(const object &,int,float)>(&set_user_mfd_value));
	boost::python::def("forgetTarget", static_cast<void(*)(const object &,const object)>(&forget_target));
	boost::python::def("forgetTarget", static_cast<void(*)(const group &,const object)>(&forget_target));
	boost::python::def("targets", static_cast<void(*)(const object &,std::optional<bool>,std::optional<float>,std::optional<std::vector<side> >,std::optional<float>,std::optional<std::variant<std::reference_wrapper<vector2>, std::reference_wrapper<vector3> > >)>(&targets));
	boost::python::def("isUavConnectable", static_cast<bool(*)(const object &,const object &,bool)>(&is_uav_connectable));
	boost::python::def("cameraOn", static_cast<object(*)()>(&camera_on));
	boost::python::def("canUnloadInCombat", static_cast<bool(*)(const object &)>(&can_unload_in_combat));
	boost::python::def("aisFinishHeal", static_cast<void(*)(const object &,const object &,bool)>(&ais_finish_heal));
	boost::python::def("setHideBehind", static_cast<void(*)(const object &,const object &,const vector3 &)>(&set_hide_behind));
	boost::python::def("in", static_cast<bool(*)(const object &,const object &)>(&in));
	boost::python::def("targetKnowledge", static_cast<rv_target_knowledge(*)(const object &,const object &)>(&target_knowledge));
	boost::python::def("targetsAggregate", static_cast<game_value(*)(const object &,const side &,const object &,const vector3 &,float,game_value &)>(&targets_aggregate));
	boost::python::def("targetsQuery", static_cast<rv_query_target(*)(const object &,const object &,const side &,sqf_string_const_ref,const vector3 &,float)>(&targets_query));
	boost::python::def("action", static_cast<void(*)(const object &,const std::vector<game_value> &)>(&action));
	boost::python::def("createUnit", static_cast<void(*)(sqf_string_const_ref,const vector3 &,const group &,sqf_string_const_ref,float,sqf_string_const_ref)>(&create_unit));
	boost::python::def("animationState", static_cast<sqf_return_string(*)(const object &)>(&animation_state));
	boost::python::def("assignedTeam", static_cast<sqf_return_string(*)(const object &)>(&assigned_team));
	boost::python::def("assignedVehicle", static_cast<object(*)(const object &)>(&assigned_vehicle));
	boost::python::def("canFire", static_cast<bool(*)(const object &)>(&can_fire));
	boost::python::def("canMove", static_cast<bool(*)(const object &)>(&can_move));
	boost::python::def("canStand", static_cast<bool(*)(const object &)>(&can_stand));
	boost::python::def("captive", static_cast<bool(*)(const object &)>(&captive));
	boost::python::def("captiveNum", static_cast<float(*)(const object &)>(&captive_num));
	boost::python::def("currentCommand", static_cast<sqf_return_string(*)(const object &)>(&current_command));
	boost::python::def("currentVisionMode", static_cast<int(*)(const object &)>(&current_vision_mode));
	boost::python::def("currentZeroing", static_cast<float(*)(const object &)>(&current_zeroing));
	boost::python::def("face", static_cast<sqf_return_string(*)(const object &)>(&face));
	boost::python::def("faction", static_cast<sqf_return_string(*)(const object &)>(&faction));
	boost::python::def("forceRespawn", static_cast<void(*)(const object &)>(&force_respawn));
	boost::python::def("formLeader", static_cast<object(*)(const object &)>(&form_leader));
	boost::python::def("formationDirection", static_cast<float(*)(const object &)>(&formation_direction));
	boost::python::def("formationLeader", static_cast<object(*)(const object &)>(&formation_leader));
	boost::python::def("getAnimAimPrecision", static_cast<float(*)(const object &)>(&get_anim_aim_precision));
	boost::python::def("getAnimSpeedCoef", static_cast<float(*)(const object &)>(&get_anim_speed_coef));
	boost::python::def("getBleedingRemaining", static_cast<float(*)(const object &)>(&get_bleeding_remaining));
	boost::python::def("getBurningValue", static_cast<float(*)(const object &)>(&get_burning_value));
	boost::python::def("getFatigue", static_cast<float(*)(const object &)>(&get_fatigue));
	boost::python::def("getOxygenRemaining", static_cast<float(*)(const object &)>(&get_oxygen_remaining));
	boost::python::def("getPlayerUid", static_cast<sqf_return_string(*)(const object &)>(&get_player_uid));
	boost::python::def("getStamina", static_cast<float(*)(const object &)>(&get_stamina));
	boost::python::def("getStatValue", static_cast<float(*)(sqf_string_const_ref)>(&get_stat_value));
	boost::python::def("getSuppression", static_cast<float(*)(const object &)>(&get_suppression));
	boost::python::def("getWeaponSway", static_cast<float(*)(const object &)>(&get_weapon_sway));
	boost::python::def("gunner", static_cast<object(*)(const object &)>(&gunner));
	boost::python::def("handsHit", static_cast<float(*)(const object &)>(&hands_hit));
	boost::python::def("hideBody", static_cast<void(*)(const object &)>(&hide_body));
	boost::python::def("incapacitatedState", static_cast<sqf_return_string(*)(const object &)>(&incapacitated_state));
	boost::python::def("isAbleToBreathe", static_cast<bool(*)(const object &)>(&is_able_to_breathe));
	boost::python::def("isAimPrecisionEnabled", static_cast<bool(*)(const object &)>(&is_aim_precision_enabled));
	boost::python::def("isBleeding", static_cast<bool(*)(const object &)>(&is_bleeding));
	boost::python::def("isForcedWalk", static_cast<bool(*)(const object &)>(&is_forced_walk));
	boost::python::def("isFormationLeader", static_cast<bool(*)(const object &)>(&is_formation_leader));
	boost::python::def("isPlayer", static_cast<bool(*)(const object &)>(&is_player));
	boost::python::def("isSprintAllowed", static_cast<bool(*)(const object &)>(&is_sprint_allowed));
	boost::python::def("isStaminaEnabled", static_cast<bool(*)(const object &)>(&is_stamina_enabled));
	boost::python::def("isTurnedOut", static_cast<bool(*)(const object &)>(&is_turned_out));
	boost::python::def("isUavconnected", static_cast<bool(*)(const object &)>(&is_uavconnected));
	boost::python::def("isWalking", static_cast<bool(*)(const object &)>(&is_walking));
	boost::python::def("isWeaponDeployed", static_cast<bool(*)(const object &)>(&is_weapon_deployed));
	boost::python::def("isWeaponRested", static_cast<bool(*)(const object &)>(&is_weapon_rested));
	boost::python::def("move", static_cast<void(*)(const object &,const vector3 &)>(&move));
	boost::python::def("move", static_cast<void(*)(const group &,const vector3 &)>(&move));
	boost::python::def("moveInAny", static_cast<bool(*)(const object &,const object &)>(&move_in_any));
	boost::python::def("moveInCargo", static_cast<void(*)(const object &,const object &,int)>(&move_in_cargo));
	boost::python::def("moveInCommander", static_cast<void(*)(const object &,const object &)>(&move_in_commander));
	boost::python::def("moveInDriver", static_cast<void(*)(const object &,const object &)>(&move_in_driver));
	boost::python::def("moveInGunner", static_cast<void(*)(const object &,const object &)>(&move_in_gunner));
	boost::python::def("moveInTurret", static_cast<void(*)(const object &,const object &,const std::vector<int>)>(&move_in_turret));
	boost::python::def("remoteControl", static_cast<void(*)(const object &,const object &)>(&remote_control));
	boost::python::def("assignedVehicleRole", static_cast<rv_vehicle_role(*)(const object &)>(&assigned_vehicle_role));
	boost::python::def("getGroup", static_cast<group(*)(const object &)>(&get_group));
	boost::python::def("groupSelectedUnits", static_cast<std::vector<object>(*)(const object &)>(&group_selected_units));
	boost::python::def("squadParams", static_cast<sqf_return_string_list(*)(const object &)>(&squad_params));
	boost::python::def("unitReady", static_cast<bool(*)(const object &)>(&unit_ready));
	boost::python::def("unitAddons", static_cast<sqf_return_string_list(*)(sqf_string_const_ref)>(&unit_addons));
	boost::python::def("getAllOwnedMines", static_cast<std::vector<object>(*)(const object &)>(&get_all_owned_mines));
	boost::python::def("removeAllOwnedMines", static_cast<void(*)(const object &)>(&remove_all_owned_mines));
	boost::python::def("unitIsUav", static_cast<bool(*)(const object &)>(&unit_is_uav));
	boost::python::def("addOwnedMine", static_cast<void(*)(const object &,const object &)>(&add_owned_mine));
	boost::python::def("addPlayerScores", static_cast<void(*)(const object &,int,int,int,int,int)>(&add_player_scores));
	boost::python::def("assignAsTurret", static_cast<void(*)(const object &,const object &,const std::vector<int> &)>(&assign_as_turret));
	boost::python::def("connectTerminalToUav", static_cast<bool(*)(const object &,const object &)>(&connect_terminal_to_uav));
	boost::python::def("disableUavConnectability", static_cast<void(*)(const object &,const object &,bool)>(&disable_uav_connectability));
	boost::python::def("enableUavConnectAbility", static_cast<void(*)(const object &,const object &,bool)>(&enable_uav_connect_ability));
	boost::python::def("enableWeaponDisassembly", static_cast<void(*)(const object &,bool)>(&enable_weapon_disassembly));
	boost::python::def("findNearestEnemy", static_cast<object(*)(const object &,std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3> >)>(&find_nearest_enemy));
	boost::python::def("findNearestEnemy", static_cast<object(*)(const object &,const object &)>(&find_nearest_enemy));
	boost::python::def("fire", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&fire));
	boost::python::def("fireAtTarget", static_cast<bool(*)(const object &,const object &,std::optional<std::string>)>(&fire_at_target));
	boost::python::def("getHideFrom", static_cast<vector3(*)(const object &,const object &)>(&get_hide_from));
	boost::python::def("getUnitTrait", static_cast<std::variant<bool , float>(*)(const object &,sqf_string_const_ref)>(&get_unit_trait));
	boost::python::def("setCaptive", static_cast<void(*)(const object &,bool)>(&set_captive));
	boost::python::def("setCaptive", static_cast<void(*)(const object &,float)>(&set_captive));
	boost::python::def("setName", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_name));
	boost::python::def("setUnitTrait", static_cast<void(*)(const object &,sqf_string_const_ref,std::variant<bool, float>,bool)>(&set_unit_trait));
	boost::python::def("leaveVehicle", static_cast<void(*)(const object &,const object &)>(&leave_vehicle));
	boost::python::def("lookAt", static_cast<void(*)(std::variant<std::reference_wrapper<const object>, std::reference_wrapper<const std::vector<object> > >,std::variant<std::reference_wrapper<const object>, std::reference_wrapper<const vector3> >)>(&look_at));
	boost::python::def("leaveVehicle", static_cast<void(*)(const object &,const group &)>(&leave_vehicle));
	boost::python::def("playAction", static_cast<void(*)(const object &,sqf_string_const_ref)>(&play_action));
	boost::python::def("playActionNow", static_cast<void(*)(const object &,sqf_string_const_ref)>(&play_action_now));
	boost::python::def("playGesture", static_cast<void(*)(const object &,sqf_string_const_ref)>(&play_gesture));
	boost::python::def("playMove", static_cast<void(*)(const object &,sqf_string_const_ref)>(&play_move));
	boost::python::def("playMoveNow", static_cast<void(*)(const object &,sqf_string_const_ref)>(&play_move_now));
	boost::python::def("setAnimSpeedCoef", static_cast<void(*)(const object &,float)>(&set_anim_speed_coef));
	boost::python::def("setBleedingRemaining", static_cast<void(*)(const object &,float)>(&set_bleeding_remaining));
	boost::python::def("setFace", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_face));
	boost::python::def("setFaceanimation", static_cast<void(*)(const object &,float)>(&set_faceanimation));
	boost::python::def("setFatigue", static_cast<void(*)(const object &,float)>(&set_fatigue));
	boost::python::def("setIdentity", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_identity));
	boost::python::def("setMimic", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_mimic));
	boost::python::def("setName", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_name));
	boost::python::def("setOxygenRemaining", static_cast<void(*)(const object &,float)>(&set_oxygen_remaining));
	boost::python::def("setRandomLip", static_cast<void(*)(const object &,bool)>(&set_random_lip));
	boost::python::def("setRank", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_rank));
	boost::python::def("setStamina", static_cast<void(*)(const object &,float)>(&set_stamina));
	boost::python::def("setSuppression", static_cast<void(*)(const object &,float)>(&set_suppression));
	boost::python::def("setTargetAge", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_target_age));
	boost::python::def("setUnconscious", static_cast<void(*)(const object &,bool)>(&set_unconscious));
	boost::python::def("setUnitAbility", static_cast<void(*)(const object &,float)>(&set_unit_ability));
	boost::python::def("setUnitPos", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_unit_pos));
	boost::python::def("setUnitPosWeak", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_unit_pos_weak));
	boost::python::def("setUnitRank", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_unit_rank));
	boost::python::def("setUnitRecoilCoefficient", static_cast<void(*)(const object &,float)>(&set_unit_recoil_coefficient));
	boost::python::def("doStop", static_cast<void(*)(const object &)>(&do_stop));
	boost::python::def("doStop", static_cast<void(*)(const std::vector<object> &)>(&do_stop));
	boost::python::def("doGetOut", static_cast<void(*)(const object &)>(&do_get_out));
	boost::python::def("doGetOut", static_cast<void(*)(const std::vector<object> &)>(&do_get_out));
	boost::python::def("switchAction", static_cast<void(*)(const object &,sqf_string_const_ref)>(&switch_action));
	boost::python::def("switchGesture", static_cast<void(*)(const object &,sqf_string_const_ref)>(&switch_gesture));
	boost::python::def("switchMove", static_cast<void(*)(const object &,sqf_string_const_ref)>(&switch_move));
	boost::python::def("useAudioTimeForMoves", static_cast<void(*)(const object &,bool)>(&use_audio_time_for_moves));
	boost::python::def("leader", static_cast<object(*)(const object &)>(&leader));
	boost::python::def("lifeState", static_cast<sqf_return_string(*)(const object &)>(&life_state));
	boost::python::def("lockIdentity", static_cast<bool(*)(const object &)>(&lock_identity));
	boost::python::def("morale", static_cast<float(*)(const object &)>(&morale));
	boost::python::def("moveOut", static_cast<void(*)(const object &)>(&move_out));
	boost::python::def("moveTime", static_cast<float(*)(const object &)>(&move_time));
	boost::python::def("name", static_cast<sqf_return_string(*)(const object &)>(&name));
	boost::python::def("needReload", static_cast<float(*)(const object &)>(&need_reload));
	boost::python::def("precision", static_cast<float(*)(const object &)>(&precision));
	boost::python::def("rank", static_cast<sqf_return_string(*)(const object &)>(&rank));
	boost::python::def("rankId", static_cast<float(*)(const object &)>(&rank_id));
	boost::python::def("rating", static_cast<float(*)(const object &)>(&rating));
	boost::python::def("reload", static_cast<void(*)(const object &)>(&reload));
	boost::python::def("reloadEnabled", static_cast<bool(*)(const object &)>(&reload_enabled));
	boost::python::def("removeSwitchableUnit", static_cast<void(*)(const object &)>(&remove_switchable_unit));
	boost::python::def("resetSubgroupDirection", static_cast<void(*)(const object &)>(&reset_subgroup_direction));
	boost::python::def("selectPlayer", static_cast<void(*)(const object &)>(&select_player));
	boost::python::def("setPlayable", static_cast<void(*)(const object &)>(&set_playable));
	boost::python::def("setPlayerRespawnTime", static_cast<void(*)(float)>(&set_player_respawn_time));
	boost::python::def("setStaminaScheme", static_cast<void(*)(sqf_string_const_ref)>(&set_stamina_scheme));
	boost::python::def("someAmmo", static_cast<bool(*)(const object &)>(&some_ammo));
	boost::python::def("speaker", static_cast<sqf_return_string(*)(const object &)>(&speaker));
	boost::python::def("stance", static_cast<sqf_return_string(*)(const object &)>(&stance));
	boost::python::def("stopped", static_cast<bool(*)(const object &)>(&stopped));
	boost::python::def("unitPos", static_cast<sqf_return_string(*)(const object &)>(&unit_pos));
	boost::python::def("unitRecoilCoefficient", static_cast<float(*)(const object &)>(&unit_recoil_coefficient));
	boost::python::def("weaponLowered", static_cast<bool(*)(const object &)>(&weapon_lowered));
	boost::python::def("addRating", static_cast<void(*)(const object &,float)>(&add_rating));
	boost::python::def("addScore", static_cast<void(*)(const object &,float)>(&add_score));
	boost::python::def("assignTeam", static_cast<void(*)(const object &,team_color)>(&assign_team));
	boost::python::def("unassignTeam", static_cast<void(*)(const object &)>(&unassign_team));
	boost::python::def("disableConversation", static_cast<void(*)(const object &,bool)>(&disable_conversation));
	boost::python::def("enableAimPrecision", static_cast<void(*)(const object &,bool)>(&enable_aim_precision));
	boost::python::def("enableFatigue", static_cast<void(*)(const object &,bool)>(&enable_fatigue));
	boost::python::def("enableMimics", static_cast<void(*)(const object &,bool)>(&enable_mimics));
	boost::python::def("enableReload", static_cast<void(*)(const object &,bool)>(&enable_reload));
	boost::python::def("enableStamina", static_cast<void(*)(const object &,bool)>(&enable_stamina));
	boost::python::def("fire", static_cast<void(*)(const object &,sqf_string_const_ref)>(&fire));
	boost::python::def("forceSpeed", static_cast<void(*)(const object &,float)>(&force_speed));
	boost::python::def("forceWalk", static_cast<void(*)(const object &,bool)>(&force_walk));
	boost::python::def("isFlashlightOn", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&is_flashlight_on));
	boost::python::def("isIrlaserOn", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&is_irlaser_on));
	boost::python::def("setCustomAimCoef", static_cast<void(*)(const object &,float)>(&set_custom_aim_coef));
	boost::python::def("allowSprint", static_cast<void(*)(const object &,bool)>(&allow_sprint));
	boost::python::def("animationPhase", static_cast<float(*)(const object &,sqf_string_const_ref)>(&animation_phase));
	boost::python::def("getConnectedUav", static_cast<object(*)(const object &)>(&get_connected_uav));
	boost::python::def("getCustomAimCoef", static_cast<float(*)(const object &)>(&get_custom_aim_coef));
	boost::python::def("removeOwnedMine", static_cast<void(*)(const object &,const object &)>(&remove_owned_mine));
	boost::python::def("reveal", static_cast<void(*)(std::variant<object, group> &,const object &)>(&reveal));
	boost::python::def("reveal", static_cast<void(*)(std::variant<object, group> &,const std::vector<object> &)>(&reveal));
	boost::python::def("getAimingCoef", static_cast<float(*)(const object &)>(&get_aiming_coef));
	boost::python::enum_<team_color>("teamColor")
		.value("MAIN", static_cast<team_color>(0))
		.value("RED", static_cast<team_color>(1))
		.value("GREEN", static_cast<team_color>(2))
		.value("BLUE", static_cast<team_color>(3))
		.value("YELLOW", static_cast<team_color>(4));
	boost::python::class_<rv_target_knowledge>("rvTargetKnowledge")
		.def_readwrite("knownByGroup", &rv_target_knowledge::known_by_group)
		.def_readwrite("knownByUnit", &rv_target_knowledge::known_by_unit)
		.def_readwrite("lastSeenByUnit", &rv_target_knowledge::last_seen_by_unit)
		.def_readwrite("lastEndangeredByUnit", &rv_target_knowledge::last_endangered_by_unit)
		.def_readwrite("targetSide", &rv_target_knowledge::target_side)
		.def_readwrite("positionError", &rv_target_knowledge::position_error)
		.def_readwrite("targetPosition", &rv_target_knowledge::target_position);
}

BOOST_PYTHON_MODULE(__sqf_vehicles)
{
	boost::python::def("airplaneThrottle", static_cast<int(*)(const object &)>(&airplane_throttle));
	boost::python::def("getPylonMagazines", static_cast<sqf_return_string_list(*)(const object &)>(&get_pylon_magazines));
	boost::python::def("getForcedFlagTexture", static_cast<sqf_return_string(*)(const object &)>(&get_forced_flag_texture));
	boost::python::def("isDamageAllowed", static_cast<bool(*)(const object &)>(&is_damage_allowed));
	boost::python::def("vehicleReceiveRemoteTargets", static_cast<bool(*)(const object &)>(&vehicle_receive_remote_targets));
	boost::python::def("vehicleReportOwnPosition", static_cast<bool(*)(const object &)>(&vehicle_report_own_position));
	boost::python::def("vehicleReportRemoteTargets", static_cast<bool(*)(const object &)>(&vehicle_report_remote_targets));
	boost::python::def("ammoOnPylon", static_cast<int(*)(const object &,sqf_string_const_ref)>(&ammo_on_pylon));
	boost::python::def("ammoOnPylon", static_cast<int(*)(const object &,int)>(&ammo_on_pylon));
	boost::python::def("animateBay", static_cast<void(*)(const object &,sqf_string_const_ref,float)>(&animate_bay));
	boost::python::def("animateBay", static_cast<void(*)(const object &,int,float)>(&animate_bay));
	boost::python::def("animatePylon", static_cast<void(*)(const object &,sqf_string_const_ref,float)>(&animate_pylon));
	boost::python::def("animatePylon", static_cast<void(*)(const object &,int,float)>(&animate_pylon));
	boost::python::def("confirmSensorTarget", static_cast<void(*)(const object &,const side &,bool)>(&confirm_sensor_target));
	boost::python::def("forceFlagTexture", static_cast<void(*)(const object &,sqf_string_const_ref)>(&force_flag_texture));
	boost::python::def("isSensorTargetConfirmed", static_cast<bool(*)(const object &,const side &)>(&is_sensor_target_confirmed));
	boost::python::def("reportRemoteTarget", static_cast<void(*)(const side &,const object &,float)>(&report_remote_target));
	boost::python::def("setAirPlaneThrottle", static_cast<void(*)(const object &,float)>(&set_air_plane_throttle));
	boost::python::def("setAmmoOnPylon", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&set_ammo_on_pylon));
	boost::python::def("setAmmoOnPylon", static_cast<void(*)(const object &,int,int)>(&set_ammo_on_pylon));
	boost::python::def("setPylonLoadout", static_cast<bool(*)(const object &,game_value)>(&set_pylon_loadout));
	boost::python::def("setPylonsPriority", static_cast<void(*)(const object &,const std::vector<int> &)>(&set_pylons_priority));
	boost::python::def("setVehicleRadar", static_cast<void(*)(const object &,int)>(&set_vehicle_radar));
	boost::python::def("setVehicleReceiveRemoteTargets", static_cast<void(*)(const object &,bool)>(&set_vehicle_receive_remote_targets));
	boost::python::def("setVehicleReportOwnPosition", static_cast<void(*)(const object &,bool)>(&set_vehicle_report_own_position));
	boost::python::def("setVehicleReportRemoteTargets", static_cast<void(*)(const object &,bool)>(&set_vehicle_report_remote_targets));
	boost::python::def("isCollisionLightOn", static_cast<bool(*)(const object &)>(&is_collision_light_on));
	boost::python::def("enableCopilot", static_cast<void(*)(const object &,bool)>(&enable_copilot));
	boost::python::def("setPilotLight", static_cast<void(*)(const object &,bool)>(&set_pilot_light));
	boost::python::def("setCollisionLight", static_cast<void(*)(const object &,bool)>(&set_collision_light));
	boost::python::def("setFlagAnimationPhase", static_cast<float(*)(const object &,float)>(&set_flag_animation_phase));
	boost::python::def("setFlagOwner", static_cast<void(*)(const object &,const object &)>(&set_flag_owner));
	boost::python::def("setFlagAnimationPhase", static_cast<void(*)(const object &,float &)>(&set_flag_animation_phase));
	boost::python::def("createVehicleLocal", static_cast<object(*)(sqf_string_const_ref,const vector3 &)>(&create_vehicle_local));
	boost::python::def("addToRemainsCollector", static_cast<void(*)(const std::vector<object> &)>(&add_to_remains_collector));
	boost::python::def("removeFromRemainsCollector", static_cast<void(*)(const std::vector<object> &)>(&remove_from_remains_collector));
	boost::python::def("fullCrew", static_cast<std::vector<rv_crew_member>(*)(const object &)>(&full_crew));
	boost::python::def("fullCrew", static_cast<std::vector<rv_crew_member>(*)(const object &,sqf_string_const_ref,bool)>(&full_crew));
	boost::python::def("crew", static_cast<std::vector<object>(*)(const object &)>(&crew));
	boost::python::def("aimedAtTarget", static_cast<float(*)(const object &,const object &)>(&aimed_at_target));
	boost::python::def("aimedAtTarget", static_cast<float(*)(const object &,const object &,sqf_string_const_ref)>(&aimed_at_target));
	boost::python::def("animate", static_cast<void(*)(const object &,sqf_string_const_ref,float)>(&animate));
	boost::python::def("animate", static_cast<void(*)(const object &,sqf_string_const_ref,float,bool)>(&animate));
	boost::python::def("animateDoor", static_cast<void(*)(const object &,sqf_string_const_ref,float,bool)>(&animate_door));
	boost::python::def("getCenterOfMass", static_cast<vector3(*)(const object &)>(&get_center_of_mass));
	boost::python::def("createVehicle", static_cast<object(*)(sqf_string_const_ref,const vector3 &)>(&create_vehicle));
	boost::python::def("createVehicle", static_cast<object(*)(sqf_string_const_ref,const vector3 &,const std::vector<marker> &,float,sqf_string_const_ref)>(&create_vehicle));
	boost::python::def("deleteVehicle", static_cast<void(*)(const object &)>(&delete_vehicle));
	boost::python::def("allTurrets", static_cast<sqf_return_string_list(*)(const object &,bool)>(&all_turrets));
	boost::python::def("allTurrets", static_cast<sqf_return_string_list(*)(const object &)>(&all_turrets));
	boost::python::def("alive", static_cast<bool(*)(const object &)>(&alive));
	boost::python::def("assignedCommander", static_cast<object(*)(const object &)>(&assigned_commander));
	boost::python::def("assignedDriver", static_cast<object(*)(const object &)>(&assigned_driver));
	boost::python::def("assignedGunner", static_cast<object(*)(const object &)>(&assigned_gunner));
	boost::python::def("assignedTarget", static_cast<object(*)(const object &)>(&assigned_target));
	boost::python::def("commander", static_cast<object(*)(const object &)>(&commander));
	boost::python::def("createVehicleCrew", static_cast<void(*)(const object &)>(&create_vehicle_crew));
	boost::python::def("damage", static_cast<float(*)(const object &)>(&damage));
	boost::python::def("driver", static_cast<object(*)(const object &)>(&driver));
	boost::python::def("effectiveCommander", static_cast<object(*)(const object &)>(&effective_commander));
	boost::python::def("fillWeaponsFromPool", static_cast<void(*)(const object &)>(&fill_weapons_from_pool));
	boost::python::def("flag", static_cast<object(*)(const object &)>(&flag));
	boost::python::def("flagOwner", static_cast<object(*)(const object &)>(&flag_owner));
	boost::python::def("flagSide", static_cast<side(*)(const object &)>(&flag_side));
	boost::python::def("flagTexture", static_cast<sqf_return_string(*)(const object &)>(&flag_texture));
	boost::python::def("fuel", static_cast<float(*)(const object &)>(&fuel));
	boost::python::def("getDammage", static_cast<float(*)(const object &)>(&get_dammage));
	boost::python::def("getMass", static_cast<float(*)(const object &)>(&get_mass));
	boost::python::def("getObjectDlc", static_cast<float(*)(const object &)>(&get_object_dlc));
	boost::python::def("getObjectType", static_cast<float(*)(const object &)>(&get_object_type));
	boost::python::def("hideObject", static_cast<void(*)(const object &)>(&hide_object));
	boost::python::def("hideObjectGlobal", static_cast<void(*)(const object &)>(&hide_object_global));
	boost::python::def("inflamed", static_cast<bool(*)(const object &)>(&inflamed));
	boost::python::def("isAutoHoverOn", static_cast<bool(*)(const object &)>(&is_auto_hover_on));
	boost::python::def("isAutonomous", static_cast<bool(*)(const object &)>(&is_autonomous));
	boost::python::def("isBurning", static_cast<bool(*)(const object &)>(&is_burning));
	boost::python::def("isCopilotEnabled", static_cast<bool(*)(const object &)>(&is_copilot_enabled));
	boost::python::def("isEngineOn", static_cast<bool(*)(const object &)>(&is_engine_on));
	boost::python::def("isHidden", static_cast<bool(*)(const object &)>(&is_hidden));
	boost::python::def("isInRemainsCollector", static_cast<bool(*)(const object &)>(&is_in_remains_collector));
	boost::python::def("isLightOn", static_cast<bool(*)(const object &)>(&is_light_on));
	boost::python::def("isManualFire", static_cast<bool(*)(const object &)>(&is_manual_fire));
	boost::python::def("isMarkedForCollection", static_cast<bool(*)(const object &)>(&is_marked_for_collection));
	boost::python::def("isObjectHidden", static_cast<bool(*)(const object &)>(&is_object_hidden));
	boost::python::def("isTouchingGround", static_cast<bool(*)(const object &)>(&is_touching_ground));
	boost::python::def("laserTarget", static_cast<object(*)(const object &)>(&laser_target));
	boost::python::def("lightIsOn", static_cast<sqf_return_string(*)(const object &)>(&light_is_on));
	boost::python::def("locked", static_cast<float(*)(const object &)>(&locked));
	boost::python::def("mineActive", static_cast<bool(*)(const object &)>(&mine_active));
	boost::python::def("lockedDriver", static_cast<bool(*)(const object &)>(&locked_driver));
	boost::python::def("objectParent", static_cast<object(*)(const object &)>(&object_parent));
	boost::python::def("score", static_cast<float(*)(const object &)>(&score));
	boost::python::def("scudState", static_cast<float(*)(const object &)>(&scud_state));
	boost::python::def("sizeOf", static_cast<float(*)(sqf_string_const_ref)>(&size_of));
	boost::python::def("speed", static_cast<float(*)(const object &)>(&speed));
	boost::python::def("vehicle", static_cast<object(*)(const object &)>(&vehicle));
	boost::python::def("vehicleVarName", static_cast<sqf_return_string(*)(const object &)>(&vehicle_var_name));
	boost::python::def("allowCrewInImmobile", static_cast<void(*)(const object &,bool)>(&allow_crew_in_immobile));
	boost::python::def("allowDamage", static_cast<void(*)(const object &,bool)>(&allow_damage));
	boost::python::def("allowDammage", static_cast<void(*)(const object &,bool)>(&allow_dammage));
	boost::python::def("disableNvgequipment", static_cast<void(*)(const object &,bool)>(&disable_nvgequipment));
	boost::python::def("disableTiequipment", static_cast<void(*)(const object &,bool)>(&disable_tiequipment));
	boost::python::def("doorPhase", static_cast<float(*)(const object &,sqf_string_const_ref)>(&door_phase));
	boost::python::def("emptyPositions", static_cast<float(*)(const object &,sqf_string_const_ref)>(&empty_positions));
	boost::python::def("engineOn", static_cast<void(*)(const object &,bool)>(&engine_on));
	boost::python::def("getHit", static_cast<float(*)(const object &,sqf_string_const_ref)>(&get_hit));
	boost::python::def("getHitIndex", static_cast<float(*)(const object &,float)>(&get_hit_index));
	boost::python::def("getHitPointDamage", static_cast<float(*)(const object &,sqf_string_const_ref)>(&get_hit_point_damage));
	boost::python::def("getSpeed", static_cast<float(*)(const object &,sqf_string_const_ref)>(&get_speed));
	boost::python::def("hideObject", static_cast<void(*)(const object &,bool)>(&hide_object));
	boost::python::def("hideObjectGlobal", static_cast<void(*)(const object &,bool)>(&hide_object_global));
	boost::python::def("inflame", static_cast<void(*)(const object &,bool)>(&inflame));
	boost::python::def("limitSpeed", static_cast<void(*)(const object &,float)>(&limit_speed));
	boost::python::def("lock", static_cast<void(*)(const object &,bool)>(&lock));
	boost::python::def("lock", static_cast<void(*)(const object &,float)>(&lock));
	boost::python::def("lockCargo", static_cast<void(*)(const object &,bool)>(&lock_cargo));
	boost::python::def("lockDriver", static_cast<void(*)(const object &,bool)>(&lock_driver));
	boost::python::def("lockedCargo", static_cast<bool(*)(const object &,float)>(&locked_cargo));
	boost::python::def("setAutonomous", static_cast<void(*)(const object &,bool)>(&set_autonomous));
	boost::python::def("setDamage", static_cast<void(*)(const object &,float,bool)>(&set_damage));
	boost::python::def("setDammage", static_cast<void(*)(const object &,float)>(&set_dammage));
	boost::python::def("setFlagSide", static_cast<void(*)(const object &,const side &)>(&set_flag_side));
	boost::python::def("setFlagTexture", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_flag_texture));
	boost::python::def("setFuel", static_cast<void(*)(const object &,float)>(&set_fuel));
	boost::python::def("setVehicleArmor", static_cast<void(*)(const object &,float)>(&set_vehicle_armor));
	boost::python::def("setVehicleId", static_cast<void(*)(const object &,float)>(&set_vehicle_id));
	boost::python::def("setVehicleLock", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_vehicle_lock));
	boost::python::def("setVehicleVarName", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_vehicle_var_name));
	boost::python::def("switchLight", static_cast<void(*)(const object &,sqf_string_const_ref)>(&switch_light));
	boost::python::def("setHit", static_cast<void(*)(const object &,sqf_string_const_ref,float)>(&set_hit));
	boost::python::def("setHitIndex", static_cast<void(*)(const object &,int,float)>(&set_hit_index));
	boost::python::def("setHitPointDamage", static_cast<void(*)(const object &,sqf_string_const_ref,float)>(&set_hit_point_damage));
	boost::python::def("getAllHitPointsDamage", static_cast<rv_hit_points_damage(*)(const object &)>(&get_all_hit_points_damage));
	boost::python::def("getObjectMaterials", static_cast<sqf_return_string_list(*)(const object &)>(&get_object_materials));
	boost::python::def("getObjectTextures", static_cast<sqf_return_string_list(*)(const object &)>(&get_object_textures));
	boost::python::def("synchronizedObjects", static_cast<std::vector<object>(*)(const object &)>(&synchronized_objects));
	boost::python::def("getModelInfo", static_cast<rv_model_info(*)(const object &)>(&get_model_info));
	boost::python::def("createSimpleObject", static_cast<object(*)(sqf_string_const_ref,const vector3 &)>(&create_simple_object));
	boost::python::def("getContainerMaxLoad", static_cast<float(*)(sqf_string_const_ref)>(&get_container_max_load));
	boost::python::def("getShotParents", static_cast<rv_shot_parents(*)(const object &)>(&get_shot_parents));
	boost::python::def("isSimpleObject", static_cast<bool(*)(const object &)>(&is_simple_object));
	boost::python::def("selectionNames", static_cast<sqf_return_string_list(*)(const object &)>(&selection_names));
	boost::python::def("switchCamera", static_cast<void(*)(const object &)>(&switch_camera));
	boost::python::def("animateSource", static_cast<void(*)(const object &,sqf_string_const_ref,float,bool)>(&animate_source));
	boost::python::def("animateSource", static_cast<void(*)(const object &,sqf_string_const_ref,float,float)>(&animate_source));
	boost::python::def("animationSourcePhase", static_cast<float(*)(const object &,sqf_string_const_ref)>(&animation_source_phase));
	boost::python::def("deleteVehicleCrew", static_cast<void(*)(const object &,const object &)>(&delete_vehicle_crew));
	boost::python::def("disableCollisionWith", static_cast<void(*)(const object &,const object &)>(&disable_collision_with));
	boost::python::def("enableCollisionWith", static_cast<void(*)(const object &,const object &)>(&enable_collision_with));
	boost::python::def("hideSelection", static_cast<void(*)(const object &,sqf_string_const_ref,bool)>(&hide_selection));
	boost::python::def("lockCameraTo", static_cast<void(*)(const object &,const object &,const std::vector<int> &)>(&lock_camera_to));
	boost::python::def("lockCargo", static_cast<void(*)(const object &,int,bool)>(&lock_cargo));
	boost::python::def("lockedTurret", static_cast<bool(*)(const object &,const std::vector<int> &)>(&locked_turret));
	boost::python::def("lockTurret", static_cast<void(*)(const object &,const std::vector<int> &,bool)>(&lock_turret));
	boost::python::def("respawnVehicle", static_cast<void(*)(const object &,float,int)>(&respawn_vehicle));
	boost::python::def("setCenterOfMass", static_cast<void(*)(const object &,const vector3 &,float)>(&set_center_of_mass));
	boost::python::def("setFeatureType", static_cast<bool(*)(const object &,feature_type)>(&set_feature_type));
	boost::python::def("setFeatureType", static_cast<bool(*)(const object &,int)>(&set_feature_type));
	boost::python::def("setMass", static_cast<void(*)(const object &,float,std::optional<float>)>(&set_mass));
	boost::python::def("setObjectMaterial", static_cast<void(*)(const object &,int,sqf_string_const_ref)>(&set_object_material));
	boost::python::def("setObjectMaterialGlobal", static_cast<void(*)(const object &,int,sqf_string_const_ref)>(&set_object_material_global));
	boost::python::def("setObjectTexture", static_cast<void(*)(const object &,int,sqf_string_const_ref)>(&set_object_texture));
	boost::python::def("setObjectTextureGlobal", static_cast<void(*)(const object &,int,sqf_string_const_ref)>(&set_object_texture_global));
	boost::python::def("setPilotCameraDirection", static_cast<void(*)(const object &,const vector3 &)>(&set_pilot_camera_direction));
	boost::python::def("setPilotCameraRotation", static_cast<void(*)(const object &,float,float)>(&set_pilot_camera_rotation));
	boost::python::def("setPilotCameraTarget", static_cast<bool(*)(const object &,std::variant<std::reference_wrapper<const object>, std::reference_wrapper<const vector3> >)>(&set_pilot_camera_target));
	boost::python::def("setShotParents", static_cast<void(*)(const object &,const object &,const object &)>(&set_shot_parents));
	boost::python::def("setVehicleTiParts", static_cast<void(*)(const object &,const game_value &)>(&set_vehicle_ti_parts));
	boost::python::def("setWeaponReloadingTime", static_cast<void(*)(const object &,const object &,sqf_string_const_ref,float)>(&set_weapon_reloading_time));
	boost::python::def("synchronizeObjectsAdd", static_cast<void(*)(const object &,const std::vector<object> &)>(&synchronize_objects_add));
	boost::python::def("synchronizeObjectsRemove", static_cast<void(*)(const object &,const std::vector<object> &)>(&synchronize_objects_remove));
	boost::python::def("turretUnit", static_cast<object(*)(const object &,const std::vector<int> &)>(&turret_unit));
	boost::python::def("weaponsTurret", static_cast<sqf_return_string_list(*)(const object &,const std::vector<int> &)>(&weapons_turret));
	boost::python::def("flagAnimationPhase", static_cast<float(*)(const object &)>(&flag_animation_phase));
	boost::python::def("unassignVehicle", static_cast<void(*)(const object &)>(&unassign_vehicle));
	boost::python::def("assignToAirport", static_cast<void(*)(const object &,float)>(&assign_to_airport));
	boost::python::def("assignToAirport", static_cast<void(*)(const object &,const object &)>(&assign_to_airport));
	boost::python::def("setLightBrightness", static_cast<void(*)(const object &,float)>(&set_light_brightness));
	boost::python::def("setLightDayLight", static_cast<void(*)(const object &,bool)>(&set_light_day_light));
	boost::python::def("setLightFlareMaxDistance", static_cast<void(*)(const object &,float)>(&set_light_flare_max_distance));
	boost::python::def("setLightFlareSize", static_cast<void(*)(const object &,float)>(&set_light_flare_size));
	boost::python::def("setLightIntensity", static_cast<void(*)(const object &,float)>(&set_light_intensity));
	boost::python::def("setLightUseFlare", static_cast<void(*)(const object &,bool)>(&set_light_use_flare));
	boost::python::def("setLightAmbient", static_cast<void(*)(const object &,float,float,float)>(&set_light_ambient));
	boost::python::def("setLightAttenuation", static_cast<void(*)(const object &,float,float,float,float,float,float)>(&set_light_attenuation));
	boost::python::def("setLightColor", static_cast<void(*)(const object &,float,float,float)>(&set_light_color));
	boost::python::def("roadsConnectedTo", static_cast<std::vector<object>(*)(const object &)>(&roads_connected_to));
	boost::python::def("getSide", static_cast<side(*)(const object &)>(&get_side));
	boost::python::def("wfSideText", static_cast<sqf_return_string(*)(const object &)>(&wf_side_text));
	boost::python::def("wfSideText", static_cast<sqf_return_string(*)(const group &)>(&wf_side_text));
	boost::python::def("wfSideText", static_cast<sqf_return_string(*)(const side &)>(&wf_side_text));
	boost::python::def("uavControl", static_cast<rv_uav_control(*)(const object &)>(&uav_control));
	boost::python::enum_<feature_type>("featureType")
		.value("disabled", static_cast<feature_type>(0))
		.value("visible_object_distance", static_cast<feature_type>(1))
		.value("visible_terrain_distance", static_cast<feature_type>(2));
	boost::python::class_<rv_crew_member>("rvCrewMember", boost::python::init<object,std::string,float,std::vector<int>,bool>())
		.def_readwrite("unit", &rv_crew_member::unit)
		.def_readwrite("role", &rv_crew_member::role)
		.def_readwrite("cargoIndex", &rv_crew_member::cargo_index)
		.def_readwrite("turretPath", &rv_crew_member::turret_path)
		.def_readwrite("personTurret", &rv_crew_member::person_turret);
}

BOOST_PYTHON_MODULE(__sqf_waypoint)
{
	boost::python::def("addWaypoint", static_cast<waypoint(*)(group &,const vector3 &,float,int,sqf_string_const_ref)>(&add_waypoint));
	boost::python::def("addWaypoint", static_cast<waypoint(*)(group &,const object &,float,int,sqf_string_const_ref)>(&add_waypoint));
	boost::python::def("deleteWaypoint", static_cast<void(*)(waypoint &)>(&delete_waypoint));
	boost::python::def("copyWaypoints", static_cast<void(*)(group &,group &)>(&copy_waypoints));
	boost::python::def("waypointAttachedObject", static_cast<object(*)(waypoint &)>(&waypoint_attached_object));
	boost::python::def("waypointAttachedVehicle", static_cast<object(*)(waypoint &)>(&waypoint_attached_vehicle));
	boost::python::def("waypointBehaviour", static_cast<waypoint::behaviour(*)(waypoint &)>(&waypoint_behaviour));
	boost::python::def("waypointCombatMode", static_cast<waypoint::combat_mode(*)(waypoint &)>(&waypoint_combat_mode));
	boost::python::def("waypointCompleteionRadius", static_cast<float(*)(waypoint &)>(&waypoint_completeion_radius));
	boost::python::def("waypointDescription", static_cast<sqf_return_string(*)(waypoint &)>(&waypoint_description));
	boost::python::def("waypointFormation", static_cast<waypoint::formation(*)(waypoint &)>(&waypoint_formation));
	boost::python::def("waypointHousePosition", static_cast<float(*)(waypoint &)>(&waypoint_house_position));
	boost::python::def("waypointLoiterRadius", static_cast<float(*)(waypoint &)>(&waypoint_loiter_radius));
	boost::python::def("waypointLoiterType", static_cast<waypoint::loiter_type(*)(waypoint &)>(&waypoint_loiter_type));
	boost::python::def("waypointName", static_cast<sqf_return_string(*)(waypoint &)>(&waypoint_name));
	boost::python::def("waypointPosition", static_cast<vector3(*)(waypoint &)>(&waypoint_position));
	boost::python::def("waypointScript", static_cast<sqf_return_string(*)(waypoint &)>(&waypoint_script));
	boost::python::def("waypointShow", static_cast<waypoint::show(*)(waypoint &)>(&waypoint_show));
	boost::python::def("waypointSpeed", static_cast<waypoint::speed(*)(waypoint &)>(&waypoint_speed));
	boost::python::def("waypointType", static_cast<waypoint::type(*)(waypoint &)>(&waypoint_type));
	boost::python::def("waypointVisible", static_cast<bool(*)(waypoint &)>(&waypoint_visible));
	boost::python::def("synchronizedWaypoints", static_cast<std::vector<waypoint>(*)(waypoint &)>(&synchronized_waypoints));
	boost::python::def("synchronizedWaypoints", static_cast<std::vector<waypoint>(*)(object &)>(&synchronized_waypoints));
	boost::python::def("setWaypointBehaviour", static_cast<void(*)(waypoint &,intercept::sqf::waypoint::behaviour)>(&set_waypoint_behaviour));
	boost::python::def("setWaypointCombatMode", static_cast<void(*)(waypoint &,intercept::sqf::waypoint::combat_mode)>(&set_waypoint_combat_mode));
	boost::python::def("setWaypointCompletionRadius", static_cast<void(*)(waypoint &,float)>(&set_waypoint_completion_radius));
	boost::python::def("setWaypointDescription", static_cast<void(*)(waypoint &,std::string &)>(&set_waypoint_description));
	boost::python::def("setWaypointFormation", static_cast<void(*)(waypoint &,intercept::sqf::waypoint::formation)>(&set_waypoint_formation));
	boost::python::def("setWaypointHousePosition", static_cast<void(*)(waypoint &,float)>(&set_waypoint_house_position));
	boost::python::def("setWaypointLoiterRadius", static_cast<void(*)(waypoint &,float)>(&set_waypoint_loiter_radius));
	boost::python::def("setWaypointLoiterType", static_cast<void(*)(waypoint &,intercept::sqf::waypoint::loiter_type)>(&set_waypoint_loiter_type));
	boost::python::def("setWaypointName", static_cast<void(*)(waypoint &,std::string &)>(&set_waypoint_name));
	boost::python::def("setWaypointPosition", static_cast<void(*)(waypoint &,vector3 &,float)>(&set_waypoint_position));
	boost::python::def("setWaypointScript", static_cast<void(*)(waypoint &,std::string &)>(&set_waypoint_script));
	boost::python::def("setWaypointSpeed", static_cast<void(*)(waypoint &,intercept::sqf::waypoint::speed)>(&set_waypoint_speed));
	boost::python::def("setWaypointStatements", static_cast<void(*)(waypoint &,std::string,std::string)>(&set_waypoint_statements));
	boost::python::def("setWaypointTimeout", static_cast<void(*)(waypoint &,float,float,float)>(&set_waypoint_timeout));
	boost::python::def("setWaypointType", static_cast<void(*)(waypoint &,intercept::sqf::waypoint::type)>(&set_waypoint_type));
	boost::python::def("setWaypointVisible", static_cast<void(*)(waypoint &,bool)>(&set_waypoint_visible));
	boost::python::def("showWaypoint", static_cast<void(*)(waypoint &,std::string &)>(&show_waypoint));
	boost::python::def("synchronizeWaypoint", static_cast<void(*)(waypoint &,const std::vector<waypoint> &)>(&synchronize_waypoint));
	boost::python::def("synchronizeWaypoint", static_cast<void(*)(object &,const std::vector<waypoint> &)>(&synchronize_waypoint));
	boost::python::def("waypointAttachObject", static_cast<void(*)(waypoint &,int)>(&waypoint_attach_object));
	boost::python::def("waypointAttachObject", static_cast<void(*)(waypoint &,object &)>(&waypoint_attach_object));
	boost::python::def("showWaypoints", static_cast<void(*)(bool)>(&show_waypoints));
	boost::python::def("waypointForceBehaviour", static_cast<bool(*)(const group &,int)>(&waypoint_force_behaviour));
	boost::python::def("setWaypointForceBehaviour", static_cast<void(*)(const group &,int,bool)>(&set_waypoint_force_behaviour));
	boost::python::def("waypointTimeoutCurrent", static_cast<float(*)(const group &)>(&waypoint_timeout_current));
	boost::python::def("waypointsEnabledUav", static_cast<bool(*)(const object &)>(&waypoints_enabled_uav));
	boost::python::def("enableUavWaypoints", static_cast<void(*)(object &,bool)>(&enable_uav_waypoints));
	boost::python::def("setWpPos", static_cast<void(*)(const group &,int,const vector2 &)>(&set_wp_pos));
	boost::python::def("getWpPos", static_cast<vector3(*)(const group &,int)>(&get_wp_pos));
	boost::python::def("lockWp", static_cast<void(*)(std::variant<std::reference_wrapper<const object>, std::reference_wrapper<const group> >,bool)>(&lock_wp));
	boost::python::def("waypoints", static_cast<std::vector<waypoint>(*)(const object &)>(&waypoints));
	boost::python::def("waypoints", static_cast<std::vector<waypoint>(*)(const group &)>(&waypoints));
	boost::python::def("setEffectCondition", static_cast<void(*)(std::variant<object, waypoint>,sqf_string_const_ref)>(&set_effect_condition));
	boost::python::def("waypointAttachVehicle", static_cast<void(*)(const waypoint &,const object &)>(&waypoint_attach_vehicle));
	boost::python::def("enableUavwaypoints", static_cast<void(*)(const object &,bool)>(&enable_uavwaypoints));
	boost::python::def("createGuardedPoint", static_cast<void(*)(const side &,const vector3 &,float,const object &)>(&create_guarded_point));
	boost::python::def("triggerArea", static_cast<rv_trigger_area(*)(const object &)>(&trigger_area));
	boost::python::def("triggerTimeout", static_cast<rv_trigger_timeout(*)(const object &)>(&trigger_timeout));
	boost::python::def("list", static_cast<std::vector<object>(*)(const object &)>(&list));
	boost::python::def("triggerAttachObject", static_cast<void(*)(const object &,float)>(&trigger_attach_object));
	boost::python::def("setTriggerText", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_trigger_text));
	boost::python::def("setTriggerType", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_trigger_type));
	boost::python::def("triggerActivated", static_cast<bool(*)(const object &)>(&trigger_activated));
	boost::python::def("triggerAttachedVehicle", static_cast<object(*)(const object &)>(&trigger_attached_vehicle));
	boost::python::def("triggerText", static_cast<sqf_return_string(*)(const object &)>(&trigger_text));
	boost::python::def("triggerTimeoutCurrent", static_cast<float(*)(const object &)>(&trigger_timeout_current));
	boost::python::def("triggerType", static_cast<sqf_return_string(*)(const object &)>(&trigger_type));
	boost::python::def("createTrigger", static_cast<object(*)(sqf_string_const_ref,const vector3 &,bool)>(&create_trigger));
	boost::python::def("createTrigger", static_cast<object(*)(sqf_string_const_ref,const object &,bool)>(&create_trigger));
	boost::python::def("setTriggerActivation", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,bool)>(&set_trigger_activation));
	boost::python::def("setTriggerArea", static_cast<void(*)(const object &,float,float,float,bool,std::optional<float>)>(&set_trigger_area));
	boost::python::def("setTriggerStatements", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_trigger_statements));
	boost::python::def("setTriggerTimeout", static_cast<void(*)(const object &,float,float,float,bool)>(&set_trigger_timeout));
	boost::python::def("synchronizeTrigger", static_cast<void(*)(const object &,const std::vector<waypoint> &)>(&synchronize_trigger));
	boost::python::def("triggerAttachVehicle", static_cast<void(*)(const object &,const std::vector<object> &)>(&trigger_attach_vehicle));
	boost::python::def("setMusicEffect", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_music_effect));
	boost::python::def("setMusicEffect", static_cast<void(*)(const group &,int,sqf_string_const_ref)>(&set_music_effect));
	boost::python::def("setSoundEffect", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_sound_effect));
	boost::python::def("setSoundEffect", static_cast<void(*)(const group &,int,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_sound_effect));
	boost::python::def("setTitleEffect", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_title_effect));
	boost::python::def("setTitleEffect", static_cast<void(*)(const group &,int,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_title_effect));
	boost::python::class_<waypoint>("waypoint", boost::python::init<const group &,uint32_t>())
		.def(boost::python::init<const game_value &>())
		.def_readwrite("wgroup", &waypoint::wgroup)
		.def_readwrite("windex", &waypoint::windex)
		.def_readwrite("SpeedLookup", &waypoint::__speed_lookup)
		.def_readwrite("ShowLookup", &waypoint::__show_lookup)
		.def_readwrite("TypeLookup", &waypoint::__type_lookup)
		.def_readwrite("BehaviourLookup", &waypoint::__behaviour_lookup)
		.def_readwrite("CombatModeLookup", &waypoint::__combat_mode_lookup)
		.def_readwrite("FormationLookup", &waypoint::__formation_lookup)
		.def_readwrite("LoiterLookup", &waypoint::__loiter_lookup);
	boost::python::class_<rv_trigger_area>("rvTriggerArea", boost::python::init<const game_value &>())
		.def_readwrite("x", &rv_trigger_area::x)
		.def_readwrite("y", &rv_trigger_area::y)
		.def_readwrite("angle", &rv_trigger_area::angle)
		.def_readwrite("rectangle", &rv_trigger_area::rectangle)
		.def_readwrite("z", &rv_trigger_area::z);
	boost::python::class_<rv_trigger_timeout>("rvTriggerTimeout", boost::python::init<const game_value &>())
		.def_readwrite("timeMin", &rv_trigger_timeout::time_min)
		.def_readwrite("timeMid", &rv_trigger_timeout::time_mid)
		.def_readwrite("timeMax", &rv_trigger_timeout::time_max)
		.def_readwrite("interruptable", &rv_trigger_timeout::interruptable);
}

BOOST_PYTHON_MODULE(__sqf_world)
{
	boost::python::def("worldSize", static_cast<float(*)()>(&world_size));
	boost::python::def("worldName", static_cast<sqf_return_string(*)()>(&world_name));
	boost::python::def("windStr", static_cast<float(*)()>(&wind_str));
	boost::python::def("windDir", static_cast<float(*)()>(&wind_dir));
	boost::python::def("setWind", static_cast<void(*)(float,float)>(&set_wind));
	boost::python::def("setWind", static_cast<void(*)(float,float,bool)>(&set_wind));
	boost::python::def("wind", static_cast<vector3(*)()>(&wind));
	boost::python::def("gusts", static_cast<float(*)()>(&gusts));
	boost::python::def("humidity", static_cast<float(*)()>(&humidity));
	boost::python::def("waves", static_cast<float(*)()>(&waves));
	boost::python::def("lightnings", static_cast<float(*)()>(&lightnings));
	boost::python::def("moonIntensity", static_cast<float(*)()>(&moon_intensity));
	boost::python::def("nextWeatherChange", static_cast<float(*)()>(&next_weather_change));
	boost::python::def("overcast", static_cast<float(*)()>(&overcast));
	boost::python::def("overcastForecast", static_cast<float(*)()>(&overcast_forecast));
	boost::python::def("rain", static_cast<float(*)()>(&rain));
	boost::python::def("rainbow", static_cast<float(*)()>(&rainbow));
	boost::python::def("sunOrMoon", static_cast<float(*)()>(&sun_or_moon));
	boost::python::def("fog", static_cast<bool(*)()>(&fog));
	boost::python::def("fogForecast", static_cast<float(*)()>(&fog_forecast));
	boost::python::def("time", static_cast<float(*)()>(&time));
	boost::python::def("timeMultiplier", static_cast<float(*)()>(&time_multiplier));
	boost::python::def("dateToNumber", static_cast<float(*)(int,int,int,int,float)>(&date_to_number));
	boost::python::def("numberToDate", static_cast<rv_date(*)(int,float)>(&number_to_date));
	boost::python::def("date", static_cast<rv_date(*)()>(&date));
	boost::python::def("missionStart", static_cast<rv_date(*)()>(&mission_start));
	boost::python::def("fogParams", static_cast<rv_fog_parameters(*)()>(&fog_params));
	boost::python::def("getObjectViewDistance", static_cast<rv_rendering_distances(*)()>(&get_object_view_distance));
	boost::python::def("setDate", static_cast<void(*)(int,int,int,int,float)>(&set_date));
	boost::python::def("entities", static_cast<std::vector<object>(*)(sqf_string_list_const_ref,sqf_string_list_const_ref,bool,bool)>(&entities));
	boost::python::def("setHorizonParallaxCoef", static_cast<void(*)(float)>(&set_horizon_parallax_coef));
	boost::python::def("setDetailMapBlendPars", static_cast<void(*)(float,float)>(&set_detail_map_blend_pars));
	boost::python::def("simulCloudDensity", static_cast<void(*)(const vector3 &)>(&simul_cloud_density));
	boost::python::def("simulCloudOcclusion", static_cast<void(*)(const vector3 &,const vector3 &)>(&simul_cloud_occlusion));
	boost::python::def("simulInClouds", static_cast<bool(*)(const vector3 &)>(&simul_in_clouds));
	boost::python::def("setFog", static_cast<void(*)(float &,float &,std::optional<float>,std::optional<float>)>(&set_fog));
	boost::python::def("setGusts", static_cast<void(*)(float,float)>(&set_gusts));
	boost::python::def("setRain", static_cast<void(*)(float,float)>(&set_rain));
	boost::python::def("setRainbow", static_cast<void(*)(float,float)>(&set_rainbow));
	boost::python::def("setOvercast", static_cast<void(*)(float,float)>(&set_overcast));
	boost::python::def("setWindDir", static_cast<void(*)(float,float)>(&set_wind_dir));
	boost::python::def("setWindForce", static_cast<void(*)(float,float)>(&set_wind_force));
	boost::python::def("setWindStr", static_cast<void(*)(float,float)>(&set_wind_str));
	boost::python::def("setAccTime", static_cast<void(*)(float)>(&set_acc_time));
	boost::python::def("setObjectViewDistance", static_cast<void(*)(float)>(&set_object_view_distance));
	boost::python::def("setObjectViewDistance", static_cast<void(*)(float,float)>(&set_object_view_distance));
	boost::python::def("setShadowDistance", static_cast<void(*)(float)>(&set_shadow_distance));
	boost::python::def("setSimulWeatherLayers", static_cast<void(*)(float)>(&set_simul_weather_layers));
	boost::python::def("setTerrainGrid", static_cast<void(*)(float)>(&set_terrain_grid));
	boost::python::def("setTimeMultiplier", static_cast<void(*)(float)>(&set_time_multiplier));
	boost::python::def("setViewDistance", static_cast<void(*)(float)>(&set_view_distance));
	boost::python::def("skipTime", static_cast<void(*)(float)>(&skip_time));
	boost::python::def("enableEnvironment", static_cast<void(*)(bool,bool)>(&enable_environment));
	boost::python::def("enableSatNormalOnDetail", static_cast<void(*)(bool)>(&enable_sat_normal_on_detail));
	boost::python::def("accTime", static_cast<float(*)()>(&acc_time));
	boost::python::def("daytime", static_cast<float(*)()>(&daytime));
	boost::python::def("forceWeatherChange", static_cast<void(*)()>(&force_weather_change));
	boost::python::def("getShadowDistance", static_cast<float(*)()>(&get_shadow_distance));
	boost::python::def("initAmbientLife", static_cast<void(*)()>(&init_ambient_life));
	boost::python::def("simulWeatherSync", static_cast<void(*)()>(&simul_weather_sync));
	boost::python::def("environmentEnabled", static_cast<std::pair<bool , bool>(*)()>(&environment_enabled));
	boost::python::def("moonPhase", static_cast<float(*)(int,int,int,int,float)>(&moon_phase));
	boost::python::def("setWaves", static_cast<void(*)(float,float)>(&set_waves));
	boost::python::def("setFog", static_cast<void(*)(float,float)>(&set_fog));
	boost::python::def("setFog", static_cast<void(*)(float,float,float,float)>(&set_fog));
	boost::python::def("getTerrainGrid", static_cast<int(*)()>(&get_terrain_grid));
	boost::python::def("viewDistance", static_cast<float(*)()>(&view_distance));
	boost::python::def("enableCaustics", static_cast<void(*)(bool)>(&enable_caustics));
	boost::python::def("setLightnings", static_cast<void(*)(float,float)>(&set_lightnings));
	boost::python::def("nearObjectsReady", static_cast<bool(*)(std::variant<std::reference_wrapper<const object>, std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3> >,float)>(&near_objects_ready));
	boost::python::def("nearRoads", static_cast<std::vector<object>(*)(std::variant<std::reference_wrapper<const object>, std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3> >,float)>(&near_roads));
	boost::python::def("nearSupplies", static_cast<std::vector<object>(*)(std::variant<std::reference_wrapper<const object>, std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3> >,float)>(&near_supplies));
	boost::python::def("nearTargets", static_cast<std::vector<rv_target>(*)(const object &,float)>(&near_targets));
	boost::python::def("nearestObject", static_cast<object(*)(const vector3 &)>(&nearest_object));
	boost::python::def("nearestObject", static_cast<object(*)(const vector3 &,sqf_string_const_ref)>(&nearest_object));
	boost::python::def("nearestObject", static_cast<object(*)(const object &,sqf_string_const_ref)>(&nearest_object));
	boost::python::def("nearestObject", static_cast<object(*)(const vector3 &,float)>(&nearest_object));
	boost::python::def("nearestObjects", static_cast<std::vector<object>(*)(const vector3 &,sqf_string_list_const_ref,float)>(&nearest_objects));
	boost::python::def("nearestObjects", static_cast<std::vector<object>(*)(const object &,sqf_string_list_const_ref,float)>(&nearest_objects));
	boost::python::def("nearestTerrainObjects", static_cast<std::vector<object>(*)(const vector3 &,sqf_string_list_const_ref,float)>(&nearest_terrain_objects));
	boost::python::def("nearestTerrainObjects", static_cast<std::vector<object>(*)(const object &,sqf_string_list_const_ref,float)>(&nearest_terrain_objects));
	boost::python::def("unitsBelowHeight", static_cast<std::vector<object>(*)(const group &,float)>(&units_below_height));
	boost::python::def("unitsBelowHeight", static_cast<std::vector<object>(*)(const std::vector<object> &,float)>(&units_below_height));
	boost::python::def("surfaceIsWater", static_cast<bool(*)(const vector3 &)>(&surface_is_water));
	boost::python::def("surfaceNormal", static_cast<vector3(*)(const vector3 &)>(&surface_normal));
	boost::python::def("surfaceType", static_cast<sqf_return_string(*)(const vector3 &)>(&surface_type));
	boost::python::def("selectBestPlaces", static_cast<std::vector<rv_best_place>(*)(const object &,float,sqf_string_const_ref,float,float)>(&select_best_places));
	boost::python::def("selectBestPlaces", static_cast<std::vector<rv_best_place>(*)(const vector3 &,float,sqf_string_const_ref,float,float)>(&select_best_places));
	boost::python::def("isOnRoad", static_cast<bool(*)(const object &)>(&is_on_road));
	boost::python::def("isOnRoad", static_cast<bool(*)(const vector3 &)>(&is_on_road));
	boost::python::def("getFriend", static_cast<float(*)(const side &,const side &)>(&get_friend));
	boost::python::def("setFriend", static_cast<void(*)(const side &,const side &,float)>(&set_friend));
	boost::python::def("nearObjects", static_cast<std::vector<object>(*)(const vector3 &,float)>(&near_objects));
	boost::python::def("nearObjects", static_cast<std::vector<object>(*)(const object &,float)>(&near_objects));
	boost::python::def("nearObjects", static_cast<std::vector<object>(*)(const vector3 &,sqf_string_const_ref,float)>(&near_objects));
	boost::python::def("nearObjects", static_cast<std::vector<object>(*)(const object &,sqf_string_const_ref,float)>(&near_objects));
	boost::python::def("nearestBuilding", static_cast<object(*)(const object &)>(&nearest_building));
	boost::python::def("nearestBuilding", static_cast<object(*)(const vector3 &)>(&nearest_building));
	boost::python::def("entities", static_cast<std::vector<object>(*)(sqf_string_const_ref)>(&entities));
	boost::python::def("units", static_cast<std::vector<object>(*)(const object &)>(&units));
	boost::python::def("preloadObject", static_cast<bool(*)(float,const object &)>(&preload_object));
	boost::python::def("preloadObject", static_cast<bool(*)(float,sqf_string_const_ref)>(&preload_object));
	boost::python::def("roadAt", static_cast<object(*)(const object &)>(&road_at));
	boost::python::def("roadAt", static_cast<object(*)(const vector3 &)>(&road_at));
	boost::python::def("getRemoteSensorsDisabled", static_cast<bool(*)()>(&get_remote_sensors_disabled));
	boost::python::def("disableRemoteSensors", static_cast<void(*)(bool)>(&disable_remote_sensors));
	boost::python::def("underwater", static_cast<bool(*)(const object &)>(&underwater));
	boost::python::def("vehicles", static_cast<std::vector<object>(*)()>(&vehicles));
	boost::python::def("setLocalWindParams", static_cast<void(*)(float,float)>(&set_local_wind_params));
	boost::python::def("getelevationoffset", static_cast<float(*)()>(&getelevationoffset));
	boost::python::class_<rv_date>("rvDate", boost::python::init<float,float,float,float,float>())
		.def("fromVector", static_cast<rv_date(*)(const std::vector<float> &)>(&rv_date::from_vector)).staticmethod("fromVector")
		.def_readwrite("year", &rv_date::year)
		.def_readwrite("month", &rv_date::month)
		.def_readwrite("day", &rv_date::day)
		.def_readwrite("hour", &rv_date::hour)
		.def_readwrite("minute", &rv_date::minute);
	boost::python::class_<rv_fog_parameters>("rvFogParameters", boost::python::init<float,float,float>())
		.def("fromVector", static_cast<rv_fog_parameters(*)(const std::vector<float> &)>(&rv_fog_parameters::from_vector)).staticmethod("fromVector")
		.def_readwrite("value", &rv_fog_parameters::value)
		.def_readwrite("decay", &rv_fog_parameters::decay)
		.def_readwrite("base", &rv_fog_parameters::base);
	boost::python::class_<rv_rendering_distances>("rvRenderingDistances", boost::python::init<float,float>())
		.def("fromVector", static_cast<rv_rendering_distances(*)(const std::vector<float> &)>(&rv_rendering_distances::from_vector)).staticmethod("fromVector")
		.def_readwrite("objectDistance", &rv_rendering_distances::object_distance)
		.def_readwrite("shadowDistance", &rv_rendering_distances::shadow_distance);
}

inline void addSQFModules() {
	PyImport_AppendInittab("__sqf_ai", &PyInit___sqf_ai);
	PyImport_AppendInittab("__sqf_camera", &PyInit___sqf_camera);
	PyImport_AppendInittab("__sqf_cargo", &PyInit___sqf_cargo);
	PyImport_AppendInittab("__sqf_chat", &PyInit___sqf_chat);
	PyImport_AppendInittab("__sqf_config", &PyInit___sqf_config);
	PyImport_AppendInittab("__sqf_core", &PyInit___sqf_core);
	PyImport_AppendInittab("__sqf_ctrl", &PyInit___sqf_ctrl);
	PyImport_AppendInittab("__sqf_curator", &PyInit___sqf_curator);
	PyImport_AppendInittab("__sqf_debug", &PyInit___sqf_debug);
	PyImport_AppendInittab("__sqf_eden", &PyInit___sqf_eden);
	PyImport_AppendInittab("__sqf_group", &PyInit___sqf_group);
	PyImport_AppendInittab("__sqf_hc", &PyInit___sqf_hc);
	PyImport_AppendInittab("__sqf_intersects", &PyInit___sqf_intersects);
	PyImport_AppendInittab("__sqf_inventory", &PyInit___sqf_inventory);
	PyImport_AppendInittab("__sqf_marker", &PyInit___sqf_marker);
	PyImport_AppendInittab("__sqf_misc", &PyInit___sqf_misc);
	PyImport_AppendInittab("__sqf_multiplayer", &PyInit___sqf_multiplayer);
	PyImport_AppendInittab("__sqf_position", &PyInit___sqf_position);
	PyImport_AppendInittab("__sqf_rotorlib", &PyInit___sqf_rotorlib);
	PyImport_AppendInittab("__sqf_sound", &PyInit___sqf_sound);
	PyImport_AppendInittab("__sqf_tasks", &PyInit___sqf_tasks);
	PyImport_AppendInittab("__sqf_uncategorized", &PyInit___sqf_uncategorized);
	PyImport_AppendInittab("__sqf_units", &PyInit___sqf_units);
	PyImport_AppendInittab("__sqf_vehicles", &PyInit___sqf_vehicles);
	PyImport_AppendInittab("__sqf_waypoint", &PyInit___sqf_waypoint);
	PyImport_AppendInittab("__sqf_world", &PyInit___sqf_world);
}
