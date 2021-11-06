#include <stdio.h>

// K&R pg. 115
// echo command-line arguments; 1st version

int main(int argc, char *argv[])
{
    int i;

	printf("argc=%d\n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("%s%s", argv[i], (i < argc-1) ? "|" : "");
    }
    printf("\n");
    return 0;
}