# dwmblocks
dwmblocks is a modular status bar for dwm written in c.

The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.

## Patches
- [Statuscmd](https://dwm.suckless.org/patches/statuscmd/ "statuscmd"): This makes dwmblocks put each block's signal in front of its output text and handles the SIGUSR1 signal coming from [dwm](https://dwm.suckless.org "dwm") by running the block's command with $BUTTON exported. Checkout [my dwm build](https://github.com/albertomosconi/dwm "albertomosconi's dwm") which has been integrated with this.
