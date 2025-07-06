void main()
{
	int no=7;
	int i,isprime=1;
	for(i=2;i<=no/2;i++)
	{
		if(no%i==0)
		{
		    isprime=0;
			break;
		}
	}
	
	if(isprime&&no>1)
	   printf("%d is prime\n",no);
    else
        printf("%d is not prime\n",no);
}