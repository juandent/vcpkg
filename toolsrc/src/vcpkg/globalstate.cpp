#include "pch.h"

#include <vcpkg/globalstate.h>

namespace vcpkg
{
    Util::LockGuarded<Chrono::ElapsedTimer> GlobalState::timer;
    Util::LockGuarded<std::string> GlobalState::g_surveydate;

    std::atomic<bool> GlobalState::debugging(false);
    std::atomic<bool> GlobalState::feature_packages(true);

    std::atomic<int> GlobalState::g_init_console_cp(0);
    std::atomic<int> GlobalState::g_init_console_output_cp(0);
}
