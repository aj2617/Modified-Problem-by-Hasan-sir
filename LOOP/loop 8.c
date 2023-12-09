#include<stdio.h>
int main()
{
 int i,j,n1,n2;
 int sum=0;
 printf("Enter Range : ");
 scanf("%d %d",&n1,&n2);
printf("Prime number between %d & %d is  : ",n1,n2);
 for(i=n1;i<=n2;i++){
  for(j=2;j<i;j++)
  {
        if( i % j ==0)
         break;

  }

    if( i==j ){
      sum+=i;
      printf(" %d ",i);
    }



 }
    printf("\n\nThe sum of prime number :%d\n",sum);
}
