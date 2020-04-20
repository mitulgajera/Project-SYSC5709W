/**
 * @file changetemperature.c
 *        
 *
 */
#include <stdio.h>
#include<conio.h>
int main()
{
int dtemp,roomtemp;
char ans;
int dtemp= 30;
while(1){
printf("Please enter the roomtemp:");
scanf("%d",&roomtemp);
if(roomtemp>=16 && roomtemp<=35){
printf("%d is roomtemp\n", roomtemp);
if(roomtemp==dtemp)
/** Cycle is completed that is dtemp=roomtemp**/
{

printf("Do you want change in temp: Enter \n 'y' for Yes \n 'n' for No\n");
scanf("%s", &ans);
if(ans =='y')
{
    printf("Please enter the desired temp:");
    scanf("%d",&dtemp);
    /*** Validating input ***/
    while(1)
    {
if(dtemp>=16 && dtemp<=35)
{
printf("%d is desired temp\n",dtemp);
printf("The desiredtemp is changed"); /*** Change in temperature***/
break;
}
else
    {
        printf("Please enter the desiredtemp again:");
        scanf("%d",&dtemp);
    }
    }

}
else(ans=='n');
    {
    break;
}
}
    else{
        continue;
    }
}
else
{
continue;
}
}
}



