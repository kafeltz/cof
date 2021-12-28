#include <stdio.h>

int maior(int a, int b);


int main() {
    int a = 10;
    int b = 20;
    int idade = 28;

    int maior_de_dois  = 0;

    if (a > 5 && b > 10) {
        printf("a condição necessária, foi atingida!\n");
    }

    if (a >= 10 || b == 0) {
        printf("A condição ou, funcionou!\n");
    }

    if (idade <= 19) {
        printf("É menor de idade!");
    }
   
    maior_de_dois = maior(a, b);
    printf("O maior dos dois é: %d\n", maior_de_dois);

    printf("\nFim do programa!");

    return 1;
}

// dado 2 números, retorna o maior.
int maior(int a, int b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    } else {
        return a;
    }
}
