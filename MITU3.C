#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[40]; // declare the size string

    clrscr();
    printf (" \n Enter a string to be reversed: ");
    scanf ("%s", str);

    // use strrev() function
    printf (" \n After the reverse of a string: %s ", strrev(str));
    getch();
}  