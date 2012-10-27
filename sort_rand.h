/** File sort_rand.c
 * @author Nathaniel Miller
 *
 * Header file for functions:
 * Sort arrays into ascending order;
 * Generate random integers;
 * Fill an array with random integers and print array.
 */

#ifndef SORT_RAND_H
#define SORT_RAND_H

/* function prototypes */

void sortArr( int intArr[], int array_size );

int randInt( int maximum );

void randFill( int r[], int array_size, int max );


#endif
