/** file array_sort.c
 * @author Nathaniel Miller
 *
 * Functions for sorting int arrays into ascending order,
 * as well as generating random integers and filling an
 * array with random integers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** Takes an array of integers, and the array size.
    Sorts the array using the bubble sort algorithm
    into ascending order. Sorts array in place.

    @param intArr Array to be sorted.
    @param array_size The size of the array intArr.
*/

void sortArr(int intArr[], int array_size ) {

  int p; /* counter for sort passes */
  int c; /* counter for sort comparisons */
  int store; /* stores array elements being swapped */

  /* controls the sort passes */
  for ( p = 1; p < array_size; p++ ) {
    
    /* controls the sort comparisons each sort pass */
    for ( c = 0; c < array_size - 1; c++ ) {
      
      /* analyzes adjacent array elements, and if first element
	 is bigger than the second, the elements are swapped */
      if ( intArr[ c ] > intArr[c + 1] ) {
	store = intArr[c]; /* stores first element in pair */
	intArr[c] = intArr[c + 1]; /* swaps second element into element c */
	intArr[c + 1] = store; /* replaces element c + 1 with stored element */
      } /* end if */
    } /* end for */
  } /* end outer for */

  /* Calls print function, which prints sorted array */
  printf( "The values sorted in ascending order:\n" ); /* label output */
  print_int_array(intArr, array_size); /* call print function */

} /* end function sortArr */


/** Takes in a specified maximum and generates
 * pseudo-random integers within the range specified.
 * Generator is seeded in randFill,
 * in order to produce more random integers.
 *
 * @param maximum The maximum range endpoint for generator to pick integers.
 *
 * @return value The random integer generated to be used in randFill.
 */

int randInt( int maximum ) {

  int i; /* loop counter */
  int value; /* stores randomly generated integer */
 
  /* generates a random integer from 0 to maximum value, inclusive */
  value = ( rand() % (maximum + 1) );

  return value; /* returns the random integer */

} /* end function randInt */


/** Takes in an array, the size of the array, and a specified maximum,
 * and fills the array with randomly generated integers, produced
 * by randInt function. When the array  is full, the array is printed,
 * then sorted, then printed again.
 *
 * @param r Array to be filled with random integers.
 * @param array_size The defined size of the array.
 * @param max The specified maximum value in the random generator's range.
 */

void randFill( int r[], int array_size, int max ) {

  int j; /* loop counter */

  /* seed the random integer generator, to produce more random values */
  srand(time(NULL));

  /* fills the array with randomly generated ints until the array is full */
  for ( j = 0; j < array_size; ) {
    r[j] = randInt(max); /* set element j of array to randomly gen. int */
    j++; /* advance to next element in array */
  } /* end for */

  printf( "The array of random integers:\n" ); /* label output */

  print_int_array( r, array_size ); /* prints randomly generated int array */
  sortArr( r, array_size ); /* sorts the array, and prints it */

} /* end function randFill */
