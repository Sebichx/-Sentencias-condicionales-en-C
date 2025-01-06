/*1_Introduction_Struct.c
*/

#include <stdio.h>
#include <string.h>
/*struct: debe estar entre las librerias y la func principal.
*/

//definicion de struct
struct Estudiantes{
    char nombre[50];
    int edad;
    float altura;
    float promedio;
};

int main(){
    struct Estudiantes estudiante1; // struct NombreEstructura etiqueta;

    // Asignación de valores a los miembros de la estructura
    printf("Ingrese el nombre del estiduante: \n");
    fgets(estudiante1.nombre,50,stdin);
    printf("Ingrese la edad del estudiante: \n");
    scanf("%d", &estudiante1.edad);  //Leemos con la etiqueta.Dato => q envia los datos a la struct.
    printf("Ingrese la altura del estudiante: \n");
    scanf("%f", &estudiante1.altura);
    printf("Ingrese el promedio del estudiante: \n");
    scanf("%f", &estudiante1.promedio);

    // Mostrar la información del estudiante
    printf("\nInformación del Estudiante:\n");
    printf("Nombre: %s", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Altura: %.2f\n", estudiante1.altura);
    printf("Promedio: %.2f\n", estudiante1.promedio);
 
    return 0;
}