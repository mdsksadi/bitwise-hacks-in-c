# Bitwise Hacks in C

This repository contains my practice notes and C implementations based on bitwise manipulation concepts.

## Topics
- Set a bit
- Clear a bit
- Toggle a bit
- Convert trailing 0's to 1
- Extracting the laast significant 1 bit
- Masked Copy
- Swapping Bits

## Goal
To improve my low-level C programming skills for embedded software development.

## Set a bit
**Formula:**
```bash
(1<<n) | x
```
**Breakdown:**
```c
   01000000   (1 << 6)
|  00101101   (x)
------------
   01101101   
```
## Clear a bit
**Formula:**
```bash
~(1<<n) & x
```
**Breakdown:**
```c
   10111111   (~(1 << 6))
&  01101101   (x)
------------
   00101101   
```
## Toggle a bit
**Formula:**
```bash
(1<<n) ^ x
```
**Breakdown:**
```c
   01000000 (1<<6)
^  00101101 (x)
   ----------
   01101101 
```
## Convert trailing 0's to 1
**Formula:**
```bash
(x-1) | x
```
**Breakdown:**
```c
   01100111 (x-1)
|  01101000 (x)
   ----------
   01101111 
```
## Extracting the laast significant 1 bit
**Formula:**
```bash
-x & x
```
**Breakdown:**
```c
   01101000 (x)
   10010111 (~x)
   10011000 (~x + 1 = -x)
&  01101000 (x)
   ----------
   00001000 (-x & x)
```
## Masked Copy
**Formula:**
```bash
(B & M) | (A & ~M)
```
**Breakdown:**
```c
A = 01110100
B = 11010111
M = 01100101

   01000101 (B & M)
|  00010000 (A & ~M) // 10011010 (~M)
   ----------------------------------
   01010101 (B & M) | (A & ~M)
```
## Swapping Bits
**Formula:**
```bash
P = ((x >> A) ^ (x >> B)) & 1;
if P=0, do nothing.
Otherwise,
x ^= (P << A);
x ^= (P << B);
```
**Breakdown:**
```c
x = 01100100
A = 3
B = 5

So, P = ((x >> A) ^ (x >> B)) & 1;

   00001100 (x >> A)
^  00000011 (x >> B)
   -----------------
   00001111 (x >> A) ^ (x >> B)
&  00000001 (1)
   --------------------------------------
   00000001 ((x >> A) ^ (x >> B)) & 1 = P

// Swap the bits
   00001000 (P << A)
^  01100100 (x)
   -----------------
   01101100 (x ^= (P << A))

   00100000 (P << B)
^  01101100 (x)
   ------------------------
   01001100 (x ^= (P << B))
```