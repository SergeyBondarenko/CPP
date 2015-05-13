#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
	char str1[MAX], str2[MAX];
	int i, j = 0;

	printf("Enter your string: ");
	fgets(str1, MAX, stdin);

	for(i = 0; str1[i] != '\0'; i++){
		if(str1[i] >= 'a' && str1[i] <= 'z'){
			str2[j] = str1[i];
			j++;
		}
	}

	printf("%s\n", str2);

	return 0;
}
