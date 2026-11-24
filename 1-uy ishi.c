#include <stdio.h>

void square(int *number)
{
    *number = (*number) * (*number);
}

int main(void)
{
    int n;
    int *p = &n;

    printf("Son kiriting: ");
    scanf("%d", p);

    printf("Oldin: %d\n", *p);

    square(p);

    printf("Kvadrati: %d\n", *p);

    return 0;
}
