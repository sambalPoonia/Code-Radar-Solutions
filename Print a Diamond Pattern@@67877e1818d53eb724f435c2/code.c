#include<stdio.h>

int main() {
    int a, i, j;
    scanf("%d", &a);

    for (i = 0; i < 2 * a - 1; i++) {
        for (j = 0; j < 2 * a - 1; j++) {
            // Calculate the absolute distance from the center
            int rowDistance = abs(i - (a - 1));
            int colDistance = abs(j - (a - 1));

            // Print '*' if the sum of distances is less than or equal to a-1
            if (rowDistance + colDistance <= a - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}