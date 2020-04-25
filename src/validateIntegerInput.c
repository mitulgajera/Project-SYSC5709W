#include <stdio.h>
#include <conio.h>
#include"validateintegerInput.h"

int validateIntegerInput(int minPossible, int maxPossible)
{
    int input;
    char ch;

    while (scanf("%d", &input) != 1 || (input < minPossible || input > maxPossible))
    {
        while ((ch = getchar()) != '\n')
            ;
        printf("\nEnter Valid input. Input Must be between[%d, %d](inclusive): ", minPossible, maxPossible);
    }
    return input;
}
