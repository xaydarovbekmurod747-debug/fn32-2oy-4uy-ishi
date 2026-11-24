#include <stdio.h>

float average(int *a, int *b, int *c)
{
    return (*a + *b + *c) / 3.0f;
}

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;

    printf("O'rtacha: %.2f\n", average(&a, &b, &c));

    return 0;
}
