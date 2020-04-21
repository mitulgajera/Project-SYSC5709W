
/**
 * @file startHeating.c
 *        
 *
 */

#include"../include/delay.h"

#include"../include/checkTemperature.h"

#include<stdio.h>

#include<conio.h>


   /**
   * Start Heating the room to achieve desired temperature.
   * [dt] Desired temperature
   * [rt] Room temperature
  */

void
startHeating (int dt, int rt)
{
  int randomNumber;
  do
    {
      delay (5);
      do
	{
	  randomNumber = rand () % 4;
	  if ((rt + randomNumber) <= dt)
	    {
	      break;
	    }
	}
      while (1);
      rt = rt + randomNumber;
      printf ("\nNew room temperature is %d", rt);
      if (checkTemperature (dt, rt) == 1)
	{
	  achieved = 1;
	  break;
	}
    }
  while (1);
}