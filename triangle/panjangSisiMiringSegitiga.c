#include <stdio.h>
#include <math.h>

/* procedure: menghitung panjang sisi miring suatu segitiga siku-siku dan */
/*            diketahui panjang dan tinggi segitiga */
/* i.s.: a dan b dimana a dan b adalah bilangan integer dengan range
   (0 <= a <= 10) dan (0 <= B <= 10) */
/* f.s.: bilangan desimal dengan 2 angka di belakang koma */
void panjangSisiMiringSegitiga(int a, int b) {
  /* kamus lokal */
  double c;

  /* algoritma */
  a = pow(a, 2);
  b = pow(b, 2);
  c = a + b;
  c = sqrt(c);

  printf("%.2f", c);
}

/* driver */
int main() {
  /* kamus global */
  int a, b;

  /* algoritma */
  printf("Masukan bilangan a (0 <= a <= 10): ");
  scanf("%d", &a);

  printf("Masukan bilangan b (0 <= b <= 10): ");
  scanf("%d", &b);

  if ((a >= 0 && a <= 10) && (b >= 0 && b <= 10)) {
    panjangSisiMiringSegitiga(a, b);
  } else {
    printf("Masukan tidak valid");
  }

  return 0;
}