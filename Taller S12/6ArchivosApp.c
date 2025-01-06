/*6_AppendInfo_Archives.c
*/
#include <stdio.h>

int main(){
    
    //Definir el nombre del archivo: const char *filename = "___";.
    const char*filename = "D:\\P3DM\\productos.1";
    FILE *file;

    //Abrir el archivo en modo añadir ("a").
    file= fopen(filename, "a");
    fprintf(file, "2 prueba"); //Escribir un mensaje en el archivo.

    return 0;
 
}