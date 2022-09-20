#include<stdio.h>
void main()
{
    int a[10][10];
    int r;
    int c;
    int trans[10][10];

    printf("enter the rows of matrix");
    scanf("%d",&r);
    printf("enter the colomns of matrix");
    scanf("%d",&c);

    printf("enter the elements of matrix");
    for(int i =0 ;i<r;i++)
    {
        for(int j =0 ; j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i =0 ;i<r;i++)
    {
        for(int j =0 ; j<c;j++)
        {
            trans[i][j] = a[j][i];
        }
    }
    for(int i =0 ;i<r;i++)
    {
        for(int j =0 ; j<c;j++)
        {
            printf("%d",trans[i][j]);
        }
        printf("\n");
    }

    
}