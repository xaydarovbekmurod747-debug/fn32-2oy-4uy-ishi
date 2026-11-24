#include <stdio.h>

void reverse(int *arr, int size)
{
    int *left = arr;
    int *right = arr + size - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    reverse(arr, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}
