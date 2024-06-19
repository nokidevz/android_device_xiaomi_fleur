/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

static const variant_info_t fleur_info = {
    .hwc_value = "",
    .sku_value = "fleur",

    .brand = "Redmi",
    .device = "fleur",
    .nfc = true,
    .model = "Redmi Note 11S",
    .build_fingerprint = "Redmi/fleur_eea/fleur:13/SP1A.210812.016/V816.0.1.0.TKEUXM:user/release-keys",
};

static const variant_info_t fleurp_info = {
    .hwc_value = "",
    .sku_value = "fleurp",

    .brand = "POCO",
    .device = "fleur_p",
    .nfc = true,
    .model = "POCO M4 Pro",
    .build_fingerprint = "POCO/fleur_p_eea/fleur:13/SP1A.210812.016/V816.0.1.0.TKEEUXM:user/release-keys",
};

static const variant_info_t miel_info = {
    .hwc_value = "",
    .sku_value = "miel",

    .brand = "Redmi",
    .device = "miel",
    .nfc = false,
    .model = "Redmi Note 11S",
    .build_fingerprint = "Redmi/miel_eea/miel:13/SP1A.210812.016/V816.0.1.0.TKEEUXM:user/release-keys",
};

static const variant_info_t mielp_info = {
    .hwc_value = "",
    .sku_value = "mielp",

    .brand = "POCO",
    .device = "miel_p",
    .nfc = false,
    .model = "POCO M4 Pro",
    .build_fingerprint = "POCO/miel_p_eea/miel:13/SP1A.210812.016/V816.0.1.0.TKEEUXM:user/release-keys",
};

static const std::vector<variant_info_t> variants = {
    fleur_info,
    miel_info,
    fleurp_info,
    mielp_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
