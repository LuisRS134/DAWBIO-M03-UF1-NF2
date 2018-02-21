<p>Per a realitzar el
joc utilitzarem una matriu de 3x3 que farem servir de tauler de joc i
farem diverses funcions:</p>
<p> 
</p>
<p><b>void
iniciaTauler(char tauler[][3]);</b></p>
<p>funció que rep una
matriu de 3x3 (el tauler) i l'omple amb guions, és a dir omple cada
posició amb el caràcter de '-'.</p><br><p><b>void
printaTauler(char tauler[][3]);</b></p>
<p>que imprimeix el
tauler amb les tirades</p>

<p><br>

</p>
<p><b>void tirada(char
tauler[][3],char tirada);</b></p>
<p>funció que escriu
la tirada del jugador al tauler. 
</p>
<p>Aquesta funció
demanarà unes coordenades per saber a quina posició escriure la
<b>tirada </b>(que serà 'x' o
'o'). Si la casella ja està ocupada ho indicarà i demanarà que
torni a tirar.</p>

<p><br>

</p>
<p><b>int comprova(char
tauler[][3], char tirada );</b></p>
<p>que comprova si hi
ha tres en ratlla del jugador que ha fet la tirada. La variable
tirada serà una 'x' o una 'o', per tant haurà de comprovar si hi ha
tres en ratlla del símbol que li arriba amb tirada.</p>
<p>
Si NO hi ha tres en ratlla la funció retorna 0</p>
<p>
Si SI hi ha tres en ratlla retorna 1</p>
<p>
Si el tauler està ple retorna -1</p>
<p>
<br>

</p>

<p>
Realitza el codi del programa principal per a jugar a 2 jugadors. A
l'inici del programa ens demanarà a quants punts volem jugar. Quan
un jugador faci 3 en ratlla es mostrarà el marcador:</p>

<p><b>void marcador(int
puntsJug1, int puntsJug2, char tauler[][3]);</b></p>
