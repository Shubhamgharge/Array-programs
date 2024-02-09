////array sum of all elements, Ass Q16
#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
   int arr[size]={0}, i=0,sum=0;
   
   printf("\n enter array %d elements",size);
   
   for(i=0 ; i < size ; i++)
   {
      printf("\n Array %d element =",i+1);
      scanf("%d",&arr[i]);
   }
   printf("\n display elements");
   getch();
   for(i=0 ; i<size ; i++)
   {
     sum=sum+arr[i];
   }
   printf("\n sum of all elements in array is %d",sum);
   return 0;
}