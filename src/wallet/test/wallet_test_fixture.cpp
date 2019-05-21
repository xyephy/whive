// Copyright (c) 2016-2019 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <wallet/test/wallet_test_fixture.h>

#include <rpc/server.h>
#include <wallet/db.h>

<<<<<<< HEAD
WalletTestingSetup::WalletTestingSetup(const std::string& chainName):
    TestingSetup(chainName), m_wallet("mock", WalletDatabase::CreateMock())
=======
WalletTestingSetup::WalletTestingSetup(const std::string& chainName)
    : TestingSetup(chainName),
      m_wallet(m_chain.get(), WalletLocation(), WalletDatabase::CreateMock())
>>>>>>> 3001cc61cf11e016c403ce83c9cbcfd3efcbcfd9
{
    bool fFirstRun;
    m_wallet.LoadWallet(fFirstRun);
    m_wallet.handleNotifications();

    m_chain_client->registerRpcs();
}
