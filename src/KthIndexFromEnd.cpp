/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

#include<stdio.h>
char KthIndexFromEnd(char *str, int K)
{
	if (str == NULL || str[0] == '\0' || K<0)
		return '\0';
	int stringlen = 0;
	for (int i = 0; str[i] != '\0'; i++)stringlen++;/*calculating the length of the string*/
	return str[stringlen - (K + 1)];
}