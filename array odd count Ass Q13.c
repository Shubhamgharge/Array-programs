//// array odd count , Ass Q13
#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
   int arr[size]={0}, i=0,ocount=0;
   
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
    
    if(arr[i] % 2== 1 )
    {
      printf("\n %d is odd",arr[i]);
      ocount++;
    }
    
   }
   printf("\n odd count of an array is %d",ocount);
   
   return 0;
}