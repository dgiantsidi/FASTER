// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#include "core/faster.h"
#include "core/light_epoch.h"
#include "core/thread.h"
#include "device/file_system_disk.h"
#include "gtest/gtest.h"
#include <atomic>
#include <cstdint>
#include <cstring>
#include <deque>
#include <functional>
#include <memory>
#include <random>
#include <thread>

using namespace FASTER::core;

typedef FASTER::environment::UringIoHandler handler_t;

#define CLASS RecoveryTest_Uring

#include "recovery_test.h"

#undef CLASS

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
