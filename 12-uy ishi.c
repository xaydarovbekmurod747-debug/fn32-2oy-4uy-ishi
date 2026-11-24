#include <stdio.h>

int main(void)
{
    int arr[6] = {12, 21, 34, 45, 56, 67};
    int *p = arr;

    for (int i = 0; i < 6; i++) {
        if (*(p + i) % 2 == 0) {
            printf("%d ", *(p + i));
        }
    }
    printf("\n");

    return 0;
}
