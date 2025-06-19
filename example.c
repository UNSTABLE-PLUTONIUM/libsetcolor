#include "setcolor.h"

int main() {
  setcolor(bg, bright, yellow);
  printf("Hello");
  resetcolors();

  printf(", ");

  setcolor(fg, bright, red);
  printf("World!");
  resetcolors();
}
