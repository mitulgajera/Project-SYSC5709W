/**
 * @file validateInput.c
 *        
 *
 */
#include <stdio.h>

int main()
{
     /**
   * Validate Input temperature.
   * [input] Input temperature
  */
int dtemp;
while(1){
printf("enter the number");
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
