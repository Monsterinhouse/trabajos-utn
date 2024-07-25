#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
ENUNCIADO: 
Una veterinaria ofrece servicios básicos, y desea llevar el control del stock de alimento
balanceado y además registrar los ingresos, discriminando por rubro.
Todos los lunes recibe pedido del proveedor de alimento. La clínica Abre todos los días de 8 am
a 17 pm. A los clientes frecuentes se les realiza un 15% de descuento.

Sus servicios básicos son:
 - Consulta médica: $15.000
 - Peluquería canina: $6.000
 - Venta de alimento: $2500 por kilo
 - Extras: El monto se pregunta al momento de generar el ticket

La cantidad de alimento que se compre los lunes para reponer stock dependerá del stock actual
en ese momento, ya que se desea mantener semanalmente 30 bolsas por cuestiones de espacio
en bodega. Cada bolsa trae 20 kilos.

Se pide informar por dia:
 - Qué rubro generó mayor ingreso de dinero.
 - Qué porcentaje representa la peluquería canina sobre el total de servicios
 - Cuántos clientes frecuentes se reciben cada día
 - Qué porcentaje de clientes frecuentes representan sobre el total de clientes diarios.
 - Informar cuántas bolsas de alimento completas se venden por día.

Se pide informar por semana:
 - Los dos rubros que generaron mayor ingreso de dinero.
 - Qué porcentaje representa la peluquería canina sobre el total de servicios.
 - Cuántos clientes frecuentes se reciben cada día
 - Qué porcentaje de clientes frecuentes representan sobre el total de clientes semanales.
 - Informar cuántas bolsas de alimento completas se venden por día
*/

// Contadores

// Contadores Diarios temporales 
int kilosDia = 0, bolsasDia = 0, clienteFrecDia = 0, porcentajeClienteFrec, clientesDia = 0, clientesTot = 0, ventaBolsaDia = 0, clientesFrecTot = 0; 
// Contadores diarios temporales (Servicios)
float consultaMedicaDia, peluqueriaCaninaDia, ventaAlimentoDia, extrasDia, descClienteFrec, totalReciboDia; 
// Contadores Totales de servicios
float consultaMedicaDiaTot ,peluqueriaCaninaDiaTot, ventaAlimentoDiaTot, extrasDiaTot; 
// Contadores Semanales
float consultaMedicaSem, peluqueriaCaninaSem, ventaAlimentoSem, extrasSem; 
// Contadores para informe diario y semanal
float rubroSemanaA, rubroSemanaB; 

// Variables auxiliares
int i, res; 

