/**
 * @file validateInput.c
 *        
 *
 */
#include <stdio.h>
#include <conio.h>
int main()
{
     /**
   * Validate Input temperature.
   * [input] Input temperature
  */
int dtemp;   /*** dtemp=Desired Temperature ***/
while(1){
printf(" Please enter the desiredtemp: ");
scanf("%d",&dtemp);
if(dtemp>=16 && dtemp<=35){
printf("%d desired temp", dtemp);
break;
}
else
    {
        continue;
    }
    }
}
