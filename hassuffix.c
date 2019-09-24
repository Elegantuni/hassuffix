#include "hassuffix.h"

int hassuffix(char *data1, char *data2)
{
	int index1 = 0;
	int index2 = 0;
	
	while(data1[index1] != '\0')
	{
		index1++;
	}

	while(data2[index2] != '\0')
	{
		index2++;
	}

	for(int i = index1 - index2, j = 0; i <= index1; i++, j++)
	{
		if(data1[i] != data2[j])
		{
			return 0;
		}
	}

	return 1;
}

