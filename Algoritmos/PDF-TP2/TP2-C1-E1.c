#include <stdio.h>;
#include <stdlib.h>;

int notas[40];
int prog = 0;
int aux;

int main () {
    for (aux=0; aux<40; aux++) {
    prog++;
    system("cls");
    printf ("Ingrese las notas de los 40 alumnos (%d / 40)", prog);
    printf ("Nota: ");
    scanf ("%d", &notas[aux]);
    }

    printf ("Las notas son: ");
    for(aux = 0; aux < 40; aux++) {
     printf("%d, ", notas[aux]);
  }
}
