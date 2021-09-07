#include <stdio.h>

/* procedure: menampilkan kalimat "aku cinta asa" ke layar sebanyak jumlah yang ia inginkan atau */
/*            "aku benci asa apabila bilangannya negatif" */
/* i.s.: bilangan integer n */
/* f.s.: n baris kalimat "aku cinta asa" */
void isCintaAsa(int n) {
  /* kamus lokal */
  int i;
  
  /* algoritma */
  if (n > 0) {
    for (i = 1; i <= n; i++) {
      printf("Aku Cinta ASA\n");
    }
  } else if (n < 0) {
    printf("Aku Benci ASA\n");
  } else {
    printf("Masukan tidak valid");
  }
}

/* driver */
int main() {
  /* kamus global */
  int n, i;

  /* algoritma */
  printf("Masukan bilangan: ");
  scanf("%d", &n);

  isCintaAsa(n);

  return 0;
}