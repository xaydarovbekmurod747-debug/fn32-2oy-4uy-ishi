#include <stdio.h>

void findMax(int *a, int *b)
{
    if (*b > *a) {
        *a = *b;
    }
}

int main(void)
{
    int a = 21;
    int b = 45;

    findMax(&a, &b);
    printf("Eng katta son: %d\n", a);

    return 0;
}
