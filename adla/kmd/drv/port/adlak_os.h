/*******************************************************************************
 * Copyright (C) 2022 Amlogic, Inc. All rights reserved.
 ******************************************************************************/

/*****************************************************************************/
/**
 *
 * @file adlak_os.h
 * @brief
 *
 * <pre>
 * MODIFICATION HISTORY:
 *
 * Ver   	Who				Date				Changes
 * ----------------------------------------------------------------------------
 * 1.00a shiwei.sun@amlogic.com	2022/04/06	Initial release
 * </pre>
 *
 ******************************************************************************/

#ifndef __ADLAK_OS_H__
#define __ADLAK_OS_H__

/***************************** Include Files *********************************/

#include "adlak_log.h"
#include "adlak_os_base.h"
#include "adlak_typedef.h"
#ifdef __cplusplus
extern "C" {
#endif

void *adlak_os_malloc(size_t size, uint32_t flag);
void *adlak_os_zalloc(size_t size, uint32_t flag);
void *adlak_os_calloc(size_t num, size_t size, uint32_t flag);
void  adlak_os_free(void *ptr);
void *adlak_os_memset(void *dest, int ch, size_t count);
void *adlak_os_memcpy(void *dest, const void *src, size_t count);
int   adlak_os_memcmp(const void *lhs, const void *rhs, size_t count);
int   adlak_os_printf(const char *format, ...);
int   adlak_os_snprintf(char *buffer, ssize_t buf_size, const char *format, ...);
char *adlak_os_asprintf(gfp_t gfp, const char *fmt, ...);
void  adlak_os_msleep(unsigned int ms);

uintptr_t     adlak_os_msecs_to_jiffies(uintptr_t ms);
typedef void *adlak_os_mutex_t;
int           adlak_os_mutex_init(adlak_os_mutex_t *pmutex);
int           adlak_os_mutex_destroy(adlak_os_mutex_t *pmutex);
int           adlak_os_mutex_lock(adlak_os_mutex_t *pmutex);
int           adlak_os_mutex_unlock(adlak_os_mutex_t *pmutex);

typedef void *adlak_os_spinlock_t;
int           adlak_os_spinlock_init(adlak_os_spinlock_t *spinlock);
int           adlak_os_spinlock_destroy(adlak_os_spinlock_t *spinlock);
int           adlak_os_spinlock_lock(adlak_os_spinlock_t *spinlock);
int           adlak_os_spinlock_unlock(adlak_os_spinlock_t *spinlock);

typedef void *adlak_os_sema_t;
int adlak_os_sema_init(adlak_os_sema_t *psem, unsigned int max_count, unsigned int init_count);
int adlak_os_sema_destroy(adlak_os_sema_t *psem);
int adlak_os_sema_take(adlak_os_sema_t sem);
int adlak_os_sema_take_timeout(adlak_os_sema_t sem, unsigned int time_ms);
int adlak_os_sema_give(adlak_os_sema_t sem);
int adlak_os_sema_give_from_isr(adlak_os_sema_t sem);

typedef struct {
    void *       handle;
    unsigned int thrd_should_stop;
} adlak_os_thread_t;

int  adlak_os_thread_create(adlak_os_thread_t *pthrd, int(*func)(void *), void *arg);
int  adlak_os_thread_join(adlak_os_thread_t *pthrd);
int  adlak_os_thread_detach(adlak_os_thread_t *pthrd);
void adlak_os_thread_yield(void);

typedef void *adlak_os_timer_t;

int adlak_os_timer_init(adlak_os_timer_t *ptim, void (*func)(struct timer_list *), void *param);
int adlak_os_timer_destroy(adlak_os_timer_t *ptim);
int adlak_os_timer_del(adlak_os_timer_t *ptim);

int adlak_os_timer_add(adlak_os_timer_t *ptim, unsigned int timeout_ms);

int adlak_to_umd_sinal_init(uintptr_t *hd);
int adlak_to_umd_sinal_deinit(uintptr_t *hd);
int adlak_to_umd_sinal_wait(uintptr_t hd, unsigned int timeout_ms);
int adlak_to_umd_sinal_give(uintptr_t hd);

typedef ktime_t  adlak_os_ktime_t;
adlak_os_ktime_t adlak_os_ktime_get(void);
uintptr_t adlak_os_ktime_us_delta(const adlak_os_ktime_t later, const adlak_os_ktime_t earlier);

#ifdef __cplusplus
}
#endif

#endif /* __ADLAK_OS_H__ end define*/
