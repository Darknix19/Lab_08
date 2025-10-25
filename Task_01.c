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

    int unionArr[size1 + size2];
    int unionSize = 0;

    for (int i = 0; i < size1; i++) {
        if (!isPresent(unionArr, unionSize, arr1[i])) {
            unionArr[unionSize++] = arr1[i];
        }
    }

    for (int i = 0; i < size2; i++) {
        if (!isPresent(unionArr, unionSize, arr2[i])) {
            unionArr[unionSize++] = arr2[i];
        }
    }

    printf("Union: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}
