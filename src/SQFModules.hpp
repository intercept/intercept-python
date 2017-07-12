// Created automatically from python script at 12.07.2017 16:05:34

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
	boost::python::def("allowGetIn", &allow_get_in);
	boost::python::def("assignAsCommander", &assign_as_commander);
	boost::python::def("assignAsDriver", &assign_as_driver);
	boost::python::def("assignAsGunner", &assign_as_gunner);
	boost::python::def("assignAsTurret", static_cast<void(*)(const object &,const object &,const std::vector<float> &)>(&assign_as_turret));
	boost::python::def("assignAsCargo", &assign_as_cargo);
	boost::python::def("assignAsCargoIndex", &assign_as_cargo_index);
	boost::python::def("kbAddTopic", &kb_add_topic);
	boost::python::def("kbReact", &kb_react);
	boost::python::def("kbTell", &kb_tell);
	boost::python::def("kbWasSaid", &kb_was_said);
	boost::python::def("kbAddDatabase", &kb_add_database);
	boost::python::def("kbAddDatabaseTargets", &kb_add_database_targets);
	boost::python::def("kbHasTopic", &kb_has_topic);
	boost::python::def("kbRemoveTopic", &kb_remove_topic);
	boost::python::def("setSkill", static_cast<void(*)(const object &,float)>(&set_skill));
	boost::python::def("setSkill", static_cast<void(*)(const object &,set_skill_type,float)>(&set_skill));
	boost::python::def("sendSimpleCommand", &send_simple_command);
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
	boost::python::def("enableAttack", &enable_attack);
	boost::python::def("combatMode", static_cast<sqf_return_string(*)(const object &)>(&combat_mode));
	boost::python::def("formation", static_cast<sqf_return_string(*)(const object &)>(&formation));
	boost::python::def("formation", static_cast<sqf_return_string(*)(const group &)>(&formation));
	boost::python::def("formationMembers", &formation_members);
	boost::python::def("formationPosition", &formation_position);
	boost::python::def("behaviour", &behaviour);
	boost::python::def("checkAifeature", &check_aifeature);
	boost::python::def("fleeing", &fleeing);
	boost::python::def("skill", static_cast<float(*)(const object &)>(&skill));
	boost::python::def("landResult", &land_result);
	boost::python::def("moveToCompleted", &move_to_completed);
	boost::python::def("moveToFailed", &move_to_failed);
	boost::python::def("disableAi", &disable_ai);
	boost::python::def("enableAi", &enable_ai);
	boost::python::def("enableAifeature", &enable_aifeature);
	boost::python::def("flyInHeight", &fly_in_height);
	boost::python::def("knowsAbout", static_cast<float(*)(const object &,const object &)>(&knows_about));
	boost::python::def("knowsAbout", static_cast<float(*)(const group &,const object &)>(&knows_about));
	boost::python::def("knowsAbout", static_cast<float(*)(const side &,const object &)>(&knows_about));
	boost::python::def("land", &land);
	boost::python::def("landAt", static_cast<void(*)(const object &,float)>(&land_at));
	boost::python::def("landAt", static_cast<void(*)(const object &,const object &)>(&land_at));
	boost::python::def("skill", static_cast<float(*)(const object &,sqf_string_const_ref)>(&skill));
	boost::python::def("skillFinal", &skill_final);
	boost::python::def("stop", &stop);
	boost::python::def("suppressFor", &suppress_for);
	boost::python::def("moveTo", &move_to);
	boost::python::def("expectedDestination", &expected_destination);
	boost::python::def("useAiOperMapObstructionTest", &use_ai_oper_map_obstruction_test);
	boost::python::def("useAiSteeringComponent", &use_ai_steering_component);
	boost::python::def("commandSuppressiveFire", static_cast<void(*)(const object &,const object &)>(&command_suppressive_fire));
	boost::python::def("commandSuppressiveFire", static_cast<void(*)(const object &,const vector3 &)>(&command_suppressive_fire));
	boost::python::def("setBehaviour", &set_behaviour);
	boost::python::def("setCombatMode", static_cast<void(*)(std::variant<group, object>,sqf_string_const_ref)>(&set_combat_mode));
	boost::python::def("setFormation", static_cast<void(*)(std::variant<group, object>,sqf_string_const_ref)>(&set_formation));
	boost::python::def("setConvoySeperation", &set_convoy_seperation);
	boost::python::def("setDestination", &set_destination);
	boost::python::def("setDriveOnPath", &set_drive_on_path);
	boost::python::def("setFormDir", static_cast<void(*)(std::variant<group, object>,float)>(&set_form_dir));
	boost::python::def("enableGunLights", static_cast<void(*)(const object &,bool &)>(&enable_gun_lights));
	boost::python::def("enableGunLights", static_cast<void(*)(const group &,bool &)>(&enable_gun_lights));
	boost::python::def("enableIrLasers", static_cast<void(*)(const object &,bool &)>(&enable_ir_lasers));
	boost::python::def("enableIrLasers", static_cast<void(*)(const group &,bool &)>(&enable_ir_lasers));
	boost::python::def("enablePersonTurret", &enable_person_turret);
	boost::python::def("findCover", &find_cover);
	boost::python::def("flyInHeightAsl", &fly_in_height_asl);
	boost::python::def("forceFollowRoad", &force_follow_road);
	boost::python::def("forceWeaponFire", &force_weapon_fire);
	boost::python::def("glanceAt", &glance_at);
	boost::python::def("orderGetIn", &order_get_in);
	boost::python::def("setUnloadInCombat", &set_unload_in_combat);
	boost::python::def("swimInDepth", &swim_in_depth);
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
	boost::python::def("addCamShake", &add_cam_shake);
	boost::python::def("resetCamShake", &reset_cam_shake);
	boost::python::def("enableCamShake", &enable_cam_shake);
	boost::python::def("camCommitted", &cam_committed);
	boost::python::def("camDestroy", &cam_destroy);
	boost::python::def("camPreloaded", &cam_preloaded);
	boost::python::def("camTarget", &cam_target);
	boost::python::def("camUseNvg", &cam_use_nvg);
	boost::python::def("cameraEffectEnableHud", &camera_effect_enable_hud);
	boost::python::def("cameraInterest", &camera_interest);
	boost::python::def("camConstuctionSetParams", &cam_constuction_set_params);
	boost::python::def("camCreate", &cam_create);
	boost::python::def("cameraEffect", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&camera_effect));
	boost::python::def("cameraEffect", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&camera_effect));
	boost::python::def("camPrepareFocus", &cam_prepare_focus);
	boost::python::def("camPrepareFovRange", &cam_prepare_fov_range);
	boost::python::def("camPreparePos", &cam_prepare_pos);
	boost::python::def("camPrepareRelPos", &cam_prepare_rel_pos);
	boost::python::def("camPrepareTarget", static_cast<void(*)(const object &,const object &)>(&cam_prepare_target));
	boost::python::def("camPrepareTarget", static_cast<void(*)(const object &,const vector3 &)>(&cam_prepare_target));
	boost::python::def("camSetFocus", &cam_set_focus);
	boost::python::def("camSetFovRange", &cam_set_fov_range);
	boost::python::def("camSetPos", &cam_set_pos);
	boost::python::def("camSetRelativePos", &cam_set_relative_pos);
	boost::python::def("camSetTarget", static_cast<void(*)(const object &,const object &)>(&cam_set_target));
	boost::python::def("camSetTarget", static_cast<void(*)(const object &,const vector3 &)>(&cam_set_target));
	boost::python::def("camCommand", &cam_command);
	boost::python::def("camCommit", &cam_commit);
	boost::python::def("camCommitPrepared", &cam_commit_prepared);
	boost::python::def("camPreload", &cam_preload);
	boost::python::def("camPrepareBank", &cam_prepare_bank);
	boost::python::def("camPrepareDir", &cam_prepare_dir);
	boost::python::def("camPrepareDive", &cam_prepare_dive);
	boost::python::def("camPrepareFov", &cam_prepare_fov);
	boost::python::def("camSetBank", &cam_set_bank);
	boost::python::def("camSetDive", &cam_set_dive);
	boost::python::def("camSetFov", &cam_set_fov);
	boost::python::def("setCamUseTi", &set_cam_use_ti);
	boost::python::def("setAperture", &set_aperture);
	boost::python::def("setApertureNew", &set_aperture_new);
	boost::python::def("setCamShakeDefParams", &set_cam_shake_def_params);
	boost::python::def("setCamShakeParams", &set_cam_shake_params);
	boost::python::def("preloadCamera", &preload_camera);
	boost::python::def("setDefaultCamera", &set_default_camera);
	boost::python::def("getCameraViewDirection", &get_camera_view_direction);
	boost::python::def("switchCamera", static_cast<void(*)(const object &,sqf_string_const_ref)>(&switch_camera));
	boost::python::def("setCameraInterest", &set_camera_interest);
	boost::python::def("cameraView", &camera_view);
	boost::python::def("ppEffectCreate", static_cast<float(*)(sqf_string_const_ref,const float &)>(&pp_effect_create));
	boost::python::def("ppEffectCreate", static_cast<std::vector<float>(*)(const std::vector<rv_pp_effect> &)>(&pp_effect_create));
	boost::python::def("ppEffectCommitted", static_cast<bool(*)(sqf_string_const_ref)>(&pp_effect_committed));
	boost::python::def("ppEffectCommitted", static_cast<bool(*)(float)>(&pp_effect_committed));
	boost::python::def("ppEffectDestroy", static_cast<void(*)(float)>(&pp_effect_destroy));
	boost::python::def("ppEffectEnabled", &pp_effect_enabled);
	boost::python::def("ppEffectCommit", static_cast<void(*)(float,sqf_string_const_ref)>(&pp_effect_commit));
	boost::python::def("ppEffectEnable", static_cast<void(*)(bool,sqf_string_const_ref)>(&pp_effect_enable));
	boost::python::def("ppEffectEnable", static_cast<void(*)(float,bool)>(&pp_effect_enable));
	boost::python::def("ppEffectForceInNvg", &pp_effect_force_in_nvg);
	boost::python::def("ppEffectDestroy", static_cast<void(*)(std::vector<float>)>(&pp_effect_destroy));
	boost::python::def("ppEffectAdjust", &pp_effect_adjust);
	boost::python::def("ppEffectCommit", static_cast<void(*)(std::variant<std::reference_wrapper<const std::vector<int> >, std::reference_wrapper<int> >,const float &)>(&pp_effect_commit));
	boost::python::def("ppEffectEnable", static_cast<void(*)(const std::vector<int> &,bool)>(&pp_effect_enable));
	boost::python::def("getPilotCameraDirection", &get_pilot_camera_direction);
	boost::python::def("getPilotCameraPosition", &get_pilot_camera_position);
	boost::python::def("getPilotCameraRotation", &get_pilot_camera_rotation);
	boost::python::def("getPilotCameraTarget", &get_pilot_camera_target);
	boost::python::def("hasPilotCamera", &has_pilot_camera);
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
	boost::python::def("setVehicleCargo", &set_vehicle_cargo);
	boost::python::def("assignedCargo", &assigned_cargo);
	boost::python::def("getVehicleCargo", &get_vehicle_cargo);
	boost::python::def("isVehicleCargo", &is_vehicle_cargo);
	boost::python::def("vehicleCargoEnabled", &vehicle_cargo_enabled);
	boost::python::def("canVehicleCargo", &can_vehicle_cargo);
	boost::python::def("enableVehicleCargo", &enable_vehicle_cargo);
	boost::python::def("canSlingLoad", &can_sling_load);
	boost::python::def("slingLoadAssistantShown", &sling_load_assistant_shown);
	boost::python::def("setSlingLoad", &set_sling_load);
	boost::python::def("getSlingLoad", &get_sling_load);
	boost::python::def("ropeAttachTo", &rope_attach_to);
	boost::python::def("ropeDetach", &rope_detach);
	boost::python::def("ropeAttachEnabled", &rope_attach_enabled);
	boost::python::def("ropeAttachedTo", &rope_attached_to);
	boost::python::def("ropeDestroy", &rope_destroy);
	boost::python::def("ropeLength", &rope_length);
	boost::python::def("ropeUnwound", &rope_unwound);
	boost::python::def("enableRopeAttach", &enable_rope_attach);
	boost::python::def("ropeAttachedObjects", &rope_attached_objects);
	boost::python::def("ropes", &ropes);
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
	boost::python::def("ropeCut", &rope_cut);
	boost::python::def("ropeEndPosition", &rope_end_position);
	boost::python::def("ropeUnwind", static_cast<void(*)(const object &,float,float)>(&rope_unwind));
	boost::python::def("ropeUnwind", static_cast<void(*)(const object &,float,float,bool)>(&rope_unwind));
	boost::python::def("lightAttachObject", &light_attach_object);
	boost::python::def("lightDetachObject", &light_detach_object);
	boost::python::def("attachedObjects", &attached_objects);
	boost::python::def("attachedTo", &attached_to);
	boost::python::def("attachTo", static_cast<void(*)(const object &,const object &,const vector3 &,sqf_string_const_ref)>(&attach_to));
	boost::python::def("attachTo", static_cast<void(*)(const object &,const object &,const vector3 &)>(&attach_to));
	boost::python::def("detach", &detach);
	boost::python::def("getCargoIndex", &get_cargo_index);
}

BOOST_PYTHON_MODULE(__sqf_chat)
{
	boost::python::def("sideChat", &side_chat);
	boost::python::def("globalChat", &global_chat);
	boost::python::def("groupChat", &group_chat);
	boost::python::def("vehicleChat", &vehicle_chat);
	boost::python::def("commandChat", &command_chat);
	boost::python::def("systemChat", &system_chat);
	boost::python::def("customChat", &custom_chat);
	boost::python::def("shownChat", &shown_chat);
	boost::python::def("showChat", &show_chat);
	boost::python::def("enableChannel", static_cast<void(*)(float,bool)>(&enable_channel));
	boost::python::def("radioChannelSetCallSign", &radio_channel_set_call_sign);
	boost::python::def("radioChannelSetLabel", &radio_channel_set_label);
	boost::python::def("radioChannelCreate", static_cast<float(*)(const rv_color &,sqf_string_const_ref,sqf_string_const_ref,const std::vector<object> &)>(&radio_channel_create));
	boost::python::def("radioChannelCreate", static_cast<float(*)(const rv_color &,sqf_string_const_ref,sqf_string_const_ref,const std::vector<object> &,bool)>(&radio_channel_create));
	boost::python::def("currentChannel", &current_channel);
	boost::python::def("channelEnabled", &channel_enabled);
	boost::python::def("getPlayerChannel", &get_player_channel);
	boost::python::def("setCurrentChannel", &set_current_channel);
	boost::python::def("radioChannelAdd", &radio_channel_add);
	boost::python::def("radioChannelRemove", &radio_channel_remove);
	boost::python::def("clearRadio", &clear_radio);
	boost::python::def("enableRadio", &enable_radio);
	boost::python::def("globalRadio", &global_radio);
	boost::python::def("setRadioMsg", &set_radio_msg);
	boost::python::def("vehicleRadio", &vehicle_radio);
	boost::python::def("customRadio", &custom_radio);
	boost::python::def("sideradio", static_cast<void(*)(const object &,sqf_string_const_ref)>(&sideradio));
	boost::python::def("sideradio", static_cast<void(*)(const side &,sqf_string_const_ref,sqf_string_const_ref)>(&sideradio));
	boost::python::def("enableChannel", static_cast<void(*)(int,bool,bool)>(&enable_channel));
}

