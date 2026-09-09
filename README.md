# CHW-IP8-27G-EXP
An open source inkjet color printer with a nozzle built from the ground up!

<img src="https://img.shields.io/github/last-commit/ChowderWellington/CHW-IP8-27G-EXP"> <img src="https://img.shields.io/github/issues/ChowderWellington/CHW-IP8-27G-EXP"> <img src="https://img.shields.io/github/issues-closed/ChowderWellington/CHW-IP8-27G-EXP"> <img src="https://img.shields.io/github/stars/ChowderWellington/CHW-IP8-27G-EXP">

[![View PCB on KiCanvas](https://hack.club/pcb-badge)](https://kicanvas.org/?repo=https://github.com/ChowderWellington/CHW-IP8-27G-EXP/tree/main/pcb)

<img src="https://github.com/ChowderWellington/CHW-IP8-27G-EXP/blob/main/assets/image-removebg-preview.png?raw=true">

(Chowder Hardware Works-Inkjet Printer 8 Nozzle-27 gauge precision nozzles-experimental)
Printhead: PX8-20H-01
Manufacturer: Chowder INC
yes i love naming things annoyingly

## Overview
The CHW-IP8-27G-EXP is an inkjet color printer that can print at really bad dpi! But it does work! and i'm not using other people's nozzles, as I built my own from scratch!

## Features
- Very replaceable (you can 3D print any non-electrical parts and to get replacements for any electrical stuff is very cheap!)
- Custom Nozzle

# Full CAD

Here are the .stp files (THEY NEED TO BE PRINTED SEPARATELY) because stardance doesn't like .stl's

[Nozzles+Manifold](https://github.com/ChowderWellington/CHW-IP8-27G-EXP/raw/refs/heads/main/cad/CHW-IP8-27G-EXP%20nozzles%20+%20manifold.stp)

[Printhead](https://github.com/ChowderWellington/CHW-IP8-27G-EXP/raw/refs/heads/main/cad/CHW-IP8-27G-EXP%20printhead.stp)

If you would like to recreate what I have done, use these files

## Technical details

The PX8-20H-01 contains 8 piezoelectric discs that move forward and backwards under high voltage, causing a membrane to push a tiny ink droplet out onto a page, hence the name - inkjet. A motor in the CHW-IP8-27G moves the PX8-20H-01 back and forth, meaning it can print anywhere on a page using its nozzles. 

## Model Names
- CHW-IP8-27G-EXP - Full printer assembly (Printhead, nozzles, feeders etc)
- PX8-20H-01 - Experimental nozzle (Newest model)

## Datasheets
- [PX8-20H-01](https://github.com/ChowderWellington/CHW-IP8-27G-EXP/blob/main/assets/PX8-20H-01%20DATASHEET.pdf)

## How to print the printer

1. Download the relevant files from the model files section below
2. Print it on any 3D printer using supports. For the nozzle and the manifold, it should only generate supports for the piping. For the printhead, there should be no supports.
3. Assemble using the guide (W.I.P)

This project was fit for a Bambu Labs A1 Mini, and a 0.4MM nozzle, but I assume it will work on anything else.

## PCB
You can order the pcb from anywhere, but [here are the files you'll need](https://github.com/ChowderWellington/CHW-IP8-27G-EXP/tree/main/pcb)

### Model files
- [PX8-20H-01 manifold + nozzle](https://github.com/ChowderWellington/CHW-IP8-27G-EXP/blob/main/cad/Main%20Nozzle%20Setup%20V4%20%2B%20Manifold.stl)
- [CHW-IP8-27G-EXP printhead](https://github.com/ChowderWellington/CHW-IP8-27G-EXP/blob/main/cad/Main%20printhead%20V1.stl)

## Older Models
Older models of most of the parts can be found in the [cad folder](https://github.com/ChowderWellington/CHW-IP8-27G-EXP/tree/main/cad). However, it is NOT recommended to use them. Please use the newest model (V4). 

## Extra thanks!
- Thank you so much to stardance for funding whatever this is! Y'all are the best!! Please keep doing what you're doing, and everyone WILL enjoy it! 
- Also big thanks to YOUTUBE for hosting videos that i can watch to learn about printers (I knew nothing about them before this)
- Huge thanks to any teacher in my classroom that didn't tell me off for working on this during class time whoops
