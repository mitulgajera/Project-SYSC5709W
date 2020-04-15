
/**
 * @file delay.c
 *        
 *
 */

#include<stdio.h>

#include<conio.h>

#include <time.h>

#include <stdlib.h>

 /**
     * Add Delay before changing the temperature
     * [number_of_seconds] Seconds of delay
    */

void
delay (int number_of_seconds)
{
  // Converting time into milli_seconds 
  int milli_seconds = 1000 * number_of_seconds;

  // Storing start time 
  clock_t start_time = clock ();

  // looping till required time is not achieved 
  while (clock () < start_time + milli_seconds);
}