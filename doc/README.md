SafeBox Core
=============

Setup
---------------------
[SafeBox Core](http://safebox.org/wallet) is the original SBX client and it builds the backbone of the network. However, it downloads and stores the entire history of SBX transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run SafeBox Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/safebox-qt` (GUI) or
- `bin/safeboxd` (headless)

If this is the first time running SafeBox Core (since v5.0.0), you'll need to install the sapling params by running the included `install-params.sh` script, which copies the two params files to `$HOME/.safebox-params`

### Windows

Unpack the files into a directory, and then run safebox-qt.exe.

### macOS

Drag SBX-Qt to your applications folder, and then run SBX-Qt.

### Need Help?

* See the documentation at the [SBX Wiki](https://github.com/SBX-Project/SBX/wiki)
for help and more information.
* Ask for help on [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or on the [SBX Forum](http://forum.safebox.org/).
* Join our Discord server [Discord Server](https://discord.safebox.org)

Building
---------------------
The following are developer notes on how to build SafeBox Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The SBX repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://www.fuzzbawls.pw/safebox/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources
* Discuss on the [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or the [SBX](http://forum.safebox.org/) forum.
* Join the [SBX Discord](https://discord.safebox.org).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Reduce Memory](reduce-memory.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
