//// array zero count , Ass Q14
#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
   int arr[size]={0}, i=0,zcount=0;
   
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
    if(arr[i] == 0)
    {
      printf("\n array zetro (0) element is %d",arr[i]);
      zcount++;
    }
    
    
    
   }
   printf("\n\n zero count of an array is %d",zcount);
   
   return 0;
}