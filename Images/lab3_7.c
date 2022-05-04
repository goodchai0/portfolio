#include <stdio.h>
int main()
{
    int A[10][10],i,j,m,n;
    int isUpper;
    printf("Enter no. of rows : ");
    scanf("%d", &m);
    printf("\nEnter no. of cols : ");
    scanf("%d",&n);
    printf("\nEnter values to the matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
             scanf("%d", &A[i][j]);
        }
    }
    isUpper = 1;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j<i && A[i][j]!=0)
                isUpper = 0;
        }
    }
    if(isUpper==1)
        printf("\nUpper triangular matrix.");
    else
        printf("\nLower triangular matrix.");
    return 0;
}



