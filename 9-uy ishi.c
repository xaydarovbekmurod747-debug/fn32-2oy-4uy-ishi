#include <stdio.h>

int findArrayMax(int *arr, int size)
{
    int max = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}

int main(void)
{
    int arr[5] = {17, 82, 35, 99, 48};

    printf("Eng katta element: %d\n", findArrayMax(arr, 5));

    return 0;
}
