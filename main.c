#include <stdio.h>
#include "hassuffix.h"

int main(int argc, char *argv[])
{
	int result1;
	int result2;
	int result3;
	int result4;
	int result5;
	int result6;
	int result7;
	
	char *name1 = "Test1.data";
	char *name2 = "Test1.data";
	char *name3 = "Test1.txt";
	char *name4 = "Test1.date";
	char *name5 = "Test1.tut";
	char *name6 = "Test1.tut";
	char *name7 = "Test1thisand";
	
	result1 = hassuffix(name1, ".dat");
	result2 = hassuffix(name2, ".data");
	result3 = hassuffix(name3, ".txt");
	result4 = hassuffix(name4, ".date");
	result5 = hassuffix(name5, ".date");
	result6 = hassuffix(name6, ".tut");
	result7 = hassuffix(name7, "and");
	
	if(result1 == 1)
	{
		printf("%s has suffix .dat\n", name1);
	}
	else
	{
		printf("%s doesn't have suffix .dat\n", name1);
	}

	if(result2 == 1)
	{
		printf("%s has suffix .data\n", name2);
	}
	else
	{
		printf("%s doesn't have suffix .data\n", name2);
	}

	if(result3 == 1)
	{
		printf("%s has suffix .txt\n", name3);
	}
	else
	{
		printf("%s doesn't have suffix .txt\n", name3);
	}

	if(result4 == 1)
	{
		printf("%s has suffix .date\n", name4);
	}
	else
	{
		printf("%s doesn't have suffix .date\n", name4);
	}

	if(result5 == 1)
	{
		printf("%s has suffix .date\n", name5);
	}
	else
	{
		printf("%s doesn't have suffix .date\n", name5);
	}

	if(result6 == 1)
	{
		printf("%s has suffix .tut\n", name6);
	}
	else
	{
		printf("%s doesn't have suffix .tut\n", name6);
	}

	if(result7 == 1)
	{
		printf("and is at the end of %s\n", name7);
	}
	else
	{
		printf("and isn't at the end of %s\n", name7);
	}

	return 0;
}

