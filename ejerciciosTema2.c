/*
 * @File:   EjerciciosTema2.c - Ejercicio i+j
 *
 * Sinopsis: ejercicios propuestos del tema 2.
 *
 * El programa realiza una petición al usuario para que introduzca una cantidad de
 * segundos, posteirormente se le muestra esa cantidad y su equivalente en
 * horas, minutos y lo que sobra en segundos.
 *
 * @author: Santiago Hoyos Zea
 *
 * fecha: 20/02/2017
 *
 * @version 0.4 - Entrega 4
 */

#include <stdio.h>


//Constantes numéricas
const int SEGUNDOS_MINUTO = 60;
const int SEGUNDOS_HORA = 3600;

/**
 * Funcion principal.
 * @return resultado de salida.
 */
int main() {

    //Declaramos un long para que no nos quedemos cortos.
    long segundosRecogidos, segundosSalida, minutos, horas;

    //Recogida de datos
    printf("Escribe una cantidad de segundos: ");
    scanf("%ld", &segundosRecogidos);

    //Operaciones
    horas = segundosRecogidos / SEGUNDOS_HORA;
    minutos = (segundosRecogidos % SEGUNDOS_HORA) / SEGUNDOS_MINUTO;
    segundosSalida = (segundosRecogidos % SEGUNDOS_HORA) % SEGUNDOS_MINUTO;

    printf("%ld segundos son: %ld horas %ld minutos y %ld segundos.", segundosRecogidos, horas, minutos, segundosSalida);

    //Acabamos el programa sin errres
    return 0;
}
