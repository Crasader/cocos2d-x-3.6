LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

$(call import-add-path,$(LOCAL_PATH)/../../cocos2d)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/external)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/cocos)

LOCAL_MODULE := cocos2dcpp_shared

LOCAL_MODULE_FILENAME := libcocos2dcpp

define all-cpp-files
$(patsubst jni/%,%, $(shell find $(LOCAL_PATH)/../../Classes/ $(LOCAL_PATH)/hellocpp -name "*.cpp"))  
endef

LOCAL_SRC_FILES := $(call all-cpp-files)

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes \
								 $(LOCAL_PATH)/../../Classes/bag \
								 $(LOCAL_PATH)/../../Classes/common \
								 $(LOCAL_PATH)/../../Classes/common/compoment \
								 $(LOCAL_PATH)/../../Classes/dialog \
								 $(LOCAL_PATH)/../../Classes/drama \
								 $(LOCAL_PATH)/../../Classes/fight \
								 $(LOCAL_PATH)/../../Classes/gate \
								 $(LOCAL_PATH)/../../Classes/global \
								 $(LOCAL_PATH)/../../Classes/google \
								 $(LOCAL_PATH)/../../Classes/google/protobuf \
								 $(LOCAL_PATH)/../../Classes/google/protobuf/io \
								 $(LOCAL_PATH)/../../Classes/google/protobuf/stubs \
								 $(LOCAL_PATH)/../../Classes/google/protobuf/ \
								 $(LOCAL_PATH)/../../Classes/hero \
								 $(LOCAL_PATH)/../../Classes/home \
								 $(LOCAL_PATH)/../../Classes/login \
								 $(LOCAL_PATH)/../../Classes/net \
								 $(LOCAL_PATH)/../../Classes/proto \
								 $(LOCAL_PATH)/../../Classes/role \
								 $(LOCAL_PATH)/../../Classes/update \
								 $(LOCAL_PATH)/../../Classes/xls \
								 $(LOCAL_PATH)/../../Classes/test
								 
								 
LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocosdenshion_static

# LOCAL_WHOLE_STATIC_LIBRARIES += box2d_static
# LOCAL_WHOLE_STATIC_LIBRARIES += cocosbuilder_static
# LOCAL_WHOLE_STATIC_LIBRARIES += spine_static
# LOCAL_WHOLE_STATIC_LIBRARIES += cocostudio_static
# LOCAL_WHOLE_STATIC_LIBRARIES += cocos_network_static
# LOCAL_WHOLE_STATIC_LIBRARIES += cocos_extension_static


include $(BUILD_SHARED_LIBRARY)

$(call import-module,.)
$(call import-module,audio/android)

# $(call import-module,Box2D)
# $(call import-module,editor-support/cocosbuilder)
# $(call import-module,editor-support/spine)
# $(call import-module,editor-support/cocostudio)
# $(call import-module,network)
# $(call import-module,extensions)
