#include <stdio.h>
#include <string.h>

int main(){
    int i, fim;
    char str[] = "Bom dia!", copia[strlen(str) - 1];

    printf("String Original:");
    printf("\n%s", str);

    fim = strlen(str) - 1; //estabelecendo o valor final de fim, para decrementar
    for(i = 0; i < strlen(str); i++){
        //copiando a primeira string para o final em outro vetor
        copia[fim] = str[i];
        fim--;
    }

    //imprimindo a string do final para frente
    printf("\nString Modificada:");
    for(i = 0; i < strlen(str); i++)
        printf("%c", copia[i]);
}
