/*******************************************************************************
 * Copyright (C) 2021 Amlogic, Inc. All rights reserved.
 ******************************************************************************/

/*****************************************************************************/
/**
 *
 * @file adlak_reg.h
 * @brief
 *
 * <pre>
 * MODIFICATION HISTORY:
 *
 * Ver   	Who				Date				Changes
 * ----------------------------------------------------------------------------
 * 1.00a shiwei.sun@amlogic.com	2021/06/18	Initial release
 * </pre>
 *
 ******************************************************************************/

#ifndef __ADLAK_REG_H__
#define __ADLAK_REG_H__

/***************************** Include Files *********************************/
#include "adlak_typedef.h"
#ifdef __cplusplus
extern "C" {
#endif

/*----------------------------------------------------------------------------*/
/* registers                                                                  */
/*----------------------------------------------------------------------------*/

#define REG_ADLAK_0X0 (0x0) /* read,default=0x0 */

#define REG_ADLAK_0X4 (0x4) /* read/write,default=0xff */
// irq
#define REG_ADLAK_0X10 (0x10) /* read,default=0x0 */
#define REG_ADLAK_0X14 (0x14)   /* read/write,default=0x0 */
#define REG_ADLAK_0X18 (0x18)    /* read/write,default=0x0 */
#define REG_ADLAK_0X1C (0x1C) /* read,default=0x0 */
// power&clock
#define REG_ADLAK_0X20 (0x20)        /* read/write,default=0x0 */
#define REG_ADLAK_0X24 (0x24)     /* read/write,default=0x0 */
#define REG_ADLAK_0X28 (0x28)  /* read/write,default=0x0 */
#define REG_ADLAK_0X2C (0x2c) /* read/write,default=0x1008 */
// debug
#define REG_ADLAK_0X30 (0x30)        /* read/write,default=0x0 */
#define REG_ADLAK_0X34 (0x34)       /* read/write,default=0x0 */
#define REG_ADLAK_0X38 (0x38)   /* read/write,default=0x0 */
#define REG_ADLAK_0X3C (0x3c)       /* read,default=0x0 */
#define REG_ADLAK_0X40 (0x40) /* read/write,default=0x0 */
#define REG_ADLAK_0X44 (0x44) /* read/write,default=0x0 */
#define REG_ADLAK_0X48 (0x48) /* read/write,default=0x0 */
#define REG_ADLAK_0X4C (0x4c) /* read,default=0x0 */

// parser
#define REG_ADLAK_0X50 (0x50)            /* read/write,default=0x0 */
#define REG_ADLAK_0X54 (0x54)             /* read,default=0x0 */
#define REG_ADLAK_0X58 (0x58)         /* read,default=0x0 */
#define REG_ADLAK_0X5C (0x5c)        /* read,default=0x0 */
#define REG_ADLAK_0X60 (0x60)      /* read,default=0x0 */
#define REG_ADLAK_0X64 (0x64)        /* read/write,default=0x0 */
#define REG_ADLAK_0X68 (0x68)        /* read/write,default=0x0 */
#define REG_ADLAK_0X6C (0x6c)         /* read/write,default=0x0 */
#define REG_ADLAK_0X70 (0x70)         /* read,default=0x0 */
#define REG_ADLAK_0X74 (0x74)         /* read,default=0x0 */
#define REG_ADLAK_0X78 (0x78)       /* read,default=0x0 */
#define REG_ADLAK_0X7C (0x7c)            /* read,default=0x0 */
#define REG_ADLAK_0X80 (0x80)             /* read/write,default=0x4 */
#define REG_ADLAK_0X84 (0x84)         /* read/write,default=0x0 */
#define REG_ADLAK_0X88 (0x88)        /* read/write,default=0x0 */
#define REG_ADLAK_0X8C (0x8c) /* read,default=0x0 */
#define REG_ADLAK_0X90 (0x90)       /* read,default=0x0 */
#define REG_ADLAK_0X9C (0x9C)       /* read/write,default=0x0 */
#define REG_ADLAK_0XA0 (0xa0)             /* read/write,default=0x0 */
#define REG_ADLAK_0XA4 (0xa4)       /* read/write,default=0x0 */
#define REG_ADLAK_0XA8 (0xa8)       /* read/write,default=0x0 */
#define REG_ADLAK_0XAC (0xac)       /* read/write,default=0x30011111 */
#define REG_ADLAK_0XB0 (0xb0)       /* read/write,default=0x11111 */
#define REG_ADLAK_0XB4 (0xb4)       /* read/write,default=0x211 */
#define REG_ADLAK_0XB8 (0xb8)          /* read/write,default=0x0 */
#define REG_ADLAK_0XBC (0xbc)        /* read/write,default=0x440044 */
// smmu
#define REG_ADLAK_0XC0 (0xc0)          /* read/write,default=0x0 */
#define REG_ADLAK_0XC4 (0xc4)      /* read/write,default=0x0 */
#define REG_ADLAK_0XC8 (0xc8)      /* read/write,default=0x0 */
#define REG_ADLAK_0XCC (0xcc) /* read/write,default=0x11111111 */
#define REG_ADLAK_0XD0 (0xd0) /* read/write,default=0x111111 */
#define REG_ADLAK_0XD4 (0xd4)     /* read/write,default=0x0 */
#define REG_ADLAK_0XD8 (0xd8)      /* read/write,default=0x0 */
#define REG_ADLAK_0XDC (0xdc)         /* read/write,default=0x0 */
#define REG_ADLAK_0XE0 (0xe0)     /* read,default=0x0 */
#define REG_ADLAK_0XE4 (0xe4)      /* read,default=0x0 */
// pm
#define REG_ADLAK_0XF0 (0xf0)       /* read/write,default=0x0 */
#define REG_ADLAK_0XF4 (0xf4) /* read/write,default=0x0 */
#define REG_ADLAK_0XF8 (0xf8) /* read/write,default=0x0 */
#define REG_ADLAK_0XFC (0xfc)  /* read,default=0x0 */
#define REG_ADLAK_0X100 (0x100) /* read/write,default=0x0 */
#define REG_ADLAK_0X104 (0x104)     /* read/write,default=0x0 */
// AXI DRAM
#define REG_ADLAK_0X110 (0x110)  /* read/write,default=0x0 */
#define REG_ADLAK_0X114 (0x114) /* read/write,default=0x80808080 */
// AXI SRAM
#define REG_ADLAK_0X118 (0x118)  /* read/write,default=0x0 */
#define REG_ADLAK_0X11C (0x11c) /* read/write,default=0x80808080 */

#define REG_ADLAK_0X120 (0x120) /* read/write,default=0x0 */

#define REG_ADLAK_NUM_MAX (64)
// irq mask
#define ADLAK_IRQ_MASK_PARSER_STOP_CMD (1 << 0) /* [0]: parser stop for command*/
#define ADLAK_IRQ_MASK_PARSER_STOP_ERR (1 << 1) /* [1]: parser stop for error*/
#define ADLAK_IRQ_MASK_PARSER_STOP_PMT (1 << 2) /* [2]: parser stop for preempt*/
#define ADLAK_IRQ_MASK_PEND_TIMOUT (1 << 3)     /* [3]: pending timer timeout*/
#define ADLAK_IRQ_MASK_LAYER_END (1 << 4)       /* [4]: layer end event*/
#define ADLAK_IRQ_MASK_TIM_STAMP (1 << 5)       /* [5]: time_stamp irq event*/
#define ADLAK_IRQ_MASK_APB_WAIT_TIMOUT (1 << 6) /* [6]: apb wait timer timeout*/
#define ADLAK_IRQ_MASK_PM_DRAM_OVF (1 << 7)     /* [7]: pm dram overflow*/
#define ADLAK_IRQ_MASK_PM_FIFO_OVF (1 << 8)     /* [8]: pm fifo overflow*/
#define ADLAK_IRQ_MASK_PM_ARBITER_OVF (1 << 9)  /* [9]: pm arbiter overflow*/
#define ADLAK_IRQ_MASK_INVALID_IOVA (1 << 10)   /* [10]: smmu has an invalid-va*/
#define ADLAK_IRQ_MASK_SW_TIMEOUT (1 << 20)     /*user define : software timeout*/

/*----------------------------------------------------------------------------*/
/* bit group structures                                                       */
/*----------------------------------------------------------------------------*/

typedef union { /* OFFSET:0x0 ADLAK_REV */
    struct {
        u32 minor_rev : 8; /* Hardware minor revision number */
        u32 major_rev : 8; /* Hardware major revision number */
        u32 : 16;
    } bitc;
    u32 all;
} HAL_ADLAK_REV_S;
typedef union { /* OFFSET:0x4 ADLAK_WAIT_TIMER */
    struct {
        u32 wait_timer_val : 16; /* wait timer value, "0" means "timeout" disable */
        u32 : 16;
    } bitc;
    u32 all;
} HAL_ADLAK_WAIT_TIMER_S;
typedef union { /* OFFSET:0x10 ADLAK_IRQ_MASKED */
    struct {
        u32 irqsts_masked : 16; /* Interrupt masked status.
                                                Clear this register by writing ‘1’ into
                                   reg_irqsts_raw reg_irqsts_masked = reg_irqsts_mask &
                                   reg_irqsts_raw */
        u32 : 16;
    } bitc;
    u32 all;
} HAL_ADLAK_IRQ_MASKED_S;
typedef union { /* OFFSET:0x14 ADLAK_IRQ_MASK */
    struct {
        u32 irqsts_mask : 16; /* Interrupt status mask
                                              0:disable IRQ
                                              1:enable IRQ
                                              [0]: parser stop for command
                                              [1]: parser stop for error
                                              [2]: parser stop for preempt
                                              [3]: pending timer timeout
                                              [4]: layer end event
                                              [5]: time_stamp irq event
                                              [6]: apb wait timer timeout
                                              [7]: pm dram overflow
                                              [8]: pm fifo overflow
                                              [9]: smmu has an invalid-va */
        u32 : 16;
    } bitc;
    u32 all;
} HAL_ADLAK_IRQ_MASK_S;
typedef union { /* OFFSET:0x18 ADLAK_IRQ_RAW */
    struct {
        u32 irqsts_raw : 16; /* Interrupt raw status.
                                             Clear this register by writing ‘1’ into this field */
        u32 : 16;
    } bitc;
    u32 all;
} HAL_ADLAK_IRQ_RAW_S;

typedef union { /* OFFSET:0x1C ADLAK_REPORT_STATUS */
    struct {
        u32 hang_dw_sramf : 1;    /* [0]: dw sramf hang*/
        u32 hang_dw_sramw : 1;    /* [1]: dw sramw hang*/
        u32 hang_pe_srama : 1;    /* [2]: pe srama hang*/
        u32 hang_pe_sramm : 1;    /* [3]: pe sramm hang*/
        u32 hang_px_srama : 1;    /* [4]: px srama hang*/
        u32 hang_px_sramm : 1;    /* [5]: px sramm hang*/
        u32 rsv1 : 1;             /* [6]: reserved*/
        u32 hang_vlc_decoder : 1; /* [7]: vlc decoder hang*/
        u32 vlc_decoder_rpid : 8; /* [15:8] : vlc decoder rpid*/
        u32 hang_ps_dep : 1;      /*[16]: ps dependence hang*/
        u32 hang_mc_dep : 1;      /*[17]: mc dependence hang*/
        u32 hang_dw_f_dep : 1;    /*[18]: dw_f dependence hang*/
        u32 hang_dw_w_dep : 1;    /*[19]: dw_w dependence hang*/
        u32 hang_rs_dep : 1;      /*[20]: rs dependence hang*/
        u32 : 11;
    } bitc;
    u32 all;
} HAL_ADLAK_REPORT_STATUS_S;

typedef union { /* OFFSET:0x20 ADLAK_SWRST */
    struct {
        u32 adlak_swrst : 1; /* ADLAK asynchronous reset from software.
                                            Subsequent software resets require ‘1’ followed by ‘0’
                               to be written. */
        u32 : 31;
    } bitc;
    u32 all;
} HAL_ADLAK_SWRST_S;
typedef union { /* OFFSET:0x24 ADLAK_ADLAK_EN */
    struct {
        u32 adlak_en : 1; /* adlak enable */
        u32 : 31;
    } bitc;
    u32 all;
} HAL_ADLAK_ADLAK_EN_S;
typedef union { /* OFFSET:0x28 ADLAK_CLK_AUTOCLK */
    struct {
        u32 adlak_autoclk_en : 32; /* auto gating clock enable */
    } bitc;
    u32 all;
} HAL_ADLAK_CLK_AUTOCLK_S;
typedef union { /* OFFSET:0x2c ADLAK_CLK_IDLE_CNT */
    struct {
        u32 adlak_autoclk_idle_cnt : 5; /* auto gating clock idle count */
        u32 : 3;
        u32 adlak_autoclk_busy_cnt : 5; /* auto gating clock busy count */
        u32 : 19;
    } bitc;
    u32 all;
} HAL_ADLAK_CLK_IDLE_CNT_S;
typedef union { /* OFFSET:0x30 ADLAK_DBG_EN */
    struct {
        u32 dbg_en : 1; /* debug enable */
        u32 : 31;
    } bitc;
    u32 all;
} HAL_ADLAK_DBG_EN_S;
typedef union { /* OFFSET:0x34 ADLAK_DBG_SEL */
    struct {
        u32 dbg_mdl_sel : 8; /* debug module  selection */
        u32 : 24;
    } bitc;
    u32 all;
} HAL_ADLAK_DBG_SEL_S;
typedef union { /* OFFSET:0x38 ADLAK_DBG_SUB_SEL */
    struct {
        u32 dbg_sub_sel : 16; /* debug submodule selection */
        u32 : 16;
    } bitc;
    u32 all;
} HAL_ADLAK_DBG_SUB_SEL_S;
typedef union { /* OFFSET:0x3c ADLAK_DBG_DAT */
    struct {
        u32 dbg_dat : 32; /* debug data */
    } bitc;
    u32 all;
} HAL_ADLAK_DBG_DAT_S;
typedef union { /* OFFSET:0x40 ADLAK_DBG_SRAM_CTRL */
    struct {
        u32 dbg_sram_wr : 1; /* debuf sram write */
        u32 dbg_sram_rd : 1; /* debug sram read */
        u32 : 30;
    } bitc;
    u32 all;
} HAL_ADLAK_DBG_SRAM_CTRL_S;
typedef union { /* OFFSET:0x44 ADLAK_DBG_SRAM_ADDR */
    struct {
        u32 dbg_sram_addr : 16; /* debug sram address */
        u32 dbg_sram_sel : 8;   /* debug sram select */
        u32 : 8;
    } bitc;
    u32 all;
} HAL_ADLAK_DBG_SRAM_ADDR_S;
typedef union { /* OFFSET:0x48 ADLAK_DBG_SRAM_WDAT */
    struct {
        u32 dbg_sram_wdata : 32; /* debug sram write data */
    } bitc;
    u32 all;
} HAL_ADLAK_DBG_SRAM_WDAT_S;
typedef union { /* OFFSET:0x4c ADLAK_DBG_SRAM_RDAT */
    struct {
        u32 dbg_sram_rdata : 32; /* debug sram read data */
    } bitc;
    u32 all;
} HAL_ADLAK_DBG_SRAM_RDAT_S;
typedef union { /* OFFSET:0x50 ADLAK_PS_CTRL */
    struct {
        u32 ps_rst : 1;      /* parser reset (also reset dependence information) */
        u32 ps_dep_rst : 1;  /* reset dependence information */
        u32 ps_start : 1;    /* parser start to work */
        u32 ps_preempt : 1;  /* parser preempt to stop */
        u32 ps_pend_rst : 1; /* reset pending timer */
        u32 : 27;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_CTRL_S;
typedef union { /* OFFSET:0x54 ADLAK_PS_STS */
    struct {
        u32 ps_stop_cmd : 1; /* parser status report: stop command */
        u32 ps_stop_err : 1; /* parser status report: stop error */
        u32 ps_stop_pmt : 1; /* parser status report: stop preempt */
        u32 ps_busy : 1;     /* parser status report:  busy */
        u32 ps_pmt_busy : 1; /* parser status report:  preempt_busy */
        u32 : 27;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_STS_S;
typedef union { /* OFFSET:0x58 ADLAK_PS_ERR_DAT */
    struct {
        u32 ps_error_data : 32; /* parser content when error */
    } bitc;
    u32 all;
} HAL_ADLAK_PS_ERR_DAT_S;
typedef union { /* OFFSET:0x5c ADLAK_PS_IDLE_STS */
    struct {
        u32 ps_idle_sts : 32; /* parser idle status */
    } bitc;
    u32 all;
} HAL_ADLAK_PS_IDLE_STS_S;
typedef union { /* OFFSET:0x60 ADLAK_PS_TIME_STAMP */
    struct {
        u32 ps_time_stamp : 32; /* time stamp */
    } bitc;
    u32 all;
} HAL_ADLAK_PS_TIME_STAMP_S;
typedef union { /* OFFSET:0x64 ADLAK_PS_RBF_BASE */
    struct {
        u32 ps_rbf_base : 32; /* base address, unit: byte, need 256 byte aligned */
    } bitc;
    u32 all;
} HAL_ADLAK_PS_RBF_BASE_S;
typedef union { /* OFFSET:0x68 ADLAK_PS_RBF_SIZE */
    struct {
        u32 ps_rbf_size : 28; /* memory size, unit: byte, need 256 byte aligned, max 256M */
        u32 : 4;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_RBF_SIZE_S;
typedef union { /* OFFSET:0x6c ADLAK_PS_RBF_WPT */
    struct {
        u32 ps_rbf_wpt_ofst : 28; /* write pointer offset, unit: byte, need 16 byte aligned */
        u32 : 4;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_RBF_WPT_S;
typedef union { /* OFFSET:0x70 ADLAK_PS_RBF_RPT */
    struct {
        u32 ps_rbf_rpt_ofst : 28; /* read pointer offset, unit: byte, will be 16 byte aligned */
        u32 : 4;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_RBF_RPT_S;
typedef union { /* OFFSET:0x74 ADLAK_PS_RBF_PPT */
    struct {
        u32 ps_rbf_ppt_ofst : 28; /* parsing pointer offset, unit: byte, will be 4 byte aligned */
        u32 : 4;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_RBF_PPT_S;
typedef union { /* OFFSET:0x78 ADLAK_PS_FINISH_ID */
    struct {
        u32 ps_pwe_flid_dat : 4; /* finished layer id */
        u32 ps_pwx_flid_dat : 4; /* None */
        u32 ps_rs_flid_dat : 4;  /* None */
        u32 : 8;
        u32 ps_pwe_flid_vld : 1; /* None */
        u32 ps_pwx_flid_vld : 1; /* None */
        u32 ps_rs_flid_vld : 1;  /* None */
        u32 : 9;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_FINISH_ID_S;
typedef union { /* OFFSET:0x7c ADLAK_PS_HCNT */
    struct {
        u32 ps_pwe_hcnt : 10; /* hcnt */
        u32 : 6;
        u32 ps_pwx_hcnt : 10; /* None */
        u32 : 6;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_HCNT_S;
typedef union { /* OFFSET:0x80 ADLAK_PS_OST */
    struct {
        u32 ps_ost_max : 3; /* None */
        u32 : 1;
        u32 ps_pwe_outstanding : 3; /* outstanding, max 4 */
        u32 : 1;
        u32 ps_pwx_outstanding : 3; /* outstanding, max 4 */
        u32 : 1;
        u32 ps_rs_outstanding : 3; /* outstanding, max 1 */
        u32 : 17;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_OST_S;
typedef union { /* OFFSET:0x84 ADLAK_PS_PEND_EN */
    struct {
        u32 ps_pend_timer_en : 1; /* pending timer enable */
        u32 : 31;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_PEND_EN_S;
typedef union { /* OFFSET:0x88 ADLAK_PS_PEND_VAL */
    struct {
        u32 ps_pend_timer_val : 32; /* pending timer setting value */
    } bitc;
    u32 all;
} HAL_ADLAK_PS_PEND_VAL_S;

typedef union { /* OFFSET:0x8c ADLAK_PS_MODULE_IDLE_STS */
    struct {    /* module idle status*/
        u32 idle_sts_pwx : 1;
        u32 idle_sts_pwe : 1;
        u32 idle_sts_px : 1;
        u32 idle_sts_dmdw : 1;
        u32 idle_sts_dmdf : 1;
        u32 idle_sts_dw : 1;
        u32 idle_sts_pe : 1;
        u32 idle_sts_dmcw : 1;
        u32 idle_sts_dmcf : 1;
        u32 idle_sts_mc : 1;
        u32 idle_sts_rs : 1;
        u32 idle_sts_ps : 1;
        u32 idle_sts_ab : 1;
        u32 idle_sts_smmu : 1;
        u32 idle_sts_axibrg_dx : 1;
        u32 idle_sts_axibrg_sx : 1;
        u32 : 16;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_MODULE_IDLE_STS_S;
typedef union { /* OFFSET:0x90 ADLAK_PS_DBG_SW_ID */
    struct {
        u32 ps_dbg_sw_id : 24; /* debug sw id (just for simulation used only) */
        u32 : 8;
    } bitc;
    u32 all;
} HAL_ADLAK_PS_DBG_SW_ID_S;
typedef union { /* OFFSET:0xa0 ADLAK_AB_CTL */
    struct {
        u32 ab_force_stop_en : 1;    /* Enable AB force stop */
        u32 ab_force_stop_idle : 1;  /* Bus idle of AB force stop */
        u32 ab_axi_addr_wrap_en : 1; /* Enable the address wrap for AXI SRAM */
        u32 : 28;
        u32 ab_cmp_cache_dis : 1; /* Disable compress header cache */
    } bitc;
    u32 all;
} HAL_ADLAK_AB_CTL_S;
typedef union { /* OFFSET:0xa4 ADLAK_AB_AXI_SADDR */
    struct {
        u32 ab_axi_saddr : 21; /* Start address of AXI SRAM. saddr * 0x1000<= Byte Range. Unit: 4KB
                                */
        u32 : 11;
    } bitc;
    u32 all;
} HAL_ADLAK_AB_AXI_SADDR_S;
typedef union { /* OFFSET:0xa8 ADLAK_AB_AXI_EADDR */
    struct {
        u32 ab_axi_eaddr : 21; /* End address of AXI SRAM. Byte range < eaddr* 0x1000. Unit: 4KB */
        u32 : 11;
    } bitc;
    u32 all;
} HAL_ADLAK_AB_AXI_EADDR_S;
typedef union { /* OFFSET:0xac ADLAK_AB_R_CS_PRIO */
    struct {
        u32 ab_r_cs_arb_prio : 20; /* The arbitration priority weight of read complex port. 4bit per
                                      port. The wight is pow2(value). */
        u32 : 8;
        u32 ab_r_dec_arb_prio : 4; /* The arbitration priority weight of read decoder port. 4bit per
                                      port. The wight is pow2(value). */
    } bitc;
    u32 all;
} HAL_ADLAK_AB_R_CS_PRIO_S;
typedef union { /* OFFSET:0xb0 ADLAK_AB_R_LS_PRIO */
    struct {
        u32 ab_r_ls_arb_prio : 20; /* The arbitration priority weight of read lite port. 4bit per
                                      port. The wight is pow2(value). */
        u32 : 12;
    } bitc;
    u32 all;
} HAL_ADLAK_AB_R_LS_PRIO_S;
typedef union { /* OFFSET:0xb4 ADLAK_AB_R_L2_PRIO */
    struct {
        u32 ab_r_mem_l2_arb_prio : 8; /* The priority weight of memory read level 2 arbiter. The
                                          ports are include smmu [11:8], decoder [7:4] and normal
                                          read [3:0]. 4bit per port. The wight is pow2(value). */
        u32 : 23;
        u32 ab_r_mem_hp_mode : 1; /*The save mode of high priority path for smmu.
                                     [0]: normal performance mode. The respond is out of order and
                                     interleaved. [1]: save mode. The respond data is reordered by
                                     AB.
                                     */
    } bitc;
    u32 all;
} HAL_ADLAK_AB_R_L2_PRIO_S;
typedef union { /* OFFSET:0xb8 ADLAK_AB_W_PRIO */
    struct {
        u32 ab_w_arb_prio : 10; /* The arbitration priority weight of write port. 2bit per port. The
                                   wight is pow2(value). */
        u32 : 4;
        u32 ab_w_enc_arb_prio : 2; /* The arbitration priority weight of write encoder port. 2bit
                                      per port. The wight is pow2(value). */
        u32 : 16;
    } bitc;
    u32 all;
} HAL_ADLAK_AB_W_PRIO_S;
typedef union { /* OFFSET:0xbc ADLAK_AB_AXI_USER */
    struct {
        u32 ab_axi_user_mem : 16;  /* AXI user id for external memory aruser and awuser */
        u32 ab_axi_user_sram : 16; /* AXI user id for axi sram aruser and awuser */
    } bitc;
    u32 all;
} HAL_ADLAK_AB_AXI_USER_S;
typedef union { /* OFFSET:0xc0 ADLAK_SMMU_EN */
    struct {
        u32 smmu_en : 1;    /* smmu enable */
        u32 smmu_swrst : 1; /* None */
        u32 : 30;
    } bitc;
    u32 all;
} HAL_ADLAK_SMMU_EN_S;
typedef union { /* OFFSET:0xc4 ADLAK_SMMU_TTBR_L */
    struct {
        u32 smmu_ttbr_l : 32; /* None */
    } bitc;
    u32 all;
} HAL_ADLAK_SMMU_TTBR_L_S;
typedef union { /* OFFSET:0xc8 ADLAK_SMMU_TTBR_H */
    struct {
        u32 smmu_ttbr_h : 32; /* None */
    } bitc;
    u32 all;
} HAL_ADLAK_SMMU_TTBR_H_S;
typedef union { /* OFFSET:0xcc ADLAK_SMMU_PRIO_POW2_0 */
    struct {
        u32 smmu_tlb_vab_prio_pow2_0 : 32; /* None */
    } bitc;
    u32 all;
} HAL_ADLAK_SMMU_PRIO_POW2_0_S;
typedef union { /* OFFSET:0xd0 ADLAK_SMMU_PRIO_POW2_1 */
    struct {
        u32 smmu_tlb_vab_prio_pow2_1 : 24; /* None */
        u32 : 8;
    } bitc;
    u32 all;
} HAL_ADLAK_SMMU_PRIO_POW2_1_S;
typedef union { /* OFFSET:0xd4 ADLAK_SMMU_INV_CTL */
    struct {
        u32 smmu_invalid_rdy : 1; /* smmu invalid ready */
        u32 : 3;
        u32 smmu_invalid_all : 4; /* [0] : tlb_l1
                                          [1] : tlb_l2
                                          [2] : wlk_l1
                                          [3] : wlk_l2 */
        u32 smmu_invalid_one : 4; /* [0] : tlb_l1
                                          [1] : tlb_l2
                                          [2] : wlk_l1
                                          [3] : wlk_l2 */
        u32 : 20;
    } bitc;
    u32 all;
} HAL_ADLAK_SMMU_INV_CTL_S;
typedef union { /* OFFSET:0xd8 ADLAK_SMMU_INV_VA */
    struct {
        u32 smmu_invalid_addr : 32; /* smmu invalid one virtual address */
    } bitc;
    u32 all;
} HAL_ADLAK_SMMU_INV_VA_S;
typedef union { /* OFFSET:0xdc ADLAK_SMMU_DFT */
    struct {
        u32 smmu_dft_pa4kb : 22; /* smmu default-pa of the translation of va2pa, unit: 4k bypte */
        u32 : 10;
    } bitc;
    u32 all;
} HAL_ADLAK_SMMU_DFT_S;
typedef union { /* OFFSET:0xe0 ADLAK_SMMU_IVD_MDL */
    struct {
        u32 smmu_ivd_mdl_id : 5; /* the id of the module which send an invalid-va */
        u32 : 27;
    } bitc;
    u32 all;
} HAL_ADLAK_SMMU_IVD_MDL_S;
typedef union { /* OFFSET:0xe4 ADLAK_SMMU_IVD_VA */
    struct {
        u32 smmu_ivd_mdl_va : 32; /* the invalid-va address, unit: byte */
    } bitc;
    u32 all;
} HAL_ADLAK_SMMU_IVD_VA_S;
typedef union { /* OFFSET:0xf0 ADLAK_PM_EN */
    struct {
        u32 pm_en : 2;    /* pm enable
                                                  [0]: turn on half function, printing for simulation
                                                  [1]: turn-on full function, include printing for
                             simulation, axi wirte */
        u32 pm_swrst : 1; /* reset wall clock & stop count */
        u32 : 29;
    } bitc;
    u32 all;
} HAL_ADLAK_PM_EN_S;
typedef union { /* OFFSET:0xf4 ADLAK_PM_RBF_BASE */
    struct {
        u32 pm_rbf_base : 32; /* base address, unit: byte, need 256 byte aligned */
    } bitc;
    u32 all;
} HAL_ADLAK_PM_RBF_BASE_S;
typedef union { /* OFFSET:0xf8 ADLAK_PM_RBF_SIZE */
    struct {
        u32 pm_rbf_size : 28; /* memory size, unit: byte, need 256 byte aligned, max 256M */
        u32 : 4;
    } bitc;
    u32 all;
} HAL_ADLAK_PM_RBF_SIZE_S;
typedef union { /* OFFSET:0xfc ADLAK_PM_RBF_WPT */
    struct {
        u32 pm_rbf_wpt_ofst : 28; /* write pointer offset, unit: byte, will be 256 byte aligned */
        u32 : 4;
    } bitc;
    u32 all;
} HAL_ADLAK_PM_RBF_WPT_S;
typedef union { /* OFFSET:0x100 ADLAK_PM_RBF_RPT */
    struct {
        u32 pm_rbf_rpt_ofst : 28; /* read pointer offset, unit: byte, need 256 byte aligned */
        u32 : 4;
    } bitc;
    u32 all;
} HAL_ADLAK_PM_RBF_RPT_S;
typedef union { /* OFFSET:0x104 ADLAK_PM_STS */
    struct {
        u32 pm_flush : 1;      /* flush fifo to dram */
        u32 pm_fifo_empty : 1; /* fifo status */
        u32 : 30;
    } bitc;
    u32 all;
} HAL_ADLAK_PM_STS_S;
typedef union { /* OFFSET:0x110 ADLAK_AXIBRG_DX_CTL */
    struct {
        u32 axibrg_dx_force_stop_en : 1;   /* Enable DRAM AXIBRG force stop */
        u32 axibrg_dx_force_stop_idle : 1; /* Bus idle of DRAM AXIBRG force stop */
        u32 : 30;
    } bitc;
    u32 all;
} HAL_ADLAK_AXIBRG_DX_CTL_S;
typedef union { /* OFFSET:0x114 ADLAK_AXIBRG_DX_HOLD */
    struct {
        u32 axibrg_dx_holdnum : 32; /* DRAM AXIBRG hold number */
    } bitc;
    u32 all;
} HAL_ADLAK_AXIBRG_DX_HOLD_S;
typedef union { /* OFFSET:0x118 ADLAK_AXIBRG_SX_CTL */
    struct {
        u32 axibrg_sx_force_stop_en : 1;   /* Enable SRAM AXIBRG force stop */
        u32 axibrg_sx_force_stop_idle : 1; /* Bus idle of SRAM AXIBRG force stop */
        u32 : 30;
    } bitc;
    u32 all;
} HAL_ADLAK_AXIBRG_SX_CTL_S;
typedef union { /* OFFSET:0x11c ADLAK_AXIBRG_SX_HOLD */
    struct {
        u32 axibrg_sx_holdnum : 32; /* SRAM AXIBRG hold number */
    } bitc;
    u32 all;
} HAL_ADLAK_AXIBRG_SX_HOLD_S;
typedef union { /* OFFSET:0x120 ADLAK_MC_CTL */
    struct {
        u32 mc_ctl : 32; /* [0]: mc union clock gating enable
                                                 [31:1]: reserved */
    } bitc;
    u32 all;
} HAL_ADLAK_MC_CTL_S;

#ifdef __cplusplus
}
#endif

#endif /* __ADLAK_REG_H__ end define*/
