# PassCompteur

**PassCompteur** est un projet Arduino combinant un capteur infrarouge, un afficheur 7 segments (TM1637), deux boutons et deux LED pour compter les passages ou présences de manière simple et visuelle.
**PassCompteur** is an Arduino project combining an infrared sensor, a 7-segment display, two buttons, and two LEDs to count people or object passages in a simple and visual way.

## 🛠 Matériel utilisé / Hardware used

* Arduino Uno (ou compatible)
* Capteur IR (Infrared sensor)
* Afficheur TM1637 4 chiffres
* 2 Boutons poussoirs (reset et ON/OFF)
* 1 LED rouge (état OFF)
* 1 LED verte (état ON)
* Résistances (220Ω pour LED)
* Fils de connexion / Breadboard

## ⚙️ Schéma de connexion / Wiring

| Composant          | Arduino Pin |
| ------------------ | ----------- |
| TM1637 CLK         | D2          |
| TM1637 DIO         | D3          |
| Capteur IR (OUT)   | D4          |
| Bouton Reset       | D5          |
| Bouton ON/OFF      | D6          |
| LED Rouge (avec R) | D7          |
| LED Verte (avec R) | D8          |

## 💡 Fonctionnement / How it works

* 🔢 Le nombre de passages est affiché sur l'écran 7 segments.
  The number of passages is displayed on the 7-segment screen.
* 🔘 Le bouton **Reset** remet le compteur à zéro.
  The **Reset** button resets the counter.
* 🔁 Le bouton **ON/OFF** active ou désactive la détection IR.
  The **ON/OFF** button enables or disables IR detection.
* 🔴 LED rouge allumée : détection **désactivée**.
  Red LED on: detection **disabled**.
* 🟢 LED verte allumée : détection **activée**.
  Green LED on: detection **enabled**.

## 🧠 Code source

Fichier principal : `PassCompteur.ino`, écrit en C++ pour l'environnement Arduino.
Main file: `PassCompteur.ino`, written in C++ for the Arduino IDE.

Bibliothèque utilisée :
Library used:

```cpp
#include <TM1637Display.h>
```
