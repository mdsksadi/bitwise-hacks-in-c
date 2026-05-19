# Bitwise Hacks in C

This repository contains my practice notes and C implementations based on bitwise manipulation concepts.

## Topics
- Set a bit
- Clear a bit
- Toggle a bit
- Convert trailing 0's to 1
- Extracting the laast significant 1 bit
-

## Goal
To improve my low-level C programming skills for embedded software development.

## Set a bit
```c
   01000000   (1 << 6)
|  00101101   (x)
------------
   01101101   
```
## Clear a bit
```c
   10111111   (~(1 << 6))
&  01101101   (x)
------------
   00101101   
```
## Toggle a bit
```c
   01000000 (1<<6)
^  00101101 (x)
   ----------
   01101101 
```
## Convert trailing 0's to 1
```c
   01100111 (x-1)
|  01101000 (x)
   ----------
   01101111 
```
## Extracting the laast significant 1 bit
```c
   01101000 (x)
   10010111 (~x)
   10011000 (~x + 1 = -x)
&  01101000 (x)
   ----------
   00001000 (-x & x)
```