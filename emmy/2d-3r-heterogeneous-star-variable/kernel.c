#ifndef min
#define min( a, b ) ( ((a) < (b)) ? (a) : (b) )
#endif
void kernel_loop(double *a, double *b, double *W, int M, int N)
{
  #pragma omp parallel for schedule(runtime)
  for (int j = 3; j < (M - 3); j++)
  {
    for (int i = 3; i < (N - 3); i++)
    {
      b[i + (j * N)] = ((((((((((((W[(0 + (i * 13)) + (j * (13 * N))] * a[i + (j * N)]) + (W[(1 + (i * 13)) + (j * (13 * N))] * a[(i - 1) + (j * N)])) + (W[(2 + (i * 13)) + (j * (13 * N))] * a[(i + 1) + (j * N)])) + (W[(3 + (i * 13)) + (j * (13 * N))] * a[i + ((j - 1) * N)])) + (W[(4 + (i * 13)) + (j * (13 * N))] * a[i + ((j + 1) * N)])) + (W[(5 + (i * 13)) + (j * (13 * N))] * a[(i - 2) + (j * N)])) + (W[(6 + (i * 13)) + (j * (13 * N))] * a[(i + 2) + (j * N)])) + (W[(7 + (i * 13)) + (j * (13 * N))] * a[i + ((j - 2) * N)])) + (W[(8 + (i * 13)) + (j * (13 * N))] * a[i + ((j + 2) * N)])) + (W[(9 + (i * 13)) + (j * (13 * N))] * a[(i - 3) + (j * N)])) + (W[(10 + (i * 13)) + (j * (13 * N))] * a[(i + 3) + (j * N)])) + (W[(11 + (i * 13)) + (j * (13 * N))] * a[i + ((j - 3) * N)])) + (W[(12 + (i * 13)) + (j * (13 * N))] * a[i + ((j + 3) * N)]);
    }

  }

}

