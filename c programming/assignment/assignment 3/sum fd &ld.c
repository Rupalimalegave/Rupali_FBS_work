void main()
{
	int no=12345;
	int first,last,sum; 
     last=no%10;
     first=no;
	while(first>=10)
	{
		first=first/10;
    }
	sum=first+last;
	printf("%d\n",sum);
	return 0;
	
}