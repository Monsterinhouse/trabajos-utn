#include <stdio.h>
#include <stdlib.h>

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

int kilosDia = 0, bolsasDia = 0, clienteFrecDia = 0, clientesDia = 0, clientesTot = 0, ventaBolsaDia = 0, clientesFrecTot = 0; 
float consultaMedicaDia = 0, peluqueriaCaninaDia = 0, ventaAlimentoDia = 0, extrasDia = 0, descClienteFrec = 0, totalReciboDia = 0; 
float consultaMedicaDiaTot = 0, peluqueriaCaninaDiaTot = 0, ventaAlimentoDiaTot = 0, extrasDiaTot = 0; 
float consultaMedicaSem = 0, peluqueriaCaninaSem = 0, ventaAlimentoSem = 0, extrasSem = 0; 
float rubroSemanaA = 0, rubroSemanaB = 0; 
int contadorDia = 0;

void informeDia(int bolsasDia, int clientesFrecDia) {
    float contRubroInfoDia, aux1, aux2, aux3;
    int rbDia;

    if (consultaMedicaDiaTot >= peluqueriaCaninaDiaTot &&
        consultaMedicaDiaTot >= ventaAlimentoDiaTot &&
        consultaMedicaDiaTot >= extrasDiaTot) {
        contRubroInfoDia = consultaMedicaDiaTot;
        rbDia = 1;
    } else if (peluqueriaCaninaDiaTot >= ventaAlimentoDiaTot &&
               peluqueriaCaninaDiaTot >= extrasDiaTot) {
        contRubroInfoDia = peluqueriaCaninaDiaTot;
        rbDia = 2;
    } else if (ventaAlimentoDiaTot >= extrasDiaTot) {
        contRubroInfoDia = ventaAlimentoDiaTot;
        rbDia = 3;
    } else {
        contRubroInfoDia = extrasDiaTot;
        rbDia = 4;
    }

    aux1 = (consultaMedicaDiaTot + peluqueriaCaninaDiaTot + ventaAlimentoDiaTot + extrasDiaTot);
    aux2 = (aux1 > 0) ? (peluqueriaCaninaDiaTot / aux1) * 100 : 0;

    aux3 = (clientesDia > 0) ? ((float)clientesFrecDia / clientesDia) * 100 : 0;

    system ("cls");
    printf("===== INFORME DIARIO =====\n");
    printf("Rubros: (1) Consulta Medica - (2) Peluqueria Canina - (3) Venta de Alimento - (4) Extras\n");
    printf("Rubro que mas ingreso genero: Rubro (%d) - %.2f\n", rbDia, contRubroInfoDia);
    printf("Porcentaje de peluqueria canina sobre el total: %.2f%%\n", aux2);
    printf("Clientes frecuentes en el dia: %d\n", clientesFrecDia);
    printf("Porcentaje de clientes frecuentes sobre clientes totales: %.2f%%\n", aux3);
    printf("Cantidad de bolsas vendidas en el dia: %d\n", bolsasDia);

    consultaMedicaDiaTot = 0;
    peluqueriaCaninaDiaTot = 0;
    ventaAlimentoDiaTot = 0;
    extrasDiaTot = 0;
    clientesFrecDia = 0;
    bolsasDia = 0;

    system ("pause");
}

void informeSemanal(float *rm1, float *rm2) {
    float aux1, aux2, aux3;
    int rbDia, rbDia2;
    
    if (*rm1 < consultaMedicaSem) {
        *rm2 = *rm1;
        *rm1 = consultaMedicaSem;
        rbDia = 1;
        rbDia2 = 4;
    }
    if (*rm1 < peluqueriaCaninaSem) {
        *rm2 = *rm1;
        *rm1 = peluqueriaCaninaSem;
        rbDia2 = rbDia;
        rbDia = 2;
    }
    if (*rm1 < ventaAlimentoSem) {
        *rm2 = *rm1;
        *rm1 = ventaAlimentoSem;
        rbDia2 = rbDia;
        rbDia = 3;
    }
    if (*rm1 < extrasSem) {
        *rm2 = *rm1;
        *rm1 = extrasSem;
        rbDia2 = rbDia;
        rbDia = 4;
    }

    aux1 = (consultaMedicaSem + peluqueriaCaninaSem + ventaAlimentoSem + extrasSem);
    aux2 = (aux1 > 0) ? (peluqueriaCaninaSem / aux1) * 100 : 0;

    aux3 = (clientesTot > 0) ? ((float)clientesFrecTot / clientesTot) * 100 : 0;

    system ("cls");
    printf("===== INFORME SEMANAL =====\n");
    printf("Rubros: (1) Consulta Medica - (2) Peluqueria Canina - (3) Venta de Alimento - (4) Extras\n");
    printf("Primer Rubro con mayor ingreso: Rubro(%d) - %.2f\n", rbDia, *rm1);
    printf("Segundo Rubro con mayor ingreso: Rubro(%d) - %.2f\n", rbDia2, *rm2);
    printf("Porcentaje de peluqueria canina sobre el total semanal: %.2f%%\n", aux2);
    printf ("Clientes comunes totales: %d\n", clientesTot);
    printf ("Clientes frecuentes totales: %d\n", clientesFrecTot);
    printf("Porcentaje de clientes frecuentes sobre el total de clientes: %.2f%%\n", aux3);
    system("pause");
    main();
}