BOOST_PYTHON_MODULE(__sqf_config)
{
	boost::python::def("configHierarchy", &config_hierarchy);
	boost::python::def("configName", &config_name);
	boost::python::def("configProperties", &config_properties);
	boost::python::def("configSourceMod", &config_source_mod);
	boost::python::def("configSourceModList", &config_source_mod_list);
	boost::python::def("count", &count);
	boost::python::def("getMissionConfig", &get_mission_config);
	boost::python::def("getNumber", &get_number);
	boost::python::def("getText", &get_text);
	boost::python::def("inheritsFrom", &inherits_from);
	boost::python::def("isArray", &is_array);
	boost::python::def("isClass", &is_class);
	boost::python::def("isNull", static_cast<bool(*)(const config &)>(&is_null));
	boost::python::def("isNumber", &is_number);
	boost::python::def("isText", &is_text);
	boost::python::def("configClasses", &config_classes);
	boost::python::def("select", static_cast<config(*)(const config &,float)>(&select));
	boost::python::def("campaignConfigFile", &campaign_config_file);
	boost::python::def("configFile", &config_file);
	boost::python::def("configNull", &config_null);
	boost::python::def("missionConfigFile", &mission_config_file);
	boost::python::def("getArray", &get_array);
	boost::python::def("getMissionConfigValue", static_cast<game_value(*)(sqf_string_const_ref)>(&get_mission_config_value));
	boost::python::def("getMissionConfigValue", static_cast<game_value(*)(sqf_string_const_ref,game_value)>(&get_mission_config_value));
	boost::python::def("isKindOf", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&is_kind_of));
	boost::python::def("isKindOf", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref)>(&is_kind_of));
	boost::python::def("isKindOf", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref,const config &)>(&is_kind_of));
	boost::python::def("configSourceAddonList", &config_source_addon_list);
	boost::python::def("modParams", &mod_params);
	boost::python::def("typeOf", &type_of);
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
	boost::python::def("isNilCode", &is_nil_code);
	boost::python::def("compile", &compile);
	boost::python::def("compileFinal", &compile_final);
	boost::python::def("isNil", &is_nil);
	boost::python::def("preprocessFile", &preprocess_file);
	boost::python::def("preprocessFileLineNumbers", &preprocess_file_line_numbers);
	boost::python::def("loadFile", &load_file);
	boost::python::def("parseNumber", static_cast<float(*)(sqf_string_const_ref)>(&parse_number));
	boost::python::def("parseNumber", static_cast<float(*)(bool)>(&parse_number));
	boost::python::def("parseText", &parse_text);
	boost::python::def("parseSimpleArray", &parse_simple_array);
	boost::python::def("select", static_cast<game_value(*)(game_value,const code &)>(&select));
	boost::python::def("selectMax", &select_max);
	boost::python::def("selectMin", &select_min);
	boost::python::def("pushBackUnique", &push_back_unique);
	boost::python::def("random", &random);
	boost::python::def("apply", &apply);
	boost::python::def("canSuspend", &can_suspend);
	boost::python::def("isEqualTo", &is_equal_to);
	boost::python::def("linearConversion", static_cast<float(*)(float,float,float,float,float)>(&linear_conversion));
	boost::python::def("linearConversion", static_cast<float(*)(float,float,float,float,float,bool)>(&linear_conversion));
	boost::python::def("execVm", static_cast<script(*)(sqf_string_const_ref)>(&exec_vm));
	boost::python::def("scriptDone", &script_done);
	boost::python::def("debugFsm", &debug_fsm);
	boost::python::def("uisleep", &uisleep);
	boost::python::def("toLower", &to_lower);
	boost::python::def("toUpper", &to_upper);
	boost::python::def("sleep", &sleep);
	boost::python::def("finite", &finite);
	boost::python::def("execFsm", static_cast<float(*)(sqf_string_const_ref)>(&exec_fsm));
	boost::python::def("saveProfileNamespace", &save_profile_namespace);
	boost::python::def("copyFromClipboard", &copy_from_clipboard);
	boost::python::def("copyToClipboard", &copy_to_clipboard);
	boost::python::def("completedFsm", &completed_fsm);
	boost::python::def("getFsmVariable", &get_fsm_variable);
	boost::python::def("setFsmVariable", static_cast<void(*)(float,sqf_string_const_ref,game_value)>(&set_fsm_variable));
	boost::python::def("setFsmVariable", static_cast<void(*)(int,sqf_string_const_ref,const game_value &)>(&set_fsm_variable));
	boost::python::def("execFsm", static_cast<int(*)(const game_value &,sqf_string_const_ref)>(&exec_fsm));
	boost::python::def("execVm", static_cast<script(*)(const game_value &,sqf_string_const_ref)>(&exec_vm));
	boost::python::def("exec", &exec);
	boost::python::def("str", &str);
	boost::python::def("toFixed", &to_fixed);
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
	boost::python::def("scriptNull", &script_null);
	boost::python::def("uiNamespace", &ui_namespace);
	boost::python::def("taskNull", &task_null);
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const object &)>(&all_variables));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const team_member &)>(&all_variables));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(rv_namespace)>(&all_variables));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const task &)>(&all_variables));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const control &)>(&all_variables));
	boost::python::def("currentNamespace", &current_namespace);
	boost::python::def("missionName", &mission_name);
	boost::python::def("missionNamespace", &mission_namespace);
	boost::python::def("profileName", &profile_name);
	boost::python::def("parsingNamespace", &parsing_namespace);
	boost::python::def("profileNamespace", &profile_namespace);
	boost::python::def("profileNamesteam", &profile_namesteam);
	boost::python::def("Sqfassert", &__sqfassert);
	boost::python::def("objNull", &obj_null);
	boost::python::def("blufor", &blufor);
	boost::python::def("civilian", &civilian);
	boost::python::def("east", &east);
	boost::python::def("independent", &independent);
	boost::python::def("opfor", &opfor);
	boost::python::def("resistance", &resistance);
	boost::python::def("sideEnemy", &side_enemy);
	boost::python::def("sideFriendly", &side_friendly);
	boost::python::def("sideLogic", &side_logic);
	boost::python::def("sideUnknown", &side_unknown);
	boost::python::def("teamMemberNull", &team_member_null);
	boost::python::def("west", &west);
	boost::python::def("sideAmbientLife", &side_ambient_life);
	boost::python::def("sideEmpty", &side_empty);
	boost::python::def("lineBreak", &line_break);
	boost::python::def("onCommandModeChanged", static_cast<void(*)(const code &)>(&on_command_mode_changed));
	boost::python::def("onCommandModeChanged", static_cast<void(*)(sqf_string_const_ref)>(&on_command_mode_changed));
	boost::python::def("onDoubleClick", &on_double_click);
	boost::python::def("onMapSingleClick", &on_map_single_click);
	boost::python::def("onShowNewObject", &on_show_new_object);
	boost::python::def("addEventHandler", static_cast<float(*)(const object &,sqf_string_const_ref,const code &)>(&add_event_handler));
	boost::python::def("addEventHandler", static_cast<float(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&add_event_handler));
	boost::python::def("removeEventHandler", &remove_event_handler);
	boost::python::def("addMissionEventHandler", static_cast<float(*)(sqf_string_const_ref,const code &)>(&add_mission_event_handler));
	boost::python::def("addMissionEventHandler", static_cast<float(*)(sqf_string_const_ref,sqf_string_const_ref)>(&add_mission_event_handler));
	boost::python::def("removeAllMissionEventHandlers", &remove_all_mission_event_handlers);
	boost::python::def("removeAllEventHandlers", &remove_all_event_handlers);
	boost::python::def("removeAllMpeventHandlers", &remove_all_mpevent_handlers);
	boost::python::def("removeMissionEventHandler", &remove_mission_event_handler);
	boost::python::def("addMpEventHandler", static_cast<int(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&add_mp_event_handler));
	boost::python::def("addMpEventHandler", static_cast<int(*)(const object &,sqf_string_const_ref,const code &)>(&add_mp_event_handler));
	boost::python::def("removeMpEventHandler", &remove_mp_event_handler);
	boost::python::def("addPublicVariableEventhandler", static_cast<void(*)(sqf_string_const_ref,const code &)>(&add_public_variable_eventhandler));
	boost::python::def("addPublicVariableEventhandler", static_cast<void(*)(sqf_string_const_ref,const object &,const code &)>(&add_public_variable_eventhandler));
	boost::python::def("userInputDisabled", &user_input_disabled);
	boost::python::def("screenShot", &screen_shot);
	boost::python::def("cursorObject", &cursor_object);
	boost::python::def("cursorTarget", &cursor_target);
	boost::python::def("supportInfo", &support_info);
	boost::python::def("allMissionObjects", &all_mission_objects);
	boost::python::def("allCurators", &all_curators);
	boost::python::def("allDead", &all_dead);
	boost::python::def("allDeadmen", &all_deadmen);
	boost::python::def("allDisplays", &all_displays);
	boost::python::def("allGroups", &all_groups);
	boost::python::def("allMines", &all_mines);
	boost::python::def("allPlayers", &all_players);
	boost::python::def("allUnits", &all_units);
	boost::python::def("allUnitsUav", &all_units_uav);
	boost::python::def("allSimpleObjects", &all_simple_objects);
	boost::python::def("activatedAddons", &activated_addons);
	boost::python::def("image", &image);
	boost::python::def("isLocalized", &is_localized);
	boost::python::def("localize", &localize);
	boost::python::def("text", &text);
	boost::python::def("format", &format);
	boost::python::def("composeText", &compose_text);
	boost::python::def("endl", &endl);
	boost::python::def("verifySignature", &verify_signature);
	boost::python::def("scriptName", &script_name);
	boost::python::def("requiredVersion", &required_version);
	boost::python::def("saveVar", &save_var);
	boost::python::def("scopeName", &scope_name);
	boost::python::def("playableSlotsNumber", &playable_slots_number);
	boost::python::def("playersNumber", &players_number);
	boost::python::def("pi", &pi);
	boost::python::def("playableUnits", &playable_units);
	boost::python::def("player", &player);
	boost::python::def("playerRespawnTime", &player_respawn_time);
	boost::python::def("playerSide", &player_side);
	boost::python::def("switchableUnits", &switchable_units);
	boost::python::def("addSwitchableUnit", &add_switchable_unit);
	boost::python::def("createCenter", &create_center);
	boost::python::def("deleteCenter", &delete_center);
	boost::python::def("disableUserInput", &disable_user_input);
	boost::python::def("echo", &echo);
	boost::python::def("endMission", &end_mission);
	boost::python::def("estimatedTimeLeft", &estimated_time_left);
	boost::python::def("failMission", &fail_mission);
	boost::python::def("countEnemy", &count_enemy);
	boost::python::def("countFriendly", &count_friendly);
	boost::python::def("countType", &count_type);
	boost::python::def("countUnknown", &count_unknown);
	boost::python::def("getCursorObjectParams", &get_cursor_object_params);
}

