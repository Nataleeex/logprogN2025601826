#include <stdio.h>
#include <math.h>

int main ()
{
    float peso, altura;
    double IMC;
    printf ("INGRESE SU PESO EN KG: \n");
    scanf ("%f", &peso);
    printf ("INGRESE SU ALTURA EN METROS: \n");
    scanf ("%f", &altura);

    IMC= peso/(pow(altura, 2));

    printf("Su IMC es: %.2f\n", IMC);
    if (IMC<18.5)
        {printf("Peso bajo\n");}

    else if (IMC>=18.5 && IMC<25.0)
        {printf("Peso normal\n");}

    else if (IMC>=25.0 && IMC<30.0)
        {printf("Sobrepeso\n");}

    else if (IMC>=30.0 && IMC<35.0)
        {printf("Obesidad clase 1\n");}

    else if (IMC>=35.0 && IMC<40.0)
        {printf("Obesidad clase 2\n");}

    else if (IMC >=40.0)
        {printf("Obesidad clase 3\n");}
    return 0;

}
