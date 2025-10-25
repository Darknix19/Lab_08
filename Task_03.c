#include <stdio.h>
#include <stdbool.h>

bool isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element)
            return true;
    }
    return false;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int count = 0;
    int checked[size1 < size2 ? size1 : size2];
    int checkedSize = 0;

    for (int i = 0; i < size1; i++) {
        if (isPresent(arr2, size2, arr1[i]) && !isPresent(checked, checkedSize, arr1[i])) {
            checked[checkedSize++] = arr1[i];
            count++;
        }
    }

    printf("Common elements count: %d\n", count);
    return 0;
}
