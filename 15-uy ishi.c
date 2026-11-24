#include <stdio.h>

void findMinMax(
    int *arr,
    int size,
    int *min,
    int *max)
{
    *min = *arr;
    *max = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
    }
}

int main(void)
{
    int arr[] = {15, 7, 99, 23, 4, 70};
    int min;
    int max;

    findMinMax(arr, 6, &min, &max);

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}
