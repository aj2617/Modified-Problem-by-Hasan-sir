
#include<stdio.h>
int main()
{
  int p,c,m,t;
   printf("Enter the marks obtain in Physics : ");
  scanf("%d",&p);
  printf("Enter the marks obtain in Chemistry : ");
  scanf("%d",&c);
  printf("Enter the marks obtain in Math : ");
  scanf("%d",&m);
  t=p+m+c;
  if(p>=55 && c>=50 && m>=65 && t>=180 )
   printf("The candidate is eligible for admission");
  else
   printf("The candidate is not eligible for admission");




 return 0;
}

