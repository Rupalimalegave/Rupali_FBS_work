void main()
{
  int no=153;
  int rem,sum=0,temp=no;
  while(temp>0)
  {
  	rem=temp%10;
  	sum=sum+rem*rem*rem;
  	temp=temp/10;
  }
  if(sum==no)
      printf("armstrong");
  else
      printf("not armstrong");     
}