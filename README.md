# 3DS Dumper

## What is this?
3DS dumper is a fork of Godmode9 that was made to work on 3ds without any screens to dump files from it even if it's not usable. This is why this fork implemented LED indicator (thanks to Gruetzig on discord for the code).

## How to use

Simply go to the [releases tab](https://github.com/cooolgamer/3ds-dumper/releases), choose the edition you want, rename it `boot.firm` and place it on the root of your sdcard then power on the console with the sdcard and the dump will start.

## Editions
There is 3 editions of this dumper, they're just different autorun sripts that you can find [here](https://github.com/cooolgamer/3ds-dumper/tree/master/scripts)
- ctr_for_ctrtransfer: As the name says, this is to dump the transferable ctrnand to put it on a new console,
- normal: Dumps almost everything from the console,
- full: Dumps EVERYTHING, meaning you need a few gigabytes (around 4gb) left on your SDcard to do it.

## LED Indicator:
- Green: The firm launched successfully (just wait a bit, this shouldn't take more than 3 seconds),
- Blue: The script is processing, just wait if you see this,
- Orange (or yellow): Error, check the following if this happens, and press A to continue:
  - Do the SDcard have enough storage left?
  - Is the SDcard Fat32 formatted?
  - Is the SDcard write protected?
  - Is your SDcard corrupted?
- Bright pink (or white): You pressed the B button and it's waiting for input to cancel the current operation (A to cancel, B to return) (this is kinda broken for the B button, press it until the LED go blue again if you don't want to cancel).

## License
You may use this under the terms of the GNU General Public License GPL v2 or under the terms of any later revisions of the GPL. Refer to the provided `LICENSE.txt` file for further information.

## Credits
This tool would not have been possible without the help of numerous people. Thanks go to (in no particular order)...
* **cooolgamer**, for making this fork
* **Gruetzig**, for the LED indicator code
* **Archshift**, for providing the base project infrastructure
* **Normmatt**, for sdmmc.c / sdmmc.h and gamecart code, and for being of great help on countless other occasions
* **Cha(N)**, **Kane49**, and all other FatFS contributors for [FatFS](http://elm-chan.org/fsw/ff/00index_e.html)
* **Wolfvak** for ARM11 code, FIRM binary launcher, exception handlers, PCX code, Makefile and for help on countless other occasions
* **SciresM** for helping me figure out RomFS and for boot9strap
* **SciresM**, **Myria**, **Normmatt**, **TuxSH** and **hedgeberg** for figuring out sighax and giving us access to bootrom
* **ihaveamac** for first developing the simple CIA generation method and for being of great help in porting it
* **wwylele** and **aspargas2** for documenting and implementing the DISA, DIFF, and BDRI formats
* **dratini0** for savefile management, based on [TWLSaveTool](https://github.com/TuxSH/TWLSaveTool/)
* **Pk11** for unicode and translation support
* **b1l1s** for helping me figure out A9LH compatibility
* **Gelex** and **AuroraWright** for helping me figure out various things
* **stuckpixel** for the new 6x10 font and help on various things
* **Al3x_10m** for help with countless hours of testing and useful advice
* **WinterMute** for helping me with his vast knowledge on everything gamecart related
* **profi200** for always useful advice and helpful hints on various things
* **windows-server-2003** for the initial implementation of if-else-goto in .gm9 scripts
* **Kazuma77** for pushing forward scripting, for testing and for always useful advice
* **TurdPooCharger** for being one of the most meticulous software testers around
* **JaySea**, **YodaDaCoda**, **liomajor**, **Supster131**, **imanoob**, **Kasher_CS** and countless others from freenode #Cakey and the GBAtemp forums for testing, feedback and helpful hints
* **Shadowhand** for being awesome and [hosting my nightlies](https://d0k3.secretalgorithm.com/)
* **Plailect** for putting his trust in my tools and recommending this in [The Guide](https://3ds.guide/)
* **SirNapkin1334** for testing, bug reports and for hosting the original GodMode9 Discord server
* **Lilith Valentine** for testing and helpful advice
* **Project Nayuki** for [qrcodegen](https://github.com/nayuki/QR-Code-generator)
* **Amazingmax fonts** for the Amazdoom font
* The fine folks on **the official GodMode9 IRC channel and Discord server**
* The fine folks on **freenode #Cakey**
* All **[3dbrew.org](https://www.3dbrew.org/wiki/Main_Page) editors**
* Everyone I possibly forgot, if you think you deserve to be mentioned, just contact us!
