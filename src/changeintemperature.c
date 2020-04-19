/**
 * @file changetemperature.c
 *        
 *
 */
#include <stdio.h>
#include<conio.h>
int main()
{
int a,b;
char ans;
int dtem= 30;
while(1){
printf("Please enter the roomtemp:");
scanf("%d",&a);
if(a>=16 && a<=35){
printf("%d is roomtemp\n", a);
if(a==dtem)
/** One cycle is completed**/
{

printf("Do you want change in temp: Enter \n 'y' for Yes \n 'n' for No\n");
scanf("%s", &ans);
if(ans =='y')
{
    printf("Please enter the desired temp:");
    scanf("%d",&b);
    dtem=b;
    /*** Validating input ***/
    while(1)
    {
if(dtem>=16 && dtem<=35)
{
printf("%d is desired temp\n",dtem);
printf("The desiredtemp is changed"); /*** Change in temperature***/
break;
}
else
    {
        printf("Please enter the desiredtemp again:");
        scanf("%d",&dtem);
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



