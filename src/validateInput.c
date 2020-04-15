
/**
 * @file validateInput.c
 *        
 *
 */

#include<stdio.h>

#include<conio.h>


 /**
   * Validate Input temperature.
   * [input] Input temperature
  */

int
validateInput (int input, int selectedSeason)
{
  if (input < 16 || input > 36)
    {
      return 0;
    }
  return 1;
}