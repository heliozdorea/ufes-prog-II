#include <stdio.h>

int main() {
  int linha;

  scanf("%d", &linha);

  if (!linha)
    return 0;

  printf("1\n");

  if (linha == 1)
    return 0;

  int n = 2, nf = 1, lat = 2;
  int total = linha * (linha + 1) / 2;

  for (int i = 1; i < total; i++) {

    printf("%d", n);

    if (n == nf + lat) {
      printf("\n");
      nf = n;
      lat++;
    } else {
      printf(" ");
    }

    n++;
  }

  return 0;
}