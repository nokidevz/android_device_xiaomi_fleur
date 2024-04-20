/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t fleur_info = {
    .brand = "POCO",
    .model = "POCO M4 Pro 4G",
    .hwname_value = "fleur",
    .sku_value = "",
    .device = "fleur",
    .nfc = true,
};

static const variant_info_t miel_info = {
    .brand = "Redmi",
    .model = "Redmi Note 11S 4G",
    .hwname_value = "miel",
    .sku_value = "",
    .device = "miel",
    .nfc = false,
};

static const std::vector<variant_info_t> variants = {
    fleur_info,
    miel_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
