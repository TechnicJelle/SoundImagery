# SoundImagery
C program to convert Sound to Images and back again

## Running
After [setting up the dependencies](#building-instructions), you should be able to just execute `make run` to run the program.

## Building instructions

This project uses the [Bass Library](https://www.un4seen.com/bass.html), so please download the correct version for your operating system.

### For Windows:
Download the **Win32** version of Bass from the linked webpage above,\
extract these files to the root of this repository:
- `bassXX.zip/x64/bass.dll`
- `bassXX.zip/c/bass.h`
- `bassXX.zip/c/x64/bass.lib`

### For Linux:
Download the **Linux** version of Bass from the linked webpage above,\
extract these files to the root of this repository:
- `bassXX-linux.zip/bass.h`
- `bassXX-linux.zip/x64/libbass.so`

### For Android (in [Termux](https://termux.com/))
Run this command in the Termux shell:
```
getprop ro.product.cpu.abi
```
This returns your device's CPU architecture, which you need for the next step:

Download the **Android** version of Bass from the linked webpage above,\
then extract these files to the root of this repository:
- `bassXX-android.zip/c/bass.h`
- `bassXX-android.zip/libs/<your device's CPU architecture>/libbass.so`
