#include<stdio.h>
#include<conio.h>
int sumofdigit(int num);
void main()
{
	int num,sum;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&num);
	sum=sumofdigit(num);
	printf("The sum of digits of %d is %d",num,sum);
	getch();
}
int sumofdigit(int num)
{
	int s,a;
	s=s+(num%10);
	a=num/10;
	if(a>0)
	{
		sumofdigit(a)
	}
}
