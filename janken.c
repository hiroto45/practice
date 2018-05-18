#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
  const int ROCK = 1;
  const int SCISSORS = 2;
  const int PAPER = 3;
  const int FALSE = 0;

  printf("hallo!\n Let's play janken!\n");
  printf("rock=1 scissors=2 paper=3 \n\n");

  srand((unsigned int)time(NULL));

  while (1){
	int user_hand;

	do {
	  printf("Input your hand!\n > ");
	  char input[9];
	  scanf("%s",input);

	  user_hand = FALSE;
	  if (!strcmp("1",input)) user_hand = ROCK;
	  else if (!strcmp("2",input)) user_hand = SCISSORS;
	  else if (!strcmp("3",input)) user_hand = PAPER;
	} while (user_hand == FALSE);

	int enemy_hand = rand() %3 + 1;

	int judge = (user_hand - enemy_hand + 3) %3;
	if (judge == 0) puts("[Draw!]\n");
	else if (judge == 1) puts("[Lose]\n");
	else if (judge == 2) puts("[Win]\n");
  }

  return 0;
}

