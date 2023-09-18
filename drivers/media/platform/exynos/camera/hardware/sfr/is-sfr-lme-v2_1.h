/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Samsung Exynos SoC series Pablo driver
 *
 * Copyright (c) 2020 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_SFR_LME_V2_1_1_H
#define IS_SFR_LME_V2_1_1_H

enum is_lme_reg_name {
	LME_R_GLOBAL_ENABLE,
	LME_R_DISABLE_CHAIN_ON_CORRUPTED,
	LME_R_SW_RESET,
	LME_R_SW_CORE_RESET,
	LME_R_HW_RESET,
	LME_R_FORCE_INTERNAL_CLOCK,
	LME_R_TRANS_STOP_REQ,
	LME_R_TRANS_STOP_REQ_RDY,
	LME_R_IDLENESS_STATUS,
	LME_R_AUTO_MASK_PREADY,
	LME_R_INTERRUPT_AUTO_MASK,
	LME_R_IP_POST_FRAME_GAP,
	LME_R_IP_USE_END_INTERRUPT_ENABLE,
	LME_R_IP_ROL_MODE,
	LME_R_IP_ROL_RESET,
	LME_R_IP_PROCESSING,
	LME_R_IP_DISABLE_C2COM_LOST_CONNECTION_AUTORECOVERY,
	LME_R_IP_FORCE_TRS_FLUSH,
	LME_R_CTRL_MS_OPERATION_MODE_SELECT,
	LME_R_CTRL_ADD_TO_QUEUE_INPUT_MODE_SELECT,
	LME_R_CTRL_MS_SEQUENCE_LENGTH,
	LME_R_CTRL_MS_SEQUENCE,
	LME_R_CTRL_MS_SEQUENCE_INDEX_POINTER,
	LME_R_CTRL_MS_SEQUENCE_SET_DISABLE,
	LME_R_CTRL_MS_CURRENT_ACTIVE_SET,
	LME_R_CTRL_MS_NEXT_FRAME_SET,
	LME_R_CTRL_MS_QUEUE_FULLNESS,
	LME_R_CTRL_MS_QUEUE_FLUSH,
	LME_R_CTRL_MS_ADD_TO_QUEUE,
	LME_R_CTRL_INCREASE_FRAME_COUNTER_TRIGGER,
	LME_R_CTRL_TOTAL_FRAME_COUNTER,
	LME_R_CTRL_FRAME_COUNTER_PER_SET,
	LME_R_CTRL_ERROR_INTERRUPT_VECTOR_STATUS,
	LME_R_CTRL_ERROR_INTERRUPT_VECTOR_STATUS_CLEAR,
	LME_R_CTRL_ERROR_INTERRUPT_ENABLE,
	LME_R_CTRL_PROCESSING_TIMEOUT,
	LME_R_CTRL_PROCESSING_TIMEOUT_RESET_ENABLE,
	LME_R_IP_END_INTERRUPT_ENABLE,
	LME_R_IP_CORRUPTED_INTERRUPT_ENABLE,
	LME_R_IP_STALL_OUT_STAT,
	LME_R_IP_ROL_SELECT,
	LME_R_IP_SECURITY_INPUT_SELECT,
	LME_R_IP_INT_ON_COL_ROW,
	LME_R_IP_INT_ON_COL_ROW_CORD,
	LME_R_IP_FREEZE_VERSION,
	LME_R_IP_ISP_VERSION,
	LME_R_SIPULME1P1P0_REG_INTERFACE_VER,
	LME_R_CACHE_8BIT_LME_BYPASS,
	LME_R_CACHE_8BIT_LME_CONFIG,
	LME_R_CACHE_8BIT_BASE_ADDR_1P_0,
	LME_R_CACHE_8BIT_BASE_ADDR_1P_JUMP_0,
	LME_R_CACHE_8BIT_BASE_ADDR_2P_0,
	LME_R_CACHE_8BIT_BASE_ADDR_2P_JUMP_0,
	LME_R_CACHE_8BIT_BASE_ADDR_3P_0,
	LME_R_CACHE_8BIT_BASE_ADDR_3P_JUMP_0,
	LME_R_CACHE_8BIT_BASE_ADDR_1P_1,
	LME_R_CACHE_8BIT_BASE_ADDR_1P_JUMP_1,
	LME_R_CACHE_8BIT_BASE_ADDR_2P_1,
	LME_R_CACHE_8BIT_BASE_ADDR_2P_JUMP_1,
	LME_R_CACHE_8BIT_BASE_ADDR_3P_1,
	LME_R_CACHE_8BIT_BASE_ADDR_3P_JUMP_1,
	LME_R_CACHE_8BIT_CROP_X_CONFIG_0,
	LME_R_CACHE_8BIT_CROP_Y_CONFIG_0,
	LME_R_CACHE_8BIT_CROP_X_CONFIG_1,
	LME_R_CACHE_8BIT_CROP_Y_CONFIG_1,
	LME_R_CACHE_8BIT_PIX_CONFIG_0,
	LME_R_CACHE_8BIT_PIX_CONFIG_1,
	LME_R_CACHE_8BIT_DATA_REQ_CNT,
	LME_R_CACHE_8BIT_DATA_REQ_CNT_HIT,
	LME_R_CACHE_8BIT_PRE_REQ_CNT,
	LME_R_CACHE_8BIT_PRE_REQ_CNT_HIT,
	LME_R_CACHE_8BIT_CACHE_UTILIZATION,
	LME_R_CACHE_8BIT_REG_INTERFACE_VER,
	LME_R_MVCT_8BIT_LME_CONFIG,
	LME_R_MVCT_8BIT_MVE_CONFIG,
	LME_R_MVCT_8BIT_MVE_WEIGHT,
	LME_R_MVCT_8BIT_MV_SRX,
	LME_R_MVCT_8BIT_MV_SRY,
	LME_R_MVCT_8BIT_IMAGE_DIMENTIONS,
	LME_R_MVCT_8BIT_LME_PREFETCH,
	LME_R_MVCT_8BIT_TRS_CONFIG1,
	LME_R_MVCT_8BIT_POST_FRAME_GAP,
	LME_R_MVCT_8BIT_MVM_DBG0,
	LME_R_MVCT_8BIT_MVM_DBG1,
	LME_R_MVCT_8BIT_MVM_DBG2,
	LME_R_MVCT_8BIT_MVM_DBG3,
	LME_R_MVCT_8BIT_MVM_DBG4,
	LME_R_MVCT_8BIT_MVM_DBG5,
	LME_R_MVCT_8BIT_IFC_DBG0,
	LME_R_MVCT_8BIT_IFC_DBG1,
	LME_R_MVCT_8BIT_PMV_RAM_WR_ACCESS,
	LME_R_MVCT_8BIT_PMV_RAM_START_ADD,
	LME_R_MVCT_8BIT_PMV_RAM_RD_ACCESS,
	LME_R_MVCT_8BIT_REG_INTERFACE_VER,
	LME_R_SECU_CTRL_SEQID,
	LME_R_SECU_CTRL_SEQID_RD,
	LME_R_SECU_CTRL_TZINFO_SEQID_0,
	LME_R_SECU_CTRL_TZINFO_SEQID_0_RD,
	LME_R_SECU_CTRL_TZINFO_SEQID_1,
	LME_R_SECU_CTRL_TZINFO_SEQID_1_RD,
	LME_R_SECU_CTRL_TZINFO_SEQID_2,
	LME_R_SECU_CTRL_TZINFO_SEQID_2_RD,
	LME_R_SECU_CTRL_TZINFO_SEQID_3,
	LME_R_SECU_CTRL_TZINFO_SEQID_3_RD,
	LME_R_SECU_CTRL_TZINFO_SEQID_4,
	LME_R_SECU_CTRL_TZINFO_SEQID_4_RD,
	LME_R_SECU_CTRL_TZINFO_SEQID_5,
	LME_R_SECU_CTRL_TZINFO_SEQID_5_RD,
	LME_R_SECU_CTRL_TZINFO_SEQID_6,
	LME_R_SECU_CTRL_TZINFO_SEQID_6_RD,
	LME_R_SECU_CTRL_TZINFO_SEQID_7,
	LME_R_SECU_CTRL_TZINFO_SEQID_7_RD,
	LME_R_SECUCTRL_REG_INTERFACE_VER,
	LME_R_DMA_SIPULME1P1P0_DEBUG,
	LME_R_DMA_SIPULME1P1P0_WR_SLOT_LEN_0,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_0,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_1,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_2,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_3,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_4,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_5,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_6,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_7,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_8,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_9,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_10,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_11,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_12,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_13,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_14,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_15,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_RD_0_16,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_0,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_1,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_2,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_3,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_4,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_5,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_6,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_7,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_8,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_9,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_10,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_11,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_12,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_13,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_14,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_15,
	LME_R_DMA_SIPULME1P1P0_SLOT_REG_WR_0_16,
	LME_R_DMA_SIPULME1P1P0_SWAP_TABLE_RD_0,
	LME_R_DMA_SIPULME1P1P0_SWAP_TABLE_WR_0,
	LME_R_DMA_SIPULME1P1P0_QOS_LUT_RD_0_0,
	LME_R_DMA_SIPULME1P1P0_QOS_LUT_RD_0_1,
	LME_R_DMA_SIPULME1P1P0_QOS_LUT_WR_0_0,
	LME_R_DMA_SIPULME1P1P0_QOS_LUT_WR_0_1,
	LME_R_DMA_SIPULME1P1P0_WR_DATA_FIFO_DEPTH_0,
	LME_R_DMA_SIPULME1P1P0_WR_FIFO_FULLNESS_0,
	LME_R_DMA_SIPULME1P1P0_WR_ADDR_MO_LIMIT_0,
	LME_R_DMA_SIPULME1P1P0_WR_MO_CNT_0,
	LME_R_DMA_SIPULME1P1P0_RD_MO_CNT_0,
	LME_R_DMA_SIPULME1P1P0_REG_INTERFACE_VER,
	LME_R_DMATOP_SIPULME1P1P0_DMACLIENTS_FLUSH_STATUS,
	LME_R_DMATOP_SIPULME1P1P0_DMACLIENTS_ERRORS,
	LME_R_DMATOP_SIPULME1P1P0_DMACLIENTS_INFO,
	LME_R_DMATOP_SIPULME1P1P0_REG_INTERFACE_VER,
	LME_R_DMACLIENT_CACHE_IN_CLIENT_ENABLE,
	LME_R_DMACLIENT_CACHE_IN_GEOM_BURST_LENGTH,
	LME_R_DMACLIENT_CACHE_IN_CLIENT_FLUSH,
	LME_R_DMACLIENT_CACHE_IN_OUTSTANDING_LIMIT,
	LME_R_DMACLIENT_CACHE_IN_STATUS,
	LME_R_DMACLIENT_CACHE_IN_TRACK_STATUS_BYTE,
	LME_R_DMACLIENT_CACHE_IN_TRACK_STATUS_LINE,
	LME_R_DMACLIENT_CACHE_IN_TRACK_STATUS_STRIP,
	LME_R_DMACLIENT_CACHE_IN_TRACK_KEY_BYTE,
	LME_R_DMACLIENT_CACHE_IN_TRACK_KEY_LINE,
	LME_R_DMACLIENT_CACHE_IN_TRACK_ENABLE,
	LME_R_DMACLIENT_CACHE_IN_INTERRUPT_VECTOR_MASKED,
	LME_R_DMACLIENT_CACHE_IN_INTERRUPT_VECTOR,
	LME_R_DMACLIENT_CACHE_IN_INTERRUPT_VECTOR_CLEAR,
	LME_R_DMACLIENT_CACHE_IN_INTERRUPT_MASK,
	LME_R_DMACLIENT_CACHE_IN_STALL_COUNTER,
	LME_R_DMACLIENT_CACHE_IN_STALL_COUNTER_RESET,
	LME_R_DMACLIENT_CACHE_IN_DATA_FIFO_DEPTH,
	LME_R_DMACLIENT_CACHE_IN_BURST_ALIGNMENT,
	LME_R_DMACLIENT_CACHE_IN_DESCRIPTOR_1,
	LME_R_DMACLIENT_CACHE_IN_DESCRIPTOR_2,
	LME_R_DMACLIENT_CACHE_IN_REG_INTERFACE_VER,
	LME_R_DMACLIENT_CACHE_IN_BLOCK_ID_CODE,
	LME_R_DMACLIENT_MV_OUT_CLIENT_ENABLE,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_0,
	LME_R_DMACLIENT_MV_OUT_GEOM_BURST_LENGTH,
	LME_R_DMACLIENT_MV_OUT_GEOM_LWIDTH,
	LME_R_DMACLIENT_MV_OUT_GEOM_LINE_COUNT,
	LME_R_DMACLIENT_MV_OUT_GEOM_TOTAL_WIDTH,
	LME_R_DMACLIENT_MV_OUT_GEOM_LINE_DIRECTION,
	LME_R_DMACLIENT_MV_OUT_GEOM_LINE_DIRECTION_HW,
	LME_R_DMACLIENT_MV_OUT_FRMT_PACKING,
	LME_R_DMACLIENT_MV_OUT_FRMT_MNM,
	LME_R_DMACLIENT_MV_OUT_FRMT_CH_MIX_0,
	LME_R_DMACLIENT_MV_OUT_FRMT_CH_MIX_1,
	LME_R_DMACLIENT_MV_OUT_CLIENT_FLUSH,
	LME_R_DMACLIENT_MV_OUT_OUTSTANDING_LIMIT,
	LME_R_DMACLIENT_MV_OUT_STATUS,
	LME_R_DMACLIENT_MV_OUT_TRACK_STATUS_BYTE,
	LME_R_DMACLIENT_MV_OUT_TRACK_STATUS_LINE,
	LME_R_DMACLIENT_MV_OUT_TRACK_STATUS_STRIP,
	LME_R_DMACLIENT_MV_OUT_TRACK_KEY_BYTE,
	LME_R_DMACLIENT_MV_OUT_TRACK_KEY_LINE,
	LME_R_DMACLIENT_MV_OUT_TRACK_ENABLE,
	LME_R_DMACLIENT_MV_OUT_INTERRUPT_VECTOR_MASKED,
	LME_R_DMACLIENT_MV_OUT_INTERRUPT_VECTOR,
	LME_R_DMACLIENT_MV_OUT_INTERRUPT_VECTOR_CLEAR,
	LME_R_DMACLIENT_MV_OUT_INTERRUPT_MASK,
	LME_R_DMACLIENT_MV_OUT_STALL_COUNTER,
	LME_R_DMACLIENT_MV_OUT_STALL_COUNTER_RESET,
	LME_R_DMACLIENT_MV_OUT_DATA_FIFO_DEPTH,
	LME_R_DMACLIENT_MV_OUT_BURST_ALIGNMENT,
	LME_R_DMACLIENT_MV_OUT_SELF_HW_FLUSH_ENABLE,
	LME_R_DMACLIENT_MV_OUT_SELF_HW_FLUSH_STATUS,
	LME_R_DMACLIENT_MV_OUT_DESCRIPTOR_1,
	LME_R_DMACLIENT_MV_OUT_DESCRIPTOR_2,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_1,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_2,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_3,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_4,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_5,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_6,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_7,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_CONF,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_CURRENT,
	LME_R_DMACLIENT_MV_OUT_GEOM_BASE_ADDR_ROTATION_RESET,
	LME_R_DMACLIENT_MV_OUT_REG_INTERFACE_VER,
	LME_R_DMACLIENT_MV_OUT_BLOCK_ID_CODE,
	LME_R_DMACLIENT_SAD_OUT_CLIENT_ENABLE,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_0,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BURST_LENGTH,
	LME_R_DMACLIENT_SAD_OUT_GEOM_LWIDTH,
	LME_R_DMACLIENT_SAD_OUT_GEOM_LINE_COUNT,
	LME_R_DMACLIENT_SAD_OUT_GEOM_TOTAL_WIDTH,
	LME_R_DMACLIENT_SAD_OUT_GEOM_LINE_DIRECTION,
	LME_R_DMACLIENT_SAD_OUT_GEOM_LINE_DIRECTION_HW,
	LME_R_DMACLIENT_SAD_OUT_FRMT_PACKING,
	LME_R_DMACLIENT_SAD_OUT_FRMT_MNM,
	LME_R_DMACLIENT_SAD_OUT_CLIENT_FLUSH,
	LME_R_DMACLIENT_SAD_OUT_OUTSTANDING_LIMIT,
	LME_R_DMACLIENT_SAD_OUT_STATUS,
	LME_R_DMACLIENT_SAD_OUT_TRACK_STATUS_BYTE,
	LME_R_DMACLIENT_SAD_OUT_TRACK_STATUS_LINE,
	LME_R_DMACLIENT_SAD_OUT_TRACK_STATUS_STRIP,
	LME_R_DMACLIENT_SAD_OUT_TRACK_KEY_BYTE,
	LME_R_DMACLIENT_SAD_OUT_TRACK_KEY_LINE,
	LME_R_DMACLIENT_SAD_OUT_TRACK_ENABLE,
	LME_R_DMACLIENT_SAD_OUT_INTERRUPT_VECTOR_MASKED,
	LME_R_DMACLIENT_SAD_OUT_INTERRUPT_VECTOR,
	LME_R_DMACLIENT_SAD_OUT_INTERRUPT_VECTOR_CLEAR,
	LME_R_DMACLIENT_SAD_OUT_INTERRUPT_MASK,
	LME_R_DMACLIENT_SAD_OUT_STALL_COUNTER,
	LME_R_DMACLIENT_SAD_OUT_STALL_COUNTER_RESET,
	LME_R_DMACLIENT_SAD_OUT_DATA_FIFO_DEPTH,
	LME_R_DMACLIENT_SAD_OUT_BURST_ALIGNMENT,
	LME_R_DMACLIENT_SAD_OUT_SELF_HW_FLUSH_ENABLE,
	LME_R_DMACLIENT_SAD_OUT_SELF_HW_FLUSH_STATUS,
	LME_R_DMACLIENT_SAD_OUT_DESCRIPTOR_1,
	LME_R_DMACLIENT_SAD_OUT_DESCRIPTOR_2,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_1,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_2,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_3,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_4,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_5,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_6,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_7,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_CONF,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_CURRENT,
	LME_R_DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_ROTATION_RESET,
	LME_R_DMACLIENT_SAD_OUT_REG_INTERFACE_VER,
	LME_R_DMACLIENT_SAD_OUT_BLOCK_ID_CODE,
	LME_R_CONTINT_SIPULME1P1P0_4SETS_LEVEL_PULSE_N_SEL,
	LME_R_CONTINT_SIPULME1P1P0_4SETS_INT1,
	LME_R_CONTINT_SIPULME1P1P0_4SETS_INT1_ENABLE,
	LME_R_CONTINT_SIPULME1P1P0_4SETS_INT1_STATUS,
	LME_R_CONTINT_SIPULME1P1P0_4SETS_INT1_CLEAR,
	LME_R_CONTINT_SIPULME1P1P0_4SETS_INT2,
	LME_R_CONTINT_SIPULME1P1P0_4SETS_INT2_ENABLE,
	LME_R_CONTINT_SIPULME1P1P0_4SETS_INT2_STATUS,
	LME_R_CONTINT_SIPULME1P1P0_4SETS_INT2_CLEAR,
	LME_R_CONTINT_SIPULME1P1P0_4SETS_REG_INTERFACE_VER,
	LME_R_AXICRC_SIPULME1P1P0_SEED_0,
	LME_R_AXICRC_SIPULME1P1P0_RESULT_0,
	LME_R_AXICRC_SIPULME1P1P0_SEED_1,
	LME_R_AXICRC_SIPULME1P1P0_RESULT_1,
	LME_R_AXICRC_SIPULME1P1P0_REG_INTERFACE_VER,
	LME_R_COREX_ENABLE,
	LME_R_COREX_RESET,
	LME_R_COREX_FAST_MODE,
	LME_R_COREX_UPDATE_TYPE_0,
	LME_R_COREX_UPDATE_TYPE_1,
	LME_R_COREX_UPDATE_MODE_0,
	LME_R_COREX_UPDATE_MODE_1,
	LME_R_COREX_START_0,
	LME_R_COREX_START_1,
	LME_R_COREX_COPY_FROM_IP_0,
	LME_R_COREX_COPY_FROM_IP_1,
	LME_R_COREX_STATUS_0,
	LME_R_COREX_STATUS_1,
	LME_R_COREX_PRE_ADDR_CONFIG,
	LME_R_COREX_PRE_DATA_CONFIG,
	LME_R_COREX_POST_ADDR_CONFIG,
	LME_R_COREX_POST_DATA_CONFIG,
	LME_R_COREX_PRE_POST_CONFIG_EN,
	LME_R_COREX_TYPE_WRITE,
	LME_R_COREX_TYPE_WRITE_TRIGGER,
	LME_R_COREX_TYPE_READ,
	LME_R_COREX_TYPE_READ_OFFSET,
	LME_R_COREX_INTERRUPT_VECTOR_MASKED,
	LME_R_COREX_INTERRUPT_VECTOR,
	LME_R_COREX_INTERRUPT_VECTOR_CLEAR,
	LME_R_COREX_INTERRUPT_MASK,
	LME_R_COREX_MULTISET_ENABLE,
	LME_R_COREX_MS_UPDATE_TYPE_0_0,
	LME_R_COREX_MS_UPDATE_TYPE_0_1,
	LME_R_COREX_MS_UPDATE_TYPE_0_2,
	LME_R_COREX_MS_UPDATE_TYPE_0_3,
	LME_R_COREX_MS_UPDATE_TYPE_1_0,
	LME_R_COREX_MS_UPDATE_TYPE_1_1,
	LME_R_COREX_MS_UPDATE_TYPE_1_2,
	LME_R_COREX_MS_UPDATE_TYPE_1_3,
	LME_R_COREX_MS_STATUS_0,
	LME_R_COREX_MS_STATUS_1,
	LME_R_COREX_REG_INTERFACE_VER,
	LME_REG_CNT,
};

