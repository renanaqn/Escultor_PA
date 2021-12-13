#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>



#include "sculptor.h" //inclusão do header do escultor

using namespace std;

int main(){

    Sculptor draw(100,75,100);

    //alien 1
    draw.setColor(0.5,0.5,0.5,1);
    draw.putBox(0,1,21,25,8,10); //linha 1
    draw.putBox(1,2,23,25,8,10); //linha 2
    draw.putBox(2,3,21,26,8,10); //linha 3
    draw.putBox(2,3,27,28,8,10); //linha 3.1
    draw.putBox(3,4,20,21,8,10); //linha 4
    draw.putBox(3,4,22,24,8,10); //linha 4.1
    draw.putBox(3,4,25,27,8,10); //linha 4.2
    draw.putBox(4,5,20,21,8,10); //linha 5
    draw.putBox(4,7,22,26,8,10); //linha 5,6,7
    draw.putBox(6,7,20,21,8,10); //linha 7.1
    draw.putBox(7,8,22,24,8,10); //linha 7.2
    draw.putBox(7,8,25,27,8,10); //linha 7.3
    draw.putBox(7,8,20,21,8,10); //linha 7.4
    draw.putBox(8,9,21,26,8,10); //linha 8
    draw.putBox(8,9,27,28,8,10); //linha 8.1
    draw.putBox(9,10,23,25,8,10); //linha 9
    draw.putBox(10,11,21,25,8,10); //linha 10

    //alien 2
    draw.setColor(0.95,0.3,0.95,1);
    draw.putBox(20,21,21,25,8,10); //linha 1
    draw.putBox(21,22,23,25,8,10); //linha 2
    draw.putBox(22,23,21,26,8,10); //linha 3
    draw.putBox(22,23,27,28,8,10); //linha 3.1
    draw.putBox(23,24,20,21,8,10); //linha 4
    draw.putBox(23,24,22,24,8,10); //linha 4.1
    draw.putBox(23,24,25,27,8,10); //linha 4.2
    draw.putBox(24,25,20,21,8,10); //linha 5
    draw.putBox(24,27,22,26,8,10); //linha 5,6,7
    draw.putBox(26,27,20,21,8,10); //linha 7.1
    draw.putBox(27,28,22,24,8,10); //linha 7.2
    draw.putBox(27,28,25,27,8,10); //linha 7.3
    draw.putBox(27,28,20,21,8,10); //linha 7.4
    draw.putBox(28,29,21,26,8,10); //linha 8
    draw.putBox(28,29,27,28,8,10); //linha 8.1
    draw.putBox(29,30,23,25,8,10); //linha 9
    draw.putBox(30,31,21,25,8,10); //linha 10

    //alien 3
    draw.setColor(0.5,0.6,0.95,1);
    draw.putBox(40,41,21,25,8,10); //linha 1
    draw.putBox(41,42,23,25,8,10); //linha 2
    draw.putBox(42,43,21,26,8,10); //linha 3
    draw.putBox(42,43,27,28,8,10); //linha 3.1
    draw.putBox(43,44,20,21,8,10); //linha 4
    draw.putBox(43,44,22,24,8,10); //linha 4.1
    draw.putBox(43,44,25,27,8,10); //linha 4.2
    draw.putBox(44,45,20,21,8,10); //linha 5
    draw.putBox(44,47,22,26,8,10); //linha 5,6,7
    draw.putBox(46,47,20,21,8,10); //linha 7.1
    draw.putBox(47,48,22,24,8,10); //linha 7.2
    draw.putBox(47,48,25,27,8,10); //linha 7.3
    draw.putBox(47,48,20,21,8,10); //linha 7.4
    draw.putBox(48,49,21,26,8,10); //linha 8
    draw.putBox(48,49,27,28,8,10); //linha 8.1
    draw.putBox(49,50,23,25,8,10); //linha 9
    draw.putBox(50,51,21,25,8,10); //linha 10

    //alien 4.1
    draw.setColor(0.9,.3,0.3,1);
    draw.putBox(10,11,31,35,8,10); //linha 1
    draw.putBox(11,12,33,35,8,10); //linha 2
    draw.putBox(12,13,31,36,8,10); //linha 3
    draw.putBox(12,13,37,38,8,10); //linha 3.1
    draw.putBox(13,14,30,31,8,10); //linha 4
    draw.putBox(13,14,32,34,8,10); //linha 4.1
    draw.putBox(13,14,35,37,8,10); //linha 4.2
    draw.putBox(14,15,30,31,8,10); //linha 5
    draw.putBox(14,17,32,36,8,10); //linha 5,6,7
    draw.putBox(16,17,30,31,8,10); //linha 7.1
    draw.putBox(17,18,32,34,8,10); //linha 7.2
    draw.putBox(17,18,35,37,8,10); //linha 7.3
    draw.putBox(17,18,30,31,8,10); //linha 7.4
    draw.putBox(18,19,31,36,8,10); //linha 8
    draw.putBox(18,19,37,38,8,10); //linha 8.1
    draw.putBox(19,20,33,35,8,10); //linha 9
    draw.putBox(20,21,31,35,8,10); //linha 10


    //alien 5.1
    draw.setColor(0.3,.9,0.3,1);
    draw.putBox(30,31,31,35,8,10); //linha 1
    draw.putBox(31,32,33,35,8,10); //linha 2
    draw.putBox(32,33,31,36,8,10); //linha 3
    draw.putBox(32,33,37,38,8,10); //linha 3.1
    draw.putBox(33,34,30,31,8,10); //linha 4
    draw.putBox(33,34,32,34,8,10); //linha 4.1
    draw.putBox(33,34,35,37,8,10); //linha 4.2
    draw.putBox(34,35,30,31,8,10); //linha 5
    draw.putBox(34,37,32,36,8,10); //linha 5,6,7
    draw.putBox(36,37,30,31,8,10); //linha 7.1
    draw.putBox(37,38,32,34,8,10); //linha 7.2
    draw.putBox(37,38,35,37,8,10); //linha 7.3
    draw.putBox(37,38,30,31,8,10); //linha 7.4
    draw.putBox(38,39,31,36,8,10); //linha 8
    draw.putBox(38,39,37,38,8,10); //linha 8.1
    draw.putBox(39,40,33,35,8,10); //linha 9
    draw.putBox(40,41,31,35,8,10); //linha 10

    //spaceship
    draw.setColor(0.3,0.3,0.9,1);
    draw.putEllipsoid(15,5,18,10,5,5);
    draw.putBox(6,10,5,6,8,11); //cockpit 1
    //arma
    draw.setColor(0.3,0.3,0.9,1);
    draw.putBox(3,4,4,7,9,10); //arma 2
    draw.putBox(12,13,4,7,9,10); //arma 3

    draw.setColor(0.25,0.25,0.85,1);
    draw.putBox(6,10,6,9,8,11); //cockpit 1.1

    draw.setColor(0.9,0.2,0.2,1);
    draw.putBox(3,4,7,8,9,10); //arma 2.1
    draw.putBox(12,13,7,8,9,10); //arma 3.1

    //disparo
    draw.setColor(0.9,0.2,0.2,1);
    draw.putBox(3,4,17,18,9,10);
    draw.putBox(3,4,13,14,9,10);
    draw.putBox(12,13,15,16,9,10);
    draw.putBox(12,13,12,13,9,10);

    //efeito do vento
    draw.setColor(0.9,0.9,0.9,0.3);
    draw.putBox(20,33,6,7,9,10);
    draw.putBox(18,31,4,5,9,10);
    draw.putBox(20,33,2,3,9,10);

    // criação do arquivo
    draw.writeOFF((char*)"desenho.off");

    return 0;
}
