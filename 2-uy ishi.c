#include <stdio.h>

void cube(int *number)
{
    *number = (*number) * (*number) * (*number);
}

int main(void)
{
    int n;
    int *p = &n;

    printf("Son kiriting: ");
    scanf("%d", p);

    printf("Oldin: %d\n", *p);

    cube(p);

    printf("Kubi: %d\n", *p);

    return 0;
}
