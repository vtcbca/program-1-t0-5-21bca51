#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,sum=0;
	clrscr();
	printf("Enter a number which you want to get sum of its own digits:");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("The sum of the digits of a number is %d.",sum);
	getch();
}