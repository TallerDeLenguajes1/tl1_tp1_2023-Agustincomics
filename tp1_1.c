#include <stdio.h>

int main(){
    printf("Hola mundo");
    int *punt;
    int x = 1;
    punt = &x;
    printf("La direccion de memoria almacenada por el puntero es de:%d\n", punt);
    printf("La direccion de memoria de la variable es:%d\n", *punt);
    printf("La direccion de memoria del puntero es:%d\n", &punt);
    printf("El tamaño en memoria utilizado por esa variable con la funcion sizeof() es:%d\n", sizeof(x));
    printf("El tamaño en memoria utilizado por ese puntero con la funcion sizeof() es:%d\n", sizeof(punt));
    printf("El tamaño en memoria utilizado por ese puntero con la funcion sizeof() es:%d\n", sizeof(&punt));


    return 0;
}