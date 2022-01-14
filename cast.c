#include <stdio.h>

int main() {
    int a = 10, b = 9;
    double c = (double) a/b;
    int d = a/b;

    printf("a/b=c\n");
    printf("Resultado: %f\n", c);
    printf("Resultado: %d\n", d);

    return 0;
}
