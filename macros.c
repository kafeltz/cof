#include <stdio.h>

int main() {
    char *date = __DATE__;

    printf("Data: %s\n", date);

    return 0;
}
