/**
 * @file selectseason.c
 *        
 *
 */
#include <stdio.h>
#include<conio.h>
int main()
{
int destemp,roomtemp;
char season;
printf("Enter season: ");
scanf("%s",&season);
switch(season)
{
    case 's':
    printf("Summer\n");
	       break;
    case 'w':
    printf("winter\n");
	       break;
}
printf("Enter the destemp: ");
scanf("%d",&destemp);
printf("Enter the roomtemp: ");
scanf("%d", &roomtemp);
return 0;
}