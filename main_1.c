#include <stdio.h>
#include <conio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <stdlib.h>
#include <ctype.h>
#include"checkTemperature.h"
#include"heatingSystem.h"
#include"needHeatOrCold.h"
#include"printNewTempMsg.h"
#include"printTaskDoneMsg.h"
#include"startCooling.h"
#include"startHeating.h"
#include"tempChangeWaitDelay.h"
#include"validateIntegerInput.h"

int main()
{

    char choice, ch;
    printf("Inorder to start the simulation we need few inputs from your end: \n");
    do
    {
        heatingSystem();
       // if (choice != NULL)
        //{
            while ((ch = getchar()) != '\n' && ch != EOF);
        //}
        printf("\nWould you like to change temprature: \nY/y --> for yes OR\nPress Any other Key to turn off the system: ");
    } while (scanf("%c", &choice) != 1 || (choice == 'Y' || choice == 'y'));

    return 0;
}
