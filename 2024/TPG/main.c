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
int kilosDia = 0, bolsasDia = 0, clienteFrec = 0, porcentajeClienteFrec, clientesDia = 0, ventaBolsaDia = 0, clientesTot = 0; // Contadores Diarios temporales
int cliFrecDia0, cliFrecDia1, cliFrecDia2, cliFrecDia3, cliFrecDia4, cliFrecDia5, cliFrecDia6, bolDia0, bolDia1, bolDia2, bolDia3, bolDia4, bolDia5, bolDia6; // Contadores Dias y Bolsas Semanales
float consultaMedicaDia, peluqueriaCaninaDia, ventaAlimentoDia, extrasDia, descClienteFrec, totalReciboDia; // Contadores diarios temporales (Servicios)
float consultaMedicaDiaTot ,peluqueriaCaninaDiaTot, ventaAlimentoDiaTot, extrasDiaTot; // Contadores Totales de servicios
float consultaMedicaSem, peluqueriaCaninaSem, ventaAlimentoSem, extrasSem; // Contadores Semanales
float contRubroInfoDia, rubroSemanaA, rubroSemanaB; // Contadores para informe diario y semanal

// Variables
int i, j = 0, res, aux, aux2; // Variables auxiliares enteras 
float aux3 = 0, aux4 = 0, aux5 = 0, aux6 = 0;


// Funciones

void informeDia(int bolsasDia, int clientesFrecuentes) {
    // Comparacion de servicios para saber cual es el que mas recaudo en el dia
    if (consultaMedicaDiaTot < peluqueriaCaninaDiaTot) {
        contRubroInfoDia = consultaMedicaDiaTot;
    }
    else if (consultaMedicaDiaTot < ventaAlimentoDiaTot) {
        contRubroInfoDia = ventaAlimentoDiaTot;
    }
    else if (consultaMedicaDiaTot < extrasDiaTot) {
        contRubroInfoDia = extrasDiaTot;
    } 
    else {
        contRubroInfoDia = consultaMedicaDiaTot;
    }

    // Cuenta de porcentaje para saber que porcentaje representa la peluqueria canina sobre el total
    aux3 = (consultaMedicaDiaTot + peluqueriaCaninaDiaTot + ventaAlimentoDiaTot + extrasDiaTot);
    aux4 = (aux3 * peluqueriaCaninaDiaTot) / 100;

    // Cuenta de porcentaje para saber que porcentaje representa los clientes frecuentes sobre los clientes totales
    aux5 = (clienteFrec / clientesDia) * 100;

    printf ("===== INFORME DIARIO =====\n");
    printf ("Rubro que mas ingreso genero: %.2f\n", contRubroInfoDia);
    printf ("Porcentaje de peluqueria canina sobre el total: %.2f\n", aux4);
    printf ("Clientes frecuentes en el dia: %d\n", clientesFrecuentes);
    printf ("Cantidad de bolsas vendidas en el dia: %d\n", bolsasDia);
    aux3 = 0, aux4 = 0, aux5 = 0;
    system ("pause");

}

void informeSemanal(float rubroMax1, float rubroMax2) {
    // Operacion para comparar los dos rubros que hayan tenido el mayor ingreso
    if (rubroMax1 < consultaMedicaSem) {
        rubroMax2 = rubroMax1;
        rubroMax1 = consultaMedicaSem;
    }
    else if (rubroMax1 < peluqueriaCaninaSem) {
        rubroMax2 = rubroMax1;
        rubroMax1 = peluqueriaCaninaSem;
    }
    else if (rubroMax1 < ventaAlimentoSem) {
        rubroMax2 = rubroMax1;
        rubroMax1 = peluqueriaCaninaSem;
    }
    else if (rubroMax1 < extrasSem) {
        rubroMax2 = rubroMax1;
        rubroMax1 = peluqueriaCaninaSem;
    }

    // Operacion para saber el porcentaje de la peluqueria canina sobre el total semanal
    aux3 = (consultaMedicaSem + peluqueriaCaninaSem + ventaAlimentoSem + extrasSem);
    aux4 += (aux3 / peluqueriaCaninaSem) * 100;

    // Operacion para saber el porcentaje de cliente frecuentes sobre los clientes totales
    aux5 = (cliFrecDia0 + cliFrecDia1 + cliFrecDia2 + cliFrecDia3 + cliFrecDia4 + cliFrecDia5 + cliFrecDia6);
    aux6 += (aux5 / clientesTot) * 100;
    
    // Muestra de la informacion pedida en el informe
    printf ("===== INFORME SEMANAL =====\n");
    printf ("Primer Rubro con mayor ingreso: %.2f\n",rubroMax1);
    printf ("Segundo Rubro con mayor ingreso: %.2f\n", rubroMax2);
    printf ("Porcentaje de peluqueria canina sobre el total semanal: %.2f\n", aux4);
    printf ("Clientes Frecuentes dia 0: %d\n", cliFrecDia0);
    printf ("Clientes Frecuentes dia 1: %d\n", cliFrecDia1);
    printf ("Clientes Frecuentes dia 2: %d\n", cliFrecDia2);
    printf ("Clientes Frecuentes dia 3: %d\n", cliFrecDia3);
    printf ("Clientes Frecuentes dia 4: %d\n", cliFrecDia4);
    printf ("Clientes Frecuentes dia 5: %d\n", cliFrecDia5);
    printf ("Clientes Frecuentes dia 6: %d\n", cliFrecDia6);
    printf ("Porcentaje de clientes frecuentes sobre el total de clientes: %.2f\n", aux6);
    printf ("Bolsas completas vendidas el dia 0: %d\n", bolDia0);
    printf ("Bolsas completas vendidas el dia 1: %d\n", bolDia1);
    printf ("Bolsas completas vendidas el dia 2: %d\n", bolDia2);
    printf ("Bolsas completas vendidas el dia 3: %d\n", bolDia3);
    printf ("Bolsas completas vendidas el dia 4: %d\n", bolDia4);
    printf ("Bolsas completas vendidas el dia 5: %d\n", bolDia5);
    printf ("Bolsas completas vendidas el dia 6: %d\n", bolDia6);
    system ("pause");
}