BOOST_PYTHON_MODULE(__sqf_ctrl)
{
	boost::python::def("ctrlCreate", static_cast<control(*)(const display &,sqf_string_const_ref,int)>(&ctrl_create));
	boost::python::def("ctrlCreate", static_cast<control(*)(const display &,sqf_string_const_ref,int,const control &)>(&ctrl_create));
	boost::python::def("ctrlAutoScrollRewind", &ctrl_auto_scroll_rewind);
	boost::python::def("ctrlChecked", &ctrl_checked);
	boost::python::def("ctrlCommitted", &ctrl_committed);
	boost::python::def("ctrlDelete", &ctrl_delete);
	boost::python::def("ctrlEnabled", static_cast<bool(*)(const control &)>(&ctrl_enabled));
	boost::python::def("ctrlEnabled", static_cast<bool(*)(float)>(&ctrl_enabled));
	boost::python::def("ctrlHtmlloaded", &ctrl_htmlloaded);
	boost::python::def("ctrlMapAnimDone", &ctrl_map_anim_done);
	boost::python::def("ctrlShown", &ctrl_shown);
	boost::python::def("ctrlVisible", &ctrl_visible);
	boost::python::def("ctrlCommit", &ctrl_commit);
	boost::python::def("ctrlEnable", static_cast<void(*)(int,bool)>(&ctrl_enable));
	boost::python::def("ctrlEnable", static_cast<void(*)(const control &,bool)>(&ctrl_enable));
	boost::python::def("ctrlSetDisabledColor", &ctrl_set_disabled_color);
	boost::python::def("ctrlSetFade", &ctrl_set_fade);
	boost::python::def("ctrlSetFont", &ctrl_set_font);
	boost::python::def("ctrlSetFontH1", &ctrl_set_font_h1);
	boost::python::def("ctrlSetFontH1B", &ctrl_set_font_h1b);
	boost::python::def("ctrlSetFontH2", &ctrl_set_font_h2);
	boost::python::def("ctrlSetFontH2B", &ctrl_set_font_h2b);
	boost::python::def("ctrlSetFontH3", &ctrl_set_font_h3);
	boost::python::def("ctrlSetFontH3B", &ctrl_set_font_h3b);
	boost::python::def("ctrlSetFontH4", &ctrl_set_font_h4);
	boost::python::def("ctrlSetFontH4B", &ctrl_set_font_h4b);
	boost::python::def("ctrlSetFontH5", &ctrl_set_font_h5);
	boost::python::def("ctrlSetFontH5B", &ctrl_set_font_h5b);
	boost::python::def("ctrlSetFontH6", &ctrl_set_font_h6);
	boost::python::def("ctrlSetFontH6B", &ctrl_set_font_h6b);
	boost::python::def("ctrlSetFontHeight", &ctrl_set_font_height);
	boost::python::def("ctrlSetFontHeightH1", &ctrl_set_font_height_h1);
	boost::python::def("ctrlSetFontHeightH2", &ctrl_set_font_height_h2);
	boost::python::def("ctrlSetFontHeightH3", &ctrl_set_font_height_h3);
	boost::python::def("ctrlSetFontHeightH4", &ctrl_set_font_height_h4);
	boost::python::def("ctrlSetFontHeightH5", &ctrl_set_font_height_h5);
	boost::python::def("ctrlSetFontHeightH6", &ctrl_set_font_height_h6);
	boost::python::def("ctrlSetFontHeightSecondary", &ctrl_set_font_height_secondary);
	boost::python::def("ctrlSetFontP", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_font_p));
	boost::python::def("ctrlSetFontP", static_cast<void(*)(const control &,float)>(&ctrl_set_font_p));
	boost::python::def("ctrlSetFontPb", &ctrl_set_font_pb);
	boost::python::def("ctrlSetFontSecondary", &ctrl_set_font_secondary);
	boost::python::def("ctrlSetModel", &ctrl_set_model);
	boost::python::def("ctrlSetModelScale", &ctrl_set_model_scale);
	boost::python::def("ctrlSetScale", &ctrl_set_scale);
	boost::python::def("ctrlSetStructuredText", &ctrl_set_structured_text);
	boost::python::def("ctrlSetText", static_cast<void(*)(const control &,sqf_string_const_ref)>(&ctrl_set_text));
	boost::python::def("ctrlSetText", static_cast<void(*)(int,sqf_string_const_ref)>(&ctrl_set_text));
	boost::python::def("ctrlSetTextSecondary", &ctrl_set_text_secondary);
	boost::python::def("ctrlSetTooltip", &ctrl_set_tooltip);
	boost::python::def("ctrlShow", static_cast<void(*)(const control &,bool)>(&ctrl_show));
	boost::python::def("ctrlShow", static_cast<void(*)(int,bool)>(&ctrl_show));
	boost::python::def("ctrlSetForegroundColor", &ctrl_set_foreground_color);
	boost::python::def("ctrlSetModelDirAndUp", &ctrl_set_model_dir_and_up);
	boost::python::def("ctrlSetTextColor", &ctrl_set_text_color);
	boost::python::def("ctrlSetTooltipColorBox", &ctrl_set_tooltip_color_box);
	boost::python::def("ctrlSetTooltipColorShade", &ctrl_set_tooltip_color_shade);
	boost::python::def("ctrlSetTooltipColorText", &ctrl_set_tooltip_color_text);
	boost::python::def("ctrlActivate", &ctrl_activate);
	boost::python::def("ctrlMapAnimClear", &ctrl_map_anim_clear);
	boost::python::def("ctrlMapAnimCommit", &ctrl_map_anim_commit);
	boost::python::def("ctrlMapCursor", &ctrl_map_cursor);
	boost::python::def("ctrlRemoveAllEventHandlers", &ctrl_remove_all_event_handlers);
	boost::python::def("ctrlRemoveEventHandler", &ctrl_remove_event_handler);
	boost::python::def("ctrlSetActiveColor", &ctrl_set_active_color);
	boost::python::def("ctrlSetAutoScrollDelay", &ctrl_set_auto_scroll_delay);
	boost::python::def("ctrlSetAutoScrollRewind", &ctrl_set_auto_scroll_rewind);
	boost::python::def("ctrlSetAutoScrollSpeed", &ctrl_set_auto_scroll_speed);
	boost::python::def("ctrlSetBackgroundColor", &ctrl_set_background_color);
	boost::python::def("ctrlSetChecked", &ctrl_set_checked);
	boost::python::def("ctrlSetFocus", &ctrl_set_focus);
	boost::python::def("ctrlAutoScrollDelay", &ctrl_auto_scroll_delay);
	boost::python::def("ctrlAutoScrollSpeed", &ctrl_auto_scroll_speed);
	boost::python::def("ctrlFade", &ctrl_fade);
	boost::python::def("ctrlIdc", &ctrl_idc);
	boost::python::def("ctrlIdd", &ctrl_idd);
	boost::python::def("ctrlMapScale", &ctrl_map_scale);
	boost::python::def("ctrlModelScale", &ctrl_model_scale);
	boost::python::def("ctrlScale", &ctrl_scale);
	boost::python::def("ctrlTextHeight", &ctrl_text_height);
	boost::python::def("ctrlType", &ctrl_type);
	boost::python::def("ctrlClassName", &ctrl_class_name);
	boost::python::def("ctrlModel", &ctrl_model);
	boost::python::def("ctrlText", static_cast<sqf_return_string(*)(const control &)>(&ctrl_text));
	boost::python::def("ctrlText", static_cast<sqf_return_string(*)(float)>(&ctrl_text));
	boost::python::def("ctrlTextSecondary", &ctrl_text_secondary);
	boost::python::def("ctrlSetPosition", &ctrl_set_position);
	boost::python::def("ctrlPosition", &ctrl_position);
	boost::python::def("ctrlMapAnimAdd", &ctrl_map_anim_add);
	boost::python::def("ctrlParent", &ctrl_parent);
	boost::python::def("ctrlParentControlsGroup", &ctrl_parent_controls_group);
	boost::python::def("ctrlModelDirAndUp", &ctrl_model_dir_and_up);
	boost::python::def("ctrlMapWorldToScreen", &ctrl_map_world_to_screen);
	boost::python::def("ctrlMapScreenToWorld", &ctrl_map_screen_to_world);
	boost::python::def("ctrlSetEventHandler", &ctrl_set_event_handler);
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
	boost::python::def("lnbAddColumn", &lnb_add_column);
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
	boost::python::def("lbIsSelected", &lb_is_selected);
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
	boost::python::def("lbSetPictureRightColor", &lb_set_picture_right_color);
	boost::python::def("lbSetPictureRightColorDisabled", &lb_set_picture_right_color_disabled);
	boost::python::def("lbSetPictureRightColorSelected", &lb_set_picture_right_color_selected);
	boost::python::def("lbSetText", &lb_set_text);
	boost::python::def("lbSetTooltip", static_cast<void(*)(int,int,sqf_string_const_ref)>(&lb_set_tooltip));
	boost::python::def("lbSetTooltip", static_cast<void(*)(const control &,int,sqf_string_const_ref)>(&lb_set_tooltip));
	boost::python::def("lbSetValue", static_cast<void(*)(int,int,float)>(&lb_set_value));
	boost::python::def("lbSetValue", static_cast<void(*)(const control &,int,float)>(&lb_set_value));
	boost::python::def("lbSetSelectColor", &lb_set_select_color);
	boost::python::def("lbSetSelectColorRight", &lb_set_select_color_right);
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
	boost::python::def("tvSort", &tv_sort);
	boost::python::def("tvSortByValue", &tv_sort_by_value);
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
	boost::python::def("tvSetColor", &tv_set_color);
	boost::python::def("tvSetPictureColorDisabled", &tv_set_picture_color_disabled);
	boost::python::def("tvSetPictureColorSelected", &tv_set_picture_color_selected);
	boost::python::def("tvSetPictureColorRightSelected", &tv_set_picture_color__right_selected);
	boost::python::def("tvSetPictureColorRightDisabled", &tv_set_picture_color__right_disabled);
	boost::python::def("tvSetSelectColor", &tv_set_select_color);
	boost::python::def("tvSetText", static_cast<void(*)(const control &,const std::vector<int> &,sqf_string_const_ref)>(&tv_set_text));
	boost::python::def("tvTooltip", &tv_tooltip);
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
	boost::python::def("clearOverlay", &clear_overlay);
	boost::python::def("closeOverlay", &close_overlay);
	boost::python::def("commitOverlay", &commit_overlay);
	boost::python::def("saveOverlay", &save_overlay);
	boost::python::def("loadOverlay", &load_overlay);
	boost::python::def("newOverlay", &new_overlay);
	boost::python::def("allCutLayers", &all_cut_layers);
	boost::python::def("cutFadeOut", static_cast<int(*)(sqf_string_const_ref,float)>(&cut_fade_out));
	boost::python::def("cutFadeOut", static_cast<int(*)(int,float)>(&cut_fade_out));
	boost::python::def("cutObj", static_cast<int(*)(sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_obj));
	boost::python::def("cutObj", static_cast<int(*)(int,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_obj));
	boost::python::def("cutRsc", static_cast<int(*)(sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_rsc));
	boost::python::def("cutRsc", static_cast<int(*)(int,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_rsc));
	boost::python::def("cutText", static_cast<int(*)(sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_text));
	boost::python::def("cutText", static_cast<int(*)(int,sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_text));
	boost::python::def("titleFadeOut", &title_fade_out);
	boost::python::def("openDlcPage", &open_dlc_page);
	boost::python::def("openMap", static_cast<bool(*)(bool)>(&open_map));
	boost::python::def("openYoutubeVideo", &open_youtube_video);
	boost::python::def("showSubtitles", &show_subtitles);
	boost::python::def("openMap", static_cast<bool(*)(bool,bool)>(&open_map));
	boost::python::def("createGearDialog", &create_gear_dialog);
	boost::python::def("dialog", &dialog);
	boost::python::def("displayNull", &display_null);
	boost::python::def("disableSerialization", &disable_serialization);
	boost::python::def("enableEndDialog", &enable_end_dialog);
	boost::python::def("endLoadingScreen", &end_loading_screen);
	boost::python::def("pixelH", &pixel_h);
	boost::python::def("pixelW", &pixel_w);
	boost::python::def("setCompassOscillation", &set_compass_oscillation);
	boost::python::def("setHudMovementLevels", static_cast<void(*)(float,float,float,float,float,float,const object &)>(&set_hud_movement_levels));
	boost::python::def("setHudMovementLevels", static_cast<void(*)(float,float,float,float,float,float,const vector3 &)>(&set_hud_movement_levels));
	boost::python::def("startLoadingScreen", static_cast<void(*)(sqf_string_const_ref)>(&start_loading_screen));
	boost::python::def("startLoadingScreen", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&start_loading_screen));
	boost::python::def("createMissionDisplay", static_cast<display(*)(const display &,sqf_string_const_ref)>(&create_mission_display));
	boost::python::def("createMpCampaignDisplay", &create_mp_campaign_display);
	boost::python::def("pixelGrid", &pixel_grid);
	boost::python::def("pixelGridBase", &pixel_grid_base);
	boost::python::def("pixelGridNoUiScale", &pixel_grid_no_ui_scale);
	boost::python::def("shownScoreTable", &shown_score_table);
	boost::python::def("displayAddEventHandler", static_cast<int(*)(const display &,sqf_string_const_ref,sqf_string_const_ref)>(&display_add_event_handler));
	boost::python::def("displayAddEventHandler", static_cast<int(*)(const display &,sqf_string_const_ref,const code &)>(&display_add_event_handler));
	boost::python::def("displayRemoveEventhandler", &display_remove_eventhandler);
	boost::python::def("displaySetEventhandler", &display_set_eventhandler);
	boost::python::def("displayRemoveAllEventHandlers", &display_remove_all_event_handlers);
	boost::python::def("findDisplay", &find_display);
	boost::python::def("isTutHintsEnabled", &is_tut_hints_enabled);
	boost::python::def("hintC", static_cast<void(*)(sqf_string_const_ref)>(&hint_c));
	boost::python::def("hintC", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&hint_c));
	boost::python::def("hint", &hint);
	boost::python::def("hintCadet", &hint_cadet);
	boost::python::def("hintSilent", &hint_silent);
	boost::python::def("hintc", &hintc);
	boost::python::def("taskHint", &task_hint);
	boost::python::def("visibleWatch", &visible_watch);
	boost::python::def("visibleMap", &visible_map);
	boost::python::def("visibleGps", &visible_gps);
	boost::python::def("visibleCompass", &visible_compass);
	boost::python::def("cbChecked", &cb_checked);
	boost::python::def("cbSetChecked", &cb_set_checked);
	boost::python::def("createDialog", &create_dialog);
	boost::python::def("isRealTime", &is_real_time);
	boost::python::def("isShowing", &is_showing);
	boost::python::def("mapAnimDone", &map_anim_done);
	boost::python::def("shownArtillerycomputer", &shown_artillerycomputer);
	boost::python::def("shownCompass", &shown_compass);
	boost::python::def("shownGps", &shown_gps);
	boost::python::def("shownHud", &shown_hud);
	boost::python::def("shownMap", &shown_map);
	boost::python::def("shownPad", &shown_pad);
	boost::python::def("shownRadio", &shown_radio);
	boost::python::def("shownUavfeed", &shown_uavfeed);
	boost::python::def("shownWarrant", &shown_warrant);
	boost::python::def("shownWatch", &shown_watch);
	boost::python::def("showCinemaBorder", &show_cinema_border);
	boost::python::def("showCommandingMenu", &show_commanding_menu);
	boost::python::def("showCompass", &show_compass);
	boost::python::def("showGps", &show_gps);
	boost::python::def("showHud", static_cast<void(*)(bool)>(&show_hud));
	boost::python::def("showHud", static_cast<void(*)(bool,bool,bool,bool,bool,bool,bool,bool)>(&show_hud));
	boost::python::def("showMap", &show_map);
	boost::python::def("showPad", &show_pad);
	boost::python::def("showRadio", &show_radio);
	boost::python::def("showUavfeed", &show_uavfeed);
	boost::python::def("showWarrant", &show_warrant);
	boost::python::def("showWatch", &show_watch);
	boost::python::def("hcShownBar", &hc_shown_bar);
	boost::python::def("hcShowBar", &hc_show_bar);
	boost::python::def("preloadTitleObj", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref)>(&preload_title_obj));
	boost::python::def("preloadTitleObj", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&preload_title_obj));
	boost::python::def("preloadTitleRsc", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref)>(&preload_title_rsc));
	boost::python::def("preloadTitleRsc", static_cast<bool(*)(sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&preload_title_rsc));
	boost::python::def("cutObj", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,float)>(&cut_obj));
	boost::python::def("cutRsc", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_rsc));
	boost::python::def("cutText", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,float,bool)>(&cut_text));
	boost::python::def("titleCut", &title_cut);
	boost::python::def("titleObj", &title_obj);
	boost::python::def("titleRsc", &title_rsc);
	boost::python::def("titleText", &title_text);
	boost::python::def("mapAnimAdd", static_cast<void(*)(float,float,const object &)>(&map_anim_add));
	boost::python::def("mapAnimAdd", static_cast<void(*)(float,float,const vector3 &)>(&map_anim_add));
	boost::python::def("closeDialog", &close_dialog);
	boost::python::def("closeDisplay", &close_display);
	boost::python::def("drawIcon", static_cast<void(*)(const control &,sqf_string_const_ref,const rv_color &,const vector2 &,float,float,float,sqf_string_const_ref,uint32_t,float,sqf_string_const_ref,sqf_string_const_ref)>(&draw_icon));
	boost::python::def("drawIcon", static_cast<void(*)(const control &,sqf_string_const_ref,const rv_color &,const object &,float,float,float,sqf_string_const_ref,uint32_t,float,sqf_string_const_ref,sqf_string_const_ref)>(&draw_icon));
	boost::python::def("drawRectangle", &draw_rectangle);
	boost::python::def("collapseObjectTree", &collapse_object_tree);
	boost::python::def("importAllGroups", &import_all_groups);
	boost::python::def("restartEditorCamera", &restart_editor_camera);
	boost::python::def("selectedEditorObjects", &selected_editor_objects);
	boost::python::def("updateObjectTree", &update_object_tree);
	boost::python::def("allow3dmode", &allow3dmode);
	boost::python::def("allowFileOperations", &allow_file_operations);
	boost::python::def("createMenu", &create_menu);
	boost::python::def("htmlLoad", &html_load);
	boost::python::def("mapCenterOnCamera", static_cast<void(*)(const control &,bool)>(&map_center_on_camera));
	boost::python::def("moveObjectToEnd", &move_object_to_end);
	boost::python::def("progressSetPosition", &progress_set_position);
	boost::python::def("removeMenuItem", static_cast<void(*)(const control &,float)>(&remove_menu_item));
	boost::python::def("removeMenuItem", static_cast<void(*)(const control &,sqf_string_const_ref)>(&remove_menu_item));
	boost::python::def("setEditorMode", &set_editor_mode);
	boost::python::def("show3dicons", &show3dicons);
	boost::python::def("showLegend", &show_legend);
	boost::python::def("buttonSetAction", static_cast<void(*)(int,sqf_string_const_ref)>(&button_set_action));
	boost::python::def("buttonSetAction", static_cast<void(*)(const control &,sqf_string_const_ref)>(&button_set_action));
	boost::python::def("mapAnimClear", &map_anim_clear);
	boost::python::def("mapAnimCommit", &map_anim_commit);
	boost::python::def("forceMap", &force_map);
	boost::python::def("inGameUiSetEventHandler", &in_game_ui_set_event_handler);
	boost::python::def("gearSlotAmmoCount", &gear_slot_ammo_count);
	boost::python::def("nextMenuItemIndex", &next_menu_item_index);
	boost::python::def("progressPosition", &progress_position);
	boost::python::def("safeZoneX", &safe_zone_x);
	boost::python::def("safeZoneY", &safe_zone_y);
	boost::python::def("safeZoneH", &safe_zone_h);
	boost::python::def("safeZoneW", &safe_zone_w);
	boost::python::def("safeZoneXAbs", &safe_zone_x_abs);
	boost::python::def("safeZoneWAbs", &safe_zone_w_abs);
	boost::python::def("buttonAction", static_cast<sqf_return_string(*)(const control &)>(&button_action));
	boost::python::def("buttonAction", static_cast<sqf_return_string(*)(int)>(&button_action));
	boost::python::def("gearSlotData", &gear_slot_data);
	boost::python::def("getEditorMode", &get_editor_mode);
	boost::python::def("getEditorObjectScope", &get_editor_object_scope);
	boost::python::def("mapGridPosition", static_cast<sqf_return_string(*)(const object &)>(&map_grid_position));
	boost::python::def("mapGridPosition", static_cast<sqf_return_string(*)(const vector2 &)>(&map_grid_position));
	boost::python::def("createDisplay", &create_display);
	boost::python::def("createMissionDisplay", static_cast<display(*)(sqf_string_const_ref,const display &)>(&create_mission_display));
	boost::python::def("controlNull", &control_null);
	boost::python::def("controlsGroupCtrl", &controls_group_ctrl);
	boost::python::def("displayCtrl", &display_ctrl);
	boost::python::def("mapCenterOnCamera", static_cast<vector3(*)(const control &)>(&map_center_on_camera));
	boost::python::def("posScreenToWorld", &pos_screen_to_world);
	boost::python::def("posWorldToScreen", &pos_world_to_screen);
	boost::python::def("allControls", &all_controls);
	boost::python::def("getEditorCamera", &get_editor_camera);
	boost::python::def("getObjectProxy", &get_object_proxy);
	boost::python::def("displayParent", &display_parent);
	boost::python::def("visibleScoreTable", &visible_score_table);
	boost::python::def("showScoreTable", &show_score_table);
	boost::python::def("isPipEnabled", &is_pip_enabled);
	boost::python::def("setMousePosition", &set_mouse_position);
	boost::python::def("setPipEffect", &set_pip_effect);
	boost::python::def("sliderSetSpeed", static_cast<void(*)(const control &,float,int)>(&slider_set_speed));
	boost::python::def("lnbAddRow", static_cast<int(*)(int,sqf_string_list_const_ref)>(&lnb_add_row));
	boost::python::def("forcedMap", &forced_map);
	boost::python::def("progressLoadingScreen", &progress_loading_screen);
	boost::python::def("lookAtPos", &look_at_pos);
	boost::python::def("ctAddHeader", &ct_add_header);
	boost::python::def("ctAddRow", &ct_add_row);
	boost::python::def("ctClear", &ct_clear);
	boost::python::def("ctCurSel", &ct_cur_sel);
	boost::python::def("ctHeaderCount", &ct_header_count);
	boost::python::def("ctRowCount", &ct_row_count);
	boost::python::def("lbSort", static_cast<void(*)(const control &)>(&lb_sort));
	boost::python::def("lbSort", static_cast<void(*)(const control &,sqf_string_const_ref)>(&lb_sort));
	boost::python::def("lbSort", static_cast<void(*)(int,sqf_string_const_ref)>(&lb_sort));
	boost::python::def("lbSort", static_cast<void(*)(int)>(&lb_sort));
	boost::python::def("lbSortByValue", static_cast<void(*)(const control)>(&lb_sort_by_value));
	boost::python::def("lbSortByValue", static_cast<void(*)(int)>(&lb_sort_by_value));
	boost::python::def("lbSortByValue", static_cast<void(*)(const control &)>(&lb_sort_by_value));
	boost::python::def("ctData", &ct_data);
	boost::python::def("ctFindHeaderRows", &ct_find_header_rows);
	boost::python::def("ctFindRowHeader", &ct_find_row_header);
	boost::python::def("ctHeaderControls", &ct_header_controls);
	boost::python::def("ctRemoveHeaders", &ct_remove_headers);
	boost::python::def("ctRemoveRows", &ct_remove_rows);
	boost::python::def("ctRowControls", &ct_row_controls);
	boost::python::def("ctSetCurSel", &ct_set_cur_sel);
	boost::python::def("ctSetData", &ct_set_data);
	boost::python::def("ctSetHeaderTemplate", &ct_set_header_template);
	boost::python::def("ctSetRowTemplate", &ct_set_row_template);
	boost::python::def("ctSetValue", &ct_set_value);
	boost::python::def("ctValue", &ct_value);
	boost::python::def("getResolution", &get_resolution);
	boost::python::class_<rv_lnb_array>("rvLnbArray", boost::python::init<>())
		.def_readwrite("texts", &rv_lnb_array::texts)
		.def_readwrite("values", &rv_lnb_array::values)
		.def_readwrite("datas", &rv_lnb_array::datas);
	boost::python::class_<rv_ct_list>("rvCtList")
		.def_readwrite("headerIndex", &rv_ct_list::header_index)
		.def_readwrite("controls", &rv_ct_list::controls);
	boost::python::class_<rv_resolution>("rvResolution", boost::python::init<const vector2 &,const vector2 &,float,float>())
		.def("fromVector", &rv_resolution::from_vector).staticmethod("fromVector")
		.def("toVector", &rv_resolution::to_vector)
		.def_readwrite("resolution", &rv_resolution::resolution)
		.def_readwrite("viewport", &rv_resolution::viewport)
		.def_readwrite("aspectRatio", &rv_resolution::aspect_ratio)
		.def_readwrite("uiScale", &rv_resolution::ui_scale);
}

BOOST_PYTHON_MODULE(__sqf_curator)
{
	boost::python::def("curatorCamera", &curator_camera);
	boost::python::def("curatorMouseOver", &curator_mouse_over);
	boost::python::def("curatorSelected", &curator_selected);
	boost::python::def("openCuratorInterface", &open_curator_interface);
	boost::python::def("shownCuratorcompass", &shown_curatorcompass);
	boost::python::def("curatorCameraAreaCeiling", &curator_camera_area_ceiling);
	boost::python::def("curatorEditingAreaType", &curator_editing_area_type);
	boost::python::def("curatorPoints", &curator_points);
	boost::python::def("curatorWaypointCost", &curator_waypoint_cost);
	boost::python::def("getAssignedCuratorLogic", &get_assigned_curator_logic);
	boost::python::def("getAssignedCuratorUnit", &get_assigned_curator_unit);
	boost::python::def("removeAllCuratorAddons", &remove_all_curator_addons);
	boost::python::def("removeAllCuratorCameraAreas", &remove_all_curator_camera_areas);
	boost::python::def("removeAllCuratorEditingAreas", &remove_all_curator_editing_areas);
	boost::python::def("showCuratorCompass", &show_curator_compass);
	boost::python::def("unassignCurator", &unassign_curator);
	boost::python::def("addCuratorPoints", &add_curator_points);
	boost::python::def("allowCuratorLogicIgnoreAreas", &allow_curator_logic_ignore_areas);
	boost::python::def("curatorCoef", &curator_coef);
	boost::python::def("removeCuratorCameraArea", &remove_curator_camera_area);
	boost::python::def("removeCuratorEditingArea", &remove_curator_editing_area);
	boost::python::def("setCuratorCameraAreaCeiling", &set_curator_camera_area_ceiling);
	boost::python::def("setCuratorEditingAreaType", &set_curator_editing_area_type);
	boost::python::def("setCuratorWaypointCost", &set_curator_waypoint_cost);
	boost::python::def("addCuratorAddons", &add_curator_addons);
	boost::python::def("addCuratorCameraArea", static_cast<void(*)(const object &,int,const vector2 &,float)>(&add_curator_camera_area));
	boost::python::def("addCuratorCameraArea", static_cast<void(*)(const object &,int,const vector3 &,float)>(&add_curator_camera_area));
	boost::python::def("addCuratorEditableObject", &add_curator_editable_object);
	boost::python::def("addCuratorEditingArea", &add_curator_editing_area);
	boost::python::def("curatorAddons", &curator_addons);
	boost::python::def("curatorEditableObjects", &curator_editable_objects);
	boost::python::def("curatorRegisteredObjects", &curator_registered_objects);
	boost::python::def("objectCurators", &object_curators);
	boost::python::def("removeCuratorAddons", &remove_curator_addons);
	boost::python::def("removeCuratorEditableObjects", &remove_curator_editable_objects);
	boost::python::def("setCuratorCoef", &set_curator_coef);
	boost::python::def("assignCurator", &assign_curator);
}

BOOST_PYTHON_MODULE(__sqf_debug)
{
	boost::python::def("diagFps", &diag_fps);
	boost::python::def("diagFpsmin", &diag_fpsmin);
	boost::python::def("diagFrameno", &diag_frameno);
	boost::python::def("diagTicktime", &diag_ticktime);
	boost::python::def("diagActiveMissionFsms", &diag_active_mission_fsms);
	boost::python::def("diagActiveSqfScripts", &diag_active_sqf_scripts);
	boost::python::def("diagActiveSqsScripts", &diag_active_sqs_scripts);
	boost::python::def("diagActiveScripts", &diag_active_scripts);
	boost::python::def("diagCaptureFrame", &diag_capture_frame);
	boost::python::def("diagCaptureFrameToFile", &diag_capture_frame_to_file);
	boost::python::def("diagCaptureSlowFrame", &diag_capture_slow_frame);
	boost::python::def("diagCodePerformance", &diag_code_performance);
	boost::python::def("diagLog", &diag_log);
	boost::python::def("diagLogSlowFrame", &diag_log_slow_frame);
	boost::python::def("enableDiagLegend", &enable_diag_legend);
	boost::python::def("halt", &halt);
	boost::python::def("throwException", &throw_exception);
}

BOOST_PYTHON_MODULE(__sqf_eden)
{
	boost::python::def("currentEdenOperation", &current_eden_operation);
	boost::python::def("getEdenCamera", &get_eden_camera);
	boost::python::def("getEdenIconsVisible", &get_eden_icons_visible);
	boost::python::def("getEdenLinesVisible", &get_eden_lines_visible);
	boost::python::def("isEden", &is_eden);
	boost::python::def("isEdenMultiplayer", &is_eden_multiplayer);
	boost::python::def("getEdenActionState", &get_eden_action_state);
	boost::python::def("editEdenMissionAttributes", &edit_eden_mission_attributes);
	boost::python::def("addEdenLayer", &add_eden_layer);
	boost::python::def("removeEdenLayer", &remove_eden_layer);
	boost::python::def("removeAllEdenEventhandlers", &remove_all_eden_eventhandlers);
	boost::python::def("addEdenEventHandler", &add_eden_event_handler);
	boost::python::def("create3DenComposition", &create_3den_composition);
	boost::python::def("create3DenEntity", static_cast<game_value(*)(sqf_string_const_ref,sqf_string_const_ref,const vector3 &,bool)>(&create_3den_entity));
	boost::python::def("create3DenConnections", &create_3den_connections);
	boost::python::def("get3DenEntity", &get_3den_entity);
	boost::python::def("get3DenLayerEntities", &get_3den_layer_entities);
	boost::python::def("get3DenSelected", &get_3den_selected);
	boost::python::def("set3DenAttributes", &set_3den_attributes);
	boost::python::def("allEdenEntities", &all_eden_entities);
	boost::python::def("doEdenAction", &do_eden_action);
	boost::python::def("getEdenGrid", &get_eden_grid);
	boost::python::def("getEdenMouseOver", &get_eden_mouse_over);
	boost::python::def("collectEdenHistory", &collect_eden_history);
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
	boost::python::def("setEdenGrid", &set_eden_grid);
	boost::python::def("setEdenIconsVisible", &set_eden_icons_visible);
	boost::python::def("setEdenLinesVisible", &set_eden_lines_visible);
	boost::python::def("setEdenMissionAttributes", &set_eden_mission_attributes);
	boost::python::def("removeEdenEventHandler", &remove_eden_event_handler);
	boost::python::def("moveEdenCamera", &move_eden_camera);
	boost::python::def("remove3DenConnection", &remove_3den_connection);
	boost::python::def("clear3DenAttribute", &clear_3den_attribute);
	boost::python::def("create3DenEntity", static_cast<eden_entity(*)(const group &,sqf_string_const_ref,sqf_string_const_ref,const vector3 &,bool)>(&create_3den_entity));
	boost::python::def("get3DenAttribute", &get_3den_attribute);
	boost::python::def("get3DenMissionAttribute", &get_3den_mission_attribute);
	boost::python::def("set3DenMissionAttribute", &set_3den_mission_attribute);
	boost::python::def("set3DenAttribute", &set_3den_attribute);
	boost::python::def("set3DenLayer", &set_3den_layer);
	boost::python::def("set3DenObjectType", &set_3den_object_type);
	boost::python::def("set3DenSelected", &set_3den_selected);
	boost::python::def("getMissionLayers", &get_mission_layers);
	boost::python::def("set3DenLogicType", &set_3den_logic_type);
	boost::python::def("getMissionLayerEntities", &get_mission_layer_entities);
	boost::python::class_<rv_eden_mouse_over>("rvEdenMouseOver", boost::python::init<const game_value &>())
		.def_readwrite("type", &rv_eden_mouse_over::type)
		.def_readwrite("entity", &rv_eden_mouse_over::entity);
}

