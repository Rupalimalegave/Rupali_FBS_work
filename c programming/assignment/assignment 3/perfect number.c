void main()
{
	int no=28;
	int sum=0;
	int i=1;
	while(i<no)
	{
		if(no%i==0)
		{
			sum+=i;
		}
		i++;
	}
	if(sum==no)
{
	printf("%d is perfect no\n",no);
}
else
{
	printf("%d is not perfect no\n",no);
}
return 0;
}