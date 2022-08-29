LOCAL_PATH := $(call my-dir)

ifeq ($(PLATFORM_VERSION), 11)
SERVICE_PATH=$(LOCAL_PATH)/service
endif
ifeq ($(BOARD_ADLA_SERVICE_ENABLE), true)
include $(SERVICE_PATH)/Android.mk
endif
