#include<stdio.h>
#include "calculator.h"
int main ()
{
    int result = calculateSumOfThree(2,2,1);
    if (result == 5)
    {
        printf("Working!");
    }
    else
    {
        printf("Not Working :( ");
    }
}