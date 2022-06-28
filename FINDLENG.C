#include<stdio.h>
#include<conio.h>
void main()
{

	char s[]="Riya Dominic";
	int i,length=0;
	clrscr();
	for(i=0;s[i]!= '\0';i++)
	length++;

	printf("Length = %d\n",length);
	getch();
}