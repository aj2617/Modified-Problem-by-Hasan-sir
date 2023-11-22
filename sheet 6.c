
#include<stdio.h>
int main()
{
int x,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o ;
printf("Enter the amount : ");
scanf("%d",&x);
a=x/500;
if(a>0)
         printf("Tk. 500= %d\n",a);

b=x%500;
c=b/100;
if(c>0)
 printf("Tk. 100=%d\n",c);

d=b%100;
e=d/50;
if (e>0)
        printf(" Tk. 50= %d\n",e);
f=d%50;
g=f/20;
  if (g>0)
        printf("Tk. 20=%d\n",g);
  h=f%20;
  i=h/10;
  if(i>0)
   printf("Tk. 10=5d",i);
  j=h%10;
  k=j/5;
  if(k>0)
   printf(" Tk. 5=%d\n",k);
  l=j%5;
  m=l/2;
  if(m>0)
   printf("Tk.  2=%d\n,m");
  n=l%2;
  o=n/1;
  if(o>0)
   printf(" 1= %d\n",o);







 return 0;
}
