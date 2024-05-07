#include <stdio.h>
#include <stdlib.h>

char nya[30];
float nota = 0;
float bin = 0;
char res[20];
float prom = 0;
int i;

void rend () {
    printf ("Alumno N%c %d: %sNota: %.2f\nResultado: %s\n\n", 167, i, nya, nota, res);
    printf ("Presione cualquier tecla para continuar...");
    getch ();
}

int main () {
    system ("color 0a");
    for (i=0;i<=20;i++) {
        system ("cls");
        fflush (stdin);
        printf ("Ingrese su nombre: ");
        fgets (nya, sizeof(nya), stdin);

        system ("cls");
        printf ("Ingrese la nota final a promediar: ");
        scanf ("%f", &nota);
        bin += nota;
    
        if (nota>=6) {
        strcpy(res, "Aprobado!");
        } else {strcpy(res, "Desaprobado");}

        rend();
    }
    system ("cls");
    prom = bin / 20;
    printf ("El promedio general de los 20 alumnos es: %c%.2f",37, prom);
}