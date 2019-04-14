#include <stdio.h>
#include <math.h>

#define N 1024

double calculate_angle(double A[], double B[], int dim) 
{
  /* Implement Here */
}


/* Do not touch below */
int main()
{
  int i;
  int dimension;
  double vector_A[N];
  double vector_B[N];
  double angle;

  // Read Dimension
  scanf("%d", &dimension);

  // Read Vector A
  for (i = 0; i < dimension; i++) {
    scanf("%lf", &vector_A[i]);
  }
  
  // Read Vector B
  for (i = 0; i < dimension; i++) {
    scanf("%lf", &vector_B[i]);
  }

  // Calculate angle
  angle = calculate_angle(vector_A, vector_B, dimension);

  // Print angle
  printf("angle: %0.6f\n", angle);

  return 0;
}
