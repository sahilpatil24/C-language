#include <stdio.h>

int main(void)

{

  int n,i,fact,j;

  printf("Enter the number : \n");
  scanf("%d", &n);

  printf("prime numbers are : \n");

  for(i = 3; i <= n; i++)
  {

      fact = 0;
    for(j = 1; j <= i; j++)
    {
      if(i%j==0)
      {
        fact++;
      }

    }
    if(fact == 2)
    printf("%d  ", i);
  }



  return 0;
}
