#include<stdio.h>
main()
{
	int a,b,c;
	char op;
	printf("calculator program");
	printf("\n+add\n-sub\n*mul\n/div");
	printf("enter a operator symbol");
	scanf("%c",&op);
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	switch(op)
{
	case '+':
	c=a+b;
	break;
	case '-':
	c=a-b;
	break;
	case '*':
	c=a*b;
	break;
	case '/':
	c=a/b;
	break; 
}
printf("the result is %d",c);
getch();
}
