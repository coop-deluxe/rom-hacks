
--------------
-- movtexs --
--------------

movtexqc_register('bbh_1_Movtex_0',               0 + 4, 1, 0)
movtexqc_register('ccm_1_Movtex_0',               1 + 4, 1, 0)
movtexqc_register('hmc_1_Movtex_0',               3 + 4, 1, 0)
movtexqc_register('ssl_1_Movtex_0',               4 + 4, 1, 0)
movtexqc_register('bob_1_Movtex_0',               5 + 4, 1, 0)
movtexqc_register('sl_1_Movtex_0',                6 + 4, 1, 0)
movtexqc_register('jrb_1_Movtex_0',               8 + 4, 1, 0)
movtexqc_register('castle_grounds_1_Movtex_0',   12 + 4, 1, 0)
movtexqc_register('lll_1_Movtex_0',              18 + 4, 1, 0)
movtexqc_register('wf_1_Movtex_0',               20 + 4, 1, 0)
movtexqc_register('ending_1_Movtex_0',           21 + 4, 1, 0)
movtexqc_register('castle_courtyard_1_Movtex_0', 22 + 4, 1, 0)
movtexqc_register('pss_1_Movtex_0',              23 + 4, 1, 0)
movtexqc_register('cotmc_1_Movtex_0',            24 + 4, 1, 0)
movtexqc_register('totwc_1_Movtex_0',            25 + 4, 1, 0)
movtexqc_register('wmotr_1_Movtex_0',            27 + 4, 1, 0)

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
