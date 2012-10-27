/** file at2.c
 * @author Michael Ciaraldi
 * @author Nathaniel Miller
 *
 * Main program which calls other functions which operate on and process
 * the array defined in this program.
 */

#include "print_arrays.h"
#include "sort_rand.h"
#include <stdio.h>

#define INPUT_SIZE (10) /* define size of array to 10 */
#define MAX_VAL (100) /* define maximum valid input */

/** Main program. It provides the user with instructions,
 * and calls functions to operate on defined array --
 * processing input and sorting.
 *
 * @return 0, Indicating success.
 */

int main()
{
  int c[INPUT_SIZE] = { 0 }; /* initializes array c of size INPUT_SIZE,
				and sets values to 0 */
  int k; /* store the counter value returned from input_array */
  

  /* prints instructions to the user */
  printf( "Welcome!\n" );
  printf( "When prompted, enter each number consecutively.\n" );
  printf( "Enter up to 10 numbers, or to end before 10, \n" );
  printf( "input a negative number (i.e. -1) to print your inputs.\n");

  /* call function input_array, which processes user input */
  k = input_array(c, INPUT_SIZE, MAX_VAL); /* store return value in k */

  /* call function sortArr, which sorts/prints the array in ascending order */
  sortArr(c, k);

  return 0; /* termination success */
} /* end function main */
