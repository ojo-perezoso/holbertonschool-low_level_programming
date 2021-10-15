#include "main.h"
#include <stdio.h>
/**
 * _strcmp - takes two strings and compares the two
 * if string_01 > string_02 return positive int
 * if string_02 > string_01 return negative int
 * else return 0
 *
 * @s1: string_01
 * @s2: string_02
 *
 * Return: positive or negative int
 */
int _strcmp(char *s1, char *s2)
{
	int res, pos; /*value_s1, value_s2*/

	res = 0;
	for (pos = 0; s1[pos] != 0 && s2[pos] != 0; pos++)
	{
		if (s1[pos] > s2[pos])
		{
			res = s1[pos] - s2[pos];
			break;
		}
		else if (s2[pos] > s1[pos])
			res = (s2[pos] - s1[pos]) * -1;
			break;

	}

	return (res);
}