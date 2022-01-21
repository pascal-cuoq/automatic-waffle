#include <stdlib.h>
#include <stdio.h>

int count;

int main(void) {
  if (malloc(1))
    printf("allocated 1 at step %d\n", count);
  else
    printf("noallocat 1 at step %d\n", count);
  count++;
  if (malloc(2))
    printf("allocated 2 at step %d\n", count);
  else
    printf("noallocat 2 at step %d\n", count);
  count++;
  if (malloc(3))
    printf("allocated 3 at step %d\n", count);
  else
    printf("noallocat 3 at step %d\n", count);
}
