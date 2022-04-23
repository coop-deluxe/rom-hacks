-- name: Star Road
-- description: This is a romhack created by SKELUX
-- incompatible: romhack
------------------
-- level values --
------------------

gLevelValues.entryLevel = LEVEL_CASTLE_GROUNDS
gLevelValues.exitCastleLevel = LEVEL_CASTLE_GROUNDS
gLevelValues.exitCastleWarpNode = 128
gLevelValues.skipCreditsAt = LEVEL_CASTLE_GROUNDS

---------------------
-- behavior values --
---------------------

gBehaviorValues.trajectories.KoopaBobTrajectory      = get_trajectory('KoopaBoB_path')
gBehaviorValues.trajectories.KoopaThiTrajectory      = get_trajectory('KoopaTHI_path')
gBehaviorValues.trajectories.PlatformRrTrajectory    = get_trajectory('rr_seg7_trajectory_0702EC3C_RM2C_path')
gBehaviorValues.trajectories.PlatformRr2Trajectory   = get_trajectory('rr_seg7_trajectory_0702ECC0_RM2C_path')
gBehaviorValues.trajectories.PlatformCcmTrajectory   = get_trajectory('ccm_seg7_trajectory_0701669C_RM2C_path')
gBehaviorValues.trajectories.PlatformBitfsTrajectory = get_trajectory('bitfs_seg7_trajectory_070159AC_RM2C_path')
gBehaviorValues.trajectories.PlatformHmcTrajectory   = get_trajectory('hmc_seg7_trajectory_0702B86C_RM2C_path')
gBehaviorValues.trajectories.PlatformLllTrajectory   = get_trajectory('lll_seg7_trajectory_0702856C_RM2C_path')
gBehaviorValues.trajectories.PlatformLll2Trajectory  = get_trajectory('lll_seg7_trajectory_07028660_RM2C_path')
gBehaviorValues.trajectories.PlatformRr3Trajectory   = get_trajectory('rr_seg7_trajectory_0702ED9C_RM2C_path')
gBehaviorValues.trajectories.PlatformRr4Trajectory   = get_trajectory('rr_seg7_trajectory_0702EEE0_RM2C_path')
gBehaviorValues.trajectories.RacingPenguinTrajectory = get_trajectory('ccm_seg7_trajectory_penguin_race_RM2C_path')

-- gBehaviorValues.KoopaBobAgility = ???
-- gBehaviorValues.KoopaThiAgility = ???
-- gBehaviorValues.dialogs.KoopaQuickBobStartDialog = ???
-- gBehaviorValues.dialogs.KoopaQuickThiStartDialog = ???
-- gBehaviorValues.dialogs.KoopaQuickBobWinDialog = ???
-- gBehaviorValues.dialogs.KoopaQuickThiWinDialog = ???

--------------
-- movtexs --
--------------

movtexqc_register('bbh_1_Movtex_0',              LEVEL_BBH,              1, 0)
movtexqc_register('ccm_1_Movtex_0',              LEVEL_CCM,              1, 0)
movtexqc_register('hmc_1_Movtex_0',              LEVEL_HMC,              1, 0)
movtexqc_register('ssl_1_Movtex_0',              LEVEL_SSL,              1, 0)
movtexqc_register('bob_1_Movtex_0',              LEVEL_BOB,              1, 0)
movtexqc_register('sl_1_Movtex_0',               LEVEL_SL,               1, 0)
movtexqc_register('jrb_1_Movtex_0',              LEVEL_JRB,              1, 0)
movtexqc_register('castle_grounds_1_Movtex_0',   LEVEL_CASTLE_GROUNDS,   1, 0)
movtexqc_register('lll_1_Movtex_0',              LEVEL_LLL,              1, 0)
movtexqc_register('wf_1_Movtex_0',               LEVEL_WF,               1, 0)
movtexqc_register('ending_1_Movtex_0',           LEVEL_ENDING,           1, 0)
movtexqc_register('castle_courtyard_1_Movtex_0', LEVEL_CASTLE_COURTYARD, 1, 0)
movtexqc_register('pss_1_Movtex_0',              LEVEL_PSS,              1, 0)
movtexqc_register('cotmc_1_Movtex_0',            LEVEL_COTMC,            1, 0)
movtexqc_register('totwc_1_Movtex_0',            LEVEL_TOTWC,            1, 0)
movtexqc_register('wmotr_1_Movtex_0',            LEVEL_WMOTR,            1, 0)