// Funciones
void informeDia(int bolsasDia, int clientesFrecuentes) {
    float contRubroInfoDia, aux1, aux2, aux3;
    int rbDia;

    // Comparacion de servicios para saber cual es el que mas recaudo en el dia
    if (consultaMedicaDiaTot < peluqueriaCaninaDiaTot) {
        contRubroInfoDia = peluqueriaCaninaDia;
        rbDia = 2;
    }
    else if (peluqueriaCaninaDia < ventaAlimentoDiaTot) {
        contRubroInfoDia = ventaAlimentoDiaTot;
        rbDia = 3;
    }
    else if (ventaAlimentoDia < extrasDiaTot) {
        contRubroInfoDia = extrasDiaTot;
        rbDia = 4;
    } 
    else {
        contRubroInfoDia = consultaMedicaDiaTot;
        rbDia = 1;
    }

    // Cuenta de porcentaje para saber que porcentaje representa la peluqueria canina sobre el total
    aux1 = (consultaMedicaDiaTot + peluqueriaCaninaDiaTot + ventaAlimentoDiaTot + extrasDiaTot);
    aux2 = (aux1 / peluqueriaCaninaDiaTot) * 100;

    // Cuenta de porcentaje para saber que porcentaje representa los clientes frecuentes sobre los clientes totales
    aux3 = (clienteFrecDia / clientesDia) * 100;

    printf ("===== INFORME DIARIO =====\n");
    printf ("Rubros: (1) Consulta Medica - (2) Peluqueria Canina - (3) Venta de Alimento - (4) Extras\n");
    printf ("Rubro que mas ingreso genero: Rubro (%d) - %.2f\n", rbDia, contRubroInfoDia);
    printf ("Porcentaje de peluqueria canina sobre el total: %.2f\n", aux2);
    printf ("Clientes frecuentes en el dia: %d\n", clientesFrecuentes);
    printf ("Porcentaje de clientes frecuentes sobre clientes totales: %.2f\n", aux3);
    printf ("Cantidad de bolsas vendidas en el dia: %d\n", bolsasDia);
    contRubroInfoDia = 0;
    system ("pause");
}

    void informeSemanal(float *rm1, float *rm2) {
     float aux1, aux2, aux3;
     // Operacion para comparar los dos rubros que hayan tenido el mayor ingreso
     if (*rm1 < consultaMedicaSem) {
         *rm2 = *rm1;
         *rm1 = consultaMedicaSem;
     }
     else if (*rm1 < peluqueriaCaninaSem) {
          *rm2 = *rm1;
         *rm1 = peluqueriaCaninaSem;
     }
     else if (*rm1 < ventaAlimentoSem) {
         *rm2 = *rm1;
         *rm1 = ventaAlimentoSem;
     }
    else if (*rm1 < extrasSem) {
        *rm2 = *rm1;
        *rm1 = extrasSem;
    }

    // Operacion para saber el porcentaje de la peluqueria canina sobre el total semanal
    aux1 = (consultaMedicaSem + peluqueriaCaninaSem + ventaAlimentoSem + extrasSem);
    aux2 = (aux1 / peluqueriaCaninaSem) * 100;

    // Operacion para saber el porcentaje de cliente frecuentes sobre los clientes totales
    aux3 = (clientesTot / clientesFrecTot) * 100;
    
    // Muestra de la informacion pedida en el informe
    printf ("===== INFORME SEMANAL =====\n");
    printf ("Primer Rubro con mayor ingreso: %.2f\n", *rm1);
    printf ("Segundo Rubro con mayor ingreso: %.2f\n", *rm2);
    printf ("Porcentaje de peluqueria canina sobre el total semanal: %.2f\n", aux2);
    printf ("Porcentaje de clientes frecuentes sobre el total de clientes: %.2f\n", aux3);
    system ("pause");
}

// Procedimiento que pregunta y almacena el dato de cliente frecuente
void clienteFrecuente() { 
    system ("cls");
    printf ("Es un cliente frecuente?\n");
    printf ("1) Si\n2) No\nRes: ");
    scanf ("%d", &res);

    if (res == 1) {
        porcentajeClienteFrec = 15;
    }
    else {
        porcentajeClienteFrec = 0;
    }
}

void reponerStock() {   // Procedimiento que realiza las operaciones para reponer el stock segun sea necesario
    int aux1;
    system ("cls");
    if (bolsasDia == 0) {
        bolsasDia = 30;
        kilosDia = bolsasDia * 20;
        aux1 = bolsasDia;
    }

    else if (bolsasDia < 30) {
        aux1 = 30 - bolsasDia;
        bolsasDia = aux1;
        kilosDia = 600 - kilosDia;
    }

    printf ("Cantidad de bolsas actual: %d (Kg: %d)\n", bolsasDia, kilosDia);
    printf ("Cantidad de bolsas a reponer: %d\n", ventaBolsaDia);
    system ("pause");
}

