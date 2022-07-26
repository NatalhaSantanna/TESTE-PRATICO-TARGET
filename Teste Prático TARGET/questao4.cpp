#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main(){
    float valor_sp, valor_rj, valor_mg, valor_es, valor_outros, somaTotal = 0;
    int i;

    valor_sp = 67836.43;
    valor_rj = 36678.66;
    valor_mg = 29229.88;
    valor_es = 27165.48;
    valor_outros = 19849.53;

    float meses[] = {valor_sp, valor_rj, valor_mg, valor_es, valor_outros};

    //soma todos os valores
    for(i = 0; i < 5; i++)
        somaTotal += meses[i];

    //mostrar os valores de cada mes
    printf("\t\tFaturamento Mensal de cada mes\n\n");
    printf("SP\t    RJ\t    \tMG\t    ES\t    \tOUTROS\n");
    for(i = 0; i < 5; i++)
        printf("%.2f    ", meses[i]);

    printf("\n\n\t\tPercentual Faturameto de cada mes\n\n");
    printf("SP\t RJ\t MG\t ES\tOUTROS\n");
    for(i = 0; i < 5; i++)
        printf("%.1f\t", meses[i] * 100 / somaTotal);
}
