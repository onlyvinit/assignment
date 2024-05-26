#include <stdio.h>

int main() {
    
    int a[3][3] = {
        {2, 4, 1},
        {3, 5, 4},
        {8, 2, 6}
    };


    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += a[i][i]; 
    }

    
    printf("The sum of diagonal elements: %d\n", sum);

    return 0;
}