-----------
-- music --
-----------

-- These have a custom entry in the Star road sequences.json patch. But aren't actually ripped.
--smlua_audio_utils_replace_sequence(0x01, 0x22, 80, "01_Seq_smsrdeluxe_custom")
--smlua_audio_utils_replace_sequence(0x14, 0x1A, 80, "14_Seq_smsrdeluxe_custom")
--smlua_audio_utils_replace_sequence(0x15, 0x0E, 70, "15_Seq_smsrdeluxe_custom")
--smlua_audio_utils_replace_sequence(0x17, 0x1A, 75, "17_Seq_smsrdeluxe_custom")
--smlua_audio_utils_replace_sequence(0x18, 0x25, 75, "18_Seq_smsrdeluxe_custom")
--smlua_audio_utils_replace_sequence(0x1B, 0x14, 80, "1B_Seq_smsrdeluxe_custom")

smlua_audio_utils_replace_sequence(0x02, 0x25, 80, "02_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x03, 0x25, 75, "03_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x04, 0x25, 70, "04_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x05, 0x25, 75, "05_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x06, 0x25, 75, "06_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x07, 0x19, 75, "07_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x08, 0x25, 70, "08_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x09, 0x0D, 65, "09_Seq_smsrdeluxe_custom") -- Is this possibly just normal slide? TODO: Verify this later on.
smlua_audio_utils_replace_sequence(0x0B, 0x14, 65, "0B_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x0C, 0x17, 85, "0C_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x0D, 0x25, 75, "0D_Seq_smsrdeluxe_custom") -- Star Select, Star Road has music here instead of the original intro effect.
smlua_audio_utils_replace_sequence(0x0E, 0x25, 65, "0E_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x0F, 0x25, 70, "0F_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x10, 0x25, 65, "10_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x11, 0x25, 70, "11_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x12, 0x25, 70, "12_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x13, 0x1E, 65, "13_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x16, 0x25, 85, "16_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x19, 0x11, 85, "19_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x1A, 0x25, 70, "1A_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x1C, 0x20, 80, "1C_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x1D, 0x11, 70, "1D_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x1E, 0x25, 75, "1E_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x1F, 0x25, 80, "1F_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x20, 0x25, 70, "20_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x21, 0x25, 65, "21_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x22, 0x11, 80, "22_Seq_smsrdeluxe_custom")

-- TODO: See if we can figure out the original volumes for the things below this point.
smlua_audio_utils_replace_sequence(0x23, 0x25, 80, "23_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x24, 0x11, 70, "24_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x25, 0x25, 85, "25_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x26, 0x25, 75, "26_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x27, 0x25, 75, "27_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x28, 0x25, 85, "28_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x29, 0x25, 70, "29_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2A, 0x11, 80, "2A_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2B, 0x1B, 80, "2B_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2C, 0x25, 70, "2C_Seq_smsrdeluxe_custom")

-- We don't know the correct instruments for these.
smlua_audio_utils_replace_sequence(0x2D, 0x25, 75, "2D_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2E, 0x25, 80, "2E_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2F, 0x25, 70, "2F_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x30, 0x25, 65, "30_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x31, 0x25, 80, "31_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x32, 0x25, 80, "32_Seq_smsrdeluxe_custom")

------------
-- camera --
------------
camera_set_use_course_specific_settings(false)

----------------------------------

function mario_update_local(m)
    override_camera()
end

function mario_update(m)
    if m.playerIndex == 0 then
        mario_update_local(m)
    end
end

hook_event(HOOK_MARIO_UPDATE, mario_update)
