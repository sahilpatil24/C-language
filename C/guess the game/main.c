#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int  try = -1, tries_remain = 5;
    time_t t;

    srand((unsigned) time(&t));
    
    int randomnumber = rand() % 21;

    printf("This is a guessing game.\n I have a taken a random number from zero to 20 and you have to guess it.\n");

    while(tries_remain >= 0)
    {
        printf("You have %d tries to guess this number \n Your guess : ", tries_remain);
        scanf("%d" , &try);
        if (try == randomnumber) {
            printf("\nYour guess was correct. \n Congratulations !");
            break;
        }
        else {
                if (try > randomnumber)
                {

                    printf("Your guess was too high\n");
                }
                else
                    printf("your guess was too low");

            printf("Your guess was wrong!\n You have %d tries left.", tries_remain);
            tries_remain--;

        }
    }

    if (tries_remain == -1)
        printf("The number was %d\n" , randomnumber);
        printf("GAME OVER!");

}
