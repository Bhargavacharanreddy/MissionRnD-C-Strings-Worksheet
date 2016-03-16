/*

Use MainStrings1 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.

Objectives of Strings-1 Lesson:

->Basics of Strings / Char Arrays .
->Learn about 2D Strings
->Convert Numbers/Floats into Strings
->Manipulating Strings

*/
#include <stdio.h>
#include "FunctionHeadersStrings1.h"

int main(){

	//Test KthIndexFromEnd 

	//TestNumbertoStr

	//removeSpaces

	//StrWordsinRev

	//commonWords
	char *str1 = "the are all is well";
	char *str2 = "are all";
	char **a;

	a = commonWords(str1, str2);
	if (a == NULL)
	{
		printf("no common words");
		return 0;
	}
	for (int i = 0; i<2; i++)
	{
		printf("%s ", a[i]);
	}
	getchar();
	return 0;
}