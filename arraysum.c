#include <stdio.h>

int main() {
    
    int a[3][3] = {
        {2, 4, 1},
        {3, 5, 4},
        {8, 2, 6}
    };

    
    int b[3][3] = {
        {3, 6, 2},
        {5, 6, 8},
        {3, 7, 4}
    };

    
    int c[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    
    printf("addition :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("c[%d][%d] = %d\n", i, j, c[i][j]);
        }
    }

    return 0;
}
