//// array  ass Q5
#include<stdio.h>
#include<conio.h>

int main()
{
   int mass[7]={},i;
   
   printf("\n Enter 7 array elements: ");
   
   for(i=0 ; i<7 ; i++) 
   {
      printf("\n array %d element is= ",i);
      scanf("%d",&mass[i]);
   } 
   
   printf("\n dis play all elements.");
   
   for(i=0 ; i<7 ; i++)
   {
     printf("\n array element is %d",mass[i]);
   
   }
   
   return 0;
}