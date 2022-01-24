#include <stdlib.h>
#include <stdio.h>

int count, success;

int main(void) {
  if (malloc(1))
    success++, printf("allocated 1 at step %d\n", count);
  else
    printf("noallocat 1 at step %d\n", count);
  count++;
  if (malloc(2))
    success++, printf("allocated 2 at step %d, %d successes\n", count, success);
  else
    printf("noallocat 2 at step %d, %d successes\n", count, success);
  count++;
  if (malloc(3))
    success++, printf("allocated 3 at step %d, %d successes\n", count, success);
  else
    printf("noallocat 3 at step %d, %d successes\n", count, success);
}
