
/**
 * @file checkTemperature.c
 *        
 *
 */

#include<stdio.h>

#include<conio.h>

#include <stdlib.h>

 /**
   * Check temperature of the room.
   * [dt] Desired temperature
   * [rt] Room temperature
  */

int
checkTemperature (int dt, int rt)
{
  if (dt == rt)
    {
      return 1;
    }
  return 0;
}