void main()
{
int start,no=1;
int end=5;
int sum;
    end=no%10;
    start=no;
    while(start>=5)
    {
    start=start/10;	
	}
	   sum=start+end;
	   printf("%d\n",sum);
	   return 0;
}
