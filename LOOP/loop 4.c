
#include<stdio.h>
int main()
{    system("color A");
      printf("Enter line number : ");
        int n;
      scanf("%d",&n);
         for(int l=1;l<=n;l++){

          for(int c=n;c>=l;c--)
           printf("*");
          printf("\n");
         }

 return 0;
}
