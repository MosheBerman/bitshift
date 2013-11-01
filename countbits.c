/**
 *	This program counts the number of bits in a number
 *	that are flipped on.
 *
 *	Created by Moshe Berman on 11/1/13
 *	Thanks to Ari Mermelstein for the algo.
 */

#include <stdio.h>
#include <math.h>

/** Prototypes */
int bitsIn(unsigned int x);

/** Entry point.*/
int main()
{

	int upperBound = pow(2,10);

	for(int i = 0; i <= upperBound; i++)
	{
		printf("There are %i bits flipped on in %i.\n",bitsIn(i), i);	
	}
}	

/** The counting function. */
int bitsIn(unsigned int x)
{
	int count = 0;

	while (x!= 0)
	{
		int last = x & 1;

		if (last)
		{
			count++;
		}
		x = x >> 1;
	}
	return count;
}

