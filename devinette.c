#include <stdio.h>

int num_secret=10;
int trouve = 0;
int num_u;
while (trouve == 0){
  scanf("Entrez Numéro : %d",&num_u);
  if (num_u==num_secret){
    trouve=1;
    printf("Célébration");
  }
}
int main() {
    printf("Hello World\n");
    return 0;
}
