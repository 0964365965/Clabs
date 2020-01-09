#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
	char str[100];
	int i;
	char key;
	printf("Please enter string: ");
	gets(str);
	printf("The old string: ",str);
	do{
		for (i=strlen(str);i>=0;i--)
		{
			if (str[i] == ' ')
			{
				str[i]='\0';
				printf("%s ",&str[i]+1);
			}
		}
		printf("%s ",str);
		printf("\n");
		key=getch();
     }
    while(key!=27);
    
}
