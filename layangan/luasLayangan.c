#include <stdio.h>

/* function menentukan luas layangan */
/* i.s.: bilangan d1 dan d2 yang merupakan diagonal 1 dan diagonal 2 */
/* f.s.: luas layangan */
int luasLayangan(int d1, int d2) {
  /* kamus lokal */
  
  /* algoritma */
  return (d1 * d2 / 2);
}

/* driver */
int main() {
  /* kamus global */
  int d1, d2;

  /* algoritma */
  printf("Masukan diagonal 1: ");
  scanf("%d", &d1);

  printf("Masukan diagonal 2: ");
  scanf("%d", &d2);

  printf("%d", luasLayangan(d1, d2));

  return 0;
}