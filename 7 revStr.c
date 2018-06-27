#include <stdio.h>
void revStr(char str[])
{
	int size = strlen(str);
	for (int i = 0; i < size / 2; i++)
	{
		char t = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = t;
	}
	printf("%s", str);
}

int main()
{
    char str[] = "Hello";
    revStr(str);
    return 0;
}
