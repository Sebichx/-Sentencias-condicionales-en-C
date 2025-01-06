/*7_Products_Archives.c
Definición: Programa q declara una estructura para ingresar datos de un producto, y los escribe en un archivo.
*/
#include <stdio.h>

struct Producto{
    char nombre[50];
    int cantidad;
    float valor;

};

int main(){

    struct Producto prods;

    printf("Ingrese el nombre del producto: %d\n");
    fgets(prods.nombre,20,stdin);
    printf("Ingrese la cantidad del producto: %d\n");
    scanf("%d", &prods.cantidad);
    printf("Ingrese el valor del producto: %d \n");
    scanf("%f", &prods.valor);
    getchar();

    const char*filename = "C:\\Progra I\\Productos.1";
    FILE *file;

    file= fopen(filename, "w");
    fprintf(file,"\nInformación de los productos:\n");
    fprintf(file, "Nombre: %s", prods.nombre);
    fprintf(file, "Cantidad: %d\n", prods.cantidad);
    fprintf(file, "Valor: %.2f\n", prods.valor);
   

    return 0;
}