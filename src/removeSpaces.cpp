/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

#include<stdlib.h>
char removeSpaces(char *str)
{
	if (str == '\0' || str == NULL)
		return '\0';
	int len = 0, count = 0;
	for (int i = 0; str[i]; i++)len++;
	for (int i = 0; i<len; i++)
		if (str[i] != ' ')/*in this step we are ignoring the spaces in a string*/
		{
			str[count] = str[i];
			count++;
		}
	str[count] = '\0';
}