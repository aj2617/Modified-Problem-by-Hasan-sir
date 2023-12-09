#include<stdio.h>
int main()
{
       system("color A");
      printf("Enter pyramide size : ");
        int n;
      scanf("%d",&n);
      //print line
         for(int l=1;l<=n;l++){
             //print space
                for (int s= 1; s <= n - l; s++) {
            printf(" ");
                }
              //print star
         for(int k=1;k<=2*l-1;k++){
          printf("*");
         }

          printf("\n");
         }

 return 0;
}

