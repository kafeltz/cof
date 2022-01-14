#include <stdio.h>

struct Data {
    short id;
    double value;
};

int main() {
    struct Data data = { 125, 100.1 };

    unsigned short *p = (unsigned short*) &data;

	printf("%p: \n", p);
	printf("sizeof(data): %u\n", data);

	for (int i = 0; i < sizeof(data); ++i)
		printf( "%02X\n", *(p + i) );

    return 0;
}
