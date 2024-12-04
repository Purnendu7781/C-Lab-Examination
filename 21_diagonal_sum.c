#include <stdio.h>

int main()
{
    int m, n;
    int sum=0;
    printf("Enter no. of rows and columns : ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }  
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                sum+=a[i][j];
            }
        }  
        
    }

    printf("\nThe Diagonal Sum : %d",sum);

    return 0;
}