void clienteFrecuente() {   // Procedimiento que pregunta y almacena el dato de cliente frecuente
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
    system ("cls");
    if (bolsasDia == 0) {
        bolsasDia += 30;
        kilosDia = bolsasDia * 20;
        aux2 = bolsasDia;
    }

    else if (bolsasDia < 30) {
        aux = 30 - bolsasDia;
        bolsasDia += aux;
        kilosDia += 600 - kilosDia;
    }

    printf ("Cantidad de bolsas actual: %d (Kg: %d)\n", aux2, kilosDia);
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
        consultaMedicaSem += consultaMedicaDia;
        if (porcentajeClienteFrec > 0) {
            descClienteFrec = (consultaMedicaDia * porcentajeClienteFrec) / 100;
            printf ("(--) Descuento por Cliente Frecuente: %.2f\n", descClienteFrec);
            printf ("(--) Consulta Medica con Descuento: %.2f\n", consultaMedicaDia - descClienteFrec); // Por cada rubro, existe una operatoria
            consultaMedicaSem += (consultaMedicaDia - descClienteFrec);                                // que utiliza decisiones condicionales que
            totalReciboDia += (consultaMedicaDia - descClienteFrec);                                  // verifican y muestran de forma dinamica el 
            consultaMedicaDiaTot += totalReciboDia;                                                  // servicio consumido y si es Cliente Frecuente o no
            clienteFrec++;                                                                          // Al finalizar el procedimiento, se acumula en 1 la variable de clientes frecuentes
        }
        else {
            totalReciboDia += consultaMedicaDia;
            consultaMedicaDiaTot += totalReciboDia;
        }
        consultaMedicaDia = 0;
        clientesDia++;
    }

    if (peluqueriaCaninaDia > 0) {
        printf ("(+) Peluqueria Canina: %.2f\n",peluqueriaCaninaDia);
        peluqueriaCaninaSem += peluqueriaCaninaDia;
        if (porcentajeClienteFrec > 0) {
            descClienteFrec = (peluqueriaCaninaDia * porcentajeClienteFrec) / 100;
            printf ("(--) Descuento por Cliente Frecuente: %.2f\n", descClienteFrec);
            printf ("(--) Peluqueria Canina con Descuento: %.2f\n", peluqueriaCaninaDia - descClienteFrec);
            peluqueriaCaninaSem += (peluqueriaCaninaDia - descClienteFrec);
            totalReciboDia += (peluqueriaCaninaDia - descClienteFrec);
            peluqueriaCaninaDiaTot += totalReciboDia;
            clienteFrec++;
        }
        else {
            totalReciboDia += peluqueriaCaninaDia;
            consultaMedicaDiaTot += totalReciboDia;
        }
        peluqueriaCaninaDia = 0;
        clientesDia++;
    }

    if (ventaAlimentoDia > 0) {
        printf ("(+) Venta de Alimento (x Kilo): %.2f\n",ventaAlimentoDia);
        ventaAlimentoSem += ventaAlimentoDia;
        if (porcentajeClienteFrec > 0) {
            descClienteFrec = (ventaAlimentoDia * porcentajeClienteFrec) / 100;
            printf ("(--) Descuento por Cliente Frecuente: %.2f\n", descClienteFrec);
            printf ("(--) Venta Alimento con Descuento: %.2f\n", ventaAlimentoDia - descClienteFrec);
            ventaAlimentoSem += (ventaAlimentoDia - descClienteFrec);
            totalReciboDia += (ventaAlimentoDia - descClienteFrec);
            ventaAlimentoDia += totalReciboDia;
            clienteFrec++;
        }
        else {
            totalReciboDia += ventaAlimentoDia;
            ventaAlimentoDiaTot += totalReciboDia;
        }
        ventaAlimentoDia = 0;
        clientesDia++;
    }

    if (extrasDia > 0) {
        printf ("(+) Extras: %.2f\n",extrasDia);
        extrasSem += extrasDia;
        if (porcentajeClienteFrec > 0) {
            descClienteFrec = (extrasDia * porcentajeClienteFrec) / 100;
            printf ("(--) Descuento por Cliente Frecuente: %.2f\n", descClienteFrec);
            printf ("(--) Extras con Descuento: %.2f\n", extrasDia - descClienteFrec);
            extrasSem += (extrasDia - descClienteFrec);
            totalReciboDia += (extrasDia - descClienteFrec);
            extrasDiaTot += totalReciboDia;
            clienteFrec++;
        }
        else {
            totalReciboDia += extrasDia;
            extrasDiaTot += totalReciboDia;
        }
        extrasDia = 0;
        clientesDia++;
    }

    printf ("==================\n");
    printf ("TOTAL: $%.2f\n", totalReciboDia);
    system ("pause");
    totalReciboDia = 0;
    menu(i);
}

