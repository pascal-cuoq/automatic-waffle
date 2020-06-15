#include <stdint.h>
#include <stdio.h>

char c[100];

int main(void) {
  int a = (uintptr_t)c & 7;
  printf("alignment of c: %d\n", a);
}
