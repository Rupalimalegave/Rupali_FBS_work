void main()
{
	int no=121;
	int temp=no;
	int rev=0,rem;
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(temp==rev)
	{
		printf("%d is a palindrome\n",temp);
	}
	else
	{
		printf("%d is a not palindrome\n",temp);
	}
	return 0;		
}