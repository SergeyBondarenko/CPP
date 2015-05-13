#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
	char str1[MAX], str2[MAX];
	int i;

	printf("Enter string: ");
	//scanf("%s", str1);
	fgets(str1, MAX, stdin);

	for(i = 0; str1[i] != '\0'; i++)
		str2[i] = str1[i];
	
	str2[i] = '\0';

	printf("String2: %s\n", str2);

	return 0;
}
