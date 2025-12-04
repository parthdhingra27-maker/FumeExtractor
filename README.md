<img width="1226" height="896" alt="image" src="https://github.com/user-attachments/assets/ad8024ff-c34b-4909-8b03-4f4f6241656a" />


<h1 align="center">FumeExtractor: A Custom DIY Fume Extractor</h1>
<p align="center">Project Files:</p>


<p align="center">
  <a href="https://cad.onshape.com/documents/5f3d41ebaa1ff2dac727490e/w/8e68a1356115bec1a9412777/e/b809de6d9b36ae64cb4acad5?renderMode=0&uiState=6930cbc43d70a686c43a1573">Onshape CAD Files</a> •
  <a href="https://docs.google.com/spreadsheets/d/1JyTsFHx3Wv45ex6Yl0bQmdz0n9tQV2E78bBc04w5R7Y/edit?usp=sharing">Bill of Materials</a> •
  <a href="https://blueprint.hackclub.com/projects/2891">Blueprint Journal</a>
</p>


I built this to learn PCB design and to create a custom, cool-looking fume extractor to suck in solder fumes.

## Features
- Removable Filter: The filter is easily removable by sliding it out from the top
- High CFM: One Arctic Pro fan provides 50 CFM, which helps remove a lot of the fumes while soldering
- Low Cost: The whole extractor with a custom PCB and screen costs around $50, which is similar to most extractors on Amazon
- Tiltable: The angle of the extractor can be changed as needed
- Fully 3D Printable: All the physical parts other than the electronics are 3D printed, making it easy to make
- The speed of the fan is controlled using a knob connected to an Arduino Nano
- There is an OLED screen to show the fan speed

## Design and CAD

The Onshape link can be found at the top of the README.

The filter slides in from the top, and then the fan comes in behind it and screws into heat-sink inserts. Then the lid in the back closes the extractor using embedded magnets in the plastic.

<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/7c3a96e9-cd68-49ec-9b8f-bccd60578162" />

This is the back view:

<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/b90fed71-910c-4b7e-a660-df456a05a87d" />

This is the underside:

<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/3b44716a-db4c-4374-b3ab-da416ecc7bab" />

The sides pivot using a screw on the outside that screws into a heat-sunk insert attached to the main extractor:

<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/a6400159-5bb1-4c1e-b03a-3854a60ec8d9" />


The whole project uses M3 hardware and heat-sunk inserts.

## PCB and Schematics:

This is the schematic for the custom PCB. The board is powered from a bench power supply. The screw terminals go to the fan pins, the rocker switch, the knob to control fan speed, and the power from the bench power supply. There are also header pins for the OLED screen.
There's also a buck convertor to convert the 12v to 5v to power the Arduino Nano.

<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/b7a4dfc9-7f13-4188-b190-e890bdd49515" />

<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/484dd020-167d-434e-a3ed-4d8ce8c594ef" />

<img width="1920" height="1200" alt="image" src="https://github.com/user-attachments/assets/12eda75c-f4f1-4e04-8413-23122ce6ed63" />

## Bill of Materials
These are the components needed. The prices and links can be found here:  <a href="https://docs.google.com/spreadsheets/d/1jZwi7d67DiPdZLEvy5LfeC6HyOPPZ9pO3xaRMX1j6oo/edit?usp=sharing">Bill of Materials Google Sheets</a>

- 1 x PCB
- 1 x Arduino Nano
- 1 x Set of M3 Heat Sunk Inserts
- 1 x Set of M3 Hardware
- 1 x Arctic Pro 120mm Fan
- 1 x Speed Control Knob
- 1 x Toggle Switch On Off
- 1 x Set of 20AWG Wire
- 1 x XT60 to Wire Connector for Bench Power Supply to PCB
- 1 x 1.3in OLED Screen
- 1 x Set of Rubber Feet
- 1 x Set of KF301 Screw Terminals
- 1 x 10k Resistor
- 1 x 1x4 2.54 Pin Header
- 1 x LM2596 Buck Convertor
- 1 x Activiated Carbon Filter 13cm x 13cm x 1cm
- 1 x JST-XH 4P
- 3 x 2 Wire Screw Terminals
- 15 x 1.5mm 20mm Long Metal Rod
