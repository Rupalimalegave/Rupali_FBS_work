void main()
{
	int a;
	int b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	
	char operator;
	printf("enter operator any of these (+,-,%,/,*)");
	scanf("%c",&operator);
    if(operator=='+')
	printf("+ This operator is used for addition:%d+%d=%d\n",a,b,a+b);
	
	else if(operator=='-')
	printf("- This operator is used for substraction:%d-%d=%d\n",a,b,a-b);
	
	else if(operator=='%')
	printf("% This operator is used for modulus:%d % %d=%d\n",a,b,a%b);
	
	else if(operator=='/')
	printf("/ This operator is used for division:%d/%d=%d\n",a,b,a/b);
	
 	else if(operator=='*')
	printf("* This operator is used for multiplication:%d*%d=%d\n",a,b,a*b);
	else
	printf("invalid input");
}
	
	
		

