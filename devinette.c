#include <stdio.h>


int main() {
  int num_secret=10;
  int num_u;

  if (num_u < num_secret){
    printf("Le nombre à deviner est plus grand");
  }else if (num_u > num_secret){
    printf("Le nombre à deviner est plus petit");
  }
    return 0;
}
