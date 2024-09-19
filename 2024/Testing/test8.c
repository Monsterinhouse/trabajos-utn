#include <stdio.h>
#include <stdlib.h>

/* Funciones a Hacer
- Cargar productos ordenados por codigo
- Eliminar producto segun codigo
- Modificar producto segun codigo
- Mostrar lista con los cambios aplicados de forma recursiva
- Mostrar la cantidad numerica de productos cargados
*/

int elem = 0;

struct datos {
    char nombre [50];
    char proveedor[50];
    int codigo [8];
    float precio;
}; Productos;

struct nodo {
    struct datos data;
    struct nodo *psig;
}; Nodo;

struct nodo *Lista;

void crearLista(struct nodo **L) {
    *L = NULL;
}

void cargaOrd(struct nodo **L, struct datos D) {
    struct nodo *nuevo = malloc(sizeof(Nodo));
    struct nodo *ant;
    struct nodo *act;
    nuevo->data = D;
    nuevo->psig = NULL;

    if (*L == NULL) {
        *L = nuevo;
    }
    else {
        ant = NULL;
        act = *L;
        while (act != NULL && act->data.codigo < nuevo->data.codigo) {
            ant = act;
            act = act->psig;
        }

        if (ant == NULL) {
            nuevo->psig = act;
            *L = nuevo;
        }
        else {
            nuevo->psig = act;
            ant->psig = nuevo;
        }
    }

    printf ("Elemento cargado satisfactoriamente!");
    system ("pause");
}

void eliminarProd(struct Lista **L, int codigo) {
    struct nodo *ant;
    struct nodo *act;

    if (*L == NULL) {
        printf ("La lista se encuentra vacia!");
        system ("pause");
    }

    if (*L != NULL) {
        ant = NULL;
        act = *L;

        while (act != NULL && act->data.codigo != codigo); {
            ant = act;
            act = act->psig;
        }

        if (ant == NULL) {
            *L = act->psig;
            free (act);
        }
        else {
            ant->psig = act->psig;
            free (act);
        }
    }
}

void editarProd (struct nodo **L, int codigo) {
    struct nodo *ant;
    struct nodo *act;
    struct nodo *mod;
    int res = 0;

    if (*L == NULL) {
        printf ("La lista se encuentra vacia!");
        system ("pause");
    }
    else {
        ant = NULL;
        act = *L;
    }

    while (act != NULL && act->data.codigo != codigo) {
        ant = act;
        act = act->psig;
    }

    printf ("===== CAMBIO DE DATOS ======\n");
    printf ("Ingrese el nuevo nombre de producto: ");
    fgets (mod->data.nombre, 50, stdin);
    printf ("Ingrese el nuevo proveedr de producto: ");
    fgets (mod->data.proveedor, 50, stdin);
    printf ("Ingrese el nuevo codigo de producto: ");
    scanf ("%d", &mod->data.codigo);
    printf ("Ingrese el nuevo precio del producto: $");
    scanf ("%f", mod->data.precio);
    
    if (ant == NULL) {
        *L = act;
        act = mod;
    }
    else {
        act = mod;
    }

    printf ("Desea imprimir la lista modificada?\n1. Si\n2. No\nRes:");
    scanf ("%d", &res);
    if (res == 1) {
        printLista(*L);
    } else {menu(res);}
}

void printLista(struct nodo **L) {
    system ("cls");
    struct nodo *cor = *L;
    while (cor != NULL) {
        printf ("Nombre de Producto: %c", cor->data.nombre);
        printf ("Proveedor: %c", cor->data.proveedor);
        printf ("Codigo: %d", cor->data.codigo);
        printf ("Precio Unitario: %.2f", cor->data.precio);
        system ("pause");
    }
}

void menu (int respuesta) {
    system ("cls");
    printf ("===== MENU =====\n");
    printf ("Elementos Cargados: %d\n", elem);
    printf ("1. Cargar Producto\n");
    printf ("2. Eliminar Producto");
    printf ("3. Modificar producto");
    printf ("4. Modificar producto");
    printf ("5. Salir");
    printf ("Res: ");
    scanf ("%d", &respuesta);
    return respuesta;
}

int main () {
    system ("cls");
    int res = 0;

    while (res != -1 ) {
        menu(res);
        scanf ("%d", &res);
        switch (res) {
        case 1:
            system ("cls");
            printf ("Ingrese el nombre del producto: ");
            fgets (Lista->data.nombre, 50, stdin);
            printf ("Ingrese el proveedor: ");
            fgets (Lista->data.proveedor, 50, stdin);
            printf ("Ingrese el codigo del producto: ");
            scanf ("%d", &Lista->data.codigo);
            printf ("Ingrese el precio del producto: $");
            scanf ("%f", Lista->data.precio);
            cargaOrd(Lista, Productos);
            break;
        
        case 2:
            system ("cls");
            printf ("Ingrese el codigo de producto a eliminar (8 digitos): ");
            scanf ("%d", res);
            eliminarProd(Lista, &res);
            break;
        
        case 3:
            system ("cls");
            printf ("Ingrese el codigo de producto a editar (8 digitos): ");
            scanf ("%d", res);
            editarProd(Lista, &res);
            system ("cls");
            break;
        
        case 4:
            system ("cls");
            printLista(Lista);
            break;

        case 5:
            system ("cls");
            free (Lista);
            printf ("Hasta Luego!");
            exit(0);
            break;

        default:
            printf ("<Se rie>");
            break;
        }
    }
    

}