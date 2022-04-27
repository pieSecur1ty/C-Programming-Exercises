#include <stdio.h>

int main(void)
{
    // user input for A matrix
    int row_A, col_A;
    printf("Enter the number of rows for A matrix : ");
    scanf("%d", &row_A);
    printf("Enter the number of columns for A matrix : ");
    scanf("%d", &col_A);

    printf("Enter the value for A matrix : \n");
    int A[row_A][col_A];
    for (int i = 0; i < row_A; i++)
    {
        for (int j = 0; j < col_A; j++)
        {
            printf("value at A(%d, %d) : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // user input for B matrix
    int row_B, col_B;
    printf("Enter the number of rows for B matrix : ");
    scanf("%d", &row_B);
    printf("Enter the number of columns for B matrix : ");
    scanf("%d", &col_B);

    printf("Enter the value for B matrix : \n");
    int B[row_B][col_B];
    for (int i = 0; i < row_B; i++)
    {
        for (int j = 0; j < col_B; j++)
        {
            printf("value at B(%d, %d) : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // matrix multiplication eligibility checking
    if (col_A == row_B)
    {
        // matrix multipication
        int output_matrix[row_A][col_B];
        for (int i = 0; i < row_A; i++) // row for A matrix
        {
            for (int j = 0; j < col_B; j++) // column of B matrix
            {
                int result = 0;
                for (int k = 0; k < col_A; k++) // column of first matrix
                {
                    result = result + (A[i][k] * B[k][j]);
                }

                output_matrix[i][j] = result;
            }
        }

        // print A matrix
        printf("\nA matrix : \n");
        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < col_A; j++)
            {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
        }

        // print B matrix
        printf("\nB matrix : \n");
        for (int i = 0; i < row_B; i++)
        {
            for (int j = 0; j < col_B; j++)
            {
                printf("%d\t", B[i][j]);
            }
            printf("\n");
        }

        // print output matrix
        printf("\n(A x B) matrix : \n");
        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < col_B; j++)
            {
                printf("%d\t", output_matrix[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Matrix multiplication not possible.\n");
    }

    return 0;
}