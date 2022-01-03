#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0;
	clrscr();
	printf("Enter a number to reverse:\n");
	scanf("%d",&a);
	while(a!=0)
	{
		b=b*10;
		b=b+a%10;
		a=a/10;
	}
	printf("%d",b);
	getch();
}