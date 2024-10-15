#include <stdio.h>

int main(void) {
int v[10], i = 0;

  v[0] = 1;
  for(; i < 10; i++){
    if(i != 0){
      v[i] = v[i - 1] + 2;
    }
    printf("Position %d = %d\n", i+1, v[i]);
    }

  return 0;
}
