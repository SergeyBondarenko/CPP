// C Program to Find the Frequency of Characters in a String

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

char GetString(char *str)
{
	int i = 0;
	char ich;

	while(ich != '\n'){
		if(i > MAX-1)
			exit(1);
		ich = getchar();
		str[i] = ich;
		i++;
	}
	str[i-1] = '\0';
}

int main()
{
	char str[MAX], ch, ich;
	int i = 0, counter = 0;

	printf("Enter a string: ");
	//GetString(str);
	//gets(str);
	fgets(str, MAX, stdin);
	for(i = 0; i < MAX; i++)
		if(str[i] == '\n')
			str[i] = '\0';

	printf("Enter a character: ");
	scanf("%c", &ch);

	printf("%s\n", str);
	printf("%c\n", ch);

	for(i = 0; str[i] != '\0'; ++i)
		if(str[i] == ch)
			++counter;

	printf("Character '%c' placed %d times in string '%s'.\n", ch, counter, str);
	return 0;
}
