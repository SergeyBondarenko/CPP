#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
	char str1[MAX], str2[MAX];
	int i, j;
	
	printf("Enter 1st string: ");
	scanf("%s", str1);

	printf("Enter 2nd string: ");
	scanf("%s", str2);	

	for(i = 0; str1[i] != '\0'; i++);
	
	for(j = 0; str2[j] != '\0'; j++, i++)
			str1[i] = str2[j];

	str1[i] = '\0';

	printf("%s\n", str1);

	return 0;
}
