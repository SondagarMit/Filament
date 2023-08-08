#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char s[1000];
    int i,j=1,x,y;
    char k,l;

    clrscr();
    gets(s);
    l = strlen(s);
    scanf("%c",&k);

    for(s[i]=0; s[i]<l; i++)
    {
	if(s[i]=='k')
	    j++;
    }
    printf("\n%c is %d time(s) in string",k,j);


    getch();
}