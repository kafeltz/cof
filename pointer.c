#include <stdio.h>

int main() {
    int a = 100;
    int* pointerA = &a;

    printf("Valor do a é: %d\n", a);
    printf("Valor do ponteiro do a é: %p\n", pointerA);

    return 0;
}
