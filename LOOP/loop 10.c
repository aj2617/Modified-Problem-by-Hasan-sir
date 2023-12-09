#include<stdio.h>
int main()
{
   int start,itemN,diff,sum=0;
   printf("Input the starting number of A.P series: ");
   scanf("%d",&start);
   printf("Input the number of itmes for  A.P series: ");
   scanf("%d",&itemN);
   printf("Input the common difference of A.P series: ");
   scanf("%d",&diff);
   for(int i=1;i<=10;i+=4){

    sum+=i;
   //printf("%d +",i);

   }
 printf("The sum of the A.P series is :%d ",sum);

}
