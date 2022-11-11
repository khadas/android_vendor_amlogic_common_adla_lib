LOCAL_PATH := $(call my-dir)

ifeq ($(TARGET_ARCH), arm64)
SDK_PATH=libraryso/lib64
Target=lib64
else
SDK_PATH=libraryso/lib32
Target=lib
endif

include $(CLEAR_VARS)
LOCAL_SRC_FILES := \
    $(SDK_PATH)/libnnsdk.so
ifeq ($(PRODUCT_CHIP_ID), ADLA_S5)
LOCAL_MODULE         := libnnsdk
else
ifeq ($(PRODUCT_CHIP_ID), ADLA_T7)
LOCAL_MODULE         := libnnsdk
else
LOCAL_MODULE         := libnnsdk_bak
endif
endif
LOCAL_MODULE_SUFFIX  := .so
LOCAL_MODULE_TAGS    := optional
LOCAL_MODULE_CLASS   := SHARED_LIBRARIES
LOCAL_CHECK_ELF_FILES := false
ifeq ($(shell test $(PLATFORM_SDK_VERSION) -ge 26 && echo OK),OK)
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_PATH := $(TARGET_OUT_VENDOR)/$(Target)
else
LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)
endif
include $(BUILD_PREBUILT)

SERVICE_PATH=$(LOCAL_PATH)/service
ifeq ($(BOARD_ADLA_SERVICE_ENABLE), true)
include $(SERVICE_PATH)/Android.mk
endif
