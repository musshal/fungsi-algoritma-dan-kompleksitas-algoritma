#include <stdio.h>

/* function menjumlahkan bilangan dari 1 sampai bilangan ke-n */
/* i.s.: bilangan positif n */
/* f.s.: hasil penjumlahan 1 sampai bilangan ke-n */

int jumlahBilanganSampaiKeN(int n) {
  /* kamus lokal */
  int i, sum = 0;

  /* algoritma */
  for (i = 1; i <= n; i++) {
    sum += i;
  }

  return sum;
}

/* driver */
int main() {
  /* kamus global */
  int n;

  /* algoritma */
  printf("Masukan bilangan positif: ");
  scanf("%d", &n);

  if (n > 0) {
    printf("%d", jumlahBilanganSampaiKeN(n));
  } else {
    printf("Masukan tidak valid");
  }

  return 0;
}