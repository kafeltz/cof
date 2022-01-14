#include <wchar.h>

int main() {
    wint_t x = 5;
    wchar_t name[] = L"GEEKS";
    wprintf(L"x = %d \n", x);
    wprintf(L"HELLO %ls \n", name);
    return 0;
}
