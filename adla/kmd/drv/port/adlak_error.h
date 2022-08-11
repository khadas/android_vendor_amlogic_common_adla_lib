/*******************************************************************************
 * Copyright (C) 2022 Amlogic, Inc. All rights reserved.
 ******************************************************************************/

/*****************************************************************************/
/**
 *
 * @file adlak_error.h
 * @brief
 *
 * <pre>
 * MODIFICATION HISTORY:
 *
 * Ver   	Who				Date				Changes
 * ----------------------------------------------------------------------------
 * 1.00a shiwei.sun@amlogic.com	2022/03/28	Initial release
 * </pre>
 *
 ******************************************************************************/

#ifndef __ADLAK_ERROR_H__
#define __ADLAK_ERROR_H__

/***************************** Include Files *********************************/

#ifdef __cplusplus
extern "C" {
#endif
typedef enum {
    ADLAK_NONE     = 0,
    ADLAK_SUCCESS  = 0,
    ADLAK_ESUCCESS = ADLAK_SUCCESS,
    ADLAK_EPERM    = 1,  /* Operation not permitted */
    ADLAK_ENOENT   = 2,  /* No such file or directory */
    ADLAK_ESRCH    = 3,  /* No such process */
    ADLAK_EINTR    = 4,  /* Interrupted system call */
    ADLAK_EIO      = 5,  /* I/O error */
    ADLAK_ENXIO    = 6,  /* No such device or address */
    ADLAK_E2BIG    = 7,  /* Argument list too long */
    ADLAK_ENOEXEC  = 8,  /* Exec format error */
    ADLAK_EBADF    = 9,  /* Bad file number */
    ADLAK_ECHILD   = 10, /* No child processes */
    ADLAK_EAGAIN   = 11, /* Try again */
    ADLAK_ENOMEM   = 12, /* Out of memory */
    ADLAK_EACCES   = 13, /* Permission denied */
    ADLAK_EFAULT   = 14, /* Bad address */
    ADLAK_ENOTBLK  = 15, /* Block device required */
    ADLAK_EBUSY    = 16, /* Device or resource busy */
    ADLAK_EEXIST   = 17, /* File exists */
    ADLAK_EXDEV    = 18, /* Cross-device link */
    ADLAK_ENODEV   = 19, /* No such device */
    ADLAK_ENOTDIR  = 20, /* Not a directory */
    ADLAK_EISDIR   = 21, /* Is a directory */
    ADLAK_EINVAL   = 22, /* Invalid argument */
    ADLAK_ENFILE   = 23, /* File table overflow */
    ADLAK_EMFILE   = 24, /* Too many open files */
    ADLAK_ENOTTY   = 25, /* Not a typewriter */
    ADLAK_ETXTBSY  = 26, /* Text file busy */
    ADLAK_EFBIG    = 27, /* File too large */
    ADLAK_ENOSPC   = 28, /* No space left on device */
    ADLAK_ESPIPE   = 29, /* Illegal seek */
    ADLAK_EROFS    = 30, /* Read-only file system */
    ADLAK_EMLINK   = 31, /* Too many links */
    ADLAK_EPIPE    = 32, /* Broken pipe */
    ADLAK_EDOM     = 33, /* Math argument out of domain of func */
    ADLAK_ERANGE   = 34, /* Math result not representable */
} adlak_status_t;

#define ERR(code) -ADLAK_##code

#ifdef __cplusplus
}
#endif

#endif /* __ADLAK_ERROR_H__ end define*/
