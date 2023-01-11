#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0.0;

     printf("enter the number of minutes : \n");
     scanf("%d" ,&i);

     minutesInYear = 60 * 24 * 365;

    years =  (i/minutesInYear);
    days =  (i/ 60)/ 24;


    printf("You entered : %d\n", i);
    printf("Years : %.5f\n" ,years);
    printf("Days : %.2f", days);

    return 0;
}
