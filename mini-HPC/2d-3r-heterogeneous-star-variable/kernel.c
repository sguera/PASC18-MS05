#ifndef min
#define min( a, b ) ( ((a) < (b)) ? (a) : (b) )
#endif
void kernel_loop(double *a, double *b, double c0, double c1, int M, int N)
{
  #pragma omp parallel for schedule(runtime)
  for (int j = 1; j < (M - 1); j++)
  {
    for (int i = 1; i < (N - 1); i++)
    {
      b[i + (j * N)] = (c0 * a[i + (j * N)]) + (c1 * ((a[(i - 1) + (j * N)] + a[(i + 1) + (j * N)]) + (a[i + ((j - 1) * N)] + a[i + ((j + 1) * N)])));
    }

  }

}

