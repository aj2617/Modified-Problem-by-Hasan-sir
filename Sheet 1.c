
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
If ((n % 400 ==0) || (n % 4==0 && n % 100!=0))
   printf("%d is leap Year",n);
  else
   printf("%d is not Leap year",n);
 return 0;
}
