#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/* procedure: mencari tahu mahasiswa mana yang menyalin tugas temannya */
/* i.s.: 2 buah string, s1 dan s2 dengan panjang string s1 sama dengan */
/*       panjang string s2 */
/* f.s.: print 'ya' jika s2 hasil salinan s1 dan print 'tidak' jika s2 */
/*       bukan merupakan hasil salinan s1 */
void isCopyPaste(char s1[100], char s2[100]) {
  /* kamus lokal */
  int i, value;

  /* algoritma */
  for (i = 0; i < strlen(s1); i++) {
    s1[i] = tolower(s1[i]);
  }

  for (i = 0; i < strlen(s2); i++) {
    s2[i] = tolower(s2[i]);
  }

  value = strcmp(s1, s2);

  if (value == 0) {
    printf("Ya");
  } else {
    printf("Tidak");
  }
}

/* driver */
int main() {
  /* kamus lokal */
  char s1[100];
  char s2[100];
  int i;

  /* algoritma */
  printf("Masukan string s1: ");
  scanf("%s", s1);

  printf("Masukan string s2: ");
  scanf("%s", s2);

  isCopyPaste(s1, s2);

  return 0;
}