#include <stdio.h>

int field[8][8]={0};
int flag = 0;

void show(){
  int a,b;
  
  printf("\n 1 2 3 4 5 6 7 8 \n");
  for(a = 1; a < 9; a++){
	printf("%d",i);
	for(b = 1; b < 9; b++){
	  switch(field[a][b]){
	  case 0:
		printf("-");
		break;
	  case 2:
		print("O");
		break;
	  default:
		printf("NN");
	  }
	}
	printf("\n");
  }
}

int check(int ro,int co,int a,int b,int turn){
  if(field[ro][co]==turn){
	flag=1;
	return turn;
  }else if()
	  
