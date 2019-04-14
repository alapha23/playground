#include <stdio.h>

#define N (2*10)

void sort_deck(char shapes[], int numbers[], int num_cards)
{
  /* Implement Here */
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
