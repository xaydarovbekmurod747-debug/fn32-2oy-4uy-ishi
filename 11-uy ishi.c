#include <stdio.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr + 4;

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p - i));
    }
    printf("\n");

    return 0;
}
