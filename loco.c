/* 
 * Programación 3
 * Instituto de Computación
 * Facultad de Ingeniería
 * Universidad de la República
 *
 * Instrucciones:
 *
 * 1) Lea el código y trate de dar una respuesta 
 * al resultado final, al menos presuma un resultado.
 * 2) Compile el programa de la siguiente forma:
 * 	gcc -o loco loco.c
 * 3) Ejecute el programa y comparelo con su resultado.
 * 4) Compile el programa de la siguiente nueva forma:
 * 	gcc -O2 -o loco loco.c
 * 5) Ejecute el programa y comparelo con su resultado.
 * 6) ¿Qué conclusiones se pueden sacar al respecto?
 * 7) ¿Qué loco, no?
 */

#include <stdio.h>

int a = 0;
int c = 0;

int func() {
	int *ptr = &c;
	ptr--;
	(*ptr) = 11;
	return -2;
}

int main() {
	int b = func();
	printf("a=%d\n",a);
	return b;
}
