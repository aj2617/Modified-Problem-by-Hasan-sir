#include<stdio.h>
int main()
{      system("color A");
      printf("Enter line number : ");
        int n;
      scanf("%d",&n);
         for(int l=1;l<=n;l++){

          for(int c=1;c<=l;c++)
           printf("%d ",l);
          printf("\n");
         }

 return 0;
}

