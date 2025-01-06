/*4_ProductsVec_Tabulated_Struct.c
Definición: Programa q imprime Estructuras (vector[]) de productos Tabulados. 
*/
#include <stdio.h>
#include <string.h>
//#define Var 3

//definicion de struct
struct Producto {
    char nombre[50];
    int codigo;
    int cantidad;
    float valor;
};

int main() {
    int Var;

    printf("Programa que imprime estructuras (vector[]) de productos tabulados.\n");
    printf("Ingrese el número de productos a ingresar:\n");
    scanf("%d", &Var);
    getchar();

    struct Producto prods[Var]; // declarar el Vec de estructuras.

    for (int i = 0; i < Var; i++) {
        printf("\nIngrese el nombre del producto %d:\n", i + 1);
        fgets(prods[i].nombre, 50, stdin);
        prods[i].nombre[strcspn(prods[i].nombre, "\n")] = '\0';

        printf("Ingrese el código del producto %d:\n", i + 1);
        scanf("%d", &prods[i].codigo);

        printf("Ingrese la cantidad del producto %d:\n", i + 1);
        scanf("%d", &prods[i].cantidad);

        printf("Ingrese el valor del producto %d:\n", i + 1);
        scanf("%f", &prods[i].valor);
        getchar(); 
    }

    for(int i=0; i<50; i++){
        printf("-");
    }
    printf("\n%-20s %-10s %-10s %-10s\n", "Nombre", "Código", "Cantidad", "Valor");
    for(int i=0; i<50; i++){
        printf("-");
    }
    printf("\n");

    for(int i=0; i<Var; i++){
        printf("%-20s %-10d %-10d %-10.2f\n", prods[i].nombre, prods[i].codigo, prods[i].cantidad, prods[i].valor);
        //% - ancho tipo => %-20s   La cadena ocupa min de 20 caracteres
        //(-): Pone espacios a la izq del valor. (Justificar)
        // Ancho: Si el valor es más corto que el ancho, se rellena con espacios.
        //Si el valor es más largo que el ancho, el ancho se ajusta al valor.
    }
    for(int i=0; i<50; i++){
        printf("-");
    }
    return 0;
}