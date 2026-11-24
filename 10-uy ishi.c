#include <stdio.h>

int findArrayMin(int *arr, int size)
{
    int min = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }

    return min;
}

int main(void)
{
    int arr[5] = {17, 82, 35, 99, 48};

    printf("Eng kichik element: %d\n", findArrayMin(arr, 5));

    return 0;
}