void clienteFrecuente() { 
    int res;
    system("cls");
    printf("Es un cliente frecuente?\n");
    printf("1) Si\n2) No\nRes: ");
    scanf("%d", &res);

    if (res == 1) {
        descClienteFrec = 0.15;
    } else {
        descClienteFrec = 0;
    }
}

void reponerStock() {
    int aux1;
    system("cls");
    if (bolsasDia <= 0) {
        bolsasDia = 30;
        kilosDia = bolsasDia * 20;
        aux1 = bolsasDia;
    } else if (bolsasDia < 30) {
        aux1 = 30 - bolsasDia;
        bolsasDia += aux1;
        kilosDia += (aux1 * 20);
    }

    printf("Cantidad de bolsas actual: %d (Kg: %d)\n", bolsasDia, kilosDia);
    printf("Cantidad de bolsas a reponer: %d\n", ventaBolsaDia);
    system("pause");
}

void recibo() {
    int res;
    float descuentoAplicado;
    system("cls");
    printf("Existe algun insumo extra?\n1) Si\n2) No\n");
    printf("Res: ");
    scanf("%d", &res);

    if (res == 1) {
        printf("Ingrese el valor de los extras: $");
        scanf("%f", &extrasDia);
    }
    system("cls");
    printf("===== RECIBO ======\n");

    if (consultaMedicaDia > 0) {
        printf("(+) Consulta Medica: %.2f\n", consultaMedicaDia);
        if (descClienteFrec > 0) {
            descuentoAplicado = consultaMedicaDia * descClienteFrec;
            printf("(--) Descuento por Cliente Frecuente: %.2f\n", descuentoAplicado);
            float consultaMedicaConDescuento = consultaMedicaDia - descuentoAplicado;
            printf("(--) Consulta Medica con Descuento: %.2f\n", consultaMedicaConDescuento);
            consultaMedicaSem += consultaMedicaConDescuento;
            totalReciboDia = consultaMedicaConDescuento;
            consultaMedicaDiaTot += totalReciboDia;
            clienteFrecDia++;
        } else {
            consultaMedicaSem += consultaMedicaDia;
            totalReciboDia = consultaMedicaDia;
            consultaMedicaDiaTot += totalReciboDia;
        }
        consultaMedicaDia = 0;
        clientesDia++;
    }

    if (peluqueriaCaninaDia > 0) {
        printf("(+) Peluqueria Canina: %.2f\n", peluqueriaCaninaDia);
        if (descClienteFrec > 0) {
            descuentoAplicado = peluqueriaCaninaDia * descClienteFrec;
            printf("(--) Descuento por Cliente Frecuente: %.2f\n", descuentoAplicado);
            float peluqueriaCaninaConDescuento = peluqueriaCaninaDia - descuentoAplicado;
            printf("(--) Peluqueria Canina con Descuento: %.2f\n", peluqueriaCaninaConDescuento);
            peluqueriaCaninaSem += peluqueriaCaninaConDescuento;
            totalReciboDia = peluqueriaCaninaConDescuento;
            peluqueriaCaninaDiaTot += totalReciboDia;
            clienteFrecDia++;
        } else {
            peluqueriaCaninaSem += peluqueriaCaninaDia;
            totalReciboDia = peluqueriaCaninaDia;
            peluqueriaCaninaDiaTot += totalReciboDia;
        }
        peluqueriaCaninaDia = 0;
        clientesDia++;
    }

    if (ventaAlimentoDia > 0) {
        printf("(+) Venta de Alimento (x Kilo): %.2f\n", ventaAlimentoDia);
        if (descClienteFrec > 0) {
            descuentoAplicado = ventaAlimentoDia * descClienteFrec;
            printf("(--) Descuento por Cliente Frecuente: %.2f\n", descuentoAplicado);
            float ventaAlimentoConDescuento = ventaAlimentoDia - descuentoAplicado;
            printf("(--) Venta Alimento con Descuento: %.2f\n", ventaAlimentoConDescuento);
            ventaAlimentoSem += ventaAlimentoConDescuento;
            totalReciboDia = ventaAlimentoConDescuento;
            ventaAlimentoDiaTot += totalReciboDia;
            clienteFrecDia++;
        } else {
            ventaAlimentoSem += ventaAlimentoDia;
            totalReciboDia = ventaAlimentoDia;
            ventaAlimentoDiaTot += totalReciboDia;
        }
        ventaAlimentoDia = 0;
        clientesDia++;
    }

    if (extrasDia > 0) {
        printf("(+) Extras: %.2f\n", extrasDia);
        if (descClienteFrec > 0) {
            descuentoAplicado = extrasDia * descClienteFrec;
            printf("(--) Descuento por Cliente Frecuente: %.2f\n", descuentoAplicado);
            float extrasConDescuento = extrasDia - descuentoAplicado;
            if (extrasConDescuento < 0) {
                extrasConDescuento = 0;
            }
            printf("(--) Extras con Descuento: %.2f\n", extrasConDescuento);
            extrasSem += extrasConDescuento;
            totalReciboDia = extrasConDescuento;
            extrasDiaTot += totalReciboDia;
            clienteFrecDia++;
        } else {
            extrasSem += extrasDia;
            totalReciboDia = extrasDia;
            extrasDiaTot += totalReciboDia;
        }
        extrasDia = 0;
        clientesDia++;
    }

    printf("==================\n");
    printf("TOTAL: $%.2f\n", totalReciboDia);
    totalReciboDia = 0;
    system("pause");
}

