#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b=0,c=2;
    clrscr();
    printf("Enter the number of terms: ");
    scanf("%d", &a);
    for (c=2;c<a;c++)
    {
	if(a%2==1&&a/a==1&&a%3!=0&&a%5!=0&&a%7!=0)
	{
	    printf("%d ", a);
	    b=1;
	    break;
	}
    }
    if(b==1)
	printf("\n it is a prime number");
    else
	printf("\n it is not a prime number");
    getch();
}