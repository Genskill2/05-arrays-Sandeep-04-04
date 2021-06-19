/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>


float average(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert ((average(x, 7) - 4.7142) < 0.001);

  int y[] = {5};
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  }
  
  float average(int x[], int size){
      int sum = 0;
      for(int i = 0; i< size ; ++i){
          sum = sum + x[i];
      }
      return sum/size;
  }

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