BOOST_PYTHON_MODULE(__sqf_group)
{
	boost::python::def("combatMode", static_cast<sqf_return_string(*)(const group &)>(&combat_mode));
	boost::python::def("addGroupIcon", &add_group_icon);
	boost::python::def("groupIconSelectable", &group_icon_selectable);
	boost::python::def("grpNull", &grp_null);
	boost::python::def("clearGroupIcons", &clear_group_icons);
	boost::python::def("createGroup", &create_group);
	boost::python::def("deleteGroup", &delete_group);
	boost::python::def("groupFromNetId", &group_from_net_id);
	boost::python::def("groupId", &group_id);
	boost::python::def("groupOwner", &group_owner);
	boost::python::def("setGroupOwner", &set_group_owner);
	boost::python::def("leader", static_cast<object(*)(const group &)>(&leader));
	boost::python::def("groupRadio", &group_radio);
	boost::python::def("removeGroupIcon", &remove_group_icon);
	boost::python::def("selectLeader", &select_leader);
	boost::python::def("currentWaypoint", &current_waypoint);
	boost::python::def("setGroupIconsSelectable", &set_group_icons_selectable);
	boost::python::def("setCurrentWaypoint", &set_current_waypoint);
	boost::python::def("getGroupIconParams", &get_group_icon_params);
	boost::python::def("join", static_cast<void(*)(const std::vector<object> &,const group &)>(&join));
	boost::python::def("join", static_cast<void(*)(const std::vector<object> &,const object &)>(&join));
	boost::python::def("joinSilent", static_cast<void(*)(const std::vector<object> &,const group &)>(&join_silent));
	boost::python::def("joinSilent", static_cast<void(*)(const std::vector<object> &,const object &)>(&join_silent));
	boost::python::def("joinAs", &join_as);
	boost::python::def("joinAsSilent", &join_as_silent);
	boost::python::def("units", static_cast<std::vector<object>(*)(const group &)>(&units));
	boost::python::def("getSide", static_cast<side(*)(const group &)>(&get_side));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const group &)>(&all_variables));
	boost::python::def("isNull", static_cast<bool(*)(const group &)>(&is_null));
	boost::python::def("isGroupDeletedWhenEmpty", &is_group_deleted_when_empty);
	boost::python::def("deleteGroupWhenEmpty", &delete_group_when_empty);
	boost::python::def("addVehicle", &add_vehicle);
	boost::python::def("setGroupIconsVisible", &set_group_icons_visible);
	boost::python::def("groupIconsVisible", &group_icons_visible);
	boost::python::def("getGroupIcon", &get_group_icon);
	boost::python::def("groupSelectUnit", &group_select_unit);
	boost::python::def("setGroupIcon", static_cast<void(*)(const group &,float,sqf_string_const_ref,const vector2)>(&set_group_icon));
	boost::python::def("setFormation", static_cast<void(*)(const group &,sqf_string_const_ref)>(&set_formation));
	boost::python::def("setFormDir", static_cast<void(*)(const group &,float)>(&set_form_dir));
	boost::python::def("setGroupIcon", static_cast<void(*)(const group &,int,sqf_string_const_ref,const vector2 &)>(&set_group_icon));
	boost::python::def("setGroupIconParams", &set_group_icon_params);
	boost::python::def("setGroupId", &set_group_id);
	boost::python::def("setGroupIdGlobal", &set_group_id_global);
	boost::python::def("setSpeedMode", &set_speed_mode);
	boost::python::def("createTeam", &create_team);
	boost::python::def("agent", &agent);
	boost::python::def("agents", &agents);
	boost::python::def("setCombatMode", static_cast<void(*)(const team_member &,sqf_string_const_ref)>(&set_combat_mode));
	boost::python::def("setFormation", static_cast<void(*)(const team_member &,sqf_string_const_ref)>(&set_formation));
	boost::python::def("deleteTeam", &delete_team);
	boost::python::def("formation", static_cast<sqf_return_string(*)(const team_member &)>(&formation));
	boost::python::def("setFromEditor", &set_from_editor);
	boost::python::def("fromEditor", &from_editor);
	boost::python::def("isAgent", &is_agent);
	boost::python::def("leader", static_cast<team_member(*)(const team_member &)>(&leader));
	boost::python::def("teamName", &team_name);
	boost::python::def("teamType", &team_type);
	boost::python::def("members", &members);
	boost::python::def("addResources", &add_resources);
	boost::python::def("addTeamMember", &add_team_member);
	boost::python::def("deleteResources", &delete_resources);
	boost::python::def("removeTeamMember", &remove_team_member);
	boost::python::def("setLeader", &set_leader);
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
	boost::python::def("hcSelected", &hc_selected);
	boost::python::def("hcAllGroups", &hc_all_groups);
	boost::python::def("hcRemoveGroup", &hc_remove_group);
	boost::python::def("hcGroupParams", &hc_group_params);
	boost::python::def("hcSelectGroup", &hc_select_group);
	boost::python::def("hcSetGroup", &hc_set_group);
	boost::python::def("hcLeader", &hc_leader);
	boost::python::def("hcRemoveAllGroups", &hc_remove_all_groups);
	boost::python::class_<rv_hc_group_params>("rvHcGroupParams")
		.def_readwrite("string", &rv_hc_group_params::string)
		.def_readwrite("f1", &rv_hc_group_params::f1)
		.def_readwrite("f2", &rv_hc_group_params::f2)
		.def_readwrite("f3", &rv_hc_group_params::f3)
		.def_readwrite("f4", &rv_hc_group_params::f4);
}

BOOST_PYTHON_MODULE(__sqf_intersects)
{
	boost::python::def("intersect", &intersect);
	boost::python::def("lineIntersectsSurfaces", static_cast<intersect_surfaces_list(*)(const vector3 &,const vector3 &)>(&line_intersects_surfaces));
	boost::python::def("lineIntersectsSurfaces", static_cast<intersect_surfaces_list(*)(const vector3 &,const vector3 &,const object &)>(&line_intersects_surfaces));
	boost::python::def("lineIntersectsSurfaces", static_cast<intersect_surfaces_list(*)(const vector3 &,const vector3 &,const object &,const object &,bool,int,sqf_string_const_ref,sqf_string_const_ref)>(&line_intersects_surfaces));
	boost::python::def("lineIntersectsWith", static_cast<std::vector<object>(*)(const vector3 &,const vector3 &,bool)>(&line_intersects_with));
	boost::python::def("lineIntersectsWith", static_cast<std::vector<object>(*)(const vector3 &,const vector3 &,bool,const object &)>(&line_intersects_with));
	boost::python::def("lineIntersectsWith", static_cast<std::vector<object>(*)(const vector3 &,const vector3 &,bool,const object &,const object &)>(&line_intersects_with));
	boost::python::def("terrainIntersect", &terrain_intersect);
	boost::python::def("terrainIntersectAsl", &terrain_intersect_asl);
	boost::python::def("lineIntersects", static_cast<bool(*)(const vector3 &,const vector3 &)>(&line_intersects));
	boost::python::def("lineIntersects", static_cast<bool(*)(const vector3 &,const vector3 &,const object &)>(&line_intersects));
	boost::python::def("lineIntersects", static_cast<bool(*)(const vector3 &,const vector3 &,const object &,const object &)>(&line_intersects));
	boost::python::def("lineIntersectsObjs", &line_intersects_objs);
	boost::python::def("terrainIntersectAtAsl", &terrain_intersect_at_asl);
	boost::python::class_<intersect_surfaces>("intersectSurfaces")
		.def_readwrite("intersectPosAsl", &intersect_surfaces::intersect_pos_asl)
		.def_readwrite("surfaceNormal", &intersect_surfaces::surface_normal)
		.def_readwrite("intersectObject", &intersect_surfaces::intersect_object)
		.def_readwrite("parentObject", &intersect_surfaces::parent_object);
}

BOOST_PYTHON_MODULE(__sqf_inventory)
{
	boost::python::def("addItemPool", &add_item_pool);
	boost::python::def("addMagazinePool", &add_magazine_pool);
	boost::python::def("addBackpackCargo", &add_backpack_cargo);
	boost::python::def("addBackpackCargoGlobal", &add_backpack_cargo_global);
	boost::python::def("addItemCargo", &add_item_cargo);
	boost::python::def("addItemCargoGlobal", &add_item_cargo_global);
	boost::python::def("addMagazine", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&add_magazine));
	boost::python::def("addMagazineAmmoCargo", &add_magazine_ammo_cargo);
	boost::python::def("addMagazineCargo", &add_magazine_cargo);
	boost::python::def("addMagazineCargoGlobal", &add_magazine_cargo_global);
	boost::python::def("addMagazines", &add_magazines);
	boost::python::def("addMagazineTurret", &add_magazine_turret);
	boost::python::def("addWeaponTurret", &add_weapon_turret);
	boost::python::def("addWeaponCargo", &add_weapon_cargo);
	boost::python::def("addWeaponCargoGlobal", &add_weapon_cargo_global);
	boost::python::def("addWeaponItem", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&add_weapon_item));
	boost::python::def("addWeaponItem", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,int)>(&add_weapon_item));
	boost::python::def("addWeaponItem", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,int,sqf_string_const_ref)>(&add_weapon_item));
	boost::python::def("magazineCargo", &magazine_cargo);
	boost::python::def("magazines", &magazines);
	boost::python::def("magazinesAllTurrets", &magazines_all_turrets);
	boost::python::def("magazinesAmmo", &magazines_ammo);
	boost::python::def("magazinesAmmoCargo", &magazines_ammo_cargo);
	boost::python::def("magazinesAmmoFull", &magazines_ammo_full);
	boost::python::def("magazinesDetail", &magazines_detail);
	boost::python::def("magazinesDetailBackpack", &magazines_detail_backpack);
	boost::python::def("magazinesDetailUniform", &magazines_detail_uniform);
	boost::python::def("magazinesDetailVest", &magazines_detail_vest);
	boost::python::def("backpackCargo", &backpack_cargo);
	boost::python::def("backpackItems", &backpack_items);
	boost::python::def("backpackMagazines", &backpack_magazines);
	boost::python::def("canAdd", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&can_add));
	boost::python::def("canAdd", static_cast<bool(*)(const object &,sqf_string_const_ref,int)>(&can_add));
	boost::python::def("canAddItemToBackpack", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&can_add_item_to_backpack));
	boost::python::def("canAddItemToBackpack", static_cast<bool(*)(const object &,sqf_string_const_ref,int)>(&can_add_item_to_backpack));
	boost::python::def("canAddItemToUniform", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&can_add_item_to_uniform));
	boost::python::def("canAddItemToUniform", static_cast<bool(*)(const object &,sqf_string_const_ref,int)>(&can_add_item_to_uniform));
	boost::python::def("canAddItemToVest", static_cast<bool(*)(const object &,sqf_string_const_ref)>(&can_add_item_to_vest));
	boost::python::def("canAddItemToVest", static_cast<bool(*)(const object &,sqf_string_const_ref,int)>(&can_add_item_to_vest));
	boost::python::def("currentMagazineDetail", &current_magazine_detail);
	boost::python::def("clearAllItemsFromBackpack", &clear_all_items_from_backpack);
	boost::python::def("clearBackpackCargo", &clear_backpack_cargo);
	boost::python::def("clearBackpackCargoGlobal", &clear_backpack_cargo_global);
	boost::python::def("clearItemCargo", &clear_item_cargo);
	boost::python::def("clearItemCargoGlobal", &clear_item_cargo_global);
	boost::python::def("clearMagazineCargo", &clear_magazine_cargo);
	boost::python::def("clearMagazineCargoGlobal", &clear_magazine_cargo_global);
	boost::python::def("clearWeaponCargo", &clear_weapon_cargo);
	boost::python::def("clearWeaponCargoGlobal", &clear_weapon_cargo_global);
	boost::python::def("handgunMagazine", &handgun_magazine);
	boost::python::def("handgunWeapon", &handgun_weapon);
	boost::python::def("removeAllContainers", &remove_all_containers);
	boost::python::def("removeAllHandgunItems", &remove_all_handgun_items);
	boost::python::def("removeAllItems", &remove_all_items);
	boost::python::def("removeAllItemsWithMagazines", &remove_all_items_with_magazines);
	boost::python::def("removeAllPrimaryWeaponItems", &remove_all_primary_weapon_items);
	boost::python::def("removeAllWeapons", &remove_all_weapons);
	boost::python::def("removeBackpack", &remove_backpack);
	boost::python::def("removeBackpackGlobal", &remove_backpack_global);
	boost::python::def("removeGoggles", &remove_goggles);
	boost::python::def("removeHeadgear", &remove_headgear);
	boost::python::def("removeUniform", &remove_uniform);
	boost::python::def("removeVest", &remove_vest);
	boost::python::def("uniform", &uniform);
	boost::python::def("uniformContainer", &uniform_container);
	boost::python::def("unitBackpack", &unit_backpack);
	boost::python::def("vest", &vest);
	boost::python::def("vestContainer", &vest_container);
	boost::python::def("backpack", &backpack);
	boost::python::def("backpackContainer", &backpack_container);
	boost::python::def("firstBackpack", &first_backpack);
	boost::python::def("addBackpack", &add_backpack);
	boost::python::def("addBackpackGlobal", &add_backpack_global);
	boost::python::def("addGoggles", &add_goggles);
	boost::python::def("addHandgunItem", &add_handgun_item);
	boost::python::def("addHeadgear", &add_headgear);
	boost::python::def("addItem", &add_item);
	boost::python::def("addItemToBackpack", &add_item_to_backpack);
	boost::python::def("addItemToUniform", &add_item_to_uniform);
	boost::python::def("addItemToVest", &add_item_to_vest);
	boost::python::def("addMagazine", static_cast<void(*)(const object &,sqf_string_const_ref)>(&add_magazine));
	boost::python::def("addMagazineGlobal", &add_magazine_global);
	boost::python::def("addPrimaryWeaponItem", &add_primary_weapon_item);
	boost::python::def("addSecondaryWeaponItem", &add_secondary_weapon_item);
	boost::python::def("addUniform", &add_uniform);
	boost::python::def("addVest", &add_vest);
	boost::python::def("addWeapon", &add_weapon);
	boost::python::def("addWeaponGlobal", &add_weapon_global);
	boost::python::def("assignItem", &assign_item);
	boost::python::def("hasWeapon", &has_weapon);
	boost::python::def("linkItem", &link_item);
	boost::python::def("isUniformAllowed", &is_uniform_allowed);
	boost::python::def("removeHandgunItem", &remove_handgun_item);
	boost::python::def("removeItem", &remove_item);
	boost::python::def("removeItemFromBackpack", &remove_item_from_backpack);
	boost::python::def("removeItemFromUniform", &remove_item_from_uniform);
	boost::python::def("removeItemFromVest", &remove_item_from_vest);
	boost::python::def("removeItems", &remove_items);
	boost::python::def("removeMagazineGlobal", &remove_magazine_global);
	boost::python::def("removeMagazines", &remove_magazines);
	boost::python::def("removePrimaryWeaponItem", &remove_primary_weapon_item);
	boost::python::def("removeSecondaryWeaponItem", &remove_secondary_weapon_item);
	boost::python::def("removeWeapon", &remove_weapon);
	boost::python::def("removeWeaponGlobal", &remove_weapon_global);
	boost::python::def("selectWeapon", &select_weapon);
	boost::python::def("unassignItem", &unassign_item);
	boost::python::def("unlinkItem", &unlink_item);
	boost::python::def("items", &items);
	boost::python::def("currentThrowable", &current_throwable);
	boost::python::def("everyBackpack", &every_backpack);
	boost::python::def("everyContainer", &every_container);
	boost::python::def("getBackpackCargo", &get_backpack_cargo);
	boost::python::def("getItemCargo", &get_item_cargo);
	boost::python::def("getMagazineCargo", &get_magazine_cargo);
	boost::python::def("getWeaponCargo", &get_weapon_cargo);
	boost::python::def("itemCargo", &item_cargo);
	boost::python::def("weaponCargo", &weapon_cargo);
	boost::python::def("weapons", &weapons);
	boost::python::def("itemsWithMagazines", &items_with_magazines);
	boost::python::def("primaryWeaponItems", &primary_weapon_items);
	boost::python::def("primaryWeaponMagazine", &primary_weapon_magazine);
	boost::python::def("secondaryWeaponItems", &secondary_weapon_items);
	boost::python::def("secondaryWeaponMagazine", &secondary_weapon_magazine);
	boost::python::def("weaponsItems", &weapons_items);
	boost::python::def("weaponsItemsCargo", &weapons_items_cargo);
	boost::python::def("handgunItems", &handgun_items);
	boost::python::def("soldierMagazines", &soldier_magazines);
	boost::python::def("vestMagazines", &vest_magazines);
	boost::python::def("vestItems", &vest_items);
	boost::python::def("uniformMagazines", &uniform_magazines);
	boost::python::def("uniformItems", &uniform_items);
	boost::python::def("removeAllAssignedItems", &remove_all_assigned_items);
	boost::python::def("assignedItems", &assigned_items);
	boost::python::def("currentMagazine", &current_magazine);
	boost::python::def("currentMuzzle", &current_muzzle);
	boost::python::def("currentWeapon", &current_weapon);
	boost::python::def("currentWeaponMode", &current_weapon_mode);
	boost::python::def("loadMagazine", &load_magazine);
	boost::python::def("getDescription", &get_description);
	boost::python::def("load", &load);
	boost::python::def("loadAbs", &load_abs);
	boost::python::def("loadBackpack", &load_backpack);
	boost::python::def("loadUniform", &load_uniform);
	boost::python::def("loadVest", &load_vest);
	boost::python::def("secondaryWeapon", &secondary_weapon);
	boost::python::def("primaryWeapon", &primary_weapon);
	boost::python::def("removeMagazine", &remove_magazine);
	boost::python::def("removeMagazinesTurret", &remove_magazines_turret);
	boost::python::def("removeMagazineTurret", &remove_magazine_turret);
	boost::python::def("removeWeaponAttachmentCargo", &remove_weapon_attachment_cargo);
	boost::python::def("removeWeaponCargo", &remove_weapon_cargo);
	boost::python::def("removeWeaponTurret", &remove_weapon_turret);
	boost::python::def("setAmmo", &set_ammo);
	boost::python::def("getUnitLoadout", static_cast<rv_unit_loadout(*)(const object &)>(&get_unit_loadout));
	boost::python::def("getUnitLoadout", static_cast<rv_unit_loadout(*)(const config &)>(&get_unit_loadout));
	boost::python::def("setUnitLoadout", &set_unit_loadout);
	boost::python::def("weaponAccessories", &weapon_accessories);
	boost::python::def("weaponAccessoriesCargo", &weapon_accessories_cargo);
	boost::python::def("magazinesTurret", &magazines_turret);
	boost::python::def("magazineTurretAmmo", &magazine_turret_ammo);
	boost::python::def("setMagazineTurretAmmo", &set_magazine_turret_ammo);
	boost::python::def("setVehicleAmmo", &set_vehicle_ammo);
	boost::python::def("setVehicleAmmoDef", &set_vehicle_ammo_def);
	boost::python::def("setFuelCargo", &set_fuel_cargo);
	boost::python::def("setRepairCargo", &set_repair_cargo);
	boost::python::def("pickWeaponPool", &pick_weapon_pool);
	boost::python::def("putWeaponPool", &put_weapon_pool);
	boost::python::def("queryItemsPool", &query_items_pool);
	boost::python::def("queryMagazinePool", &query_magazine_pool);
	boost::python::def("queryWeaponPool", &query_weapon_pool);
	boost::python::def("ammo", &ammo);
	boost::python::def("forceAddUniform", &force_add_uniform);
	boost::python::def("setAmmoCargo", &set_ammo_cargo);
	boost::python::def("addWeaponPool", &add_weapon_pool);
	boost::python::def("currentMagazineDetailTurret", &current_magazine_detail_turret);
	boost::python::def("currentMagazineTurret", &current_magazine_turret);
	boost::python::def("currentWeaponTurret", &current_weapon_turret);
	boost::python::def("getArtilleryAmmo", &get_artillery_ammo);
	boost::python::def("clearItemPool", &clear_item_pool);
	boost::python::def("clearMagazinePool", &clear_magazine_pool);
	boost::python::def("clearWeaponPool", &clear_weapon_pool);
	boost::python::def("binocular", &binocular);
	boost::python::def("gearIdcammoCount", &gear_idcammo_count);
	boost::python::def("getAmmoCargo", &get_ammo_cargo);
	boost::python::def("getFuelCargo", &get_fuel_cargo);
	boost::python::def("getRepairCargo", &get_repair_cargo);
	boost::python::def("goggles", &goggles);
	boost::python::def("headgear", &headgear);
	boost::python::def("hmd", &hmd);
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
	boost::python::def("deleteMarker", &delete_marker);
	boost::python::def("deleteMarkerLocal", &delete_marker_local);
	boost::python::def("setMarkerSize", &set_marker_size);
	boost::python::def("setMarkerSizeLocal", &set_marker_size_local);
	boost::python::def("setMarkerType", &set_marker_type);
	boost::python::def("setMarkerTypeLocal", &set_marker_type_local);
	boost::python::def("setMarkerText", &set_marker_text);
	boost::python::def("setMarkerTextLocal", &set_marker_text_local);
	boost::python::def("setMarkerShape", &set_marker_shape);
	boost::python::def("setMarkerShapeLocal", &set_marker_shape_local);
	boost::python::def("setMarkerPos", static_cast<void(*)(sqf_string_const_ref,const vector3 &)>(&set_marker_pos));
	boost::python::def("setMarkerPosLocal", static_cast<void(*)(sqf_string_const_ref,const vector3 &)>(&set_marker_pos_local));
	boost::python::def("setMarkerPos", static_cast<void(*)(sqf_string_const_ref,const vector2 &)>(&set_marker_pos));
	boost::python::def("setMarkerPosLocal", static_cast<void(*)(sqf_string_const_ref,const vector2 &)>(&set_marker_pos_local));
	boost::python::def("setMarkerBrush", &set_marker_brush);
	boost::python::def("setMarkerBrushLocal", &set_marker_brush_local);
	boost::python::def("setMarkerColor", &set_marker_color);
	boost::python::def("setMarkerColorLocal", &set_marker_color_local);
	boost::python::def("setMarkerAlpha", &set_marker_alpha);
	boost::python::def("setMarkerAlphaLocal", &set_marker_alpha_local);
	boost::python::def("setMarkerDir", &set_marker_dir);
	boost::python::def("setMarkerDirLocal", &set_marker_dir_local);
	boost::python::def("markerAlpha", &marker_alpha);
	boost::python::def("markerDir", &marker_dir);
	boost::python::def("markerBrush", &marker_brush);
	boost::python::def("markerColor", &marker_color);
	boost::python::def("markerShape", &marker_shape);
	boost::python::def("markerText", &marker_text);
	boost::python::def("markerType", &marker_type);
	boost::python::def("getMarkerColor", &get_marker_color);
	boost::python::def("getMarkerType", &get_marker_type);
	boost::python::def("getMarkerPos", &get_marker_pos);
	boost::python::def("getMarkerSize", &get_marker_size);
	boost::python::def("allMapMarkers", &all_map_markers);
	boost::python::def("setImportance", &set_importance);
	boost::python::def("setSide", &set_side);
	boost::python::def("setPosition", &set_position);
	boost::python::def("deleteLocation", &delete_location);
	boost::python::def("attachObject", &attach_object);
	boost::python::def("isNull", static_cast<bool(*)(const location &)>(&is_null));
	boost::python::def("rectangular", &rectangular);
	boost::python::def("in", static_cast<bool(*)(const vector3 &,const location &)>(&in));
	boost::python::def("direction", static_cast<float(*)(const location &)>(&direction));
	boost::python::def("importance", &importance);
	boost::python::def("distance", static_cast<float(*)(const location &,const location &)>(&distance));
	boost::python::def("distance", static_cast<float(*)(const location &,const vector3 &)>(&distance));
	boost::python::def("distance", static_cast<float(*)(const vector3 &,const location &)>(&distance));
	boost::python::def("nearestLocation", static_cast<location(*)(const vector3 &,sqf_string_const_ref)>(&nearest_location));
	boost::python::def("nearestLocation", static_cast<location(*)(const object &,sqf_string_const_ref)>(&nearest_location));
	boost::python::def("nearestLocationWithDubbing", static_cast<location(*)(const vector3 &)>(&nearest_location_with_dubbing));
	boost::python::def("nearestLocationWithDubbing", static_cast<location(*)(const object &)>(&nearest_location_with_dubbing));
	boost::python::def("attachedObject", &attached_object);
	boost::python::def("getSide", static_cast<side(*)(const location &)>(&get_side));
	boost::python::def("position", static_cast<vector3(*)(const location &)>(&position));
	boost::python::def("size", &size);
	boost::python::def("getPos", static_cast<vector3(*)(const location &)>(&get_pos));
	boost::python::def("locationPosition", &location_position);
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const vector3 &,sqf_string_list_const_ref,float)>(&nearest_locations));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const vector3 &,sqf_string_list_const_ref,float,const vector3 &)>(&nearest_locations));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const vector3 &,sqf_string_list_const_ref,float,const object &)>(&nearest_locations));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const object &,sqf_string_list_const_ref,float)>(&nearest_locations));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const object &,sqf_string_list_const_ref,float,const vector3 &)>(&nearest_locations));
	boost::python::def("nearestLocations", static_cast<std::vector<location>(*)(const object &,sqf_string_list_const_ref,float,const object &)>(&nearest_locations));
	boost::python::def("allVariables", static_cast<sqf_return_string_list(*)(const location &)>(&all_variables));
	boost::python::def("name", static_cast<sqf_return_string(*)(const location &)>(&name));
	boost::python::def("type", static_cast<sqf_return_string(*)(const location &)>(&type));
	boost::python::def("className", &class_name);
	boost::python::def("createLocation", static_cast<location(*)(sqf_string_const_ref,const vector3 &,float,float)>(&create_location));
	boost::python::def("createLocation", static_cast<location(*)(sqf_string_const_ref,const vector2 &,float,float)>(&create_location));
	boost::python::def("createLocation", static_cast<location(*)(sqf_string_const_ref,const object &,float,float)>(&create_location));
	boost::python::def("locationNull", &location_null);
	boost::python::def("setRectangular", &set_rectangular);
	boost::python::def("setSize", &set_size);
	boost::python::def("setName", static_cast<void(*)(const location &,sqf_string_const_ref)>(&set_name));
	boost::python::def("setSpeech", &set_speech);
	boost::python::def("setText", &set_text);
	boost::python::def("setType", &set_type);
	boost::python::def("removeDrawIcon", &remove_draw_icon);
	boost::python::def("removeDrawLinks", &remove_draw_links);
	boost::python::def("setDrawIcon", &set_draw_icon);
	boost::python::def("updateDrawIcon", &update_draw_icon);
	boost::python::def("drawArrow", &draw_arrow);
	boost::python::def("drawEllipse", &draw_ellipse);
	boost::python::def("drawLine", &draw_line);
	boost::python::def("drawLink", &draw_link);
	boost::python::def("drawLocation", &draw_location);
	boost::python::def("drawPolygon", &draw_polygon);
}

