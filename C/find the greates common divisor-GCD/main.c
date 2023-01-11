#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int get_num()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    return a;
}

void GCD(int x, int y)
{
    int i;
    int result = 0;

    for(i = 1; i <= x && i <= y; ++i)
    {
        if(x % i == 0 && y % i == 0)
        result = i;
    }

    printf("\nThe GCD of two numbers %d and %d is %d",x,y,result);
}


int main()
{
    //clrscr();
    int a = get_num();
    int b = get_num();
    GCD(a, b);
    getch();
    return 0;
}
