/*2_Products_Struct.c
Definición: Programa q imprime Estructura de productos. 
*/
#include <stdio.h>
#include <string.h>


//definicion de struct
struct Producto{
    char nombre[50];
    int codigo;
    int cantidad;
    float valor;
};

int main(){

    printf("Programa q imprime Estructura de productos. \n");

    struct Producto prods; // struct NombreEstructura etiqueta;

    // Asignación de valores a los miembros de la estructura
    printf("Ingrese el nombre del producto: \n");
    fgets(prods.nombre,20,stdin);
    printf("Ingrese el codigo del producto: \n");
    scanf("%f", &prods.valor);
    printf("Ingrese la cantidad del producto:\n");
    scanf("%d", &prods.cantidad);
    printf("Ingrese el valor del producto: \n");
    scanf("%f", &prods.valor);
    getchar();

    // Mostrar la información de la estructura (Productos).
    printf("\nInformación de los productos:\n");
    printf("Nombre: %s", prods.nombre);
    printf("Código: %.2f\n", prods.valor);
    printf("Cantidad: %d\n", prods.cantidad);
    printf("Valor: %.2f\n", prods.valor);

    return 0;
}