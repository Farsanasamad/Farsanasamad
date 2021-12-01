#include<stdio.h>


void main()
 {
   int a[10],b[10],c[10],i,n,m,k,merge[20];
 printf("Enter  limit in 1st Array: ");
   scanf("%d",&n);

   printf("Enter Elements in 1st Array: ");
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
    merge[i]=a[i];

   }
k=i;
printf("Enter  limit in 2st Array: ");
   scanf("%d",&m);

   printf("Enter Elements in 2nd Array: ");
   for(i=0;i<m;i++)
   {
   scanf("%d",&b[i]);
merge[k]=b[i];
k++;
   }
   printf("\nElements of Array After Merge: ");
   for(i=0;i<k;i++)
   {
    printf("%d",merge[i]);
}
  
 }

