/**
 * @file selectseason.c
 *        
 *
 */
#include <stdio.h>
#include<math.h>
int main()
{
int season_num,destemp,roomtemp;
printf("Enter season_num: ");
scanf("%d",&season_num);
switch(season_num)
{
    case 1:
    printf("Summer\n");
	       break;
	case 2:
	printf("winter\n");
	       break;
printf("Enter the destemp: ");
scanf("%d",&destemp);
printf("Enter the meatemp: ");
scanf("%d", &roomtemp);
return 0;
}
}
