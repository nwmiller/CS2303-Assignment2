/** file at.c
 * @author Mike Ciaraldi
 * @author Nathaniel Miller
 *
 * Program to demonstrate arrays in C. Fills arrays and prints them.
 */

#include "print_arrays.h"
#include <stdio.h>

#define SAMPLE_INT_ARRAY_SIZE (10)
#define DOUB_ARRAY_SIZE (10)

/** Main program for demonstrating arrays. It fills an array of ints
 * and an array of doubles, and prints them.
 *
 * @return 0, Indicating success.
 */

int main()
{
  int i; // Loop counter
  int a[SAMPLE_INT_ARRAY_SIZE]; // Initialize array for integers
  int j; /* count for double array loop */
  double b[DOUB_ARRAY_SIZE]; /* initialize array to be filled with doubles */

  // Fill the array with consecutive integers
  for (i = 0; i < SAMPLE_INT_ARRAY_SIZE; i++) {
     a[i] = i;
  }

  // Now print it out
  printf( "Ten consecutive integers:\n" );
  print_int_array(a, SAMPLE_INT_ARRAY_SIZE);


  /* Fill array with consecutive doubles */
  for ( j = 0; j < DOUB_ARRAY_SIZE; j++ ) {
    b[j] = j;
  }

  /* Print the array of doubles */
  printf( "Ten consecutive doubles:\n" ); /* label output */
  print_double_array( b, DOUB_ARRAY_SIZE ); /* print func call */
  

  return 0; // Success!
}
