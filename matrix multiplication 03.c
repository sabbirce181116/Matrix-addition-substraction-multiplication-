#include<stdio.h>
int main(){
 int A[10][10],B[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;


 printf("enter rows and cols for A matrix:");
 scanf("%d %d",&r1,&c1);

 printf("enter rows and cols for B matrix:");
 scanf("%d %d",&r2,&c2);

 while(c1!=r2)
 {
    printf("Error!!column of A not equal to B");

     printf("\nEnter again rows and cols for A matrix:");
     scanf("%d %d,&r1,&c1");

     printf("enter rows and cols for B matrix:");
     scanf("%d %d,&r2,&c2");

 }


    printf("\n enter the elements for A matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }

    }


     printf("\n enter the elements for B matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }

    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
             sum = sum + A[i][k]*B[k][j];

            }
            result[i][j]=sum;
            sum=0;
        }
    }




    printf("\n\nA matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)

            printf("\t%d",A[i][j]);
            printf("\n");
    }


    printf("\n\nB matrix\n");
    for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)

            printf("\t%d",B[i][j]);
            printf("\n");
    }

    printf("\n\n result matrix\n");
    for(i=0;i<r1;i++)
    {

        for(j=0;j<c2;j++)
        printf("\t%d",result[i][j]);
        printf("\n");
    }
}

