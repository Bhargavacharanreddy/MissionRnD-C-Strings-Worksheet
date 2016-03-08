/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void revInput(char *arr, int low, int high)
{
	char temp;
	while (high>low)
	{
		temp = arr[high];
		arr[high] = arr[low];
		arr[low] = temp;
		low++;
		high--;

	}
}


void str_words_in_rev(char *input, int len)
{
	int i, j = 0;
	for (i = 0; i<len; i++)
	{
		if (input[i] == ' ')/*checks for the blank space between the words*/
		{
			revInput(input, j, i - 1);/*reverses the string from specified postions */
			j = i + 1;
		}
	}
	revInput(input, j, i - 1);
	strrev(input);

}
