#include <stdio.h>

int main() {
    
    // Declare an array of integers with size 5
    int arr[5];

    // Assign values to the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }

    // Print the array elements
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
