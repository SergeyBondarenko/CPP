#include <stdio.h>
#include <stdio.h>
#include <string.h>

#define ROW 3
#define COL 50

int main()
{
	char str[ROW][COL], temp[COL];
	int i, j = 0;

	printf("Enter strings:\n");
	
	for(i = 0; i < ROW; i++){
		fgets(str[i], COL, stdin);
		for(j = 0; j < COL; j++){
			if(str[i][j] == '\n')
				str[i][j] = '\0';
		}
	}
	
	for(i = 0; i < ROW; i++){
		for(j = i+1; j < ROW; j++){
			if(strcmp(str[i], str[j]) > 0){
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}

	printf("\n===\n");

	for(i = 0; i < ROW; i++)
		printf("%s\n", str[i]);

	return 0;
}