BOOST_PYTHON_MODULE(__sqf_misc)
{
	boost::python::def("canTriggerDynamicSimulation", &can_trigger_dynamic_simulation);
	boost::python::def("enableSimulation", &enable_simulation);
	boost::python::def("enableSimulationGlobal", &enable_simulation_global);
	boost::python::def("simulationEnabled", &simulation_enabled);
	boost::python::def("triggerDynamicSimulation", &trigger_dynamic_simulation);
	boost::python::def("setDynamicSimulationDistance", &set_dynamic_simulation_distance);
	boost::python::def("enableDynamicSimulation", static_cast<void(*)(const object &,bool)>(&enable_dynamic_simulation));
	boost::python::def("enableDynamicSimulation", static_cast<void(*)(const group &,bool)>(&enable_dynamic_simulation));
	boost::python::def("diagDynamicSimulationEnd", &diag_dynamic_simulation_end);
	boost::python::def("dynamicSimulationDistance", &dynamic_simulation_distance);
	boost::python::def("dynamicSimulationDistanceCoef", &dynamic_simulation_distance_coef);
	boost::python::def("dynamicSimulationEnabled", static_cast<bool(*)(const object &)>(&dynamic_simulation_enabled));
	boost::python::def("dynamicSimulationEnabled", static_cast<bool(*)(const group &)>(&dynamic_simulation_enabled));
	boost::python::def("enableDynamicSimulationSystem", &enable_dynamic_simulation_system);
	boost::python::def("dynamicSimulationSystemEnabled", &dynamic_simulation_system_enabled);
	boost::python::def("setDynamicSimulationDistanceCoef", &set_dynamic_simulation_distance_coef);
	boost::python::def("activateAddons", &activate_addons);
	boost::python::def("enableSaving", static_cast<void(*)(bool)>(&enable_saving));
	boost::python::def("enableSaving", static_cast<void(*)(bool,bool)>(&enable_saving));
	boost::python::def("getDlcs", &get_dlcs);
	boost::python::def("armoryPoints", &armory_points);
	boost::python::def("cadetMode", &cadet_mode);
	boost::python::def("cheatsEnabled", &cheats_enabled);
	boost::python::def("difficulty", &difficulty);
	boost::python::def("distributionRegion", &distribution_region);
	boost::python::def("finishMissionInit", &finish_mission_init);
	boost::python::def("forceEnd", &force_end);
	boost::python::def("freeLook", &free_look);
	boost::python::def("getTotalDlcUsageTime", &get_total_dlc_usage_time);
	boost::python::def("isAutotest", &is_autotest);
	boost::python::def("isFilepatchingEnabled", &is_filepatching_enabled);
	boost::python::def("isInstructorFigureEnabled", &is_instructor_figure_enabled);
	boost::python::def("isSteamMission", &is_steam_mission);
	boost::python::def("isStreamFriendlyUiEnabled", &is_stream_friendly_ui_enabled);
	boost::python::def("loadGame", &load_game);
	boost::python::def("logEntities", &log_entities);
	boost::python::def("markAsFinishedOnSteam", &mark_as_finished_on_steam);
	boost::python::def("missionDifficulty", &mission_difficulty);
	boost::python::def("runInitScript", &run_init_script);
	boost::python::def("reversedMouseY", &reversed_mouse_y);
	boost::python::def("teamSwitchEnabled", &team_switch_enabled);
	boost::python::def("teamSwitch", &team_switch);
	boost::python::def("systemOfUnits", &system_of_units);
	boost::python::def("selectNoPlayer", &select_no_player);
	boost::python::def("savingEnabled", &saving_enabled);
	boost::python::def("difficultyEnabled", &difficulty_enabled);
	boost::python::def("activateKey", &activate_key);
	boost::python::def("deActivateKey", &de_activate_key);
	boost::python::def("isKeyActive", &is_key_active);
	boost::python::def("deleteCollection", &delete_collection);
	boost::python::def("deleteIdentity", &delete_identity);
	boost::python::def("deleteSite", &delete_site);
	boost::python::def("deleteStatus", &delete_status);
	boost::python::def("enableSentences", &enable_sentences);
	boost::python::def("enableStressDamage", &enable_stress_damage);
	boost::python::def("enableTeamSwitch", &enable_team_switch);
	boost::python::def("getDlcusageTime", &get_dlcusage_time);
	boost::python::def("dissolveTeam", &dissolve_team);
	boost::python::def("isDlcavailable", &is_dlcavailable);
	boost::python::def("setArmoryPoints", &set_armory_points);
	boost::python::def("setSystemOfUnits", &set_system_of_units);
	boost::python::def("unlockAchievement", &unlock_achievement);
	boost::python::def("addLiveStats", &add_live_stats);
	boost::python::def("loadIdentity", &load_identity);
	boost::python::def("loadStatus", &load_status);
	boost::python::def("saveStatus", &save_status);
	boost::python::def("saveGame", &save_game);
	boost::python::def("saveJoysticks", &save_joysticks);
	boost::python::def("roleDescription", &role_description);
	boost::python::def("setStatValue", &set_stat_value);
	boost::python::def("hostMission", &host_mission);
	boost::python::def("playMission", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref)>(&play_mission));
	boost::python::def("playMission", static_cast<void(*)(sqf_string_const_ref,sqf_string_const_ref,bool)>(&play_mission));
	boost::python::def("playMission", static_cast<void(*)(sqf_string_const_ref,const config &)>(&play_mission));
	boost::python::def("playMission", static_cast<void(*)(sqf_string_const_ref,const config &,bool)>(&play_mission));
	boost::python::def("playScriptedMission", static_cast<void(*)(sqf_string_const_ref,const code &)>(&play_scripted_mission));
	boost::python::def("playScriptedMission", static_cast<void(*)(sqf_string_const_ref,const code &,const config &)>(&play_scripted_mission));
	boost::python::def("playScriptedMission", static_cast<void(*)(sqf_string_const_ref,const code &,const config &,bool)>(&play_scripted_mission));
	boost::python::def("difficultyOption", &difficulty_option);
	boost::python::def("enableWeaponDisassembly", static_cast<void(*)(bool)>(&enable_weapon_disassembly));
	boost::python::def("createSite", &create_site);
	boost::python::def("saveIdentity", &save_identity);
	boost::python::def("setTrafficDensity", &set_traffic_density);
	boost::python::def("setTrafficGap", &set_traffic_gap);
	boost::python::def("setTrafficSpeed", &set_traffic_speed);
	boost::python::def("enableTraffic", &enable_traffic);
	boost::python::def("setTrafficDistance", &set_traffic_distance);
	boost::python::def("inRangeOfArtillery", &in_range_of_artillery);
	boost::python::def("getArtilleryEta", &get_artillery_eta);
	boost::python::def("enableEngineArtillery", &enable_engine_artillery);
	boost::python::def("getArtilleryComputerSettings", &get_artillery_computer_settings);
	boost::python::def("language", &language);
	boost::python::def("libraryCredits", &library_credits);
	boost::python::def("libraryDisclaimers", &library_disclaimers);
	boost::python::def("productVersion", &product_version);
	boost::python::def("drawLine3D", &draw_line_3d);
	boost::python::def("drawIcon3D", &draw_icon_3d);
	boost::python::def("setParticleParams", static_cast<void(*)(const object &,const rv_particle_array &)>(&set_particle_params));
	boost::python::def("setParticleRandom", &set_particle_random);
	boost::python::def("setParticleCircle", &set_particle_circle);
	boost::python::def("setParticleFire", &set_particle_fire);
	boost::python::def("setParticleClass", &set_particle_class);
	boost::python::def("drop", &drop);
	boost::python::def("setParticleParams", static_cast<void(*)()>(&set_particle_params));
	boost::python::def("particlesQuality", &particles_quality);
	boost::python::def("setDropInterval", &set_drop_interval);
	boost::python::def("detectedMines", &detected_mines);
	boost::python::def("countSide", &count_side);
	boost::python::def("setAirportSide", static_cast<void(*)(float,const side &)>(&set_airport_side));
	boost::python::def("setAirportSide", static_cast<void(*)(const object &,const side &)>(&set_airport_side));
	boost::python::def("revealMine", &reveal_mine);
	boost::python::def("mineDetectedBy", &mine_detected_by);
	boost::python::def("addScoreSide", &add_score_side);
	boost::python::def("airportSide", static_cast<void(*)(int)>(&airport_side));
	boost::python::def("airportSide", static_cast<void(*)(const object &)>(&airport_side));
	boost::python::def("scoreSide", &score_side);
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
	boost::python::def("logNetworkTerminate", &log_network_terminate);
	boost::python::def("serverTime", &server_time);
	boost::python::def("serverName", &server_name);
	boost::python::def("local", static_cast<bool(*)(const object &)>(&local));
	boost::python::def("local", static_cast<bool(*)(const group &)>(&local));
	boost::python::def("isServer", &is_server);
	boost::python::def("isMultiplayer", &is_multiplayer);
	boost::python::def("isDedicated", &is_dedicated);
	boost::python::def("didJip", &did_jip);
	boost::python::def("clientOwner", &client_owner);
	boost::python::def("estimatedEndServerTime", &estimated_end_server_time);
	boost::python::def("getclientstate", &getclientstate);
	boost::python::def("hasInterface", &has_interface);
	boost::python::def("didJipowner", &did_jipowner);
	boost::python::def("exportJipmessages", &export_jipmessages);
	boost::python::def("leaderboardDeInit", &leaderboard_de_init);
	boost::python::def("leaderboardInit", &leaderboard_init);
	boost::python::def("leaderboardRequestRowsFriends", &leaderboard_request_rows_friends);
	boost::python::def("leaderboardState", &leaderboard_state);
	boost::python::def("netId", static_cast<sqf_return_string(*)(const object &)>(&net_id));
	boost::python::def("netId", static_cast<sqf_return_string(*)(const group &)>(&net_id));
	boost::python::def("objectFromNetId", &object_from_net_id);
	boost::python::def("owner", &owner);
	boost::python::def("publicVariable", &public_variable);
	boost::python::def("publicVariableServer", &public_variable_server);
	boost::python::def("publicVariableClient", &public_variable_client);
	boost::python::def("serverCommand", &server_command);
	boost::python::def("serverCommandAvailable", &server_command_available);
	boost::python::def("serverCommandExecutable", &server_command_executable);
	boost::python::def("getClientStateNumber", &get_client_state_number);
	boost::python::def("setOwner", &set_owner);
	boost::python::def("isMultiplayerSolo", &is_multiplayer_solo);
	boost::python::def("isRemoteExecuted", &is_remote_executed);
	boost::python::def("isRemoteExecutedJip", &is_remote_executed_jip);
	boost::python::def("remoteExec", static_cast<game_value(*)(const game_value &,sqf_string_const_ref,std::variant<int, object, sqf_string_const_ref_wrapper, side, group, std::reference_wrapper<const std::vector<game_value> > >,std::optional<std::variant<sqf_string_const_ref_wrapper, bool, object, group> >)>(&remote_exec));
	boost::python::def("remoteExecCall", static_cast<game_value(*)(const game_value &,sqf_string_const_ref,std::variant<int, object, sqf_string_const_ref_wrapper, side, group, std::reference_wrapper<const std::vector<game_value> > >,std::optional<std::variant<sqf_string_const_ref_wrapper, bool, object, group> >)>(&remote_exec_call));
	boost::python::def("servercommand", &serverCommand);
	boost::python::def("turretLocal", &turret_local);
	boost::python::def("turretOwner", &turret_owner);
	boost::python::def("admin", &admin);
	boost::python::def("remoteExecutedOwner", &remote_executed_owner);
}

