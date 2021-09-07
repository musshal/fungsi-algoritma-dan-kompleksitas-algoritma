#include <stdio.h>
#include <string.h>

/* procedure membalikkan suatu kata */
/* i.s.: string s dengan panjang string kurang dari 100 */
/* f.s.: string s' yang merupakan pengejaan terbalik dari string s */
/* driver */
int main() {
  /* kamus lokal */
  char word[100];
  int mulai = 0,akhir = 0;

  /* algoritma */
  printf("Masukan kata: ");
  scanf("%s", word);

  printf("%s", strrev(word));

  return 0;
}