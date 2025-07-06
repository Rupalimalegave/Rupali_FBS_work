void main()
{
	int units;
	printf("enter units");
	scanf("%d",&units);
	int totalbill;
	
	if(units<=50)
	   totalbill=30*units;
	   
	else if(units>=51&&units<=150) 
	   totalbill=40*units;
	else if(units>=151)    
	   totalbill=50*units;
	   printf("%d",totalbill);
}