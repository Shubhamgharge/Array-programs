//// array even count odd count zero count , Ass Q15
#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
   int arr[size]={0}, i=0,ocount,ecount,zcount=0;
   
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
    else if(arr[i] % 2== 0)
    {
      printf("\n %d is even ",arr[i]);
     ecount++;
    }
    else
    {
      printf("\n %d is odd ",arr[i]);
     ocount++;
    }
    
    
   }
   printf("\n\n zero count of an array is %d",zcount);
   printf("\n even count of an array is %d ",ecount);
   printf("\n odd count of an array is %d",ocount);
   return 0;
}