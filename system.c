// C program to implement
// system()
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("step before system call\n");
	system("ps");
	printf("step after system call\n");
}
