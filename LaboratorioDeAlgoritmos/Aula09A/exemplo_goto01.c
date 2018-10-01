#include <stdio.h>
#include <stdlib.h>

int main()
{
    label1:
        printf("Start program with goto");
        goto label1;

    return 0;
}
