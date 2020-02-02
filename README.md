
DOWNLOAD
========

* Whive [WHIVE] Source code on github https://github.com/whiveio/whive


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

To Build & Run
---------------------

```bash
./autogen.sh
./configure
make
make install # optional
```

This will build whive-qt as well, if the dependencies are met.

Building
---------------------
The following are developer notes on how to build Whive Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](doc/dependencies.md)
- [macOS Build Notes](doc/build-osx.md)
- [Unix Build Notes](doc/build-unix.md)
- [Windows Build Notes](doc/build-windows.md)
- [OpenBSD Build Notes](doc/build-openbsd.md)
- [NetBSD Build Notes](doc/build-netbsd.md)
- [Gitian Building Guide](doc/gitian-building.md)


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


