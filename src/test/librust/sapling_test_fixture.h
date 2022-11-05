// Copyright (c) 2020 The SBX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef SBX_SAPLING_TEST_FIXTURE_H
#define SBX_SAPLING_TEST_FIXTURE_H

#include "test/test_safebox.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //SBX_SAPLING_TEST_FIXTURE_H
