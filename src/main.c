#include"../include/validateInput.h"

#include<stdio.h>

#include<stdlib.h>

/* Main function for calling all other functions */

int
main ()
{
  int initializationState = 0, desiredTemp, roomTemp;
  int i = 0;
  int selectedSeason = -1;

  printf ("Inorder to start the simulation we need few inputs from your end");

  printf
    ("Please select weather condition: enter \n1 for Winter\n2 for Summer")
    scanf ("%d", &selectedSeason);


  do
    {
      printf ("\nPlease enter room temperature ");
      scanf ("%d", &roomTemp);
      if (validateInput (roomTemp) == 1)
	{
	  initializationState = 2;
	  break;
	}
      else
	{
	  printf ("\nPlease enter temperature between 16 to 36 degrees");
	}
    }
  while (1);
  do
    {
      printf ("\nPlease enter desired temperature ");
      scanf ("%d", &desiredTemp);
      if ((selectedSeason == 1 && desiredTemp < roomTemp)
	  || (selectedSeason == 2 && desiredTemp > roomTemp))
	{
	  printf ("\nSeason is not suitable to start the system");
	}
      else
	{

	  if (validateInput (desiredTemp) == 1)
	    {
	      initializationState = 1;
	      break;
	    }
	  else
	    {
	      printf ("\nPlease enter temperature between 16 to 36 degrees");
	    }
	}
    }
  while (1);

  return 0;
}