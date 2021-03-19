TARGET := iphone:clang:12.2:12.0
INSTALL_TARGET_PROCESSES = DoordashDriver

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = doordash

doordash_FILES = Tweak.xm
doordash_CFLAGS = -Wno-error=unused-variable -fobjc-arc -F./Classes/

include $(THEOS_MAKE_PATH)/tweak.mk
