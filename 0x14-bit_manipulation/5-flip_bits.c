#include "main.h"
/**
  * flip_bits - a function that returns the number of bits you would need to
  * flip to get from one number to another.
  * @n: unsigned long int.
  * @m: unsigned long int.
  * Return: The number of bits you would need to
  * flip to get from one number to another.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	n ^= m;
	while (n)
	{
		count += n & 1;
		n = n >> 1;
	}
	return (count);
}
