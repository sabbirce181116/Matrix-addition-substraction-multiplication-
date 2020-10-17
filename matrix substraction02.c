#include<stdio.h>
int main(){

 int i,j,numberofrows,numberofcols;
 int A[10][10],B[10][10],C[10][10];

 printf("enter the number of rows and cols:");
 scanf("%d %d",&numberofrows,&numberofcols);

 printf("enter the element for A matrix:\n");
 for(i=0;i<numberofrows;i++)
 {
     for(j=0;j<numberofcols;j++){
        printf("A[%d][%d]=", i,j);
        scanf("%d",&A[i][j]);

     }printf("\n");
 }


   printf("enter the element for B matrix:\n");
  for(i=0;i<numberofrows;i++)
  {
     for(j=0;j<numberofcols;j++){
        printf("B[%d][%d]=", i,j);
        scanf("%d",&B[i][j]);
     }printf("\n");
  }
  printf("A=");
  for(i=0;i<numberofrows;i++)
  {

      for(j=0;j<numberofcols;j++){
        printf("\t%d",A[i][j]);


     }printf("\n");
  }


  printf("\nB=");
  for(i=0;i<numberofrows;i++)
  {

      for(j=0;j<numberofcols;j++)
        {
        printf("\t%d", B[i][j]);
     }printf("\n");
  }



  for(i=0;i<numberofrows;i++)
  {
     for(j=0;j<numberofcols;j++)
     {
        C[i][j]=A[i][j]-B[i][j];

     }printf("\n");
  }
  printf("\nA-B=");
  printf("\t");
  for(i=0;i<numberofrows;i++)
  {

      for(j=0;j<numberofcols;j++)
        {
        printf("%d", C[i][j]);
        printf("\t");
     }printf("\n");
     printf("\t");
  }
}


