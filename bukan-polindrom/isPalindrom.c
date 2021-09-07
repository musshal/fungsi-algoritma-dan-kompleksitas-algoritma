#include <stdio.h>
#include <string.h>

/* procedure: membedakan string yang bukan palindrom dan string yang */
/*            merupakan palindrom */
/* i.s.: baris pertama berisi bilangan n */
/*       dilanjutkan n baris yang berisi 1 buah string */
/* f.s.: terdiri dari n baris yang merupakan jawaban dari tiap string. */
/*       print 'ya' jika string bukan merupakan palindrom dan print 'tidak */
/*       jika string merupakan palindrom */
void isPalindrom(char str[]) {
  /* kamus lokal */
  int dariKiri = 0;
  int dariKanan = strlen(str) - 1;

  /* algoritma */
  while (dariKanan > dariKiri) {
    if (str[dariKiri++] != str[dariKanan--]) {
      printf("Ya\n");
      return;
    }
  }
  
  printf("Tidak\n");
}

/* driver */
int main() {
  /* kamus global */
  int N, i;

  /* algoritma */
  printf("Masukan jumlah baris string: ");
  scanf("%d", &N);

  char str[N][100];

  for (i = 0; i <= N-1; i++) {
    printf("Masukan string ke-%d: ", i);
    scanf("%s", str[i]);
  }

  for (i = 0; i <= N-1; i++) {
    isPalindrom(str[i]);
  }

  return 0;
}