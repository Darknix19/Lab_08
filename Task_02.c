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

    int interArr[size1 < size2 ? size1 : size2];
    int interSize = 0;

    for (int i = 0; i < size1; i++) {
        if (isPresent(arr2, size2, arr1[i]) && !isPresent(interArr, interSize, arr1[i])) {
            interArr[interSize++] = arr1[i];
        }
    }

    printf("Intersection: ");
    for (int i = 0; i < interSize; i++) {
        printf("%d ", interArr[i]);
    }
    printf("\n");

    return 0;
}
