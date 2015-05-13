#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1000

int main()
{
	char str[BUFSIZE];
	char vowels[] = "aeiouAEIOU";
	int i, j, vow, cons, ch, space, digt;
	vow = cons = ch = space = digt = 0;
	
	printf("Enter a string: ");
	fgets(str, BUFSIZE, stdin);

	for(i = 0; str[i] != '\0'; i++){

		for(j = 0; j < sizeof(vowels); j++)
			if(str[i] == vowels[j])
				vow++;	
		
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			ch++;
		
		if(str[i] == ' ')
			space++;

		if(str[i] >= '0' && str[i] <= '9')
			digt++;
	}
	cons = ch - vow;

	printf("String: %s\n", str);
	printf("Vowels: %d\n", vow);
	printf("Consonants: %d\n", cons);
	printf("Spaces: %d\n", space);
	printf("Digits: %d\n", digt);

	return 0;
}