void recibo() {     // Procedimiento que realiza las operaciones e imprime el recibo por cada venta realizada
    system ("cls");
    printf ("Existe algun insumo extra?\n1) Si\n2) No\n"); // Como esta estipulado, se pregunta en cada venta si hubo algun ingreso extra
    printf ("Res: ");
    scanf ("%d", &res);
    
    if (res == 1) {
        printf ("Ingrese el valor de los extras: $");
        scanf ("%f", &extrasDia);
    }
    system ("cls");
    printf ("===== RECIBO ======\n");

    if (consultaMedicaDia > 0) {
        printf ("(+) Consulta Medica: %.2f\n",consultaMedicaDia);
        if (porcentajeClienteFrec > 0) {
            descClienteFrec = (consultaMedicaDia * porcentajeClienteFrec) / 100;
            printf ("(--) Descuento por Cliente Frecuente: %.2f\n", descClienteFrec);
            printf ("(--) Consulta Medica con Descuento: %.2f\n", consultaMedicaDia - descClienteFrec); // Por cada rubro, existe una operatoria
            consultaMedicaSem += (consultaMedicaDia - descClienteFrec);                                // que utiliza decisiones condicionales que
            totalReciboDia = (consultaMedicaDia - descClienteFrec);                                  // verifican y muestran de forma dinamica el 
            consultaMedicaDiaTot += totalReciboDia;                                                  // servicio consumido y si es Cliente Frecuente o no
            clienteFrecDia++;                                                                          // Al finalizar el procedimiento, se acumula en 1 la variable de clientes frecuentes
        }
        else {
            consultaMedicaSem += consultaMedicaDia;
            totalReciboDia = consultaMedicaDia;
            consultaMedicaDiaTot += totalReciboDia;
        }
        consultaMedicaDia = 0;
        clientesDia++;
    }

    if (peluqueriaCaninaDia > 0) {
        printf ("(+) Peluqueria Canina: %.2f\n",peluqueriaCaninaDia);
        if (porcentajeClienteFrec > 0) {
            descClienteFrec = (peluqueriaCaninaDia * porcentajeClienteFrec) / 100;
            printf ("(--) Descuento por Cliente Frecuente: %.2f\n", descClienteFrec);
            printf ("(--) Peluqueria Canina con Descuento: %.2f\n", peluqueriaCaninaDia - descClienteFrec);
            peluqueriaCaninaSem += (peluqueriaCaninaDia - descClienteFrec);
            totalReciboDia = (peluqueriaCaninaDia - descClienteFrec);
            peluqueriaCaninaDiaTot += totalReciboDia;
            clienteFrecDia++;
        }
        else {
            peluqueriaCaninaSem += peluqueriaCaninaDia;
            totalReciboDia = peluqueriaCaninaDia;
            peluqueriaCaninaDiaTot += totalReciboDia;
        }
        peluqueriaCaninaDia = 0;
        clientesDia++;
    }

    if (ventaAlimentoDia > 0) {
        printf ("(+) Venta de Alimento (x Kilo): %.2f\n",ventaAlimentoDia);
        if (porcentajeClienteFrec > 0) {
            descClienteFrec = (ventaAlimentoDia * porcentajeClienteFrec) / 100;
            printf ("(--) Descuento por Cliente Frecuente: %.2f\n", descClienteFrec);
            printf ("(--) Venta Alimento con Descuento: %.2f\n", ventaAlimentoDia - descClienteFrec);
            ventaAlimentoSem += (ventaAlimentoDia - descClienteFrec);
            totalReciboDia = (ventaAlimentoDia - descClienteFrec);
            ventaAlimentoDia += totalReciboDia;
            clienteFrecDia++;
        }
        else {
            ventaAlimentoSem += ventaAlimentoDia;
            totalReciboDia = ventaAlimentoDia;
            ventaAlimentoDiaTot += totalReciboDia;
        }
        ventaAlimentoDia = 0;
        clientesDia++;
    }

    if (extrasDia > 0) {
        printf ("(+) Extras: %.2f\n",extrasDia);
        if (porcentajeClienteFrec > 0) {
            descClienteFrec = (extrasDia * porcentajeClienteFrec) / 100;
            printf ("(--) Descuento por Cliente Frecuente: %.2f\n", descClienteFrec);
            printf ("(--) Extras con Descuento: %.2f\n", extrasDia - descClienteFrec);
            extrasSem += (extrasDia - descClienteFrec);
            totalReciboDia = (extrasDia - descClienteFrec);
            extrasDiaTot += totalReciboDia;
            clienteFrecDia++;
        }
        else {
            extrasSem += extrasDia;
            totalReciboDia = extrasDia;
            extrasDiaTot += totalReciboDia;
        }
        extrasDia = 0;
        clientesDia++;
    }

    printf ("==================\n");
    printf ("TOTAL: $%.2f\n", totalReciboDia);
    totalReciboDia = 0;
    system ("pause");
    menu(i);
}

