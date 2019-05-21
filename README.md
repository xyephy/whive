[![Build Status](https://travis-ci.org/whivecom/Whive-Testnet.git.svg?branch=master)](https://travis-ci.org/whivecom/Whive-Testnet.git)


DOWNLOAD
========

* Whive [WHV] Source code on github https://github.com/whivecom/Whive-Testnet


Useful links
============

* Website:        http://whive.io/

* Twitter:        https://twitter.com/whive
* Telegram   :    http://t.me/whive


Whive Core integration/staging tree
=====================================

What is Whive?
----------------

Whive, is a peer-to-peer blockchain protocol that extends the Bitcoin Blockchain incentivizing the building of sustainable energy solutions through Trustless Rewards.
The Whive protocol seeks to empower communities to access latent resources such as; Solar Energy & Irrigated Water through Distributed Applications. 
We achieve this through a Merge-Mined Auxilary Chain(AuxChain) that extends Bitcoin's distributed trust model through Trustless Rewards. 

Development tips and tricks
----------------------------

**compiling for debugging**

Run configure with the --enable-debug option, then make. Or run configure with
CXXFLAGS="-g -ggdb -O0" or whatever debug flags you need.

**debug.log**

If the code is behaving strangely, take a look in the debug.log file in the data directory;
error and debugging message are written there.

The -debug=... command-line option controls debugging; running with just -debug will turn
on all categories (and give you a very large debug.log file).

The Qt code routes qDebug() output to debug.log under category "qt": run with -debug=qt
to see it.

**testnet and regtest modes**

Run with the -testnet option to run with "play whives" on the test network, if you
are testing multi-machine code that needs to operate across the internet.

If you are testing something that can run on one machine, run with the -regtest option.
In regression test mode blocks can be created on-demand; see qa/rpc-tests/ for tests
that run in -regest mode.

**DEBUG_LOCKORDER**

The Whive Core is a multithreaded application, and deadlocks or other multithreading bugs
can be very difficult to track down. Compiling with -DDEBUG_LOCKORDER (configure
CXXFLAGS="-DDEBUG_LOCKORDER -g") inserts run-time checks to keep track of what locks
are held, and adds warning to the debug.log file if inconsistencies are detected.


License
-------

Whive Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/whive/whive-core/tags) are created
regularly to indicate new official, stable release versions of The Whive Core.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

Translations
------------

Changes to translations as well as new translations can be submitted to
[The Whive Core's crane-locale repository](https://github.com/whive/core-locale).

**Important**: We do not accept translation changes as GitHub pull requests in main repository.

