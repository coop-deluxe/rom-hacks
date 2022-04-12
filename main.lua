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

smlua_audio_utils_replace_sequence(0x02, 0x11, 80, "02_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x03, 0x1E, 75, "03_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x04, 0x25, 70, "04_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x05, 0x13, 75, "05_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x06, 0x0F, 75, "06_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x08, 0x0B, 70, "08_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x09, 0x0D, 65, "09_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x0B, 0x25, 65, "0B_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x0C, 0x15, 85, "0C_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x11, 0x19, 70, "11_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x13, 0x25, 65, "13_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x18, 0x1C, 75, "18_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x1E, 0x11, 75, "1E_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x21, 0x25, 75, "21_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x22, 0x25, 80, "22_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x23, 0x25, 80, "23_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x24, 0x24, 70, "24_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x25, 0x25, 85, "25_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x26, 0x13, 75, "26_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x27, 0x11, 75, "27_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x28, 0x25, 85, "28_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x29, 0x23, 70, "29_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2A, 0x21, 80, "2A_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2B, 0x25, 80, "2B_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2C, 0x25, 70, "2C_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2D, 0x0E, 75, "2D_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2E, 0x18, 80, "2E_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x2F, 0x1D, 70, "2F_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x30, 0x23, 65, "30_Seq_smsrdeluxe_custom")
smlua_audio_utils_replace_sequence(0x31, 0x11, 80, "31_Seq_smsrdeluxe_custom")

------------
-- camera --
------------
camera_set_use_course_specific_settings(false)

----------------------------------

function mario_update_local(m)
    if (m.controller.buttonPressed & D_JPAD) ~= 0 then
        -- spawn paddle
        spawn_sync_object(
            bhvCustomSMSRBreakableRock,
            smlua_model_util_get_id("hmc_geo_000530"),
            m.pos.x + 300, m.pos.y, m.pos.z,
            nil)
    end
end

function mario_update(m)
    if m.playerIndex == 0 then
        mario_update_local(m)
    end
end

hook_event(HOOK_MARIO_UPDATE, mario_update)
