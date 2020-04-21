/**
 * @file selectseason.c
 *        
 *
 */
#include <stdio.h>
#include<conio.h>
int main()
{
int destemp,roomtemp;     /*** dtemp=Desired Temperature,roomtemp=Room Temperature ***/
char season;
printf("Please select season:Enter \n 's' for Summer\n 'w' for Winter");
scanf("%s",&season);
switch(season) /*** selecting season ***/ 
{
    case 's':
    printf("Summer\n");
	       break;
    case 'w':
    printf("winter\n");
	       break;
}
/*** Giving desiredtemp and roomtemp ***/ 
printf(" Please enter temperatures between 16 and 32 degrees\n");
printf("Please enter the destemp: ");
scanf("%d",&destemp);
printf("Please enter the roomtemp: ");
scanf("%d", &roomtemp);
return 0;
}
