#include<stdio.h>
/*Write a C program to find your age,born year and current year by user
check you are able for voting or not (age>=18) using conditional operator*/
	void main()
{
	int a;
	int b;
	int c;
	clrscr();
	printf("Here is the born year:");
	scanf("%d",&a);
	printf("Here is the current year:");
	scanf("%d",&b);
	c=b-a;
	printf(c>=18?"Able for voting":"Dont't Able for voting");
	getch();
}