#include <string.h>
#include <stdio.h>

int main() {
    const char* s1 = "Ismael         ";
    char* s2 = "Kafeltz";
    /* char* s3; */

    strcat(s2, s1);

    printf("s3: %s\n");

    return 0;
}
