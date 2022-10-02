/*******************************************************************************
 * Copyright (C) 2022 Amlogic, Inc. All rights reserved.
 ******************************************************************************/

/*****************************************************************************/
/**
 *
 * @file adlak_api_base.h
 * @brief
 *
 * <pre>
 * MODIFICATION HISTORY:
 *
 * Ver   	Who				Date				Changes
 * ----------------------------------------------------------------------------
 * 1.00a shiwei.sun@amlogic.com	2022/04/26	Initial release
 * </pre>
 *
 ******************************************************************************/

#ifndef __ADLAK_API_BASE_H__
#define __ADLAK_API_BASE_H__

/***************************** Include Files *********************************/

#ifdef __cplusplus
extern "C" {
#endif

/************************** Constant Definitions *****************************/

/**************************Global Variable************************************/

/**************************Type Definition and Structure**********************/

struct adlak_buf_desc {
    __u64 iova_addr;     /* virtual address in smmu*/
    __u64 va_user;       /* virtual address in user mode*/
    __u64 va_kernel;     /* virtual address in kernel mode*/
    __u64 phys_addr;     /* physical base address if mem_type is contiguous*/
    __u64 bytes;         /*return real size*/
    __u32 mem_type;      /*requst info*/
    __u32 mem_src;       /*requst info*/
    __u32 mem_direction; /*requst info*/
} __packed;

enum adlak_mem_type {
    ADLAK_ENUM_MEMTYPE_CACHEABLE    = (1 << 0),
    ADLAK_ENUM_MEMTYPE_CONTIGUOUS   = (1 << 1),
    ADLAK_ENUM_MEMTYPE_INNER        = (1 << 2),  // For ADLA use only if value is true.
    ADLAK_ENUM_MEMTYPE_PA_WITHIN_4G = (1 << 4)   // physical address less than 4Gbytes
} __packed;

enum adlak_mem_direction {
    ADLAK_ENUM_MEM_DIR_READ_WRITE = 0,
    ADLAK_ENUM_MEM_DIR_READ_ONLY,
    ADLAK_ENUM_MEM_DIR_WRITE_ONLY
} __packed;

struct adlak_buf_req {
    __u64                 bytes;         /* bytes requested to allocate */
    __u32                 align_in_page; /* alignment requirements (in 4KB) */
    __u32                 data_type;     /* type of data in the buffer to allocate */
    struct adlak_buf_desc ret_desc;      /* info of buffer successfully allocated */
    __u32                 mmap_en;       /* the flag of mmap */
    __u32                 errcode;       /* return err number */
} __packed;

struct adlak_extern_buf_info {
    __u64                 buf_handle; /* buf handle */
    __u64                 bytes;      /* bytes of buffer */
    __u32                 buf_type;   /* type of buf handle */
    struct adlak_buf_desc ret_desc;   /* info of buffer successfully import */
	__u32              mmap_en;    /* the flag of mmap */
    __u32                 errcode;    /* return err number */
} __packed;

enum adlak_flush_cache_direction {
    FLUSH_TO_DEVICE   = 1,
    FLUSH_FROM_DEVICE = 2,
    FLUSH_NONE        = 3,
};

struct adlak_buf_flush {
    struct adlak_buf_desc buf_desc; /* info of buffer  */
    __u32                 direction;
    __u32                 errcode; /* return err number */
} __packed;

struct adlak_network_desc {
    __u32 config_size;
    __u32 dep_fixups_num;
    __u32 reg_fixups_num;
    __u32 tasks_num;
    __u64 config_va;
    __u64 dep_fixups_va;
    __u64 reg_fixups_va;
    __u64 tasks_va;
    __s32 profile_en;  // profilling enable
    __u64 profile_iova;
    __u32 profile_buf_size;
    __s32 net_register_idx;  // return from kmd

} __packed;

struct adlak_network_del_desc {
    __s32 net_register_idx;
} __packed;

struct adlak_network_invoke_desc {
    __s32 net_register_idx;
    __s32 invoke_register_idx;  // return from kmd
    __s32 start_idx;
    __s32 end_idx;
    __s32 addr_fixups_num;
    __u64 addr_fixups_va;

} __packed;

struct adlak_network_invoke_del_desc {
    __s32 net_register_idx;
    __s32 invoke_register_idx;

} __packed;

struct adlak_get_stat_desc {
    __s32 net_register_idx;
    __s32 invoke_register_idx;
    __s32 start_idx;       // return from kmd
    __s32 end_idx;         // return from kmd
    __s32 ret_state;       // 0: success,1:running,-1: timeout, -3: other err
    __s32 profile_en;      // profilling enable
    __u32 profile_rpt;     // profilling read point
    __s32 invoke_time_us;  // invoke time which get from os

    __u64 axi_freq_cur;      // adlak axi clock frequency currently
    __u64 core_freq_cur;     // adlak core clock frequency currently
    __u64 mem_alloced_base;  // alloced by kmd
    __u64 mem_alloced_umd;   // alloced by umd in this context
    __s64 mem_pool_size;     //-1:the limit base on the system
    __u64 mem_pool_used;     // memory usage
    __s32 efficiency;
} __packed;

struct adlak_profile_cfg_desc {
    __s32 net_register_idx;
    __s32 profile_en;  // profilling enable
    __u64 profile_iova;
    __u32 profile_buf_size;
    __u32 errcode; /* return err number */

} __packed;

struct adlak_test_desc {
    __u64 type;
} __packed;

struct adlak_caps_desc {
    __u32 hw_ver;        /* adlak hardware version*/
    __u64 axi_freq_max;  /* adlak axi clock frequency maximum */
    __u64 core_freq_max; /* adlak core clock frequency maximum */
    __u32 cmq_size;      /* cmq buffer size*/
    __u64 sram_base;     /* axi sram base addr*/
    __u32 sram_size;     /* axi sram buffer size*/
} __packed;

/************************** Function Prototypes ******************************/

#ifdef __cplusplus
}
#endif

#endif /* __ADLAK_API_BASE_H__ end define*/
