LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

$(call import-add-path,$(LOCAL_PATH)/../../cocos2d)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/external)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/cocos)

LOCAL_MODULE := cocos2dcpp_shared

LOCAL_MODULE_FILENAME := libcocos2dcpp

#  all-cpp-files  Classes  cpp  cpp  c
define all-cpp-files
$(patsubst jni/%,%, $(shell find $(LOCAL_PATH)/../../Classes/ $(LOCAL_PATH)/hellocpp -name "*.cpp"))  
endef

# 
LOCAL_SRC_FILES := $(call all-cpp-files) \
										hellocpp/main.cpp 

#LOCAL_SRC_FILES := hellocpp/main.cpp \
#                   ../../Classes/AppDelegate.cpp 

#define all-include-dirs  
#$(shell find $(PROJECT_DIR)Classes/ $(JNI_DIR)/hellocpp -type d))  
#endef   
#LOCAL_C_INCLUDES := $(call all-include-dirs)  

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes \
										$(LOCAL_PATH)/../../Classes/Bullet \
										$(LOCAL_PATH)/../../Classes/Data \
										$(LOCAL_PATH)/../../Classes/Layer \
										$(LOCAL_PATH)/../../Classes/Layer/Menu \
										$(LOCAL_PATH)/../../Classes/Map \
										$(LOCAL_PATH)/../../Classes/Monster \
										$(LOCAL_PATH)/../../Classes/Monster/Boss \
										$(LOCAL_PATH)/../../Classes/Monster/Desert \
										$(LOCAL_PATH)/../../Classes/Monster/Jungle \
										$(LOCAL_PATH)/../../Classes/Monster/Underground \
										$(LOCAL_PATH)/../../Classes/Road \
										$(LOCAL_PATH)/../../Classes/Scene \
										$(LOCAL_PATH)/../../Classes/Scene/Introduction \
										$(LOCAL_PATH)/../../Classes/Scene/Story \
										$(LOCAL_PATH)/../../Classes/Scene/UpdateTowerScene \
										$(LOCAL_PATH)/../../Classes/Soldier \
										$(LOCAL_PATH)/../../Classes/Sprite \
										$(LOCAL_PATH)/../../Classes/Sprite/Circle \
										$(LOCAL_PATH)/../../Classes/Sprite/TowerIcon \
										$(LOCAL_PATH)/../../Classes/Tower
																																																		
# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END


LOCAL_STATIC_LIBRARIES := cocos2dx_static

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module,.)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