static const struct is_reg lme_regs[LME_REG_CNT] = {
	{0X00000, "GLOBAL_ENABLE"},
	{0X00004, "DISABLE_CHAIN_ON_CORRUPTED"},
	{0X00008, "SW_RESET"},
	{0X0000C, "SW_CORE_RESET"},
	{0X00010, "HW_RESET"},
	{0X00014, "FORCE_INTERNAL_CLOCK"},
	{0X00018, "TRANS_STOP_REQ"},
	{0X0001C, "TRANS_STOP_REQ_RDY"},
	{0X00020, "IDLENESS_STATUS"},
	{0X00024, "AUTO_MASK_PREADY"},
	{0X00028, "INTERRUPT_AUTO_MASK"},
	{0X0002C, "IP_POST_FRAME_GAP"},
	{0X00030, "IP_USE_END_INTERRUPT_ENABLE"},
	{0X00034, "IP_ROL_MODE"},
	{0X00038, "IP_ROL_RESET"},
	{0X0003C, "IP_PROCESSING"},
	{0X00040, "IP_DISABLE_C2COM_LOST_CONNECTION_AUTORECOVERY"},
	{0X00044, "IP_FORCE_TRS_FLUSH"},
	{0X00048, "CTRL_MS_OPERATION_MODE_SELECT"},
	{0X0004C, "CTRL_ADD_TO_QUEUE_INPUT_MODE_SELECT"},
	{0X00050, "CTRL_MS_SEQUENCE_LENGTH"},
	{0X00054, "CTRL_MS_SEQUENCE"},
	{0X00058, "CTRL_MS_SEQUENCE_INDEX_POINTER"},
	{0X0005C, "CTRL_MS_SEQUENCE_SET_DISABLE"},
	{0X00060, "CTRL_MS_CURRENT_ACTIVE_SET"},
	{0X00064, "CTRL_MS_NEXT_FRAME_SET"},
	{0X00068, "CTRL_MS_QUEUE_FULLNESS"},
	{0X0006C, "CTRL_MS_QUEUE_FLUSH"},
	{0X00070, "CTRL_MS_ADD_TO_QUEUE"},
	{0X00074, "CTRL_INCREASE_FRAME_COUNTER_TRIGGER"},
	{0X00078, "CTRL_TOTAL_FRAME_COUNTER"},
	{0X0007C, "CTRL_FRAME_COUNTER_PER_SET"},
	{0X00080, "CTRL_ERROR_INTERRUPT_VECTOR_STATUS"},
	{0X00084, "CTRL_ERROR_INTERRUPT_VECTOR_STATUS_CLEAR"},
	{0X00088, "CTRL_ERROR_INTERRUPT_ENABLE"},
	{0X0008C, "CTRL_PROCESSING_TIMEOUT"},
	{0X00090, "CTRL_PROCESSING_TIMEOUT_RESET_ENABLE"},
	{0X00094, "IP_END_INTERRUPT_ENABLE"},
	{0X00098, "IP_CORRUPTED_INTERRUPT_ENABLE"},
	{0X0009C, "IP_STALL_OUT_STAT"},
	{0X000A0, "IP_ROL_SELECT"},
	{0X000A4, "IP_SECURITY_INPUT_SELECT"},
	{0X000A8, "IP_INT_ON_COL_ROW"},
	{0X000AC, "IP_INT_ON_COL_ROW_CORD"},
	{0X000E8, "IP_FREEZE_VERSION"},
	{0X000EC, "IP_ISP_VERSION"},
	{0X000F4, "SIPULME1P1P0_REG_INTERFACE_VER"},
	{0X00100, "CACHE_8BIT_LME_BYPASS"},
	{0X00104, "CACHE_8BIT_LME_CONFIG"},
	{0X00108, "CACHE_8BIT_BASE_ADDR_1P_0"},
	{0X0010C, "CACHE_8BIT_BASE_ADDR_1P_JUMP_0"},
	{0X00110, "CACHE_8BIT_BASE_ADDR_2P_0"},
	{0X00114, "CACHE_8BIT_BASE_ADDR_2P_JUMP_0"},
	{0X00118, "CACHE_8BIT_BASE_ADDR_3P_0"},
	{0X0011C, "CACHE_8BIT_BASE_ADDR_3P_JUMP_0"},
	{0X00120, "CACHE_8BIT_BASE_ADDR_1P_1"},
	{0X00124, "CACHE_8BIT_BASE_ADDR_1P_JUMP_1"},
	{0X00128, "CACHE_8BIT_BASE_ADDR_2P_1"},
	{0X0012C, "CACHE_8BIT_BASE_ADDR_2P_JUMP_1"},
	{0X00130, "CACHE_8BIT_BASE_ADDR_3P_1"},
	{0X00134, "CACHE_8BIT_BASE_ADDR_3P_JUMP_1"},
	{0X00138, "CACHE_8BIT_CROP_X_CONFIG_0"},
	{0X0013C, "CACHE_8BIT_CROP_Y_CONFIG_0"},
	{0X00140, "CACHE_8BIT_CROP_X_CONFIG_1"},
	{0X00144, "CACHE_8BIT_CROP_Y_CONFIG_1"},
	{0X00148, "CACHE_8BIT_PIX_CONFIG_0"},
	{0X0014C, "CACHE_8BIT_PIX_CONFIG_1"},
	{0X00150, "CACHE_8BIT_DATA_REQ_CNT"},
	{0X00154, "CACHE_8BIT_DATA_REQ_CNT_HIT"},
	{0X00158, "CACHE_8BIT_PRE_REQ_CNT"},
	{0X0015C, "CACHE_8BIT_PRE_REQ_CNT_HIT"},
	{0X00160, "CACHE_8BIT_CACHE_UTILIZATION"},
	{0X001F4, "CACHE_8BIT_REG_INTERFACE_VER"},
	{0X00200, "MVCT_8BIT_LME_CONFIG"},
	{0X00204, "MVCT_8BIT_MVE_CONFIG"},
	{0X00208, "MVCT_8BIT_MVE_WEIGHT"},
	{0X0020C, "MVCT_8BIT_MV_SRX"},
	{0X00210, "MVCT_8BIT_MV_SRY"},
	{0X00214, "MVCT_8BIT_IMAGE_DIMENTIONS"},
	{0X00218, "MVCT_8BIT_LME_PREFETCH"},
	{0X0021C, "MVCT_8BIT_TRS_CONFIG1"},
	{0X00220, "MVCT_8BIT_POST_FRAME_GAP"},
	{0X00224, "MVCT_8BIT_MVM_DBG0"},
	{0X00228, "MVCT_8BIT_MVM_DBG1"},
	{0X0022C, "MVCT_8BIT_MVM_DBG2"},
	{0X00230, "MVCT_8BIT_MVM_DBG3"},
	{0X00234, "MVCT_8BIT_MVM_DBG4"},
	{0X00238, "MVCT_8BIT_MVM_DBG5"},
	{0X0023C, "MVCT_8BIT_IFC_DBG0"},
	{0X00240, "MVCT_8BIT_IFC_DBG1"},
	{0X00244, "MVCT_8BIT_PMV_RAM_WR_ACCESS"},
	{0X00248, "MVCT_8BIT_PMV_RAM_START_ADD"},
	{0X0024C, "MVCT_8BIT_PMV_RAM_RD_ACCESS"},
	{0X002F4, "MVCT_8BIT_REG_INTERFACE_VER"},
	{0X00300, "SECU_CTRL_SEQID"},
	{0X00304, "SECU_CTRL_SEQID_RD"},
	{0X00308, "SECU_CTRL_TZINFO_SEQID_0"},
	{0X0030C, "SECU_CTRL_TZINFO_SEQID_0_RD"},
	{0X00310, "SECU_CTRL_TZINFO_SEQID_1"},
	{0X00314, "SECU_CTRL_TZINFO_SEQID_1_RD"},
	{0X00318, "SECU_CTRL_TZINFO_SEQID_2"},
	{0X0031C, "SECU_CTRL_TZINFO_SEQID_2_RD"},
	{0X00320, "SECU_CTRL_TZINFO_SEQID_3"},
	{0X00324, "SECU_CTRL_TZINFO_SEQID_3_RD"},
	{0X00328, "SECU_CTRL_TZINFO_SEQID_4"},
	{0X0032C, "SECU_CTRL_TZINFO_SEQID_4_RD"},
	{0X00330, "SECU_CTRL_TZINFO_SEQID_5"},
	{0X00334, "SECU_CTRL_TZINFO_SEQID_5_RD"},
	{0X00338, "SECU_CTRL_TZINFO_SEQID_6"},
	{0X0033C, "SECU_CTRL_TZINFO_SEQID_6_RD"},
	{0X00340, "SECU_CTRL_TZINFO_SEQID_7"},
	{0X00344, "SECU_CTRL_TZINFO_SEQID_7_RD"},
	{0X003F4, "SECUCTRL_REG_INTERFACE_VER"},
	{0X00400, "DMA_SIPULME1P1P0_DEBUG"},
	{0X00408, "DMA_SIPULME1P1P0_WR_SLOT_LEN_0"},
	{0X0040C, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_0"},
	{0X00410, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_1"},
	{0X00414, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_2"},
	{0X00418, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_3"},
	{0X0041C, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_4"},
	{0X00420, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_5"},
	{0X00424, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_6"},
	{0X00428, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_7"},
	{0X0042C, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_8"},
	{0X00430, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_9"},
	{0X00434, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_10"},
	{0X00438, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_11"},
	{0X0043C, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_12"},
	{0X00440, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_13"},
	{0X00444, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_14"},
	{0X00448, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_15"},
	{0X0044C, "DMA_SIPULME1P1P0_SLOT_REG_RD_0_16"},
	{0X00450, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_0"},
	{0X00454, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_1"},
	{0X00458, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_2"},
	{0X0045C, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_3"},
	{0X00460, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_4"},
	{0X00464, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_5"},
	{0X00468, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_6"},
	{0X0046C, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_7"},
	{0X00470, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_8"},
	{0X00474, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_9"},
	{0X00478, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_10"},
	{0X0047C, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_11"},
	{0X00480, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_12"},
	{0X00484, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_13"},
	{0X00488, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_14"},
	{0X0048C, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_15"},
	{0X00490, "DMA_SIPULME1P1P0_SLOT_REG_WR_0_16"},
	{0X00494, "DMA_SIPULME1P1P0_SWAP_TABLE_RD_0"},
	{0X00498, "DMA_SIPULME1P1P0_SWAP_TABLE_WR_0"},
	{0X0049C, "DMA_SIPULME1P1P0_QOS_LUT_RD_0_0"},
	{0X004A0, "DMA_SIPULME1P1P0_QOS_LUT_RD_0_1"},
	{0X004A4, "DMA_SIPULME1P1P0_QOS_LUT_WR_0_0"},
	{0X004A8, "DMA_SIPULME1P1P0_QOS_LUT_WR_0_1"},
	{0X004B0, "DMA_SIPULME1P1P0_WR_DATA_FIFO_DEPTH_0"},
	{0X004B4, "DMA_SIPULME1P1P0_WR_FIFO_FULLNESS_0"},
	{0X004B8, "DMA_SIPULME1P1P0_WR_ADDR_MO_LIMIT_0"},
	{0X004BC, "DMA_SIPULME1P1P0_WR_MO_CNT_0"},
	{0X004C0, "DMA_SIPULME1P1P0_RD_MO_CNT_0"},
	{0X004F4, "DMA_SIPULME1P1P0_REG_INTERFACE_VER"},
	{0X00500, "DMATOP_SIPULME1P1P0_DMACLIENTS_FLUSH_STATUS"},
	{0X00504, "DMATOP_SIPULME1P1P0_DMACLIENTS_ERRORS"},
	{0X00508, "DMATOP_SIPULME1P1P0_DMACLIENTS_INFO"},
	{0X005F4, "DMATOP_SIPULME1P1P0_REG_INTERFACE_VER"},
	{0X00600, "DMACLIENT_CACHE_IN_CLIENT_ENABLE"},
	{0X00608, "DMACLIENT_CACHE_IN_GEOM_BURST_LENGTH"},
	{0X00678, "DMACLIENT_CACHE_IN_CLIENT_FLUSH"},
	{0X0067C, "DMACLIENT_CACHE_IN_OUTSTANDING_LIMIT"},
	{0X00680, "DMACLIENT_CACHE_IN_STATUS"},
	{0X00684, "DMACLIENT_CACHE_IN_TRACK_STATUS_BYTE"},
	{0X00688, "DMACLIENT_CACHE_IN_TRACK_STATUS_LINE"},
	{0X0068C, "DMACLIENT_CACHE_IN_TRACK_STATUS_STRIP"},
	{0X00690, "DMACLIENT_CACHE_IN_TRACK_KEY_BYTE"},
	{0X00694, "DMACLIENT_CACHE_IN_TRACK_KEY_LINE"},
	{0X0069C, "DMACLIENT_CACHE_IN_TRACK_ENABLE"},
	{0X006A0, "DMACLIENT_CACHE_IN_INTERRUPT_VECTOR_MASKED"},
	{0X006A4, "DMACLIENT_CACHE_IN_INTERRUPT_VECTOR"},
	{0X006A8, "DMACLIENT_CACHE_IN_INTERRUPT_VECTOR_CLEAR"},
	{0X006AC, "DMACLIENT_CACHE_IN_INTERRUPT_MASK"},
	{0X006B0, "DMACLIENT_CACHE_IN_STALL_COUNTER"},
	{0X006B4, "DMACLIENT_CACHE_IN_STALL_COUNTER_RESET"},
	{0X006BC, "DMACLIENT_CACHE_IN_DATA_FIFO_DEPTH"},
	{0X006C0, "DMACLIENT_CACHE_IN_BURST_ALIGNMENT"},
	{0X006D8, "DMACLIENT_CACHE_IN_DESCRIPTOR_1"},
	{0X006DC, "DMACLIENT_CACHE_IN_DESCRIPTOR_2"},
	{0X006F4, "DMACLIENT_CACHE_IN_REG_INTERFACE_VER"},
	{0X006F8, "DMACLIENT_CACHE_IN_BLOCK_ID_CODE"},
	{0X00700, "DMACLIENT_MV_OUT_CLIENT_ENABLE"},
	{0X00704, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_0"},
	{0X00708, "DMACLIENT_MV_OUT_GEOM_BURST_LENGTH"},
	{0X0070C, "DMACLIENT_MV_OUT_GEOM_LWIDTH"},
	{0X00718, "DMACLIENT_MV_OUT_GEOM_LINE_COUNT"},
	{0X00720, "DMACLIENT_MV_OUT_GEOM_TOTAL_WIDTH"},
	{0X00724, "DMACLIENT_MV_OUT_GEOM_LINE_DIRECTION"},
	{0X00728, "DMACLIENT_MV_OUT_GEOM_LINE_DIRECTION_HW"},
	{0X0075C, "DMACLIENT_MV_OUT_FRMT_PACKING"},
	{0X00760, "DMACLIENT_MV_OUT_FRMT_MNM"},
	{0X00768, "DMACLIENT_MV_OUT_FRMT_CH_MIX_0"},
	{0X0076C, "DMACLIENT_MV_OUT_FRMT_CH_MIX_1"},
	{0X00778, "DMACLIENT_MV_OUT_CLIENT_FLUSH"},
	{0X0077C, "DMACLIENT_MV_OUT_OUTSTANDING_LIMIT"},
	{0X00780, "DMACLIENT_MV_OUT_STATUS"},
	{0X00784, "DMACLIENT_MV_OUT_TRACK_STATUS_BYTE"},
	{0X00788, "DMACLIENT_MV_OUT_TRACK_STATUS_LINE"},
	{0X0078C, "DMACLIENT_MV_OUT_TRACK_STATUS_STRIP"},
	{0X00790, "DMACLIENT_MV_OUT_TRACK_KEY_BYTE"},
	{0X00794, "DMACLIENT_MV_OUT_TRACK_KEY_LINE"},
	{0X0079C, "DMACLIENT_MV_OUT_TRACK_ENABLE"},
	{0X007A0, "DMACLIENT_MV_OUT_INTERRUPT_VECTOR_MASKED"},
	{0X007A4, "DMACLIENT_MV_OUT_INTERRUPT_VECTOR"},
	{0X007A8, "DMACLIENT_MV_OUT_INTERRUPT_VECTOR_CLEAR"},
	{0X007AC, "DMACLIENT_MV_OUT_INTERRUPT_MASK"},
	{0X007B0, "DMACLIENT_MV_OUT_STALL_COUNTER"},
	{0X007B4, "DMACLIENT_MV_OUT_STALL_COUNTER_RESET"},
	{0X007BC, "DMACLIENT_MV_OUT_DATA_FIFO_DEPTH"},
	{0X007C0, "DMACLIENT_MV_OUT_BURST_ALIGNMENT"},
	{0X007C8, "DMACLIENT_MV_OUT_SELF_HW_FLUSH_ENABLE"},
	{0X007CC, "DMACLIENT_MV_OUT_SELF_HW_FLUSH_STATUS"},
	{0X007D8, "DMACLIENT_MV_OUT_DESCRIPTOR_1"},
	{0X007DC, "DMACLIENT_MV_OUT_DESCRIPTOR_2"},
	{0X00800, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_1"},
	{0X00804, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_2"},
	{0X00808, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_3"},
	{0X0080C, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_4"},
	{0X00810, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_5"},
	{0X00814, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_6"},
	{0X00818, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_7"},
	{0X0081C, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_CONF"},
	{0X00820, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_CURRENT"},
	{0X00824, "DMACLIENT_MV_OUT_GEOM_BASE_ADDR_ROTATION_RESET"},
	{0X008F4, "DMACLIENT_MV_OUT_REG_INTERFACE_VER"},
	{0X008F8, "DMACLIENT_MV_OUT_BLOCK_ID_CODE"},
	{0X00900, "DMACLIENT_SAD_OUT_CLIENT_ENABLE"},
	{0X00904, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_0"},
	{0X00908, "DMACLIENT_SAD_OUT_GEOM_BURST_LENGTH"},
	{0X0090C, "DMACLIENT_SAD_OUT_GEOM_LWIDTH"},
	{0X00918, "DMACLIENT_SAD_OUT_GEOM_LINE_COUNT"},
	{0X00920, "DMACLIENT_SAD_OUT_GEOM_TOTAL_WIDTH"},
	{0X00924, "DMACLIENT_SAD_OUT_GEOM_LINE_DIRECTION"},
	{0X00928, "DMACLIENT_SAD_OUT_GEOM_LINE_DIRECTION_HW"},
	{0X0095C, "DMACLIENT_SAD_OUT_FRMT_PACKING"},
	{0X00960, "DMACLIENT_SAD_OUT_FRMT_MNM"},
	{0X00978, "DMACLIENT_SAD_OUT_CLIENT_FLUSH"},
	{0X0097C, "DMACLIENT_SAD_OUT_OUTSTANDING_LIMIT"},
	{0X00980, "DMACLIENT_SAD_OUT_STATUS"},
	{0X00984, "DMACLIENT_SAD_OUT_TRACK_STATUS_BYTE"},
	{0X00988, "DMACLIENT_SAD_OUT_TRACK_STATUS_LINE"},
	{0X0098C, "DMACLIENT_SAD_OUT_TRACK_STATUS_STRIP"},
	{0X00990, "DMACLIENT_SAD_OUT_TRACK_KEY_BYTE"},
	{0X00994, "DMACLIENT_SAD_OUT_TRACK_KEY_LINE"},
	{0X0099C, "DMACLIENT_SAD_OUT_TRACK_ENABLE"},
	{0X009A0, "DMACLIENT_SAD_OUT_INTERRUPT_VECTOR_MASKED"},
	{0X009A4, "DMACLIENT_SAD_OUT_INTERRUPT_VECTOR"},
	{0X009A8, "DMACLIENT_SAD_OUT_INTERRUPT_VECTOR_CLEAR"},
	{0X009AC, "DMACLIENT_SAD_OUT_INTERRUPT_MASK"},
	{0X009B0, "DMACLIENT_SAD_OUT_STALL_COUNTER"},
	{0X009B4, "DMACLIENT_SAD_OUT_STALL_COUNTER_RESET"},
	{0X009BC, "DMACLIENT_SAD_OUT_DATA_FIFO_DEPTH"},
	{0X009C0, "DMACLIENT_SAD_OUT_BURST_ALIGNMENT"},
	{0X009C8, "DMACLIENT_SAD_OUT_SELF_HW_FLUSH_ENABLE"},
	{0X009CC, "DMACLIENT_SAD_OUT_SELF_HW_FLUSH_STATUS"},
	{0X009D8, "DMACLIENT_SAD_OUT_DESCRIPTOR_1"},
	{0X009DC, "DMACLIENT_SAD_OUT_DESCRIPTOR_2"},
	{0X00A00, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_1"},
	{0X00A04, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_2"},
	{0X00A08, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_3"},
	{0X00A0C, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_4"},
	{0X00A10, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_5"},
	{0X00A14, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_6"},
	{0X00A18, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_7"},
	{0X00A1C, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_CONF"},
	{0X00A20, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_CURRENT"},
	{0X00A24, "DMACLIENT_SAD_OUT_GEOM_BASE_ADDR_ROTATION_RESET"},
	{0X00AF4, "DMACLIENT_SAD_OUT_REG_INTERFACE_VER"},
	{0X00AF8, "DMACLIENT_SAD_OUT_BLOCK_ID_CODE"},
	{0X00B00, "CONTINT_SIPULME1P1P0_4SETS_LEVEL_PULSE_N_SEL"},
	{0X00B04, "CONTINT_SIPULME1P1P0_4SETS_INT1"},
	{0X00B08, "CONTINT_SIPULME1P1P0_4SETS_INT1_ENABLE"},
	{0X00B0C, "CONTINT_SIPULME1P1P0_4SETS_INT1_STATUS"},
	{0X00B10, "CONTINT_SIPULME1P1P0_4SETS_INT1_CLEAR"},
	{0X00B14, "CONTINT_SIPULME1P1P0_4SETS_INT2"},
	{0X00B18, "CONTINT_SIPULME1P1P0_4SETS_INT2_ENABLE"},
	{0X00B1C, "CONTINT_SIPULME1P1P0_4SETS_INT2_STATUS"},
	{0X00B20, "CONTINT_SIPULME1P1P0_4SETS_INT2_CLEAR"},
	{0X00BF4, "CONTINT_SIPULME1P1P0_4SETS_REG_INTERFACE_VER"},
	{0X00C00, "AXICRC_SIPULME1P1P0_SEED_0"},
	{0X00C04, "AXICRC_SIPULME1P1P0_RESULT_0"},
	{0X00C08, "AXICRC_SIPULME1P1P0_SEED_1"},
	{0X00C0C, "AXICRC_SIPULME1P1P0_RESULT_1"},
	{0X00CF4, "AXICRC_SIPULME1P1P0_REG_INTERFACE_VER"},
	{0X00D00, "COREX_ENABLE"},
	{0X00D04, "COREX_RESET"},
	{0X00D08, "COREX_FAST_MODE"},
	{0X00D0C, "COREX_UPDATE_TYPE_0"},
	{0X00D10, "COREX_UPDATE_TYPE_1"},
	{0X00D14, "COREX_UPDATE_MODE_0"},
	{0X00D18, "COREX_UPDATE_MODE_1"},
	{0X00D1C, "COREX_START_0"},
	{0X00D20, "COREX_START_1"},
	{0X00D24, "COREX_COPY_FROM_IP_0"},
	{0X00D28, "COREX_COPY_FROM_IP_1"},
	{0X00D2C, "COREX_STATUS_0"},
	{0X00D30, "COREX_STATUS_1"},
	{0X00D34, "COREX_PRE_ADDR_CONFIG"},
	{0X00D38, "COREX_PRE_DATA_CONFIG"},
	{0X00D3C, "COREX_POST_ADDR_CONFIG"},
	{0X00D40, "COREX_POST_DATA_CONFIG"},
	{0X00D44, "COREX_PRE_POST_CONFIG_EN"},
	{0X00D48, "COREX_TYPE_WRITE"},
	{0X00D4C, "COREX_TYPE_WRITE_TRIGGER"},
	{0X00D50, "COREX_TYPE_READ"},
	{0X00D54, "COREX_TYPE_READ_OFFSET"},
	{0X00D58, "COREX_INTERRUPT_VECTOR_MASKED"},
	{0X00D5C, "COREX_INTERRUPT_VECTOR"},
	{0X00D60, "COREX_INTERRUPT_VECTOR_CLEAR"},
	{0X00D64, "COREX_INTERRUPT_MASK"},
	{0X00D68, "COREX_MULTISET_ENABLE"},
	{0X00D6C, "COREX_MS_UPDATE_TYPE_0_0"},
	{0X00D70, "COREX_MS_UPDATE_TYPE_0_1"},
	{0X00D74, "COREX_MS_UPDATE_TYPE_0_2"},
	{0X00D78, "COREX_MS_UPDATE_TYPE_0_3"},
	{0X00D7C, "COREX_MS_UPDATE_TYPE_1_0"},
	{0X00D80, "COREX_MS_UPDATE_TYPE_1_1"},
	{0X00D84, "COREX_MS_UPDATE_TYPE_1_2"},
	{0X00D88, "COREX_MS_UPDATE_TYPE_1_3"},
	{0X00D8C, "COREX_MS_STATUS_0"},
	{0X00D90, "COREX_MS_STATUS_1"},
	{0X00DF4, "COREX_REG_INTERFACE_VER"},
};

#endif
