#include <math.h>
#include <stdio.h>

int main() // entrada x e y e raio do alvo e x e y e raio do disparo.
{
  float xa, ya, xd, yd, ra, rd;

  scanf("%f %f %f %f %f %f", &xa, &ya, &ra, &xd, &yd, &rd);

  float d;

  d = sqrt((xa - xd) * (xa - xd) + (ya - yd) * (ya - yd));

  if (d > ra + rd) 
  {
    printf("ERROU");
  } else 
  {
    printf("ACERTOU");
  }
  return 0;
}