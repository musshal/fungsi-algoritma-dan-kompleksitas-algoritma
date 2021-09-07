#include <stdio.h>

/* procedure: mengelompokkan sebuah bilangan menjadi 2 kelompok yaitu bilangan genap dan bilangan */
/*            ganjil */
/* i.s.: bilangan (1 <= n <= 1000 */
/* f.s.: ganjil atau genap yang berupa string */
void isGenap(int n) {
  /* kamus lokal */

  /* algoritma */
  if (n >= 1 && n <= 1000) {
    if (n % 2 == 0) {
      printf("GENAP");
    } else {
      printf("GANJIL");
    }
  }
}

/* driver */
int main() {
  /* kamus global */
  int n;

  /* algoritma */
  printf("Masukan bilangan antara 1-1000: ");
  scanf("%d", &n);

  isGenap(n);

  return 0;
}