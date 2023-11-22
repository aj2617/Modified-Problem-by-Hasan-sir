

#include<stdio.h>
int main()
{
      char ch;
      scanf("%c",&ch);
      if(ch>=65 && ch<=90)
       printf("This is a upper case letter\n");
      else if(ch>=97 && ch <=127)
        printf("This is a lower case letter\n");
      else if(ch>=48 && ch<=57)
        printf("This is a nuber\n");
      else
        printf("This is a special character\n");





 return 0;
}
