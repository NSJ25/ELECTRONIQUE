# PassCompteur

**PassCompteur** est un projet Arduino combinant un capteur infrarouge, un afficheur 7 segments (TM1637), deux boutons et une **LED RGB** pour compter les passages ou présences de manière simple et visuelle.

🎥 [Voir la démonstration sur YouTube](https://youtube.com/shorts/74Yj4bSt75k?si=cDBJl-yqQrcF7wrc)

---

## 🛠 Matériel utilisé

- Arduino Uno (ou compatible)
- Capteur infrarouge (IR)
- Afficheur 4 chiffres TM1637
- 2 boutons poussoirs (Reset et ON/OFF)
- 1 **LED RGB** (cathode ou anode commune)
- Résistances (220Ω pour la LED)
- Fils de connexion et breadboard

---

## ⚙️ Schéma de connexion

| Composant             | Broche Arduino |
|-----------------------|----------------|
| TM1637 CLK            | D2             |
| TM1637 DIO            | D3             |
| Capteur IR (OUT)      | D4             |
| Bouton Reset          | D5             |
| Bouton ON/OFF         | D6             |
| LED RGB - Rouge       | D7             |
| LED RGB - Vert        | D8             |
| LED RGB - Bleu        | D9 *(optionnel)* |

> 💡 Si tu n’utilises que deux couleurs (rouge pour "off", vert pour "on"), seules deux broches de la LED RGB sont nécessaires.

---

## 💡 Fonctionnement

- 🔢 Le nombre de passages détectés est affiché sur l’écran 7 segments.
- 🔘 Le bouton **Reset** remet le compteur à zéro.
- 🔁 Le bouton **ON/OFF** active ou désactive la détection par infrarouge.
- 🔴 Si la LED RGB est **rouge**, la détection est **désactivée**.
- 🟢 Si la LED RGB est **verte**, la détection est **activée**.

---

## 🧠 Code source

Le fichier principal est `PassCompteur.ino`, écrit en C++ pour l’IDE Arduino.

### Bibliothèque utilisée :

```cpp
#include <TM1637Display.h>