void contadorClientesBolsasDia(int contadorDia) {   // Procedimiento que asigna los contadores diarios a variables acumuladoras
    switch (contadorDia)    {                       // globales para que sean utilizadas en otro momento (por ejemplo, el Informe Semanal)
    case 0:                                         // Dicho procedimiento toma como parametro el contador de repeticion de la estructura 'for'
        cliFrecDia0 = clienteFrec;                  // del procedimiento principal, para utilizarlo como decision del 'switch'
        clientesTot += cliFrecDia0;
        bolDia0 = ventaBolsaDia;
        break;
    
    case 1:
        cliFrecDia1 = clienteFrec;
        clientesTot += cliFrecDia1;
        bolDia1 = ventaBolsaDia;
        break;
    
    case 2:
        cliFrecDia2 = clienteFrec;
        clientesTot += cliFrecDia2;
        bolDia2 = ventaBolsaDia;
        break;
    
    case 3:
        cliFrecDia3 = clienteFrec;
        clientesTot += cliFrecDia3;
        bolDia3 = ventaBolsaDia;
        break;
    
    case 4:
        cliFrecDia4 = clienteFrec;
        clientesTot += cliFrecDia4;
        bolDia4 = ventaBolsaDia;
        break;
    
    case 5:
        cliFrecDia5 = clienteFrec;
        clientesTot += cliFrecDia5;
        bolDia5 = ventaBolsaDia;
        break;
    
    case 6:
        cliFrecDia6 = clienteFrec;
        clientesTot += cliFrecDia6;
        bolDia6 = ventaBolsaDia;
        break;

    default:
        printf ("If you see this, something very bad happened");
        break;
    }
}

void menu(int contador) {   // Procedimiento principal; ejecuta el programa entero
    system ("cls");
    printf ("===== VETERINARIA =====\n");
    printf ("Dia: %d\n", contador);
    printf ("Clientes: %d\n", clientesDia);
    printf ("Elija una opcion: \n");
    printf ("1) Consulta Medica\n2) Peluqueria Canina\n3) Venta de Alimento\n4) Cerrar Dia\n5) Salir\nRes: ");  // Menu principal del programa
    scanf ("%d", &res);                                                                                         // La instruccion '\n' separa el texto por renglon
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
        system ("cls");
        printf ("Kg Actuales: %d KG\n", kilosDia);
        printf ("Bolsas Actuales: %d\n", bolsasDia);
        printf ("Ingrese la cantidad de Kg de alimento a vender: ");
        scanf ("%d", &res);
        ventaAlimentoDia = (res * 2500);
        kilosDia = kilosDia - res;
        aux = (res / 20);
        bolsasDia = bolsasDia - round(aux);
        aux2 = bolsasDia;
        ventaBolsaDia++;
        clienteFrecuente();
        recibo();
        break;

    case 4:
        system ("cls");
        contadorClientesBolsasDia(contador);
        informeDia(ventaBolsaDia, clienteFrec);     // Llamado al procedimiento 'informeDia' pasando como parametro las ventas de bolsas en el dia
        clientesDia = 0;                            // y los clientes frecuentes
        clienteFrec = 0;
        break;
    
    case 5: 
        system ("cls");
        printf ("Nos vemos!");
        exit(0);
        break;

    default:
        printf ("YOU ARE MISTAKEN BOY");
        break;
    }
}

int main () {
    system ("cls"); 
    reponerStock();     // Llamado al procedimiento 'reponerStock()'
      for (i = 0; i < 7; i++) {         // Estructura de repeticion incondicional que simula el pasaje de dias
        menu(i);                       // Llamado al procedimiento 'menu', pasando como parametro el contador de la repeticion
    }
    informeSemanal(rubroSemanaA, rubroSemanaB);
    main();
    return 'x';
}