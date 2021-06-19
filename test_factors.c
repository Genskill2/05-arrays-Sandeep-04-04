#include <stdio.h>
#include <assert.h>
#include <math.h>


int factors(int, int []);

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}

int factors(int n, int arr[]){
    int idx = 0;
     while (n % 2 == 0)
    {
        arr[idx] = 2;
        ++idx;
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        
        while (n % i == 0)
        {
            arr[idx] = i;
            idx++;
            n = n/i;
        }
    }
 
    if (n > 2){
        arr[idx] = n;
        ++idx ;
    }
       return idx; 
}
