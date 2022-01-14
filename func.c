#include <stdio.h>

int main() {
    void func0( ) { puts("This is the function func0( ). "); }
    void func1( ) { puts("This is the function func1( ). "); }

    void (*funcTable[2])(void) = { func0, func1 };

    for ( int i = 0; i < 2; ++i )
        funcTable[i]( );

    return 0;
}
