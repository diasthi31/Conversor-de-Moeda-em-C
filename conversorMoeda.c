#include<stdio.h>

int main() {
    double real, dolar;
    int i, c;
    printf("Quantas conversões deseja fazer? ");
    scanf("%i", &c);
    i = 1;
    
    while (i <= c) {
    printf("Qual o valor em R$? ");
    scanf("%lf", &real);
    dolar = real / 5.00;
    printf("O valor convertido é US$%.2lf.\n", dolar);
    printf("\n");
    i++;
    }

    return 0;
}