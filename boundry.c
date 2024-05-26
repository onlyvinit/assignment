#include <stdio.h>

int main() {

    int a[5][5] = {
        {2, 4, 1, 6, 3},
        {9, 5, 4, 6, 7},
        {8, 2, 6, 3, 5},
        {3, 4, 8, 5, 1},
        {2, 3, 9, 5, 7}
    };


    printf("border:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                printf("%d ", a[i][j]);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }


    int sum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                sum += a[i][j];
            }
        }
    }


    printf("\nThe sum of boundary elements: %d\n", sum);

    return 0;
}
