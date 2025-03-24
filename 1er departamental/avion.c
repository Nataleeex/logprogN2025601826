#include <math.h>
#include <stdio.h>
int main ()
{
    int L;
    L = 2.0 ;
    float c1 = pow(L,2);
    float c2 = (3.0/2.0)*L ;
    float c3 = ((1.0/4.0)*L) * ((float)L/2.0) ;
    float h1 = sqrt((pow(L,2))+(pow(L,2))) ;
    float h2 = sqrt((pow(3.0/2*L,2)) + (pow(L,2))) ;
    float pt = (3*L) + ((2.0/4)*L) + h1*2 + h2 + ((3.0/2.0)*L);
    float at = (c1*2) + c2 + c3 + ((3.1416 * pow((float)L/2,2))/2) ;
    printf ("El Perimetro total es %.2f\n", pt) ;
    printf ("El Area total es %.0f", at) ;
    return 0;

}
