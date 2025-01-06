/*3_ProductsVec_Struct.c
Definición: Programa q imprime Estructuras (vector[]) de productos. 
*/
#include <stdio.h>
#include <string.h>
//#define Var 3

//definicion de struct
struct Producto{
    char nombre[50];
    int codigo;
    int cantidad;
    float valor;
};

int main(){
    int Var;

    printf("Programa q imprime Estructuras (vector[]) de productos. \n");
    printf("Ingrese el numero de productos a ingresar:\n");
    scanf("%d", &Var);
    getchar();

    struct Producto prods[Var]; // struct NombreEstructura etiqueta[];
    
    for(int i=0; i<Var; i++){

        // Asignación de valores a los miembros de la estructura
        printf("Ingrese el nombre del producto: %d\n", i+1);
        fgets(prods[i].nombre,20,stdin);
        printf("Ingrese el codigo del producto: %d \n", i+1);
        scanf("%f", &prods[i].valor);
        printf("Ingrese la cantidad del producto: %d\n", i+1);
        scanf("%d", &prods[i].cantidad);
        printf("Ingrese el valor del producto: %d \n", i+1);
        scanf("%f", &prods[i].valor);
        getchar();

    }

    for(int i=0; i<Var; i++){
        // Mostrar la información de la estructura (Productos).
        printf("\nInformación de los productos:\n");
        printf("Nombre: %s", prods[i].nombre);
        printf("Código: %.2f\n", prods[i].valor);
        printf("Cantidad: %d\n", prods[i].cantidad);
        printf("Valor: %.2f\n", prods[i].valor);
    }

    return 0;
}