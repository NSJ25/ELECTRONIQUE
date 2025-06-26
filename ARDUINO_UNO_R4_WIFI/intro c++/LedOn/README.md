🔧 Cours 1 – Allumer et éteindre une LED (Hello Arduino)
🎯 Objectif :
Apprendre à :

Configurer une broche en sortie.

Allumer et éteindre une LED avec du code.

🧰 Matériel nécessaire :
1 LED (rouge, verte, peu importe)

1 résistance (220Ω ou 330Ω)

2 fils

1 carte Arduino (Uno, Nano, etc.)

1 breadboard

🔌 Schéma de câblage :
Anode de la LED (la patte la plus longue) → vers broche 2 de l’Arduino

Cathode (la plus courte) → résistance → GND

text
Copier
Modifier
Arduino D2 ───> [LED] ───> [Résistance 220Ω] ───> GND

🧠 Explication :
Ligne de code	Ce que ça fait
pinMode(2, OUTPUT);	Configure la broche 2 pour envoyer du courant
digitalWrite(2, HIGH);	Met la broche 2 à 5V = LED s’allume
delay(1000);	Attend 1000 millisecondes (1 seconde)
digitalWrite(2, LOW);	Met la broche 2 à 0V = LED s’éteint

✅ Exercice
👉 Modifie le code pour que la LED clignote :

2 fois plus vite (0,5s au lieu de 1s)

2 fois plus lentement (2s)