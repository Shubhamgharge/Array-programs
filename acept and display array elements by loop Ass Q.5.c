////array acept and display elementsAss Q5
#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
   int arr[size]={0}, i=0;
   
   printf("\n enter array %d elements",size);
   
   for(i=0 ; i < size ; i++)
   {
      printf("\n Array %d element =",i+1);
      scanf("%d",&arr[i]);
   }
   printf("\n \ndisplay elements\n");
   getch();
   for(i=0 ; i<size ; i++)
   {
     printf("\nnarray %d element is %d",i,arr[i]);
   }
   
   return 0;
}