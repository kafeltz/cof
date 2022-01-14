#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main( )
{
    printf("Storage sizes and value ranges of the types char and int\n\n");
    printf("The type char is %s.\n\n", CHAR_MIN < 0 ? "signed" :"unsigned");
    printf("  Type Size (in bytes) Minimum Maximum\n---------------------------------------------------\n");
    printf("  char %8lu %20d %15d\n", sizeof(char), CHAR_MIN, CHAR_MAX );
    printf("  int %8lu %20d %15d\n", sizeof(int), INT_MIN, INT_MAX );
    printf("---------------------------------------------------\n");
    printf("  int_least64_t: %lu\n", sizeof(int_least64_t));
    printf("  uint_least64_t: %lu\n", sizeof(uint_least64_t));
    printf("  int_fast32_t: %lu\n", sizeof(int_fast32_t));
    printf("\n");

    return 0;
}
