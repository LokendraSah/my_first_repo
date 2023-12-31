#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter the number of rows and columns of first matrix:");
    scanf("%d%d", &r1,&c1);
    printf("Enter the number of rows and columns of second matrix:");
    scanf("%d%d", &r2,&c2);
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible");
    }
    else
    {
        printf("Enter %d matrix elements of first matrix:", r1 * c1);
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter %d matrix elements of second matrix:", r2 * c2);
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("The elements of first matrix are:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("The elements of second matrix are:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("The final matrix is :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}