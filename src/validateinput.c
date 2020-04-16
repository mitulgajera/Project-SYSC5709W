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
int a;
while(1){
printf("enter the number");
scanf("%d",&a);
if(a>=16 && a<=35){
printf("%d desired temp", a);
break;
}
else
    {
        continue;
    }
    }
}
