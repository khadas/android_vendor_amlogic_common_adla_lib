LOCAL_PATH := $(call my-dir)

SERVICE_PATH=$(LOCAL_PATH)/service
ifeq ($(BOARD_ADLA_SERVICE_ENABLE), true)
include $(SERVICE_PATH)/Android.mk
endif
