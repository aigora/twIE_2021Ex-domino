#include <stdio.h>
#include <stdlib.h>


int main() //funcion principal
{
    int opcion = 0;

    opcion = menu();
    if (opcion==1){
        printf("Ha seleccionado la opcion de Jugar contra un bot\n");


    }
     else if (opcion==2){
        printf("Ha seleccionado la opcion de Jugar varios jugadores\n");


    }
    else {
        printf("La opcion seleccionada es incorrecta\n");
    }

    return 0;
    system("PAUSE");
}

int menu() //función menú
{
    int opcion=0;

    printf("Escoja una de las siguientes opciones introduciendo el numero correspondiente\n 1 Jugar contra un bot\n 2 Jugar varios jugadores\n");
    scanf("%d",&opcion);

    return opcion;

}

