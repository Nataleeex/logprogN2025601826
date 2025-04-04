#include <stdio.h>

int main ()
{
    int opc;
    printf("INGRESE LOS INGREDIENTES QUE QUIERA AGREGAR A SU PIZZA DE MOZZARELLA Y TOMATE: \n");
    printf("VEGETARIANOS:\n1:Pimiento\n2:Tofu\nNO VEGETARIANOS:\n3:Peperoni\n4:Jamon\n5:Salmon\n");
    scanf("%d", &opc);
    switch (opc){
    case 1:
        printf("SU PIZZA ES VEGETARIANA\nCONTIENE: MOZZARELLA, TOMATE, PIMIENTO");
        break;
    case 2:
        printf("SU PIZZA ES VEGETARIANA\nCONTIENE: MOZZARELLA, TOMATE, TOFU");
        break;
    case 3:
        printf("SU PIZZA NO ES VEGETARIANA\nCONTIENE: MOZZARELLA, TOMATE, PEPERONI");
        break;
    case 4:
        printf("SU PIZZA NO ES VEGETARIANA\nCONTIENE: MOZZARELLA, TOMATE, JAMON");
        break;
    case 5:
        printf("SU PIZZA NO ES VEGETARIANA\nCONTIENE: MOZZARELLA, TOMATE, SALMON");
        break;
    default:
        printf("OPCION INVALIDA");
    }
}
