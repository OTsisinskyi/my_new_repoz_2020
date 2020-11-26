#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#define numbers 81

int main() {
    int array[81];
    int k;
    int i, j, n;

    int a[9][9] = { 0 };

    for (k = 0; k < numbers; k++) {
        scanf_s("%d\n", &array[k]);
    }
    printf("\n");
    void change_array(); {
        k = 0;
        for (n = 0; n < 9; n++) {
            for (i = 0; i <= n; i++) {
                a[8 - (n - i)][i] = array[k];
                k++;
            }
        }
        k = numbers - 1;
        for (n = 0; n < 8; n++) {
            for (i = 0; i <= n; i++) {
                a[8 - i][n - i] = array[k];
                k--;
            }
        }
    }
    void print_array(); {
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                printf("%02d ", a[i][j]);

            }
            printf("\n");
        }

    }

}