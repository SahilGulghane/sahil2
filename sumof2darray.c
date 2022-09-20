#include<stdio.h>
void main()
{
    int a[10][10];
    int b[10][10];
    int total[10][10];
    int r ;
    int c;
    int r1,c1;
    printf("enter the rows of matrix");
    scanf("%d",&r);
    printf("enter the colomns of matrix");
    scanf("%d",&c);
    printf("enter the rows of matrix");
    scanf("%d",&r1);
    printf("enter the colomns of matrix");
    scanf("%d",&c1);
    if(r == r1 || c ==c1)
    {
    printf("enter the elements of  1st matrix");
    for(int i =0 ;i<r;i++)
    {
        for(int j =0 ; j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of 2nd matrix");
    for(int i =0 ;i<r;i++)
    {
        for(int j =0 ; j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i =0 ;i<r;i++)
    {
        for(int j =0 ; j<c;j++)
        {
            total[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i =0 ;i<r;i++)
    {
        for(int j =0 ; j<c;j++)
        {
            printf("%d",total[i][j]);
        }
        printf("\n");
    }

    }
    else 
    {
        printf("please check rows and coloms are equal of both matric");
    }

}