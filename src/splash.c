#include <stdio.h>
#include <stdlib.h>

void showSplash() {
  char ch;
  FILE *splashFp;

  splashFp = fopen("/home/samiur/Apps/ParqKit/assets/splash.txt", "r"); // read mode
  if (splashFp == NULL) {
    perror("Error while opening splash screen	.\n");
    exit(1);
  }

  while ((ch = fgetc(splashFp)) != EOF)
    printf("%c", ch);

  fclose(splashFp);
}
