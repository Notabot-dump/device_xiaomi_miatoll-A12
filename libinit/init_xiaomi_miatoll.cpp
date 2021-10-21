/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t curtanain_info = {
    .hwc_value = "India",

    .brand = "Redmi",
    .device = "curtana",
    .model = "Redmi Note 9 Pro",
    .build_description = "redfin-user 12 SP1A.210812.015 7679548 release-keys",
    .build_fingerprint = "google/redfin/redfin:12/SP1A.210812.015/7679548:user/release-keys",

    .nfc = false,
};

static const variant_info_t curtana_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "curtana",
    .model = "Redmi Note 9S",
    .build_description = "redfin-user 12 SP1A.210812.015 7679548 release-keys",
    .build_fingerprint = "google/redfin/redfin:12/SP1A.210812.015/7679548:user/release-keys",

    .nfc = false,
};

static const variant_info_t excalibur_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "excalibur",
    .model = "Redmi Note 9 Pro Max",
    .build_description = "redfin-user 12 SP1A.210812.015 7679548 release-keys",
    .build_fingerprint = "google/redfin/redfin:12/SP1A.210812.015/7679548:user/release-keys",

    .nfc = false,
};

static const variant_info_t gram_info = {
    .hwc_value = "",

    .brand = "POCO",
    .device = "gram",
    .model = "POCO M2 Pro",
    .build_description = "redfin-user 12 SP1A.210812.015 7679548 release-keys",
    .build_fingerprint = "google/redfin/redfin:12/SP1A.210812.015/7679548:user/release-keys",

    .nfc = false,
};

static const variant_info_t joyeuse_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "joyeuse",
    .model = "Redmi Note 9 Pro",
    .build_description = "redfin-user 12 SP1A.210812.015 7679548 release-keys",
    .build_fingerprint = "google/redfin/redfin:12/SP1A.210812.015/7679548:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    curtanain_info,
    curtana_info,
    excalibur_info,
    gram_info,
    joyeuse_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
