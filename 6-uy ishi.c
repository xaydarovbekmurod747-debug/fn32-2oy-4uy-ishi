#include <stdio.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");

    return 0;
}