void contadorClientesDia(int contadorDia) {   
    switch (contadorDia) {                       
    case 1:
        clientesFrecTot += clienteFrecDia;
        clientesTot += clientesDia;
        break;
    
    case 2:
    clientesFrecTot += clienteFrecDia;
        clientesTot += clientesDia;
        break;
    
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
    
    case 7:
        clientesFrecTot += clienteFrecDia;
        clientesTot += clientesDia;
        break;

    default:
        printf("DEBUG ERROR\n");
        break;
    }
}

void menu(int *contador) {   
    int res;
    system("cls");
    printf("===== VETERINARIA =====\n");
    printf("Dia: %d\n", *contador + 1); 
    printf("Clientes: %d\n", clientesDia);
    printf("Elija una opcion: \n");
    printf("1) Consulta Medica\n2) Peluqueria Canina\n3) Venta de Alimento\n4) Cerrar Dia\n5) Salir\nRes: ");  
    scanf("%d", &res);                                                                                         
    switch (res) {
    case 1:
        system("cls");
        printf("Ingrese la cantidad de consultas medicas: ");
        scanf("%d", &res);
        consultaMedicaDia += 15000 * res;
        clienteFrecuente();
        recibo();
        break;
    
    case 2:
        system("cls");
        printf("Ingrese la cantidad de servicios de Peluqueria Canina: ");
        scanf("%d", &res);
        peluqueriaCaninaDia += 6000 * res;
        clienteFrecuente();
        recibo();
        break;
    
    case 3:
        if (kilosDia <= 0) {
            system("cls");
            printf("No hay suficiente alimento para vender!\n");
            printf("Perdone las molestias!\n");
            system("pause");
            menu(*contador);
        }
        system("cls");
        printf("Kg Actuales: %d KG\n", kilosDia);
        printf("Bolsas Actuales: %d\n", bolsasDia);
        printf("Ingrese la cantidad de Kg de alimento a vender: ");
        scanf("%d", &res);
        if (res > kilosDia) {
            printf("AVISO!\n");
            printf("Usted esta comprando una cantidad mayor al stock actual.\nSolo se comprara la cantidad maxima de stock disponible.\n");
            system("pause");
            res = kilosDia;
        }
        ventaAlimentoDia = (res * 2500);
        kilosDia -= res;
        int aux1 = (res / 20);
        bolsasDia -= aux1;
        ventaBolsaDia += aux1;
        clienteFrecuente();
        recibo();
        break;

    case 4:
        system("cls");
        contadorClientesDia(*contador);
        informeDia(ventaBolsaDia, clienteFrecDia);
        clientesDia = 0;
        clienteFrecDia = 0;
        (*contador)++;
        if (*contador >= 7) {
            informeSemanal(&rubroSemanaA, &rubroSemanaB);
            exit(0);
        }
        break;
    
    case 5: 
        system("cls");
        printf("Nos vemos!\n");
        exit(0);
        break;

    default:
        system("cls");
        printf("Ingrese una opcion correcta!\n");
        fflush(stdin);
        system("pause");
        menu(contador);
        break;
    }
}

int main() {
    system("cls"); 
    reponerStock();
    int contador = 0;
    while (contador < 7) {
        menu(&contador);
    }
    informeSemanal(&rubroSemanaA, &rubroSemanaB);
    return 0;
}