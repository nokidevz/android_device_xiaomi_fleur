#
# Copyright (C) 2022 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from device makefile.
$(call inherit-product, device/xiaomi/fleur/device.mk)

# Inherit some common LineageOS stuff.
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

PRODUCT_DEVICE := fleur
PRODUCT_NAME := lineage_fleur
PRODUCT_BRAND := POCO
PRODUCT_MODEL := POCO M4 Pro 4G
PRODUCT_MANUFACTURER := xiaomi

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRIVATE_BUILD_DESC="fleur-user 11 RP1A.200720.011 V13.0.10.0.RKEMIXM release-keys"

BUILD_FINGERPRINT := Redmi/fleur/fleur:11/RP1A.200720.011/V13.0.10.0.RKEMIXM:user/release-keys