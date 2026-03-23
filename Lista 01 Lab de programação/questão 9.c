/*9) Fazer um programa em C que pergunta um valor em metros e imprime o 
correspondente em decímetros, centímetros e milímetros. 
*/

#include <stdio.h>

int main()
{
    float metros, centimetros, decimetros, milimetros;

    printf ("Digite quantos metros deseja converter para decimetros, centimetros e milimetros: \n");
    scanf ("%f", &metros);

    decimetros = metros * 10;
    centimetros = decimetros * 10;
    milimetros = centimetros * 10;
    
    printf ("%.2f metros sao convertidos para: %.2f decimetros, %.2f centimetros e %.2f milimetros ", metros, decimetros, centimetros, milimetros );

    return 0;
}
