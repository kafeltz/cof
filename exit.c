#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>

int main (int argc, char *argv[])
{
    if (argc < 3)
    {
        fprintf(stderr, "Missing required arguments.\n");
        _Exit(-1);
    }
}
