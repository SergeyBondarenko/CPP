#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX 32 

const char * GetLocalTime(void)
{
	time_t nowtime = time(&nowtime);
	return ctime(&nowtime);
}

int main()
{
	char greets[] = "Hello";
	char fruit[MAX];

	printf("%s\n", greets);
	printf("%d\n", greets[0]);
	
	char str1[] = "Hello";
	char str2[] = " Sergey!";
	char str3[10];
	int strl;

	strcpy(str3, str1);
	strcat(str1, str2);	
	strl = strlen(str2);

	printf("%s\n", str3);
	printf("%s\n", str1);
	printf("%d\n", strl);

	strcpy(fruit, "apple");
	printf("%s\n", fruit);

	const char *localtime = GetLocalTime();

	printf("%s\n", &localtime[0]);
	printf("%d\n", *localtime);
	printf("%s\n", localtime);

	
	return 0;
}

