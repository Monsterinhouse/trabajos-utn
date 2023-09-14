/*
Una librería ubicada en el centro de la ciudad de La Plata tiene información de los libros que en ella se venden. 
De los libros se conoce: su nombre, código, autor, editorial, precio y stock. Almacena dicha información en una lista. 

Se desea: 

A) Obtener un listado en donde figure código y editorial de aquellos libros con stock nulo. 
B) Simular la entrada de nuevos libros a la librería o la reposición de los ya existentes
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct libro {
  char nombre[30];
  int codigo[8];
  // char autor[30];
  // char editorial[30];
  // float precio;
  int stock;
};

struct nodo {
   struct libro valor;
   struct nodo* sig;
};

struct lista {
  struct nodo* inicio;
  struct nodo* fin;
};

void insertarLibro(struct lista *lista, struct libro libro) {
  struct nodo *nuevoNodo = malloc(sizeof(struct nodo));
  nuevoNodo->valor = libro;
  nuevoNodo->sig = NULL;

  if(lista->inicio == NULL) {
    lista->inicio = nuevoNodo;
    lista->fin = nuevoNodo;
  } else {
    lista->fin->sig = nuevoNodo;
    lista->fin = nuevoNodo;
    }
}

int main() {
  printf ("===== Menu Libreria =====\n");
  struct lista carlos;

  int opcion;
do {
   printf("1) Insertar un libro\n");
   printf("2) Reponer un libro\n");
   printf("3) Imprimir librosv");
   printf("0) Salir\n");
   scanf("%d", &opcion);

   switch(opcion) {
    case 1: {
        struct libro tempLibro;
        printf("Ingrese el nombre del libro: ");
        scanf("%s", &tempLibro.nombre);
        printf("Ingrese el codigo del libro: ");
        scanf("%d", &tempLibro.codigo);
        printf("Ingrese el stock del libro: ");
        scanf("%d", &tempLibro.stock);
        insertarLibro(&carlos, tempLibro); // <---- Sussy baka
        break;
    }
    case 2: {
      struct nodo *nodoActual = carlos.inicio; 
      int codigo, stock;
      printf("Ingrese el codigo y el nuevo stock (Formato: Codigo-Stock): ");
      scanf("%d-%d", &codigo, &stock);
      while(nodoActual->valor.codigo != codigo) {
         nodoActual = nodoActual->sig;
      }
      nodoActual->valor.stock = stock;
      break;
    }
    case 3: {
      struct nodo *nodoActual = carlos.inicio; 
      int temp = 0;
      while(nodoActual != NULL) {
         printf("%d ... %s ... %d  \n", temp, nodoActual->valor.nombre, nodoActual->valor.stock);
         nodoActual = nodoActual->sig;
         temp++;
      }
    break;
    }
   }
} while (opcion != 0);
}