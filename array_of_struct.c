#include <stdio.h>

struct Identity {
    int age;
    /* int life; */
    char* name;
};

typedef struct {
    char a;
    char b;
} MyStruct;

int main() {
    struct Identity i[] = { { 10, "A" }, { 20, "X" } };
    /* struct Identity i[] = { { 10, 11 }, { 20, 22 } }; */


    MyStruct m = { 'a', 'b' }; 

    printf("i: %d\n", i[0].age);
    printf("i: %d\n", i[1].age);

    printf("p: %p\n", &i[0]); 
    printf("p: %p\n", &i[1]); 

    printf("MyStruct: %c\n", m.a);
    printf("MyStruct: %X\n", m.a);

    return 0;
}

