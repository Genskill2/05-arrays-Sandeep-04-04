#include <stdio.h>
#include <assert.h>


int min(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (min(x, 7) == -3);

  int y[] = {5};
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  }

int min(int arr[], int size){
    int min_num = arr[0];
    for(int i =0 ; i < size ; ++i){
        if(arr[i] < min_num)
        min_num = arr[i];
    }
    return min_num;
}
