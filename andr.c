#include <math.h>
#include <stdio.h>
int main ()
{
    int L;
    L = 7 ;
    float c1 = pow(L,2);
    float c2 = ((1.0/5)*L)*((3.0/5)*L);
    float c3 = ((1.0/5)*L)*((1.0/5)*L);
    float pt = (23.0/5)*L + (3.1416*L)/2 ;
    float at = (c1 + c2 + c2 + c3 + c3) + (3.1416*pow((float)L/2,2))/2;
    printf ("El Perimetro total es %.4f\n", pt) ;
    printf ("El Area total es %.4f", at) ;
    return 0;

}
