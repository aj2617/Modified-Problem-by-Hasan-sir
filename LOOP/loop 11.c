/** Rule to convert D to other [Bin==(b+=(D%2)*place;D/8;place *10;]
hx==[ hx+=(D%16)*place;D/=16;place *=10;]   **/

#include <stdio.h>
int main() {
  int D, O = 0, place = 1;

  // Input a decimal number
  printf("Enter a number to convert: ");
  scanf("%d", &D);

  // Convert decimal to octal
  while (D > 0) {
    O += (D % 8) * place;
    D /= 8;
    place *= 10;
  }

  // Display the result
  printf("The Octal of %d is %d\n", D, O);

  return 0;
}
