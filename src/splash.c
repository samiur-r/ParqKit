#include <stdio.h>

#include <stdlib.h>

void showSplash() {
  char ch;
  FILE * fp;

  fp = fopen("/home/samiur/Apps/ParqKit/assets/splash.txt", "r"); // read mode

  if (fp == NULL) {
    perror("Error while opening splash screen	.\n");
    exit(EXIT_FAILURE);
  }

  while ((ch = fgetc(fp)) != EOF)
    printf("%c", ch);

  fclose(fp);
}
