#include <stdio.h>
#include <conio.h>
#include"heatingSystem.h"
#include"validateIntegerInput.h"
#include"needHeatOrCold.h"

void heatingSystem()
{

    int selectedSeason = -1;
    int roomTemp = 0;
    int desiredTemp = 0;
    printf("Please select weather condition: enter \n1 for Winter: \n2 for Summer: ");
    selectedSeason = validateIntegerInput(1, 2);
    printf("\nPlease enter room temperature(in Celsius): ");
    roomTemp = validateIntegerInput(16, 36);
    printf("\nPlease enter desired temperature(in Celsius): ");
    desiredTemp = validateIntegerInput(16, 36);

    needHeatOrCold(selectedSeason, roomTemp, desiredTemp);
}
