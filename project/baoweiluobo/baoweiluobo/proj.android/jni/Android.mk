LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

$(call import-add-path,$(LOCAL_PATH)/../../cocos2d)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/external)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/cocos)

LOCAL_MODULE := cocos2dcpp_shared

LOCAL_MODULE_FILENAME := libcocos2dcpp

LOCAL_SRC_FILES := hellocpp/main.cpp 

LOCAL_SRC_FILES += ../../Classes/MapUtil.cpp
LOCAL_SRC_FILES += ../../Classes/TowerOptBtn.cpp
LOCAL_SRC_FILES += ../../Classes/TowersLayer.cpp
LOCAL_SRC_FILES += ../../Classes/SceneManager.cpp
LOCAL_SRC_FILES += ../../Classes/MonsterLayer.cpp
LOCAL_SRC_FILES += ../../Classes/CsvUtil.cpp
LOCAL_SRC_FILES += ../../Classes/CollisionManager.cpp
LOCAL_SRC_FILES += ../../Classes/ScoreAndControlLayer.cpp
LOCAL_SRC_FILES += ../../Classes/BulletPin.cpp
LOCAL_SRC_FILES += ../../Classes/TowerManager.cpp
LOCAL_SRC_FILES += ../../Classes/BarrierBase.cpp
LOCAL_SRC_FILES += ../../Classes/BulletManager.cpp
LOCAL_SRC_FILES += ../../Classes/LevelSelectLayer.cpp
LOCAL_SRC_FILES += ../../Classes/TowerBase.cpp
LOCAL_SRC_FILES += ../../Classes/Carrot.cpp
LOCAL_SRC_FILES += ../../Classes/SpritesLayer.cpp
LOCAL_SRC_FILES += ../../Classes/GameSettingScene.cpp
LOCAL_SRC_FILES += ../../Classes/MonsterFactory.cpp
LOCAL_SRC_FILES += ../../Classes/MonsterManager.cpp
LOCAL_SRC_FILES += ../../Classes/PageSelectScene.cpp
LOCAL_SRC_FILES += ../../Classes/SoundUtil.cpp
LOCAL_SRC_FILES += ../../Classes/BarrierManager.cpp
LOCAL_SRC_FILES += ../../Classes/DesignLayer.cpp
LOCAL_SRC_FILES += ../../Classes/WelcomeScene.cpp
LOCAL_SRC_FILES += ../../Classes/TowerRocket.cpp
LOCAL_SRC_FILES += ../../Classes/CountDownLayer.cpp
LOCAL_SRC_FILES += ../../Classes/GameScene.cpp
LOCAL_SRC_FILES += ../../Classes/BulletBlueStar.cpp
LOCAL_SRC_FILES += ../../Classes/TowerPin.cpp
LOCAL_SRC_FILES += ../../Classes/VictimEntityBase.cpp
LOCAL_SRC_FILES += ../../Classes/EntityLayerBase.cpp
LOCAL_SRC_FILES += ../../Classes/AppDelegate.cpp
LOCAL_SRC_FILES += ../../Classes/BulletsLayer.cpp
LOCAL_SRC_FILES += ../../Classes/TowerBlueStar.cpp
LOCAL_SRC_FILES += ../../Classes/OptionLayer.cpp
LOCAL_SRC_FILES += ../../Classes/MenusLayer.cpp
LOCAL_SRC_FILES += ../../Classes/NumSprite.cpp
LOCAL_SRC_FILES += ../../Classes/LocalDataUtil.cpp
LOCAL_SRC_FILES += ../../Classes/TowerSnow.cpp
LOCAL_SRC_FILES += ../../Classes/BulletBase.cpp
LOCAL_SRC_FILES += ../../Classes/HelpLayer.cpp
LOCAL_SRC_FILES += ../../Classes/HpSlot.cpp
LOCAL_SRC_FILES += ../../Classes/GameManager.cpp
LOCAL_SRC_FILES += ../../Classes/VisibleRect.cpp
LOCAL_SRC_FILES += ../../Classes/BulletLittleAnchor.cpp
LOCAL_SRC_FILES += ../../Classes/Config.cpp
LOCAL_SRC_FILES += ../../Classes/LevelSelectScene.cpp
LOCAL_SRC_FILES += ../../Classes/HelpScene.cpp
LOCAL_SRC_FILES += ../../Classes/TowerSun.cpp
LOCAL_SRC_FILES += ../../Classes/TopPanelLayer.cpp
LOCAL_SRC_FILES += ../../Classes/LevelConfigUtil.cpp
LOCAL_SRC_FILES += ../../Classes/TowerBall.cpp
LOCAL_SRC_FILES += ../../Classes/TowerAnchor.cpp
LOCAL_SRC_FILES += ../../Classes/TowerPlane.cpp
LOCAL_SRC_FILES += ../../Classes/BulletRocket.cpp
LOCAL_SRC_FILES += ../../Classes/TowerFireBottle.cpp
LOCAL_SRC_FILES += ../../Classes/Entity.cpp
LOCAL_SRC_FILES += ../../Classes/SceneFactory.cpp
LOCAL_SRC_FILES += ../../Classes/HelpMenuPanelLayer.cpp
LOCAL_SRC_FILES += ../../Classes/TiledMapLayer.cpp
LOCAL_SRC_FILES += ../../Classes/MonsterBuilder.cpp
LOCAL_SRC_FILES += ../../Classes/DynamicPropertyInterFace.cpp
LOCAL_SRC_FILES += ../../Classes/TowerFactory.cpp
LOCAL_SRC_FILES += ../../Classes/LoadingSourceLayer.cpp
LOCAL_SRC_FILES += ../../Classes/MenuPanelLayer.cpp
LOCAL_SRC_FILES += ../../Classes/BarrierFactory.cpp
LOCAL_SRC_FILES += ../../Classes/PauseLayer.cpp
LOCAL_SRC_FILES += ../../Classes/OptLayer.cpp
LOCAL_SRC_FILES += ../../Classes/TowerStar.cpp
LOCAL_SRC_FILES += ../../Classes/MoveControllerBase.cpp
LOCAL_SRC_FILES += ../../Classes/DataCollectLayer.cpp
LOCAL_SRC_FILES += ../../Classes/BarriersLayer.cpp
LOCAL_SRC_FILES += ../../Classes/LoadingScene.cpp
LOCAL_SRC_FILES += ../../Classes/MonsterHelpLayer.cpp
LOCAL_SRC_FILES += ../../Classes/BulletAnchor.cpp
LOCAL_SRC_FILES += ../../Classes/TowerHelpLayer.cpp
LOCAL_SRC_FILES += ../../Classes/GameEndLayer.cpp
LOCAL_SRC_FILES += ../../Classes/BulletStar.cpp
LOCAL_SRC_FILES += ../../Classes/BulletFactory.cpp
LOCAL_SRC_FILES += ../../Classes/SharedMenu.cpp
LOCAL_SRC_FILES += ../../Classes/MonsterBase.cpp
LOCAL_SRC_FILES += ../../Classes/SceneBase.cpp
LOCAL_SRC_FILES += ../../Classes/PageViewLayer.cpp



LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes

# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END


LOCAL_STATIC_LIBRARIES := cocos2dx_static

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module,.)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
