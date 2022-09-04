#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void eh_primo(int x) {
    if (x == 2) {
        printf("\nÉ primo.\n\n"); 
        return;
    }
    if (x % 2 == 0) {
        printf("\nNão é primo!\n\n");
        return;
    }

    // neste ponto sabemos que o número x
    // é ÍMPAR, ou seja, não é divisível por 2

    float raiz = sqrt(x);
    int div = 3;
    while (div <= raiz) {
        if (x % div == 0) {
            printf("\nO número NÃO é primo.\n\n");
            return;
        }
        div = div + 2;
    }
    printf("\nO número É PRIMO.\n\n");
}    

int main() {
    while (0==0) {
        printf("\nDigite um número inteiro: ");
        int numero;
        scanf("%d", &numero);
        eh_primo(numero);
    }
    return 0;
}
    



