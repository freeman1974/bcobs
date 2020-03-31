/*
 * A Plugin that integrates the AMD AMF encoder into OBS Studio
 * Copyright (C) 2016 - 2017 Michael Fabian Dirks
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/

#pragma once
#include <cinttypes>
#include <string>

#define MAKE_VERSION1(a,b,c,d) (((uint64_t(a) << 48) & 0xFFFF) | ((uint64_t(b) << 32) & 0xFFFF) | ((uint64_t(c) << 16) & 0xFFFF) | (uint64_t(d) & 0xFFFF))
#define MAKE_VERSION2(a,b,c) (((uint64_t(a) << 48) & 0xFFFF) | ((uint64_t(b) << 32) & 0xFFFF) | ((uint64_t(c)) & 0xFFFFFFFF))

const uint16_t PLUGIN_VERSION_MAJOR = 2;
const uint16_t PLUGIN_VERSION_MINOR = 7;
const uint16_t PLUGIN_VERSION_PATCH = 0;
const uint16_t PLUGIN_VERSION_TWEAK = 0;
const uint64_t PLUGIN_VERSION_FULL = MAKE_VERSION1(PLUGIN_VERSION_MAJOR, PLUGIN_VERSION_MINOR, PLUGIN_VERSION_PATCH, PLUGIN_VERSION_TWEAK);
const std::string PLUGIN_VERSION = "2.7.0 (Build 0, Commit 7e78d6f0910563995954afc5484971348376a616)";
