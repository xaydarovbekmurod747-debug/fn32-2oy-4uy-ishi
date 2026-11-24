#include <stdio.h>

int main(void)
{
    int arr[5] = {11, 22, 33, 44, 55};
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}
