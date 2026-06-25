#include <stdio.h>

int main() {

    int n;
    printf("Enter the size of the matrix (2 or 3): ");
    scanf("%d", &n);

    if (n > 3) {
        printf("We do not find the determinant and inverse for matrix of size more than 3\n");
        return 0;
    }

    float a[3][3];
    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%f", &a[i][j]);

    float det;

    // ---------- CASE 1: 2×2 MATRIX ----------
    if (n == 2) {

        det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
        printf("\nDeterminant = %.3f\n", det);

        if (det == 0) {
            printf("Inverse does NOT exist (Determinant is zero).\n");
            return 0;
        }

        printf("\nInverse Matrix:\n");
        printf("%.3f %.3f\n",  a[1][1]/det,   -a[0][1]/det);
        printf("%.3f %.3f\n", -a[1][0]/det,    a[0][0]/det);
    }



    // ---------- CASE 2: 3×3 MATRIX ----------
    if (n == 3) {

        det = 
            a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1]) -
            a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0]) +
            a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);

        printf("\nDeterminant = %.3f\n", det);

        if (det == 0) {
            printf("Inverse does NOT exist (Determinant is zero).\n");
            return 0;
        }

        float inv[3][3];

        inv[0][0] =  (a[1][1]*a[2][2] - a[1][2]*a[2][1]) / det;
        inv[0][1] = -(a[0][1]*a[2][2] - a[0][2]*a[2][1]) / det;
        inv[0][2] =  (a[0][1]*a[1][2] - a[0][2]*a[1][1]) / det;

        inv[1][0] = -(a[1][0]*a[2][2] - a[1][2]*a[2][0]) / det;
        inv[1][1] =  (a[0][0]*a[2][2] - a[0][2]*a[2][0]) / det;
        inv[1][2] = -(a[0][0]*a[1][2] - a[0][2]*a[1][0]) / det;

        inv[2][0] =  (a[1][0]*a[2][1] - a[1][1]*a[2][0]) / det;
        inv[2][1] = -(a[0][0]*a[2][1] - a[0][1]*a[2][0]) / det;
        inv[2][2] =  (a[0][0]*a[1][1] - a[0][1]*a[1][0]) / det;

        printf("\nInverse Matrix:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                printf("%.3f ", inv[i][j]);
            printf("\n");
        }
    }

    return 0;
}
