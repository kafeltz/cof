#include <stdio.h>
#include <string.h>

typedef struct {
    int a;
    int c;
} My;

int main() {
    My c = { 1, 2 };

    memset(&c, 0, sizeof(My));

    printf("My.a: %d\n", c.a);

    return 0;
}
