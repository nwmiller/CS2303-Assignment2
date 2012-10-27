/** file print_arrays.c
 * @author Mike Ciaraldi
 * @author Nathaniel Miller
 *
 * Functions for printing arrays,
 * and processing user input.
 */

#include <stdio.h>

/** Print an array of ints, one per line.
 *
 * @param a Array to print
 * @param num_elements Number of elements in the array
 */

void print_int_array(int a[], int num_elements) {
  int i; // Loop counter

  for (i = 0; i < num_elements; i++) {
    printf("%d\n", a[i]);
  }
}

/** Take an array of doubles and print each double,
 * one per line.
 *
 * @param a Array being processed and printed.
 * @param num_elements Quantity of elements in array.
 */

void print_double_array(double b[], int num_elements) {
  int j; /* counter for loop */

  /* prints each element of the array until last element is processed */
  for ( j = 0; j < num_elements; j++ ) {
    printf( "%f\n", b[j] );
  }
}


/** Take in an array, the size of the array, and the maximum
 * valid input. Prompts and reads user input and stores values
 * into the array, then calls print function.
 *
 * @param c Array into which user inputs are added
 * @param array_size The size of the array c.
 * @param max_val The maximum valid input value allowed.
 *  
 * @return i Return counter value to be passed to print function.
*/

int input_array( int c[], int array_size, int max_val ) {

  int i; /* counter for loop */
  int value; /* store user input to be put into array */

  /* Prompt user input and read user input */
  printf( "Enter value, input negative # to end: " ); /* prompt for input */
  scanf( "%d", &value ); /* read input from user */

  /* Fill the array with user entered values,
   until the max size of the array is reached or neg # in entered */
  for ( i = 0; i < array_size && value >= 0; ) {
    /* Check for valid user input */
    if ( value <= max_val ) {
      c[i] = value; /* store input value into array */
      i++; /* advance to next element in array */
    }
    /* If invalid input in entered */
    else {
      printf( "Incorrect input. Values entered cannot be over 100.\n" );
    }
    
    /* Continue until the max size of array is reached */
    if ( i < array_size ) {
      printf( "Enter value, input negative # to end: " ); /* prompt input */
      scanf( "%d", &value ); /* read input */
    }
  } /* end for */
  
  /* Handles if any number of values are entered */
  if ( i != 0 ) {

    /* Call printing function to print out user entered values */
    printf( "The values entered are:\n" );
    print_int_array(c, i);
  }
  /* Handles if no values are entered */
  else {
    printf( "No values were entered. Please try again!\n" );
  }
  return i; /* counter value to be used by sorting function */

} /* end function input_array */


