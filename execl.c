

// C program to implement
// execl()
#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("step before execl call\n");
    execl("/bin/ps", "ps", NULL);
    printf("step after execl call");
}
