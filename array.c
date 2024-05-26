#include <stdio.h>

int main() {
    int arr[3][3] = {
        {2, 4, 1},
        {3, 5, 4},
        {8, 2, 6}
    };
    
    
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    
    printf("Size of row: %d\n", rows);
    printf("Size of column: %d\n", cols);
    
    
    int total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total += arr[i][j];
        }
    }
    double average = (double)total / (rows * cols);
    
    printf("Average: %.2f\n", average);
    
    return 0;
}
