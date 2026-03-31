#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int livro[n];

  for (int i = 0; i < n; i++) 
  {
    scanf("%d", &livro[i]);
  }

  for (int j = 0; j < n; j++) 
  {
    int f = 0;

    for (int i = 0; i < n; i++)
    {
      if (i != j && livro[i] == livro[j]) {
        f = 1;
      }
    }
    if (!f) 
    {
      printf("%d ", livro[j]);
    }
  }
  return 0;
}