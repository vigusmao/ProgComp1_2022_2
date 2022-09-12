#include <stdio.h>
#include <stdlib.h>

int calcular_perimetro(int comp, int larg) {
    return (comp + larg) * 2;
}

int calcular_area(int comp, int larg) {
    return comp * larg;
}


int main() {
    int x1, y1, x2, y2;

    printf("\nDigite x1: ");
    scanf("%d", &x1);

    printf("\nDigite y1: ");
    scanf("%d", &y1);

    printf("\nDigite x2: ");
    scanf("%d", &x2);

    printf("\nDigite y2: ");
    scanf("%d", &y2);    

    int comprimento = y2-y1;
    int largura = x2-x1;

    printf("\nComprimento = %d", comprimento);
    printf("\nLargura = %d", largura);
    printf("\nPerímetro = %d",
        calcular_perimetro(comprimento, largura));
    printf("\nÁrea = %d\n\n",
        calcular_area(comprimento, largura));
}