/*
Procedimiento que asigna los contadores diarios a variables acumuladoras
globales para que sean utilizadas en otro momento (por ejemplo, el Informe Semanal).
Dicho procedimiento toma como parametro el contador de repeticion de la estructura 'for'
del procedimiento principal, para utilizarlo como decision del 'switch'
*/
void contadorClientesDia(int contadorDia) {   
    switch (contadorDia)    {                       
    case 0:  
        clientesFrecTot += clienteFrecDia;
        clientesTot += clientesDia;
        break;
    
    case 1:
        clientesFrecTot += clienteFrecDia;
        clientesTot += clientesDia;
        break;
    
    case 2:
        clientesFrecTot += clienteFrecDia;
        clientesTot += clientesDia;
        break;
    // etc, etc...
    case 3:
        clientesFrecTot += clienteFrecDia;
        clientesTot += clientesDia;
        break;
    
    case 4:
        clientesFrecTot += clienteFrecDia;
        clientesTot += clientesDia;
        break;
    
    case 5:
        clientesFrecTot += clienteFrecDia;
        clientesTot += clientesDia;
        break;
    
    case 6:
        clientesFrecTot += clienteFrecDia;
        clientesTot += clientesDia;
        break;

    default:
        printf ("DEBUG ERROR");
        break;
    }
}

// Procedimiento principal; ejecuta el programa entero
void menu(int contador) {   
    int aux1;
    // Contadores diarios temporales (Servicios)
    // float consultaMedicaDia =, peluqueriaCaninaDia, ventaAlimentoDia, extrasDia, descClienteFrec, totalReciboDia; 
    system ("cls");
    printf ("===== VETERINARIA =====\n");
    printf ("Dia: %d\n", contador);
    printf ("Clientes: %d\n", clientesDia);
    printf ("Elija una opcion: \n");
    // Menu principal del programa
    // La instruccion '\n' separa el texto por renglon
    printf ("1) Consulta Medica\n2) Peluqueria Canina\n3) Venta de Alimento\n4) Cerrar Dia\n5) Salir\nRes: ");  
    scanf ("%d", &res);                                                                                         
    switch (res) {
    case 1:
        system ("cls");
        printf ("Ingrese la cantidad de consultas medicas: ");
        scanf ("%d", &res);
        consultaMedicaDia += 15000 * res;
        clienteFrecuente();
        recibo();
        break;
    
    case 2:
        system ("cls");
        printf ("Ingrese la cantidad de servicios de Peluqueria Canina: ");
        scanf ("%d", &res);
        peluqueriaCaninaDia += 6000 * res;
        clienteFrecuente();
        recibo();
        break;
    
    case 3:
        if (kilosDia <= 0) {
            system ("cls");
            printf ("No hay suficiente alimento para vender!\n");
            printf ("Perdone las molestias!\n");
            system ("pause");
            menu(i);
        }
        system ("cls");
        printf ("Kg Actuales: %d KG\n", kilosDia);
        printf ("Bolsas Actuales: %d\n", bolsasDia);
        printf ("Ingrese la cantidad de Kg de alimento a vender: ");
        scanf ("%d", &res);
        if (res > kilosDia) {
            printf ("AVISO!\n");
            printf ("Usted esta comprando una cantidad mayor al stock actual.\nSolo se comprara la cantidad maxima de stock disponible.\n");
            system ("pause");
            res = kilosDia;
        }
        ventaAlimentoDia = (res * 2500);
        kilosDia = kilosDia - res;
        aux1 = (res / 20);
        bolsasDia = bolsasDia - round(aux1);
        ventaBolsaDia += round(aux1);
        clienteFrecuente();
        recibo();
        break;

    case 4:
        system ("cls");
        contadorClientesDia(contador);
        informeDia(ventaBolsaDia, clienteFrecDia);     // Llamado al procedimiento 'informeDia' pasando como parametro las ventas de bolsas en el dia
        clientesDia = 0;                            // y los clientes frecuentes
        clienteFrecDia = 0;
        break;
    
    case 5: 
        system ("cls");
        printf ("Nos vemos!");
        exit(0);
        break;

    default:
        system ("cls");
        printf ("Ingrese una opcion Correcta!\n");
        fflush (stdin);
        system ("pause");
        menu(i);
        break;
    }
}

int main () {
    system ("cls"); 
    reponerStock();     // Llamado al procedimiento 'reponerStock()'
      for (i = 0; i < 7; i++) {         // Estructura de repeticion incondicional que simula el pasaje de dias
        menu(i);                       // Llamado al procedimiento 'menu', pasando como parametro el contador de la repeticion
    }
    informeSemanal(&rubroSemanaA, &rubroSemanaB);
   main(); 
    return 'x';
}

/*
 - Remover Comentarios - 200
 - Agregar parametros por referencia
 - Usar mejor los parametros
 - Agregar la validacion de bolsas en menos cero - 200
 - Funciones con mas parametros
*/