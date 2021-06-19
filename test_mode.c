#include <stdio.h>
#include <assert.h>


int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }


int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}
