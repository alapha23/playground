#include <stdio.h>

#define N (2*10)

void sort_deck(char shapes[], int numbers[], int num_cards)
{
  int iter = 1;
  int temp = 0;
  int key;

  for(; iter < num_cards; iter++) {
    key = numbers[iter];
    char key_c = shapes[iter];
    int k = iter-1;
    while(k >= 0 && numbers[k] >= key) {
      // ascii S > D, precedence D higher
      if(numbers[k]==key) { 
        if(shapes[k] < key_c) // numbers[k] > key
        {
          numbers[k +1] = numbers[k];
          shapes[k + 1] = shapes[k];
          k = k-1; 
        } else break;
      } else {
      numbers[k +1] = numbers[k];
      shapes[k + 1] = shapes[k];
      k = k-1;
      }
    }
    numbers[k+1] = key;
    shapes[k+1] = key_c;
  }
    

}

/* Do not touch below */
int main()
{
  int i;
  int num_cards;
  char shapes[N];
  int numbers[N];

  // Read number of cards
  scanf("%d", &num_cards);
  
  // Read sub-deck
  for (i = 0; i < num_cards; i++) {
    scanf(" %c%d", &shapes[i], &numbers[i]);
  }

  // Sort sub-deck
  sort_deck(shapes, numbers, num_cards);

  // print result
  for (i = 0; i < num_cards; i++) {
    printf("%c%d ", shapes[i], numbers[i]);
  }
  printf ("\n");

  return 0;
}
