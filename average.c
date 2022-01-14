#include <stdio.h>

#define A_SIZE 5

double average(const short *array, int size);

int main() {
    const short array[] = { 1, 2, 3, 4, 5 };
    int size = A_SIZE;

    printf("Total é: %f\n", average(array, size));

    return 0;
}

double average(const short *array, int size) {
    int total = 0;
    const short *fim = array + size;

    for(const short *p = array; p < fim; ++p) {
        printf("p: %p\n", p);
        total += *p;
    }

    return total;
}

