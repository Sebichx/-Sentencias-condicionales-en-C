/*Sabiendo la cantidad de bancos de un aula y la cantidad de alumnos inscritos en el curso. 
Determinar si alcanzan los bancos existentes, de no ser así informar además de cuantos bancos son necesarios agregar.
Fecha: 09/06/2024
Nombre: Verificación de bancos necesarios
Desceipción: El algoritmo determina la cantidad de bancos y existentes e indica cuantos bancos agregar si es necesario*/
//@author:  Sebastian Montalvo
#include <stdio.h> 

int main (){
    
    //Delaración de variables.
    int alumnos, bancos, bancosN;

    //Ingreso de datos
    printf ("\nIngrese la cantidad de alumnos: ");
    scanf ("%d", &alumnos);
    printf ("\nIngrese la cantidad de bancos: ");
    scanf ("%d", &bancos);
    bancosN = bancos - alumnos;

    //Verificación de datos.
    if (bancosN > 0){
        printf ("\nLa cantidad de bancos existentes si alcanza para la cantidad de alumnos.");
    } else {
        printf ("La cantidad de bancos existentes no alcanza para la cantidad de alumnos.\nEs necesario agregar %d bancos.", bancosN * -1);
    }
    return 0;                                        
}