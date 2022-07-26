#include <stdio.h>

int main(){

    int a, b, auxiliar, i, n, num, vet[10];
    bool existe = true;

    a = 0;
    b = 1;

    printf("Digite um numero de quantas operacoes serao feitas na sequencia: ");
    scanf("%d", &n);
    printf("\nSerie de Fibonacci:\n\n");
    printf("%d\n%d\n", a, b);

    vet[0] = 0;
    for(i = 0; i < n; i++){
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        vet[i + 1] = auxiliar;
        printf("%d\n", auxiliar);
    }

    printf("Digite um numero para ver se ele está dentro da sequencia:");
    scanf("%d", &num);

    for(i = 0; i < n; i++){
        if(num == vet[i]){
            printf("O numero %d esta na sequencia", vet[i]);
            existe = true;
        }
        else
            existe = false;
    }
    if(!existe)
        printf("O numero %d nao existe sequencia", num);
}
