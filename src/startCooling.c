#include"startCooling.h"
#include"tempChangeWaitDelay.h"
#include"checkTemperature.h"
#include"printTaskDoneMsg.h"
#include"printNewTempMsg.h"
#include<stdio.h>
#include<conio.h>

void startCooling (int dt, int rt)
{
  int flag = 1;
    do{
        tempChangeWaitDelay(2);
        int randomNumber = rand()%4;
        if((rt-randomNumber)>=dt){
            rt = rt-randomNumber;
            printNewTempMsg(rt);
        }
        flag = checkTemperature(dt,rt);

    }while(flag!=1);
    printTaskDoneMsg();
}
