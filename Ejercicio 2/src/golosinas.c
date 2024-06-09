/*Se ingresa por teclado la cantidad de caramelos, chiles y chupetes disponibles en un kiosko que pide: 
- Determinar cuántos grupos de golosinas tienen más de 50 unidades. 
Mostrar en pantalla los nombres y las cantidades respectivamente de los grupos de más de 50 unidades. 
- Sumar la cantidad mayores a 50 y hallar la incidencia de esa suma con el total. 
- Si alguna de las cantidades es menor a 10 imprimir un mensaje indicando que debe verificar el stock.
Fecha: 09/06/2024
Nombre: Evaluación de stock de golosinas
 Descripción: El algoritmo determina cuántos grupos de golosinas tienen más de 50 unidades, mostrando sus nombres y cantidades. 
 Suma las cantidades superiores a 50 y calcula su incidencia sobre el total. 
 Además, si alguna cantidad es menor a 10, imprime un mensaje indicando que se debe verificar el stock.*/
 
 //@author:  Sebastian Montalvo
 #include <stdio.h> 
int main (){
    
    //Delaración de variables.
    int caramelos, chicles, chupetes, total, suma;
    float incidencia;

    //Ingreso de datos.
    printf ("Ingrese la cantidad de caramelos: ");
    scanf ("%d", &caramelos);
    printf ("Ingrese la cantidad de chicles: ");
    scanf ("%d", &chicles);
    printf ("Ingrese la cantidad de chupetes: ");
    scanf ("%d", &chupetes);

    //Verificación de datos he imprime los valores mayores a 50.
    if (caramelos > 50)
    printf ("\nCaramelos %d unidades", caramelos);
    if (chicles > 50)
    printf ("\nChicles %d unidades", chicles);
    if (chupetes > 50)
    printf ("\nChupetes %d unidades", chupetes);

    //Define el total de golosinas y la suma.
    total = caramelos + chicles + chupetes;
    suma = 0;

    //Verifica y suma los valores mayores a 50.
    if (caramelos > 50)
        suma += caramelos;
    if (chicles > 50)
        suma += chicles;
    if (chupetes > 50)
        suma += chupetes;

    //Calcula la incidencia, imprime la suma de las cantidades mayores a 50 y la incidencia con el total.
    if (suma > 0) {
        incidencia = ((float)suma / total) * 100;
        printf ("\nEl total de las golosinas con una cantidad mayor a 50 unidades es %d y su incidencia es %.2f%%", suma, incidencia);   
    } else {
        printf ("\nNinguna golosina supera las 50 unidades.");   
    }

    //Verifica los valores menores a 10 he imprime mensaje de stock.
    if (caramelos < 10)
    printf ("\nLas unidades de caramelos son menores a 10, verificar stock.");
    if (chicles < 10)
    printf ("\nLas unidades de chicles son menores a 10, verificar stock.");
    if (chupetes < 10)
    printf ("\nLas unidades de chupetes son menores a 10, verificar stock.");
}