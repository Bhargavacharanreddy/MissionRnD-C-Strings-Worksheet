/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include<string.h>
#include<malloc.h>

#define SIZE 31


char** commonWords(char *str1, char *str2)
{
	if (str1 == NULL || str2 == NULL || str1 == '\0' || str2 == '\0')
		return NULL;
	
	char **cwords = (char **)malloc(SIZE* sizeof(char *));
	char **word1 = (char **)malloc(SIZE* sizeof(char *));
	char **word2 = (char **)malloc(SIZE* sizeof(char *));/*allocating memory for array*/
	for (int row = 0; row < SIZE; row++)
	{
		cwords[row] = (char *)malloc(SIZE * sizeof(char));
		word1[row] = (char *)malloc(SIZE * sizeof(char));
		word2[row] = (char *)malloc(SIZE * sizeof(char));/*allocating memory for every row */
	}
	static int len1, len2;
	int  n, j, m, x, y = 0;
	len1 = strlen(str1);
	len2 = strlen(str2);
	//printf("%d%d",len1,len2);
	m = 0;
	//char word1[10][10];
	//char word2[10][10];
	for (int i = 0; i<len2; i++)
	{
		y = 0;
		for (j = 0; str2[i] != ' '; j++, i++)
		{
			word2[m][j] = str2[i]; y++;
		}
		//if (j)
		if (y)
		{

			word2[m][j] = '\0';

			m++;
		}
	}

	n = 0;
	for (int i = 0; i<len1; i++)
	{
		y = 0;
		for (j = 0; str1[i] != ' '; j++, i++)
		{
			word1[n][j] = str1[i]; y++;
		}
		//if (j)
		if (y)
		{

			word1[n][j] = '\0';

			n++;
		}
	}



	x = 0;


	for (int i = 0; i<n; i++)
	{

		for (int j = 0; j<m; j++)
		{

			if (!strcmp(word1[i], word2[j]))
			{

				strcpy(cwords[x++], word2[j]);

			}


		}
	}
	//strcpy(cwords[x], "\0");
	if (x == 0) return NULL;
	return cwords;
}