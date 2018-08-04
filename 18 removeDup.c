#include <stdio.h>

char *removeDups2(char str[])
{
	int bucket[256] = { 0 };

	int size = strlen(str);

	for (int i = 0; i<size; ++i)
	{
		bucket[(int)str[i]]++;
	}

	for (int i = 0; i<256; ++i)
	{
		if (bucket[i] >= 1)
			printf("%c", i);
	}
}

char *removeDups3(char str[])
{
	int bucket[256] = { 0 };

	int size = strlen(str);

	for (int i = 0; i<size; ++i)
	{
		bucket[(int)str[i]]++;
	}

	for (int i = 0; i<256; ++i)
	{
		if (bucket[i] >= 1)
			printf("%c", i);
	}
}

/* Driver program to test removeDups */
int main()
{
	char str[] = "geeksforgeeks";
	printf("%s", removeDups3(str));
	getchar();
	return 0;
}
