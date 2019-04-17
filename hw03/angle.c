#include <stdio.h>
#include <math.h>

#define N 1024

double calculate_angle(double A[], double B[], int dim) 
{
  double dot_product = 0.0;
  double mod_A = 0.0;
  double mod_B = 0.0;
  double mod_A_B = 0.0;
  double radian = 0.0;
  double degree = 0.0;
  int iter = dim-1;

  for(; iter >= 0; iter--) {
    dot_product += A[iter] * B[iter];
  }
  for(; iter < dim; iter++) {
    mod_A += A[iter] * A[iter];
  }
  mod_A = sqrt(mod_A);
  for(; iter >=0; iter--) {
    mod_B += B[iter] * B[iter];
  }
  mod_B = sqrt(mod_B);

//  printf("cos(Theta) = %f\n", dot_product / (mod_A * mod_B));
  radian = acos(dot_product / (mod_A * mod_B));
  degree = 180*(radian / M_PI);
  if(0>degree) degree = -degree;
  if(180<degree) degree = 360 - degree;
  return degree;
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
