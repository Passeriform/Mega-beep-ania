#include <windows.h>
#include <stdlib.h>
int main(int argc, char **argv){
/*

C = Beep(262, 1000);
D = Beep(294, 1000);
E = Beep(330, 1000);
F = Beep(349, 1000);
G = Beep(392, 1000);
A = Beep(440, 1000);
B = Beep(494, 1000);

*/

int bpm = 8000;

if(argc == 2)
{
	int x = strtol(argv[1], NULL, 10);
	bpm = x;
}

Beep(330, bpm/8);
Beep(330, bpm/8);
Beep(659, bpm/4);
Beep(494, bpm/2);
Beep(466, bpm/4);
Beep(440, bpm/4);
Beep(392, bpm/4);
Beep(330, bpm/8);
Beep(392, bpm/8);
Beep(440, bpm/8);

Beep(294, bpm/8);
Beep(294, bpm/8);
Beep(659, bpm/4);
Beep(494, bpm/2);
Beep(466, bpm/4);
Beep(440, bpm/4);
Beep(392, bpm/4);
Beep(330, bpm/8);
Beep(392, bpm/8);
Beep(440, bpm/8);

Beep(262, bpm/8);
Beep(262, bpm/8);
Beep(659, bpm/4);
Beep(494, bpm/2);
Beep(466, bpm/4);
Beep(440, bpm/4);
Beep(392, bpm/4);
Beep(330, bpm/8);
Beep(392, bpm/8);
Beep(440, bpm/8);

Beep(294, bpm/8);
Beep(294, bpm/8);
Beep(659, bpm/4);
Beep(494, bpm/2);
Beep(466, bpm/4);
Beep(440, bpm/4);
Beep(392, bpm/4);
Beep(330, bpm/8);
Beep(392, bpm/8);
Beep(440, bpm/8);

}