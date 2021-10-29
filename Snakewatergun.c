#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char ,char);

int snakewatergun(char you, char comp)
{
  if(you == comp)
  {
    return 0;
  }
  else if((you == 's' && comp == 'w') || (you == 'w' && comp == 'g') || (you == 'g' && comp == 's'))
  {
    return 1;
  }
  else
  {
    return -1;
  }
}


int main()
{
  char you,comp;
  srand(time(0));
  int number = rand()%100 + 1;
  if(number<33)
  {
    comp ='s';
  }
  else if (number<66)
  {
    comp='w';
  }
  else
  {
    comp='g';
  }
  

  printf("Enter 's' for snake , 'g' for gun & 'w' for water : ");
  scanf("%c",&you);
  int result = snakewatergun(you,comp);
  if(result == 0)
  {
    printf("The Game is Drawn\n");
  }
  else if(result == 1)
  {
    printf("You win\n");
  }
  else
  {
    printf("You lose\n");
  }
  printf("You chose %c and Computer chose %c\n",you,comp);
  return 0;
}