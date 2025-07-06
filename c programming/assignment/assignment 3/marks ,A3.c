void main()
{
	int marks;
	printf("enter your marks:");
	scanf("%d",&marks);
	
	if(marks>75)
	printf("your result is distinction");
	
	if(marks>65)
	printf("your result in first class");
	
	if(marks>55)
	printf("your result in second class");
	
	if(marks>=40)
	printf("your result is pass");
	
	else
	if(marks<40)
	printf("your result is fail");
}
	