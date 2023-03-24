#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // bubble sort algorithm to sort elements in descending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // print the sorted array
    printf("The sorted array in descending order is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
//output: Enter the size of the array: 11
Enter the elements of the array: 10 56 78 34 51 23 79 44 36 55 98
The sorted array in descending order is: 98 79 78 56 55 51 44 36 34 23 10
//