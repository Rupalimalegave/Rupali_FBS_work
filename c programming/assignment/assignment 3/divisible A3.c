void main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	
	if(num%3)
	printf("it is divisible by 3");
	
	if(num%5)
	printf("it is divisible by 5");
    
	else
	if(num%3&&num%5)
	printf("its is divisible by 3 &5");
}