BOOST_PYTHON_MODULE(__sqf_position)
{
	boost::python::def("getPos", static_cast<vector3(*)(const object &)>(&get_pos));
	boost::python::def("getPosAsl", &get_pos_asl);
	boost::python::def("getPosAtl", &get_pos_atl);
	boost::python::def("getPosAslw", &get_pos_aslw);
	boost::python::def("visiblePosition", &visible_position);
	boost::python::def("visiblePositionAsl", &visible_position_asl);
	boost::python::def("position", static_cast<vector3(*)(const object &)>(&position));
	boost::python::def("positionCameraToWorld", &position_camera_to_world);
	boost::python::def("getPosVisual", &get_pos_visual);
	boost::python::def("getPosAslVisual", &get_pos_asl_visual);
	boost::python::def("getPosAtlVisual", &get_pos_atl_visual);
	boost::python::def("aimPos", &aim_pos);
	boost::python::def("eyePos", &eye_pos);
	boost::python::def("eyeDirection", &eye_direction);
	boost::python::def("setPos", &set_pos);
	boost::python::def("setPosAsl", &set_pos_asl);
	boost::python::def("setPosAsl2", &set_pos_asl2);
	boost::python::def("setPosAslw", &set_pos_aslw);
	boost::python::def("setPosAtl", &set_pos_atl);
	boost::python::def("aglToAsl", &agl_to_asl);
	boost::python::def("aslToAgl", &asl_to_agl);
	boost::python::def("atlToAsl", &atl_to_asl);
	boost::python::def("aslToAtl", &asl_to_atl);
	boost::python::def("getPos", static_cast<vector3(*)(const object &,float,float)>(&get_pos));
	boost::python::def("getPos", static_cast<vector3(*)(const vector3 &,float,float)>(&get_pos));
	boost::python::def("getRelPos", static_cast<vector3(*)(const object &,float,float)>(&get_rel_pos));
	boost::python::def("getRelPos", static_cast<vector3(*)(const vector3 &,float,float)>(&get_rel_pos));
	boost::python::def("getRelDir", static_cast<float(*)(const object &,const object &)>(&get_rel_dir));
	boost::python::def("getRelDir", static_cast<float(*)(const object &,const vector3 &)>(&get_rel_dir));
	boost::python::def("setVectorUp", &set_vector_up);
	boost::python::def("setVectorDirAndUp", &set_vector_dir_and_up);
	boost::python::def("setPosWorld", &set_pos_world);
	boost::python::def("getPosWorld", &get_pos_world);
	boost::python::def("getTerrainHeightAsl", &get_terrain_height_asl);
	boost::python::def("worldToModel", &world_to_model);
	boost::python::def("worldToModelVisual", &world_to_model_visual);
	boost::python::def("velocityModelSpace", &velocity_model_space);
	boost::python::def("vectorUpVisual", &vector_up_visual);
	boost::python::def("vectorUp", &vector_up);
	boost::python::def("modelToWorldVisual", &model_to_world_visual);
	boost::python::def("worldToScreen", static_cast<vector2(*)(const vector3 &)>(&world_to_screen));
	boost::python::def("worldToScreen", static_cast<vector2(*)(const vector3 &,bool &)>(&world_to_screen));
	boost::python::def("setVectorDir", &set_vector_dir);
	boost::python::def("setVelocity", &set_velocity);
	boost::python::def("velocity", &velocity);
	boost::python::def("direction", static_cast<float(*)(const object &)>(&direction));
	boost::python::def("vectorDir", &vector_dir);
	boost::python::def("vectorDirVisual", &vector_dir_visual);
	boost::python::def("selectionPositon", &selection_positon);
	boost::python::def("boundingBox", &bounding_box);
	boost::python::def("boundingBoxReal", &bounding_box_real);
	boost::python::def("boundingCenter", &bounding_center);
	boost::python::def("setDir", &set_dir);
	boost::python::def("getDir", static_cast<float(*)(t_sqf_in_area_position,t_sqf_in_area_position)>(&get_dir));
	boost::python::def("setDirection", &set_direction);
	boost::python::def("setVelocityModelSpace", &set_velocity_model_space);
	boost::python::def("setVelocityTransformation", &set_velocity_transformation);
	boost::python::def("weaponDirection", &weapon_direction);
	boost::python::def("getDir", static_cast<float(*)(const object &)>(&get_dir));
	boost::python::def("getDirVisual", &get_dir_visual);
	boost::python::def("unitAimPosition", &unit_aim_position);
	boost::python::def("unitAimPositionVisual", &unit_aim_position_visual);
	boost::python::def("modelToWorldVisualWorld", &model_to_world_visual_world);
	boost::python::def("modelToWorldWorld", &model_to_world_world);
	boost::python::def("screenToWorld", &screen_to_world);
	boost::python::def("modelToWorld", &model_to_world);
	boost::python::def("inArea", static_cast<bool(*)(t_sqf_in_area_position,const object &)>(&in_area));
	boost::python::def("inArea", static_cast<bool(*)(t_sqf_in_area_position,sqf_string_const_ref)>(&in_area));
	boost::python::def("inArea", static_cast<bool(*)(t_sqf_in_area_position,t_sqf_in_area_position,float,float,float,bool,std::optional<float>)>(&in_area));
	boost::python::def("inArea", static_cast<bool(*)(const object &,const location &)>(&in_area));
	boost::python::def("inArea", static_cast<bool(*)(t_sqf_in_area_position,const location &)>(&in_area));
	boost::python::def("inAreaArray", static_cast<bool(*)(intercept::sqf::t_sqf_in_area_position_array,const object &)>(&in_area_array));
	boost::python::def("inAreaArray", static_cast<bool(*)(intercept::sqf::t_sqf_in_area_position_array,sqf_string_const_ref)>(&in_area_array));
	boost::python::def("inAreaArray", static_cast<bool(*)(intercept::sqf::t_sqf_in_area_position_array,t_sqf_in_area_position,float,float,float,bool,std::optional<float>)>(&in_area_array));
	boost::python::def("inAreaArray", static_cast<bool(*)(intercept::sqf::t_sqf_in_area_position_array,const location &)>(&in_area_array));
	boost::python::def("isFlatEmpty", &is_flat_empty);
	boost::python::def("inPolygon", &in_polygon);
	boost::python::def("findEmptyPosition", &find_empty_position);
	boost::python::def("findEmptyPositionReady", &find_empty_position_ready);
	boost::python::def("distance2D", &distance_2d);
	boost::python::def("distanceSqr", &distance_sqr);
	boost::python::def("nearEntities", &near_entities);
	boost::python::def("distance", static_cast<float(*)(std::variant<object, vector3>,std::variant<object, vector3>)>(&distance));
	boost::python::def("setVehiclePosition", &set_vehicle_position);
	boost::python::def("buildingExit", &building_exit);
	boost::python::def("buildingPos", &building_pos);
	boost::python::class_<rv_bounding_box>("rvBoundingBox")
		.def_readwrite("min", &rv_bounding_box::min)
		.def_readwrite("max", &rv_bounding_box::max);
}

BOOST_PYTHON_MODULE(__sqf_rotorlib)
{
	boost::python::def("getRotorBrakeRtd", &get_rotor_brake_rtd);
	boost::python::def("getWingsOrientationRtd", &get_wings_orientation_rtd);
	boost::python::def("getWingsPositionRtd", &get_wings_position_rtd);
	boost::python::def("isAutoTrimOnRtd", &is_auto_trim_on_rtd);
	boost::python::def("isObjectRtd", &is_object_rtd);
	boost::python::def("numberOfEnginesRtd", &number_of_engines_rtd);
	boost::python::def("stopEngineRtd", &stop_engine_rtd);
	boost::python::def("enableAutoStartUpRtd", &enable_auto_start_up_rtd);
	boost::python::def("enableAutoTrimRtd", &enable_auto_trim_rtd);
	boost::python::def("enginesIsOnRtd", &engines_is_on_rtd);
	boost::python::def("enginesRpmRtd", &engines_rpm_rtd);
	boost::python::def("enginesTorqueRtd", &engines_torque_rtd);
	boost::python::def("setRotorBrakeRtd", &set_rotor_brake_rtd);
	boost::python::def("setActualCollectiveRtd", &set_actual_collective_rtd);
	boost::python::def("setCustomWeightRtd", &set_custom_weight_rtd);
	boost::python::def("rotorsForcesRtd", &rotors_forces_rtd);
	boost::python::def("wingsForcesRtd", &wings_forces_rtd);
	boost::python::def("rotorsRpmRtd", &rotors_rpm_rtd);
	boost::python::def("weightRtd", &weight_rtd);
	boost::python::def("setBrakesRtd", &set_brakes_rtd);
	boost::python::def("setEngineRpmRtd", &set_engine_rpm_rtd);
	boost::python::def("setWantedRpmRtd", &set_wanted_rpm_rtd);
	boost::python::def("difficultyEnabledRtd", &difficulty_enabled_rtd);
	boost::python::def("clearForcesRtd", &clear_forces_rtd);
	boost::python::def("airDensityRtd", &air_density_rtd);
	boost::python::def("collectiveRtd", &collective_rtd);
	boost::python::def("isStressDamageEnabled", &is_stress_damage_enabled);
	boost::python::class_<rv_forces_rtd>("rvForcesRtd")
		.def_readwrite("roll", &rv_forces_rtd::roll)
		.def_readwrite("pitch", &rv_forces_rtd::pitch)
		.def_readwrite("collective", &rv_forces_rtd::collective);
	boost::python::class_<rv_weight_rtd>("rvWeightRtd", boost::python::init<float,float,float,float,float>())
		.def("fromVector", &rv_weight_rtd::from_vector).staticmethod("fromVector")
		.def_readwrite("fuselage", &rv_weight_rtd::fuselage)
		.def_readwrite("crew", &rv_weight_rtd::crew)
		.def_readwrite("fuel", &rv_weight_rtd::fuel)
		.def_readwrite("custom", &rv_weight_rtd::custom)
		.def_readwrite("weapons", &rv_weight_rtd::weapons);
}

BOOST_PYTHON_MODULE(__sqf_sound)
{
	boost::python::def("soundVolume", &sound_volume);
	boost::python::def("nameSound", &name_sound);
	boost::python::def("setNameSound", &set_name_sound);
	boost::python::def("setSpeaker", &set_speaker);
	boost::python::def("say", static_cast<void(*)(const object &,sqf_string_const_ref)>(&say));
	boost::python::def("pitch", &pitch);
	boost::python::def("setPitch", &set_pitch);
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
	boost::python::def("directSay", &direct_say);
	boost::python::def("playMusic", static_cast<void(*)(sqf_string_const_ref)>(&play_music));
	boost::python::def("playMusic", static_cast<void(*)(sqf_string_const_ref,float)>(&play_music));
	boost::python::def("playSound", static_cast<void(*)(sqf_string_const_ref)>(&play_sound));
	boost::python::def("playSound", static_cast<void(*)(sqf_string_const_ref,bool)>(&play_sound));
	boost::python::def("preloadSound", &preload_sound);
	boost::python::def("playSound3D", static_cast<void(*)(sqf_string_const_ref,const object &)>(&play_sound_3d));
	boost::python::def("playSound3D", static_cast<void(*)(sqf_string_const_ref,const object &,vector3 &)>(&play_sound_3d));
	boost::python::def("playSound3D", static_cast<void(*)(sqf_string_const_ref,const object &,vector3 &,float)>(&play_sound_3d));
	boost::python::def("playSound3D", static_cast<void(*)(sqf_string_const_ref,const object &,vector3 &,float,float)>(&play_sound_3d));
	boost::python::def("playSound3D", static_cast<void(*)(sqf_string_const_ref,const object &,vector3 &,float,float,float)>(&play_sound_3d));
	boost::python::def("getAllEnvSoundControllers", &get_all_env_sound_controllers);
	boost::python::def("getAllSoundControllers", &get_all_sound_controllers);
	boost::python::def("fadeMusic", &fade_music);
	boost::python::def("fadeRadio", &fade_radio);
	boost::python::def("fadeSound", &fade_sound);
	boost::python::def("fadeSpeech", &fade_speech);
	boost::python::def("getEnvSoundController", &get_env_sound_controller);
	boost::python::def("getSoundController", &get_sound_controller);
	boost::python::def("getSoundControllerResult", &get_sound_controller_result);
	boost::python::def("radioVolume", &radio_volume);
	boost::python::def("musicVolume", &music_volume);
	boost::python::def("removeAllMusicEventHandlers", &remove_all_music_event_handlers);
	boost::python::def("addMusicEventHandler", static_cast<float(*)(sqf_string_const_ref,const code &)>(&add_music_event_handler));
	boost::python::def("addMusicEventHandler", static_cast<float(*)(sqf_string_const_ref,sqf_string_const_ref)>(&add_music_event_handler));
	boost::python::def("removeMusicEventHandler", &remove_music_event_handler);
	boost::python::def("setMusicEventHandler", &set_music_event_handler);
}

