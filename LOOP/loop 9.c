/** First reverse then then cheak it is a palindrome number or not  **/
#include<stdio.h>
int main()
{
 system("color A");
 int reverse,n,remainder;
 printf("Enter a number :");
 scanf("%d",&n);
 int original=n;
 while( n != 0){
         remainder=n%10;
         reverse=reverse*10+remainder;
         n/=10;

 }
// printf("%d\n",reverse);

 if(reverse==original)
            printf("%d  is a palindrome number.\n",original);
 else
           printf("%d  is not a palindrome number.\n",original);

return 0;
}
