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
printf("enter the number:");
scanf("%d",&a);
if(a>=16 && a<=35){
printf("%d is measured temp\n", a);
if(a==dtem)
/** One cycle is completed**/
{
printf("do u want change in temp:");
scanf("%s", &ans);
if(ans =='y')
{
    printf("enter the desired temp:");
    scanf("%d",&b);
    dtem=b;
    /*** Validating input ***/
    while(1)
    {
if(dtem>=16 && dtem<=35)
{
printf("%d is desired temp\n",dtem);
printf("the desiredtemp is changed"); /*** Change in temperature***/
break;
}
else
    {
        printf("enter the desiredtemp again:");
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



