#include <stdio.h>

int main ()
{

const float ISRdesc= 0.10, pago=0.50, Paq=12.0;
float Numero_Paquetes, Salario_bruto, ISR, Salario_neto, Total_cucharas;
int numPaquetes;

printf ("Ingresa el numero de paquetes hechos en la semana: ");
scanf("%d", &numPaquetes);

Numero_Paquetes = numPaquetes;
Salario_bruto = numPaquetes*pago;
ISR = numPaquetes*pago* ISRdesc;
Salario_neto = numPaquetes*pago - numPaquetes*pago*ISRdesc;
Total_cucharas = numPaquetes*Paq;

printf("Numero Paquetes: %.0f\n", Numero_Paquetes);
printf("Salario Bruto: %.2f\n", Salario_bruto);
printf("ISR: %.1f\n", ISR);
printf("Salario Neto: %.1f\n", Salario_neto);
printf("Total cucharas: %.0f\n", Total_cucharas);

return 0;
}
