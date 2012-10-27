/** file at3.c
 * @author Nathaniel Miller
 *
 * Program for generating and processing random integers.
 */

#include <stdio.h>

#define RAND_ARR_SIZE (10) /* define the size of the array */
#define RAND_MAX (15) /* define the max endpoint for the rand int generation */

/** Main program for random integer generation. Calls functions to generate
 * random integers, put them into an array, then sort and print the array.
 *
 *@return 0, Indicating success.
 */

int main(void)
{

  int rArr[RAND_ARR_SIZE] = { 0 }; /* intializes array of size RAND_ARR_SIZE */

  /* call randInt to generate random integer */
  randInt( RAND_MAX );

  /* call randFill to fill array with random ints */
  randFill( rArr, RAND_ARR_SIZE, RAND_MAX );


  return 0; /* termination success */

} /* end function main */
  
