#include<stdio.h>
int factorial(int n)
{
	int fact=1;
	while(n>0)
	{
		fact*=n;
		n--;
	}
	return fact;
}
int main()
{
	int no=145;
	int temp=no;
	int sum=0,rem;
	while(no>0)
	{
		rem=no%10;
		sum+=factorial(rem);
		no=no/10;
    }
	if(sum==temp)
	{
		printf("%d is strong no\n",temp);
	}
	else
	{
		printf("%d is not strong no\n",temp);
	}
}