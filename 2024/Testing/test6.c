#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int data;
    struct nodo *psig;
} 
Nodo;

struct nodo *head = NULL;

void agregarNodoPrincipio(int data) {

    struct nodo *nuevo = NULL;

    if (head == NULL) {
        struct nodo *nuevo = malloc(sizeof(Nodo));
        nuevo->data = data;
        head = nuevo;
        nuevo->psig = NULL;
    }
    else {
        struct nodo *nuevo = malloc(sizeof(Nodo));
        nuevo->data = data;
        nuevo->psig = head;
        head = nuevo;
    }
    return nuevo;
}

void agregarNodoFinal(struct Nodo **L,int data) {
    
    struct nodo *nuevo = NULL;
    struct nodo *cor = *L;

    while (cor != NULL) {
        cor = cor->psig;
    }
    if (cor == NULL) {
        struct nodo *nuevo = malloc(sizeof(Nodo));
        nuevo->data = data;
        cor = nuevo;
        nuevo->psig = NULL;
    }
}

void imprimirLista() {
    system ("cls");
    struct nodo *cor = head;
    while (cor != NULL) {
        printf ("%d -> ", cor->data);
        cor = cor->psig;
    }
    printf("\n");
    system ("pause");
}

int main () {
    int res = 0;
    while (res != 3) {
        system ("cls");
        printf ("===== MENU =====\n");
        printf ("1. Agregar Nodo al principio\n");
        printf ("2. Agregar nodo al final");
        printf ("3. Imprimir Lista\n");
        printf ("4. Salir y Liberar Lista\n");
        printf ("Res: ");
        scanf ("%d", &res);

        switch (res) {
        case 1:
            system ("cls");
            printf ("Ingrese el valor a ingresar en el nodo: ");
            scanf ("%d", &res);
            agregarNodoPrincipio(res);
            break;
        
        case 2:
            system ("cls");
            printf ("Ingrese el valor a ingresar en el nodo: ");
            scanf ("%d", &res);
            agregarNodoFinal(head,res);
        
        case 3:
            printf ("Lista:\n");
            imprimirLista();
            break;
        
        case 4:
            free(head);
            system ("cls");
            printf ("Nos vemos!");
            exit(0);
        
        default:
            break;
        }
    }
    
}