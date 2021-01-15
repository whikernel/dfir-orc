//
// SPDX-License-Identifier: LGPL-2.1-or-later
//
// Copyright © 2021 ANSSI. All Rights Reserved.
//
// Author(s): fabienfl
//

#pragma once

#include <spdlog/common.h>

namespace Orc {
namespace Log {

constexpr std::wstring_view kLevelTrace = L"trace";
constexpr std::wstring_view kLevelDebug = L"debug";
constexpr std::wstring_view kLevelInfo = L"info";
constexpr std::wstring_view kLevelWarning = L"warning";
constexpr std::wstring_view kLevelError = L"error";
constexpr std::wstring_view kLevelCritical = L"critical";
constexpr std::wstring_view kLevelOff = L"off";

enum class Level
{
    Trace = SPDLOG_LEVEL_TRACE,
    Debug = SPDLOG_LEVEL_DEBUG,
    Info = SPDLOG_LEVEL_INFO,
    Warning = SPDLOG_LEVEL_WARN,
    Error = SPDLOG_LEVEL_ERROR,
    Critical = SPDLOG_LEVEL_CRITICAL,
    Off = SPDLOG_LEVEL_OFF
};

std::wstring_view ToString(Log::Level level);
Log::Level ToLevel(const std::wstring& level, std::error_code& ec = std::error_code());

}  // namespace Log
}  // namespace Orc
