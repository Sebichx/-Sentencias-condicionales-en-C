/*5_CreateArchive_Archives.c
Definición: programa q permite crear un archivo de texto e informa si el archivo ya existe.
*/
#include <stdio.h>

int main(){

    const char*filename = "D:\\P3DM\\productos.1";
    FILE *file;

    //Verificar si el archivo ya existe:
    file=fopen(filename, "r"); //Intentar abrir el archivo en modo lectura ("r")
    if (file != NULL){
        printf("El archivo '%s' ya existe.", filename); //Si el archivo se abre correctamente, significa que ya existe.
                                                    //Si el archivo no se puede abrir, significa que no existe entonces debemos crear uno.
        fclose(file);
    }else{
        file= fopen(filename, "a");
        if (file == NULL){
            perror("error al crear el archivo");
            return 1;
        }
        fprintf(file, "Prueba.");
    }
    return 0;
}
/*
Crear el archivo si no existe:
Abrir el archivo en modo escritura ("w").
Escribir un mensaje en el archivo.
Confirmar la creación del archivo.
*/