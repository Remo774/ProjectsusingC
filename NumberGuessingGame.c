#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int n,guess,nguesses=1;
  srand(time(0));
  n = rand()%100+1;

  do
  {
    printf("Guess the number between 1 to 100 : ");
    scanf("%d",&guess);
    if(guess>n)
    {
      printf("Lower number please !\n");
    }
    else if (guess<n)
    {
      printf("Higher number please !\n");
    }
    else
    {
      printf("Yay you got it right in %d attempts!\n",nguesses);
    }
    nguesses++;
  
  } while (guess!=n);
  return 0;
}