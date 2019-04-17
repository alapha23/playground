#include <stdio.h>
#define N 1024

// This function returns a number between 0 and 31.
int classify(int x);

void map(int numbers[], int size, int classes[]) {
  int temp;
  int c = 0;
  while(c < size)
  {
    temp = classify(numbers[c]);
    classes[temp] = classes[temp] +1;
    c++;
  }
}


/* 
 * Do not touch below 
 */
int main()
{
  int i;
  int size;
  int total;
  int numbers[N];
  int classes[32] = {0};

  // Read array size
  scanf("%d", &size);

  // Read numbers
  for (i = 0; i < size; i++) {
    scanf("%d", &numbers[i]);
  }

  // Map/Reduce
  map(numbers, size, classes);

  // Print result
  for (i = 0; i < 32; i++)
    printf("%02d:%02d\n", i, classes[i]);

  return 0;
}
