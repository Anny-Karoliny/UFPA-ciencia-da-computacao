#include <omp.h>
#include <stdio.h>

int main() {
  {
    omp_set_num_threads(4);
    #pragma omp parallel
    printf("haha\n");
  }
  return 0;
}
