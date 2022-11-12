LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)


ifeq ($(PLATFORM_VENDOR),1)
LOCAL_VENDOR_MODULE  := true
endif

ifeq ($(TARGET_ARCH), arm64)
ifeq ($(shell test $(PLATFORM_SDK_VERSION) -eq 33 && echo OK),OK)
SERVICE_PATH=$(LOCAL_PATH)/t/service_64
else
SERVICE_PATH=$(LOCAL_PATH)/service_64
endif
else
ifeq ($(shell test $(PLATFORM_SDK_VERSION) -eq 33 && echo OK),OK)
SERVICE_PATH=$(LOCAL_PATH)/t/service_32
else
SERVICE_PATH=$(LOCAL_PATH)/service_32
endif
endif
LOCAL_SHARED_LIBRARIES := \
        android.hardware.neuralnetworks@1.0 \
		android.hardware.neuralnetworks@1.1 \
		android.hardware.neuralnetworks@1.2 \
		android.hardware.neuralnetworks@1.3 \
		android.hidl.allocator@1.0 \
		android.hidl.memory@1.0 \
		libadla_nnrt \
		libbase \
		libcrypto \
		libdl \
		libfmq \
		libhardware \
		libhidlbase \
		libhidlmemory \
		libhidltransport \
		liblog \
		libcutils \
		libneuralnetworks \
		libutils \
		libm \
		libnativewindow \
		libui \
		libc++ \
		libc

LOCAL_PREBUILT_MODULE_FILE   := $(SERVICE_PATH)/android.hardware.neuralnetworks@1.3-service-aml-driver
LOCAL_MODULE_CLASS := EXECUTABLES
#LOCAL_CHECK_ELF_FILES := false
LOCAL_MODULE      := android.hardware.neuralnetworks@1.3-service-aml-driver
LOCAL_LICENSE_KINDS := SPDX-license-identifier-GPL-2.0+
LOCAL_LICENSE_CONDITIONS := notice


ifeq ($(shell test $(PLATFORM_SDK_VERSION) -ge 26 && echo OK),OK)
LOCAL_PROPRIETARY_MODULE := true
else
LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)
endif

LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_INIT_RC := android.hardware.neuralnetworks@1.3-service-aml-driver.rc


LOCAL_MODULE_TAGS := optional
include $(BUILD_PREBUILT)
