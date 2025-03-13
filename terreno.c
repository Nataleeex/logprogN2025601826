#include <stdio.h>
#include <math.h>
int main ()
{
    const float IVA= 0.16, Preciom2=9256.00;
    float Precio, arRom, arTrg, AT, htrg;
    int L;
    printf ("Ingresa el valor de L: ");
    scanf ("%d", &L);
    arRom = L*(L/2);
    htrg = (sqrt(3)/2)*L ;
    arTrg = ((L/2)*htrg)/2 ;
    AT = arRom+arTrg ;
    Precio = AT*Preciom2 + AT*Preciom2*IVA ;
    printf ("El precio por el terreno fue: %.2f", Precio) ;
    return 0;

}
