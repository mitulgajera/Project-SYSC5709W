#include<stdio.h>
#include<conio.h>
#include"needHeatOrCold.h"
#include"printTaskDoneMsg.h"
#include"startCooling.h"
#include"startHeating.h"

void needHeatOrCold(int season, int rTemp, int dTemp)
{

    if ((season == 1 && dTemp < rTemp) || (season == 2 && dTemp > rTemp))
    {
        printf("\nSeason is not suitable to start the system: \n");
    }
    else if (rTemp == dTemp)
    {
        printTaskDoneMsg();
    }
    else if (dTemp > rTemp)
    {
        startHeating(dTemp, rTemp);
    }
    else if (dTemp < rTemp)
    {
        startCooling(dTemp, rTemp);
    }
}