BOOST_PYTHON_MODULE(__sqf_tasks)
{
	boost::python::def("setFormationTask", &set_formation_task);
	boost::python::def("formationTask", &formation_task);
	boost::python::def("unregisterTask", &unregister_task);
	boost::python::def("currentTask", &current_task);
	boost::python::def("priority", &priority);
	boost::python::def("taskCompleted", &task_completed);
	boost::python::def("taskParent", &task_parent);
	boost::python::def("taskState", &task_state);
	boost::python::def("type", static_cast<sqf_return_string(*)(task)>(&type));
	boost::python::def("registeredTasks", &registered_tasks);
	boost::python::def("simpleTasks", &simple_tasks);
	boost::python::def("taskDescription", &task_description);
	boost::python::def("taskDestination", &task_destination);
	boost::python::def("taskAlwaysVisible", &task_always_visible);
	boost::python::def("taskCustomData", &task_custom_data);
	boost::python::def("taskMarkerOffset", &task_marker_offset);
	boost::python::def("taskType", &task_type);
	boost::python::def("createSimpleTask", &create_simple_task);
	boost::python::def("removeSimpleTask", &remove_simple_task);
	boost::python::def("sendTask", static_cast<task(*)(const team_member &,const team_member &,sqf_string_const_ref,float)>(&send_task));
	boost::python::def("sendTask", static_cast<task(*)(const team_member &,const team_member &,sqf_string_const_ref,const task &,float,std::vector<rv_task_variables> &)>(&send_task));
	boost::python::def("sendTaskResult", &send_task_result);
	boost::python::def("setCurrentTask", &set_current_task);
	boost::python::def("setSimpleTaskAlwaysVisible", &set_simple_task_always_visible);
	boost::python::def("setSimpleTaskCustomData", &set_simple_task_custom_data);
	boost::python::def("setSimpleTaskDescription", &set_simple_task_description);
	boost::python::def("setSimpleTaskDestination", &set_simple_task_destination);
	boost::python::def("setSimpleTaskTarget", &set_simple_task_target);
	boost::python::def("setSimpleTaskType", &set_simple_task_type);
	boost::python::def("setTaskMarkerOffset", &set_task_marker_offset);
	boost::python::def("setTaskResult", &set_task_result);
	boost::python::def("setTaskState", &set_task_state);
	boost::python::def("currentTasks", &current_tasks);
	boost::python::def("registerTask", &register_task);
	boost::python::def("cancelSimpleTaskDestination", &cancel_simple_task_destination);
	boost::python::def("createDiaryLink", &create_diary_link);
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&create_diary_record));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,const task &)>(&create_diary_record));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,const task &,sqf_string_const_ref)>(&create_diary_record));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&create_diary_record));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,const task &)>(&create_diary_record));
	boost::python::def("createDiaryRecord", static_cast<sqf_return_string(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,const task &,sqf_string_const_ref)>(&create_diary_record));
	boost::python::def("createDiarySubject", static_cast<float(*)(const object &,sqf_string_const_ref,sqf_string_const_ref)>(&create_diary_subject));
	boost::python::def("createDiarySubject", static_cast<float(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&create_diary_subject));
	boost::python::def("processDiaryLink", &process_diary_link);
	boost::python::def("diarySubjectExists", &diary_subject_exists);
	boost::python::def("selectDiarySubject", &select_diary_subject);
	boost::python::def("setDebriefingText", &set_debriefing_text);
	boost::python::def("enableDebriefingStats", &enable_debriefing_stats);
	boost::python::def("briefingName", &briefing_name);
	boost::python::def("disableDebriefingStats", &disable_debriefing_stats);
	boost::python::def("debriefingText", &debriefing_text);
	boost::python::def("onBriefingGroup", &on_briefing_group);
	boost::python::def("onBriefingNotes", &on_briefing_notes);
	boost::python::def("onBriefingPlan", &on_briefing_plan);
	boost::python::def("onBriefingTeamSwitch", &on_briefing_team_switch);
	boost::python::def("objStatus", &obj_status);
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
	boost::python::def("setUserMfdValue", &set_user_mfd_value);
	boost::python::def("forgetTarget", static_cast<void(*)(const object &,const object)>(&forget_target));
	boost::python::def("forgetTarget", static_cast<void(*)(const group &,const object)>(&forget_target));
	boost::python::def("targets", &targets);
	boost::python::def("isUavConnectable", &is_uav_connectable);
	boost::python::def("cameraOn", &camera_on);
	boost::python::def("canUnloadInCombat", &can_unload_in_combat);
	boost::python::def("aisFinishHeal", &ais_finish_heal);
	boost::python::def("setHideBehind", &set_hide_behind);
	boost::python::def("in", static_cast<bool(*)(const object &,const object &)>(&in));
	boost::python::def("targetKnowledge", &target_knowledge);
	boost::python::def("targetsAggregate", &targets_aggregate);
	boost::python::def("targetsQuery", &targets_query);
	boost::python::def("action", &action);
	boost::python::def("animationState", &animation_state);
	boost::python::def("assignedTeam", &assigned_team);
	boost::python::def("assignedVehicle", &assigned_vehicle);
	boost::python::def("canFire", &can_fire);
	boost::python::def("canMove", &can_move);
	boost::python::def("canStand", &can_stand);
	boost::python::def("captive", &captive);
	boost::python::def("captiveNum", &captive_num);
	boost::python::def("currentCommand", &current_command);
	boost::python::def("currentVisionMode", &current_vision_mode);
	boost::python::def("currentZeroing", &current_zeroing);
	boost::python::def("face", &face);
	boost::python::def("faction", &faction);
	boost::python::def("forceRespawn", &force_respawn);
	boost::python::def("formLeader", &form_leader);
	boost::python::def("formationDirection", &formation_direction);
	boost::python::def("formationLeader", &formation_leader);
	boost::python::def("getAnimAimPrecision", &get_anim_aim_precision);
	boost::python::def("getAnimSpeedCoef", &get_anim_speed_coef);
	boost::python::def("getBleedingRemaining", &get_bleeding_remaining);
	boost::python::def("getBurningValue", &get_burning_value);
	boost::python::def("getFatigue", &get_fatigue);
	boost::python::def("getOxygenRemaining", &get_oxygen_remaining);
	boost::python::def("getPlayerUid", &get_player_uid);
	boost::python::def("getStamina", &get_stamina);
	boost::python::def("getStatValue", &get_stat_value);
	boost::python::def("getSuppression", &get_suppression);
	boost::python::def("getWeaponSway", &get_weapon_sway);
	boost::python::def("gunner", &gunner);
	boost::python::def("handsHit", &hands_hit);
	boost::python::def("hideBody", &hide_body);
	boost::python::def("incapacitatedState", &incapacitated_state);
	boost::python::def("isAbleToBreathe", &is_able_to_breathe);
	boost::python::def("isAimPrecisionEnabled", &is_aim_precision_enabled);
	boost::python::def("isBleeding", &is_bleeding);
	boost::python::def("isForcedWalk", &is_forced_walk);
	boost::python::def("isFormationLeader", &is_formation_leader);
	boost::python::def("isPlayer", &is_player);
	boost::python::def("isSprintAllowed", &is_sprint_allowed);
	boost::python::def("isStaminaEnabled", &is_stamina_enabled);
	boost::python::def("isTurnedOut", &is_turned_out);
	boost::python::def("isUavconnected", &is_uavconnected);
	boost::python::def("isWalking", &is_walking);
	boost::python::def("isWeaponDeployed", &is_weapon_deployed);
	boost::python::def("isWeaponRested", &is_weapon_rested);
	boost::python::def("move", static_cast<void(*)(const object &,const vector3 &)>(&move));
	boost::python::def("move", static_cast<void(*)(const group &,const vector3 &)>(&move));
	boost::python::def("moveInAny", &move_in_any);
	boost::python::def("moveInCargo", &move_in_cargo);
	boost::python::def("moveInCommander", &move_in_commander);
	boost::python::def("moveInDriver", &move_in_driver);
	boost::python::def("moveInGunner", &move_in_gunner);
	boost::python::def("moveInTurret", &move_in_turret);
	boost::python::def("remoteControl", &remote_control);
	boost::python::def("assignedVehicleRole", &assigned_vehicle_role);
	boost::python::def("getGroup", &get_group);
	boost::python::def("groupSelectedUnits", &group_selected_units);
	boost::python::def("squadParams", &squad_params);
	boost::python::def("unitReady", &unit_ready);
	boost::python::def("unitAddons", &unit_addons);
	boost::python::def("getAllOwnedMines", &get_all_owned_mines);
	boost::python::def("removeAllOwnedMines", &remove_all_owned_mines);
	boost::python::def("unitIsUav", &unit_is_uav);
	boost::python::def("addOwnedMine", &add_owned_mine);
	boost::python::def("addPlayerScores", &add_player_scores);
	boost::python::def("assignAsTurret", static_cast<void(*)(const object &,const object &,const std::vector<int> &)>(&assign_as_turret));
	boost::python::def("connectTerminalToUav", &connect_terminal_to_uav);
	boost::python::def("disableUavConnectability", &disable_uav_connectability);
	boost::python::def("enableUavConnectAbility", &enable_uav_connect_ability);
	boost::python::def("enableWeaponDisassembly", static_cast<void(*)(const object &,bool)>(&enable_weapon_disassembly));
	boost::python::def("findNearestEnemy", static_cast<object(*)(const object &,std::variant<std::reference_wrapper<const vector2>, std::reference_wrapper<const vector3> >)>(&find_nearest_enemy));
	boost::python::def("findNearestEnemy", static_cast<object(*)(const object &,const object &)>(&find_nearest_enemy));
	boost::python::def("fire", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&fire));
	boost::python::def("fireAtTarget", &fire_at_target);
	boost::python::def("getHideFrom", &get_hide_from);
	boost::python::def("getUnitTrait", &get_unit_trait);
	boost::python::def("setCaptive", static_cast<void(*)(const object &,bool)>(&set_captive));
	boost::python::def("setCaptive", static_cast<void(*)(const object &,float)>(&set_captive));
	boost::python::def("setName", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_name));
	boost::python::def("setUnitTrait", &set_unit_trait);
	boost::python::def("leaveVehicle", static_cast<void(*)(const object &,const object &)>(&leave_vehicle));
	boost::python::def("lookAt", &look_at);
	boost::python::def("leaveVehicle", static_cast<void(*)(const object &,const group &)>(&leave_vehicle));
	boost::python::def("playAction", &play_action);
	boost::python::def("playActionNow", &play_action_now);
	boost::python::def("playGesture", &play_gesture);
	boost::python::def("playMove", &play_move);
	boost::python::def("playMoveNow", &play_move_now);
	boost::python::def("setAnimSpeedCoef", &set_anim_speed_coef);
	boost::python::def("setBleedingRemaining", &set_bleeding_remaining);
	boost::python::def("setFace", &set_face);
	boost::python::def("setFaceanimation", &set_faceanimation);
	boost::python::def("setFatigue", &set_fatigue);
	boost::python::def("setIdentity", &set_identity);
	boost::python::def("setMimic", &set_mimic);
	boost::python::def("setName", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_name));
	boost::python::def("setOxygenRemaining", &set_oxygen_remaining);
	boost::python::def("setRandomLip", &set_random_lip);
	boost::python::def("setRank", &set_rank);
	boost::python::def("setStamina", &set_stamina);
	boost::python::def("setSuppression", &set_suppression);
	boost::python::def("setTargetAge", &set_target_age);
	boost::python::def("setUnconscious", &set_unconscious);
	boost::python::def("setUnitAbility", &set_unit_ability);
	boost::python::def("setUnitPos", &set_unit_pos);
	boost::python::def("setUnitPosWeak", &set_unit_pos_weak);
	boost::python::def("setUnitRank", &set_unit_rank);
	boost::python::def("setUnitRecoilCoefficient", &set_unit_recoil_coefficient);
	boost::python::def("doStop", static_cast<void(*)(const object &)>(&do_stop));
	boost::python::def("doStop", static_cast<void(*)(const std::vector<object> &)>(&do_stop));
	boost::python::def("doGetOut", static_cast<void(*)(const object &)>(&do_get_out));
	boost::python::def("doGetOut", static_cast<void(*)(const std::vector<object> &)>(&do_get_out));
	boost::python::def("switchAction", &switch_action);
	boost::python::def("switchGesture", &switch_gesture);
	boost::python::def("switchMove", &switch_move);
	boost::python::def("useAudioTimeForMoves", &use_audio_time_for_moves);
	boost::python::def("leader", static_cast<object(*)(const object &)>(&leader));
	boost::python::def("lifeState", &life_state);
	boost::python::def("lockIdentity", &lock_identity);
	boost::python::def("morale", &morale);
	boost::python::def("moveOut", &move_out);
	boost::python::def("moveTime", &move_time);
	boost::python::def("name", static_cast<sqf_return_string(*)(const object &)>(&name));
	boost::python::def("needReload", &need_reload);
	boost::python::def("precision", &precision);
	boost::python::def("rank", &rank);
	boost::python::def("rankId", &rank_id);
	boost::python::def("rating", &rating);
	boost::python::def("reload", &reload);
	boost::python::def("reloadEnabled", &reload_enabled);
	boost::python::def("removeSwitchableUnit", &remove_switchable_unit);
	boost::python::def("resetSubgroupDirection", &reset_subgroup_direction);
	boost::python::def("selectPlayer", &select_player);
	boost::python::def("setPlayable", &set_playable);
	boost::python::def("setPlayerRespawnTime", &set_player_respawn_time);
	boost::python::def("setStaminaScheme", &set_stamina_scheme);
	boost::python::def("someAmmo", &some_ammo);
	boost::python::def("speaker", &speaker);
	boost::python::def("stance", &stance);
	boost::python::def("stopped", &stopped);
	boost::python::def("unitPos", &unit_pos);
	boost::python::def("unitRecoilCoefficient", &unit_recoil_coefficient);
	boost::python::def("weaponLowered", &weapon_lowered);
	boost::python::def("addRating", &add_rating);
	boost::python::def("addScore", &add_score);
	boost::python::def("assignTeam", &assign_team);
	boost::python::def("unassignTeam", &unassign_team);
	boost::python::def("disableConversation", &disable_conversation);
	boost::python::def("enableAimPrecision", &enable_aim_precision);
	boost::python::def("enableFatigue", &enable_fatigue);
	boost::python::def("enableMimics", &enable_mimics);
	boost::python::def("enableReload", &enable_reload);
	boost::python::def("enableStamina", &enable_stamina);
	boost::python::def("fire", static_cast<void(*)(const object &,sqf_string_const_ref)>(&fire));
	boost::python::def("forceSpeed", &force_speed);
	boost::python::def("forceWalk", &force_walk);
	boost::python::def("isFlashlightOn", &is_flashlight_on);
	boost::python::def("isIrlaserOn", &is_irlaser_on);
	boost::python::def("setCustomAimCoef", &set_custom_aim_coef);
	boost::python::def("allowSprint", &allow_sprint);
	boost::python::def("animationPhase", &animation_phase);
	boost::python::def("getConnectedUav", &get_connected_uav);
	boost::python::def("getCustomAimCoef", &get_custom_aim_coef);
	boost::python::def("removeOwnedMine", &remove_owned_mine);
	boost::python::def("reveal", static_cast<void(*)(std::variant<object, group> &,const object &)>(&reveal));
	boost::python::def("reveal", static_cast<void(*)(std::variant<object, group> &,const std::vector<object> &)>(&reveal));
	boost::python::def("getAimingCoef", &get_aiming_coef);
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
	boost::python::def("airplaneThrottle", &airplane_throttle);
	boost::python::def("getPylonMagazines", &get_pylon_magazines);
	boost::python::def("getForcedFlagTexture", &get_forced_flag_texture);
	boost::python::def("isDamageAllowed", &is_damage_allowed);
	boost::python::def("vehicleReceiveRemoteTargets", &vehicle_receive_remote_targets);
	boost::python::def("vehicleReportOwnPosition", &vehicle_report_own_position);
	boost::python::def("vehicleReportRemoteTargets", &vehicle_report_remote_targets);
	boost::python::def("ammoOnPylon", static_cast<int(*)(const object &,sqf_string_const_ref)>(&ammo_on_pylon));
	boost::python::def("ammoOnPylon", static_cast<int(*)(const object &,int)>(&ammo_on_pylon));
	boost::python::def("animateBay", static_cast<void(*)(const object &,sqf_string_const_ref,float)>(&animate_bay));
	boost::python::def("animateBay", static_cast<void(*)(const object &,int,float)>(&animate_bay));
	boost::python::def("animatePylon", static_cast<void(*)(const object &,sqf_string_const_ref,float)>(&animate_pylon));
	boost::python::def("animatePylon", static_cast<void(*)(const object &,int,float)>(&animate_pylon));
	boost::python::def("confirmSensorTarget", &confirm_sensor_target);
	boost::python::def("forceFlagTexture", &force_flag_texture);
	boost::python::def("isSensorTargetConfirmed", &is_sensor_target_confirmed);
	boost::python::def("reportRemoteTarget", &report_remote_target);
	boost::python::def("setAirPlaneThrottle", &set_air_plane_throttle);
	boost::python::def("setAmmoOnPylon", static_cast<void(*)(const object &,sqf_string_const_ref,int)>(&set_ammo_on_pylon));
	boost::python::def("setAmmoOnPylon", static_cast<void(*)(const object &,int,int)>(&set_ammo_on_pylon));
	boost::python::def("setPylonLoadout", &set_pylon_loadout);
	boost::python::def("setPylonsPriority", &set_pylons_priority);
	boost::python::def("setVehicleRadar", &set_vehicle_radar);
	boost::python::def("setVehicleReceiveRemoteTargets", &set_vehicle_receive_remote_targets);
	boost::python::def("setVehicleReportOwnPosition", &set_vehicle_report_own_position);
	boost::python::def("setVehicleReportRemoteTargets", &set_vehicle_report_remote_targets);
	boost::python::def("isCollisionLightOn", &is_collision_light_on);
	boost::python::def("enableCopilot", &enable_copilot);
	boost::python::def("setPilotLight", &set_pilot_light);
	boost::python::def("setCollisionLight", &set_collision_light);
	boost::python::def("setFlagAnimationPhase", static_cast<float(*)(const object &,float)>(&set_flag_animation_phase));
	boost::python::def("setFlagOwner", &set_flag_owner);
	boost::python::def("setFlagAnimationPhase", static_cast<void(*)(const object &,float &)>(&set_flag_animation_phase));
	boost::python::def("createVehicleLocal", &create_vehicle_local);
	boost::python::def("addToRemainsCollector", &add_to_remains_collector);
	boost::python::def("removeFromRemainsCollector", &remove_from_remains_collector);
	boost::python::def("fullCrew", static_cast<std::vector<rv_crew_member>(*)(const object &)>(&full_crew));
	boost::python::def("fullCrew", static_cast<std::vector<rv_crew_member>(*)(const object &,sqf_string_const_ref,bool)>(&full_crew));
	boost::python::def("crew", &crew);
	boost::python::def("aimedAtTarget", static_cast<float(*)(const object &,const object &)>(&aimed_at_target));
	boost::python::def("aimedAtTarget", static_cast<float(*)(const object &,const object &,sqf_string_const_ref)>(&aimed_at_target));
	boost::python::def("animate", static_cast<void(*)(const object &,sqf_string_const_ref,float)>(&animate));
	boost::python::def("animate", static_cast<void(*)(const object &,sqf_string_const_ref,float,bool)>(&animate));
	boost::python::def("animateDoor", &animate_door);
	boost::python::def("getCenterOfMass", &get_center_of_mass);
	boost::python::def("createVehicle", static_cast<object(*)(sqf_string_const_ref,const vector3 &)>(&create_vehicle));
	boost::python::def("createVehicle", static_cast<object(*)(sqf_string_const_ref,const vector3 &,const std::vector<marker> &,float,sqf_string_const_ref)>(&create_vehicle));
	boost::python::def("deleteVehicle", &delete_vehicle);
	boost::python::def("allTurrets", static_cast<sqf_return_string_list(*)(const object &,bool)>(&all_turrets));
	boost::python::def("allTurrets", static_cast<sqf_return_string_list(*)(const object &)>(&all_turrets));
	boost::python::def("alive", &alive);
	boost::python::def("assignedCommander", &assigned_commander);
	boost::python::def("assignedDriver", &assigned_driver);
	boost::python::def("assignedGunner", &assigned_gunner);
	boost::python::def("assignedTarget", &assigned_target);
	boost::python::def("commander", &commander);
	boost::python::def("createVehicleCrew", &create_vehicle_crew);
	boost::python::def("damage", &damage);
	boost::python::def("driver", &driver);
	boost::python::def("effectiveCommander", &effective_commander);
	boost::python::def("fillWeaponsFromPool", &fill_weapons_from_pool);
	boost::python::def("flag", &flag);
	boost::python::def("flagOwner", &flag_owner);
	boost::python::def("flagSide", &flag_side);
	boost::python::def("flagTexture", &flag_texture);
	boost::python::def("getDammage", &get_dammage);
	boost::python::def("getMass", &get_mass);
	boost::python::def("getObjectDlc", &get_object_dlc);
	boost::python::def("getObjectType", &get_object_type);
	boost::python::def("hideObject", static_cast<void(*)(const object &)>(&hide_object));
	boost::python::def("hideObjectGlobal", static_cast<void(*)(const object &)>(&hide_object_global));
	boost::python::def("inflamed", &inflamed);
	boost::python::def("isAutoHoverOn", &is_auto_hover_on);
	boost::python::def("isAutonomous", &is_autonomous);
	boost::python::def("isBurning", &is_burning);
	boost::python::def("isCopilotEnabled", &is_copilot_enabled);
	boost::python::def("isEngineOn", &is_engine_on);
	boost::python::def("isHidden", &is_hidden);
	boost::python::def("isInRemainsCollector", &is_in_remains_collector);
	boost::python::def("isLightOn", &is_light_on);
	boost::python::def("isManualFire", &is_manual_fire);
	boost::python::def("isMarkedForCollection", &is_marked_for_collection);
	boost::python::def("isObjectHidden", &is_object_hidden);
	boost::python::def("isTouchingGround", &is_touching_ground);
	boost::python::def("laserTarget", &laser_target);
	boost::python::def("lightIsOn", &light_is_on);
	boost::python::def("locked", &locked);
	boost::python::def("mineActive", &mine_active);
	boost::python::def("lockedDriver", &locked_driver);
	boost::python::def("objectParent", &object_parent);
	boost::python::def("score", &score);
	boost::python::def("scudState", &scud_state);
	boost::python::def("sizeOf", &size_of);
	boost::python::def("speed", &speed);
	boost::python::def("vehicle", &vehicle);
	boost::python::def("vehicleVarName", &vehicle_var_name);
	boost::python::def("allowCrewInImmobile", &allow_crew_in_immobile);
	boost::python::def("allowDamage", &allow_damage);
	boost::python::def("allowDammage", &allow_dammage);
	boost::python::def("disableNvgequipment", &disable_nvgequipment);
	boost::python::def("disableTiequipment", &disable_tiequipment);
	boost::python::def("doorPhase", &door_phase);
	boost::python::def("emptyPositions", &empty_positions);
	boost::python::def("engineOn", &engine_on);
	boost::python::def("getHit", &get_hit);
	boost::python::def("getHitIndex", &get_hit_index);
	boost::python::def("getHitPointDamage", &get_hit_point_damage);
	boost::python::def("getSpeed", &get_speed);
	boost::python::def("hideObject", static_cast<void(*)(const object &,bool)>(&hide_object));
	boost::python::def("hideObjectGlobal", static_cast<void(*)(const object &,bool)>(&hide_object_global));
	boost::python::def("inflame", &inflame);
	boost::python::def("limitSpeed", &limit_speed);
	boost::python::def("lock", static_cast<void(*)(const object &,bool)>(&lock));
	boost::python::def("lock", static_cast<void(*)(const object &,float)>(&lock));
	boost::python::def("lockCargo", static_cast<void(*)(const object &,bool)>(&lock_cargo));
	boost::python::def("lockDriver", &lock_driver);
	boost::python::def("lockedCargo", &locked_cargo);
	boost::python::def("setAutonomous", &set_autonomous);
	boost::python::def("setDamage", &set_damage);
	boost::python::def("setDammage", &set_dammage);
	boost::python::def("setFlagSide", &set_flag_side);
	boost::python::def("setFlagTexture", &set_flag_texture);
	boost::python::def("setFuel", &set_fuel);
	boost::python::def("setVehicleArmor", &set_vehicle_armor);
	boost::python::def("setVehicleId", &set_vehicle_id);
	boost::python::def("setVehicleLock", &set_vehicle_lock);
	boost::python::def("setVehicleVarName", &set_vehicle_var_name);
	boost::python::def("switchLight", &switch_light);
	boost::python::def("setHit", &set_hit);
	boost::python::def("setHitIndex", &set_hit_index);
	boost::python::def("setHitPointDamage", &set_hit_point_damage);
	boost::python::def("getAllHitPointsDamage", &get_all_hit_points_damage);
	boost::python::def("getObjectMaterials", &get_object_materials);
	boost::python::def("getObjectTextures", &get_object_textures);
	boost::python::def("synchronizedObjects", &synchronized_objects);
	boost::python::def("getModelInfo", &get_model_info);
	boost::python::def("createSimpleObject", &create_simple_object);
	boost::python::def("getContainerMaxLoad", &get_container_max_load);
	boost::python::def("getShotParents", &get_shot_parents);
	boost::python::def("isSimpleObject", &is_simple_object);
	boost::python::def("selectionNames", &selection_names);
	boost::python::def("switchCamera", static_cast<void(*)(const object &)>(&switch_camera));
	boost::python::def("animateSource", static_cast<void(*)(const object &,sqf_string_const_ref,float,bool)>(&animate_source));
	boost::python::def("animateSource", static_cast<void(*)(const object &,sqf_string_const_ref,float,float)>(&animate_source));
	boost::python::def("animationSourcePhase", &animation_source_phase);
	boost::python::def("deleteVehicleCrew", &delete_vehicle_crew);
	boost::python::def("disableCollisionWith", &disable_collision_with);
	boost::python::def("enableCollisionWith", &enable_collision_with);
	boost::python::def("hideSelection", &hide_selection);
	boost::python::def("lockCameraTo", &lock_camera_to);
	boost::python::def("lockCargo", static_cast<void(*)(const object &,int,bool)>(&lock_cargo));
	boost::python::def("lockedTurret", &locked_turret);
	boost::python::def("lockTurret", &lock_turret);
	boost::python::def("respawnVehicle", &respawn_vehicle);
	boost::python::def("selectWeaponTurret", &select_weapon_turret);
	boost::python::def("setCenterOfMass", &set_center_of_mass);
	boost::python::def("setFeatureType", static_cast<bool(*)(const object &,feature_type)>(&set_feature_type));
	boost::python::def("setFeatureType", static_cast<bool(*)(const object &,int)>(&set_feature_type));
	boost::python::def("setMass", &set_mass);
	boost::python::def("setObjectMaterial", &set_object_material);
	boost::python::def("setObjectMaterialGlobal", &set_object_material_global);
	boost::python::def("setObjectTexture", &set_object_texture);
	boost::python::def("setObjectTextureGlobal", &set_object_texture_global);
	boost::python::def("setPilotCameraDirection", &set_pilot_camera_direction);
	boost::python::def("setPilotCameraRotation", &set_pilot_camera_rotation);
	boost::python::def("setPilotCameraTarget", &set_pilot_camera_target);
	boost::python::def("setShotParents", &set_shot_parents);
	boost::python::def("setVehicleTiParts", &set_vehicle_ti_parts);
	boost::python::def("setWeaponReloadingTime", &set_weapon_reloading_time);
	boost::python::def("synchronizeObjectsAdd", &synchronize_objects_add);
	boost::python::def("synchronizeObjectsRemove", &synchronize_objects_remove);
	boost::python::def("turretUnit", &turret_unit);
	boost::python::def("weaponsTurret", &weapons_turret);
	boost::python::def("flagAnimationPhase", &flag_animation_phase);
	boost::python::def("unassignVehicle", &unassign_vehicle);
	boost::python::def("assignToAirport", static_cast<void(*)(const object &,float)>(&assign_to_airport));
	boost::python::def("assignToAirport", static_cast<void(*)(const object &,const object &)>(&assign_to_airport));
	boost::python::def("setLightBrightness", &set_light_brightness);
	boost::python::def("setLightDayLight", &set_light_day_light);
	boost::python::def("setLightFlareMaxDistance", &set_light_flare_max_distance);
	boost::python::def("setLightFlareSize", &set_light_flare_size);
	boost::python::def("setLightIntensity", &set_light_intensity);
	boost::python::def("setLightUseFlare", &set_light_use_flare);
	boost::python::def("setLightAmbient", &set_light_ambient);
	boost::python::def("setLightAttenuation", &set_light_attenuation);
	boost::python::def("setLightColor", &set_light_color);
	boost::python::def("roadsConnectedTo", &roads_connected_to);
	boost::python::def("getSide", static_cast<side(*)(const object &)>(&get_side));
	boost::python::def("wfSideText", static_cast<sqf_return_string(*)(const object &)>(&wf_side_text));
	boost::python::def("wfSideText", static_cast<sqf_return_string(*)(const group &)>(&wf_side_text));
	boost::python::def("wfSideText", static_cast<sqf_return_string(*)(const side &)>(&wf_side_text));
	boost::python::def("uavControl", &uav_control);
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
	boost::python::def("deleteWaypoint", &delete_waypoint);
	boost::python::def("copyWaypoints", &copy_waypoints);
	boost::python::def("waypointAttachedObject", &waypoint_attached_object);
	boost::python::def("waypointAttachedVehicle", &waypoint_attached_vehicle);
	boost::python::def("waypointBehaviour", &waypoint_behaviour);
	boost::python::def("waypointCombatMode", &waypoint_combat_mode);
	boost::python::def("waypointCompleteionRadius", &waypoint_completeion_radius);
	boost::python::def("waypointDescription", &waypoint_description);
	boost::python::def("waypointFormation", &waypoint_formation);
	boost::python::def("waypointHousePosition", &waypoint_house_position);
	boost::python::def("waypointLoiterRadius", &waypoint_loiter_radius);
	boost::python::def("waypointLoiterType", &waypoint_loiter_type);
	boost::python::def("waypointName", &waypoint_name);
	boost::python::def("waypointPosition", &waypoint_position);
	boost::python::def("waypointScript", &waypoint_script);
	boost::python::def("waypointShow", &waypoint_show);
	boost::python::def("waypointSpeed", &waypoint_speed);
	boost::python::def("waypointType", &waypoint_type);
	boost::python::def("waypointVisible", &waypoint_visible);
	boost::python::def("synchronizedWaypoints", static_cast<std::vector<waypoint>(*)(waypoint &)>(&synchronized_waypoints));
	boost::python::def("synchronizedWaypoints", static_cast<std::vector<waypoint>(*)(object &)>(&synchronized_waypoints));
	boost::python::def("setWaypointBehaviour", &set_waypoint_behaviour);
	boost::python::def("setWaypointCombatMode", &set_waypoint_combat_mode);
	boost::python::def("setWaypointCompletionRadius", &set_waypoint_completion_radius);
	boost::python::def("setWaypointDescription", &set_waypoint_description);
	boost::python::def("setWaypointFormation", &set_waypoint_formation);
	boost::python::def("setWaypointHousePosition", &set_waypoint_house_position);
	boost::python::def("setWaypointLoiterRadius", &set_waypoint_loiter_radius);
	boost::python::def("setWaypointLoiterType", &set_waypoint_loiter_type);
	boost::python::def("setWaypointName", &set_waypoint_name);
	boost::python::def("setWaypointPosition", &set_waypoint_position);
	boost::python::def("setWaypointScript", &set_waypoint_script);
	boost::python::def("setWaypointSpeed", &set_waypoint_speed);
	boost::python::def("setWaypointStatements", &set_waypoint_statements);
	boost::python::def("setWaypointTimeout", &set_waypoint_timeout);
	boost::python::def("setWaypointType", &set_waypoint_type);
	boost::python::def("setWaypointVisible", &set_waypoint_visible);
	boost::python::def("showWaypoint", &show_waypoint);
	boost::python::def("synchronizeWaypoint", static_cast<void(*)(waypoint &,const std::vector<waypoint> &)>(&synchronize_waypoint));
	boost::python::def("synchronizeWaypoint", static_cast<void(*)(object &,const std::vector<waypoint> &)>(&synchronize_waypoint));
	boost::python::def("waypointAttachObject", static_cast<void(*)(waypoint &,int)>(&waypoint_attach_object));
	boost::python::def("waypointAttachObject", static_cast<void(*)(waypoint &,object &)>(&waypoint_attach_object));
	boost::python::def("showWaypoints", &show_waypoints);
	boost::python::def("waypointForceBehaviour", &waypoint_force_behaviour);
	boost::python::def("setWaypointForceBehaviour", &set_waypoint_force_behaviour);
	boost::python::def("waypointTimeoutCurrent", &waypoint_timeout_current);
	boost::python::def("waypointsEnabledUav", &waypoints_enabled_uav);
	boost::python::def("enableUavWaypoints", &enable_uav_waypoints);
	boost::python::def("setWpPos", &set_wp_pos);
	boost::python::def("getWpPos", &get_wp_pos);
	boost::python::def("lockWp", &lock_wp);
	boost::python::def("waypoints", static_cast<std::vector<waypoint>(*)(const object &)>(&waypoints));
	boost::python::def("waypoints", static_cast<std::vector<waypoint>(*)(const group &)>(&waypoints));
	boost::python::def("setEffectCondition", &set_effect_condition);
	boost::python::def("waypointAttachVehicle", &waypoint_attach_vehicle);
	boost::python::def("enableUavwaypoints", &enable_uavwaypoints);
	boost::python::def("createGuardedPoint", &create_guarded_point);
	boost::python::def("triggerArea", &trigger_area);
	boost::python::def("triggerTimeout", &trigger_timeout);
	boost::python::def("list", &list);
	boost::python::def("triggerAttachObject", &trigger_attach_object);
	boost::python::def("setTriggerText", &set_trigger_text);
	boost::python::def("setTriggerType", &set_trigger_type);
	boost::python::def("triggerActivated", &trigger_activated);
	boost::python::def("triggerAttachedVehicle", &trigger_attached_vehicle);
	boost::python::def("triggerText", &trigger_text);
	boost::python::def("triggerTimeoutCurrent", &trigger_timeout_current);
	boost::python::def("triggerType", &trigger_type);
	boost::python::def("createTrigger", static_cast<object(*)(sqf_string_const_ref,const vector3 &,bool)>(&create_trigger));
	boost::python::def("createTrigger", static_cast<object(*)(sqf_string_const_ref,const object &,bool)>(&create_trigger));
	boost::python::def("setTriggerActivation", &set_trigger_activation);
	boost::python::def("setTriggerArea", &set_trigger_area);
	boost::python::def("setTriggerStatements", &set_trigger_statements);
	boost::python::def("setTriggerTimeout", &set_trigger_timeout);
	boost::python::def("synchronizeTrigger", &synchronize_trigger);
	boost::python::def("triggerAttachVehicle", &trigger_attach_vehicle);
	boost::python::def("setMusicEffect", static_cast<void(*)(const object &,sqf_string_const_ref)>(&set_music_effect));
	boost::python::def("setMusicEffect", static_cast<void(*)(const group &,int,sqf_string_const_ref)>(&set_music_effect));
	boost::python::def("setSoundEffect", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_sound_effect));
	boost::python::def("setSoundEffect", static_cast<void(*)(const group &,int,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_sound_effect));
	boost::python::def("setTitleEffect", static_cast<void(*)(const object &,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_title_effect));
	boost::python::def("setTitleEffect", static_cast<void(*)(const group &,int,sqf_string_const_ref,sqf_string_const_ref,sqf_string_const_ref)>(&set_title_effect));
	boost::python::class_<waypoint>("waypoint", boost::python::init<const group &,uint32_t>())
		.def(boost::python::init<const game_value &>())
		.def_readwrite("wgroup", &waypoint::wgroup)
		.def_readwrite("windex", &waypoint::windex);
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
	boost::python::def("worldSize", &world_size);
	boost::python::def("worldName", &world_name);
	boost::python::def("windStr", &wind_str);
	boost::python::def("windDir", &wind_dir);
	boost::python::def("setWind", static_cast<void(*)(float,float)>(&set_wind));
	boost::python::def("setWind", static_cast<void(*)(float,float,bool)>(&set_wind));
	boost::python::def("wind", &wind);
	boost::python::def("gusts", &gusts);
	boost::python::def("humidity", &humidity);
	boost::python::def("waves", &waves);
	boost::python::def("lightnings", &lightnings);
	boost::python::def("moonIntensity", &moon_intensity);
	boost::python::def("nextWeatherChange", &next_weather_change);
	boost::python::def("overcast", &overcast);
	boost::python::def("overcastForecast", &overcast_forecast);
	boost::python::def("rain", &rain);
	boost::python::def("rainbow", &rainbow);
	boost::python::def("sunOrMoon", &sun_or_moon);
	boost::python::def("fog", &fog);
	boost::python::def("fogForecast", &fog_forecast);
	boost::python::def("timeMultiplier", &time_multiplier);
	boost::python::def("dateToNumber", &date_to_number);
	boost::python::def("numberToDate", &number_to_date);
	boost::python::def("date", &date);
	boost::python::def("missionStart", &mission_start);
	boost::python::def("fogParams", &fog_params);
	boost::python::def("getObjectViewDistance", &get_object_view_distance);
	boost::python::def("setDate", &set_date);
	boost::python::def("entities", static_cast<std::vector<object>(*)(sqf_string_list_const_ref,sqf_string_list_const_ref,bool,bool)>(&entities));
	boost::python::def("setHorizonParallaxCoef", &set_horizon_parallax_coef);
	boost::python::def("setDetailMapBlendPars", &set_detail_map_blend_pars);
	boost::python::def("simulCloudDensity", &simul_cloud_density);
	boost::python::def("simulCloudOcclusion", &simul_cloud_occlusion);
	boost::python::def("simulInClouds", &simul_in_clouds);
	boost::python::def("setFog", static_cast<void(*)(float &,float &,std::optional<float>,std::optional<float>)>(&set_fog));
	boost::python::def("setGusts", &set_gusts);
	boost::python::def("setRain", &set_rain);
	boost::python::def("setRainbow", &set_rainbow);
	boost::python::def("setOvercast", &set_overcast);
	boost::python::def("setWindDir", &set_wind_dir);
	boost::python::def("setWindForce", &set_wind_force);
	boost::python::def("setWindStr", &set_wind_str);
	boost::python::def("setAccTime", &set_acc_time);
	boost::python::def("setObjectViewDistance", static_cast<void(*)(float)>(&set_object_view_distance));
	boost::python::def("setObjectViewDistance", static_cast<void(*)(float,float)>(&set_object_view_distance));
	boost::python::def("setShadowDistance", &set_shadow_distance);
	boost::python::def("setSimulWeatherLayers", &set_simul_weather_layers);
	boost::python::def("setTerrainGrid", &set_terrain_grid);
	boost::python::def("setTimeMultiplier", &set_time_multiplier);
	boost::python::def("setViewDistance", &set_view_distance);
	boost::python::def("skipTime", &skip_time);
	boost::python::def("enableEnvironment", &enable_environment);
	boost::python::def("enableSatNormalOnDetail", &enable_sat_normal_on_detail);
	boost::python::def("accTime", &acc_time);
	boost::python::def("daytime", &daytime);
	boost::python::def("forceWeatherChange", &force_weather_change);
	boost::python::def("getShadowDistance", &get_shadow_distance);
	boost::python::def("initAmbientLife", &init_ambient_life);
	boost::python::def("simulWeatherSync", &simul_weather_sync);
	boost::python::def("environmentEnabled", &environment_enabled);
	boost::python::def("moonPhase", &moon_phase);
	boost::python::def("setWaves", &set_waves);
	boost::python::def("setFog", static_cast<void(*)(float,float)>(&set_fog));
	boost::python::def("setFog", static_cast<void(*)(float,float,float,float)>(&set_fog));
	boost::python::def("getTerrainGrid", &get_terrain_grid);
	boost::python::def("viewDistance", &view_distance);
	boost::python::def("enableCaustics", &enable_caustics);
	boost::python::def("setLightnings", &set_lightnings);
	boost::python::def("nearObjectsReady", &near_objects_ready);
	boost::python::def("nearRoads", &near_roads);
	boost::python::def("nearSupplies", &near_supplies);
	boost::python::def("nearTargets", &near_targets);
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
	boost::python::def("surfaceIsWater", &surface_is_water);
	boost::python::def("surfaceNormal", &surface_normal);
	boost::python::def("surfaceType", &surface_type);
	boost::python::def("selectBestPlaces", static_cast<std::vector<rv_best_place>(*)(const object &,float,sqf_string_const_ref,float,float)>(&select_best_places));
	boost::python::def("selectBestPlaces", static_cast<std::vector<rv_best_place>(*)(const vector3 &,float,sqf_string_const_ref,float,float)>(&select_best_places));
	boost::python::def("isOnRoad", static_cast<bool(*)(const object &)>(&is_on_road));
	boost::python::def("isOnRoad", static_cast<bool(*)(const vector3 &)>(&is_on_road));
	boost::python::def("getFriend", &get_friend);
	boost::python::def("setFriend", &set_friend);
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
	boost::python::def("getRemoteSensorsDisabled", &get_remote_sensors_disabled);
	boost::python::def("disableRemoteSensors", &disable_remote_sensors);
	boost::python::def("underwater", &underwater);
	boost::python::def("vehicles", &vehicles);
	boost::python::def("setLocalWindParams", &set_local_wind_params);
	boost::python::def("getelevationoffset", &getelevationoffset);
	boost::python::class_<rv_date>("rvDate", boost::python::init<float,float,float,float,float>())
		.def("fromVector", &rv_date::from_vector).staticmethod("fromVector")
		.def("toVector", &rv_date::to_vector)
		.def_readwrite("year", &rv_date::year)
		.def_readwrite("month", &rv_date::month)
		.def_readwrite("day", &rv_date::day)
		.def_readwrite("hour", &rv_date::hour)
		.def_readwrite("minute", &rv_date::minute);
	boost::python::class_<rv_fog_parameters>("rvFogParameters", boost::python::init<float,float,float>())
		.def("fromVector", &rv_fog_parameters::from_vector).staticmethod("fromVector")
		.def("toVector", &rv_fog_parameters::to_vector)
		.def_readwrite("value", &rv_fog_parameters::value)
		.def_readwrite("decay", &rv_fog_parameters::decay)
		.def_readwrite("base", &rv_fog_parameters::base);
	boost::python::class_<rv_rendering_distances>("rvRenderingDistances", boost::python::init<float,float>())
		.def("fromVector", &rv_rendering_distances::from_vector).staticmethod("fromVector")
		.def("toVector", &rv_rendering_distances::to_vector)
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
