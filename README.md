
DOWNLOAD
========

<<<<<<< HEAD
* Whive [WHIVE] Source code on github https://github.com/whivecom/Whive-Core
=======
* Whive [WHIVE] Source code on github https://github.com/whiveio/Whive-Core
>>>>>>> 4c05d883a573144e2d446e8f0c9225dde9ea7077


Useful links
============

* Website:        http://whive.io/

* Twitter:        https://twitter.com/whiveio
* Telegram   :    http://t.me/whiveio


Whive Core integration/staging tree
=====================================

What is Whive?
----------------

Whive, is a blockchain protocol that extends the Bitcoin Blockchain through enabling Trustless Rewards for Engineering Sustainable Solutions. Building on the success of Bitcoin the World's most secure blockchain, the Whive community has set out to build a cryptographically secure blockchain protocol and Auxiliary Chain(AuxChain) that will allow for building applications that trustlessly reward sustainable solutions.

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
completely stable. [Tags](https://github.com/whivecom/Whive-Core/tags) are created
regularly to indicate new official, stable release versions of The Whive Core.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.


