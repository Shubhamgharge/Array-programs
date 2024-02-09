//// array even count and odd count , Ass Q12
#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
   int arr[size]={0}, i=0, ecount=0,ocount=0;
   
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
      continue;
    }
    
    if(arr[i] % 2== 0 )
    {
      printf("\n %d is even",arr[i]);
      ecount++;
    }
    
   }
   printf("\n even count of an array is %d",ecount);
   
   return 0;
}