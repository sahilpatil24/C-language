/*#include <stdio.h>

int main()

#define MONTHS 12
{
  int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int index;

  printf("Month :");
  scanf("%d", &index);

  for(int index = 0; index < MONTHS; index++)
  {
    printf("Month %d has %d days.\n" , index + 1, days[index]);
  }
  return 0;
}
*/

#include <stdio.h>

#define months 12

int main()
{
    int month;
    int days;

    printf("Enter the month :");
    scanf("%d" , &month);

    switch(month)
    {
case 1 :
        printf("This month has 31 days!\n");
        break;                                                       // {31,28,31,30,31,30,31,31,30,31,30,31};
case 2 :
        printf("This month has 28/29 days!\n");
        break;
case 3 :
        printf("This month has 31 days!\n");
        break;
case 4 :
        printf("This month has 30 days!\n");
        break;
case 5 :
        printf("This month has 31 days!\n");
        break;
case 6 :
        printf("This month has 30 days!\n");
        break;
case 7 :
        printf("This month has 31 days!\n");
        break;
case 8 :
        printf("This month has 31 days!\n");
        break;
case 9 :
        printf("This month has 30 days!\n");
        break;
case 10 :
        printf("This month has 31 days!\n");
        break;
case 11 :
        printf("This month has 30 days!\n");
        break;
case 12 :
        printf("This month has 31 days!\n");
        break;




    }

    return 0 ;
}











