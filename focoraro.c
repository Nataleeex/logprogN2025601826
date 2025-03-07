#include <stdio.h>
#include <math.h>
int main ()
{
    int L = 7;
    double c1 = (3*L)*L;
    double c2 = (float)((L*3)*L)/2;
    double c3 = M_PI*pow((float)(3*L)/2,2)/2 ;
    double h1 = sqrt((pow(L*3,2))+(pow(L,2))) ;
    float at = c1 + c1 + c2 + c2 + c3 ;
    float pt = (7*L) + h1 + h1 + (M_PI*(L*3))/2 ;
    printf ("El Perimetro total es %.4f\n", pt) ;
    printf ("El Area total es %.4f", at) ;
    return 0;
}
