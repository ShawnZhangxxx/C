#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("before sys\n");

    system("ls -alh");

    system("./out");

    printf("after sys\n");

    return 0;
}