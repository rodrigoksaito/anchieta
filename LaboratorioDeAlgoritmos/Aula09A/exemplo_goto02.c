#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;

    label1:
        printf("\nExit loop before 10");
        if (a ==7)
            goto label2;
    do {
        printf("\nValue a variable: %d", a);
        a++;

        if (a == 7)
            goto label1;

    } while (a < 10);

    label2:
        return 0;

}

