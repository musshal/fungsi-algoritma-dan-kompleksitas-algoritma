#include <stdio.h>
#include <math.h>

/* function membulatkan bilangan masukannya */
/* i.s.: bilangan float dengan range (-100.000 <= A <= 100.00) */
/* f.s.: hasil bilangan a tersebut yang berupa bilangan integer */
int pembulatan(float a) {
  /* kamus lokal */
  
  /* algoritma */
  return ceil(a);
}

/* driver */
int main() {
  /* kamus global */
  float a;

  /* algoritma */
  printf("Masukan bilangan float: ");
  scanf("%f", &a);

  printf("%d", pembulatan(a));

  return 0;
}