#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[100];
	int i, alphabets;
	i = alphabets = 0;

	clrscr();

	printf("\n Please Enter any String  :  ");
	gets(str);

	while (str[i] != '\0')
	{
		if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
		{
			alphabets++;
		}

	i++;
	}
    printf("\n Number of Alphabets in this String = %d", alphabets);


     getch();
}