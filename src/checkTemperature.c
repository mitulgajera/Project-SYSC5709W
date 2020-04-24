#include<stdio.h>
#include<conio.h>
#include"checkTemperature.h"

int checkTemperature(int dt, int rt)
{
    if (dt == rt)
    {
        return 1;
    }
    return 0;
}
