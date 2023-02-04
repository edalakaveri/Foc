#include<stdio.h>
int main()
{
	double x;
	int N;
	int choice;
	double c;
	printf("Enter a value for x: ");
	scanf("%d",&x);
	printf("Enter a value for N:");
	scanf("%d",&N);
	printf("Enter your choice:\n");
	printf("1.Pow(x,N)\n");
	printf("2.Add(x,N)\n");
	printf("3.Sub(x,N)\n");
	printf("4.Mul(x,N)\n");
	printf("5.Div(x,N)\n");
	scanf("%d",&choice);
	switch(choice){
		case1:
			c=N;
			break;
		case2:
			c=x+N;
			break;
		case3:
			c=x-N;
			break;
		case4:
		    c=x*N;
		    break;
		case5:
		    c=x/N;
            break;
		default:
			printf("invalid choice\n");
			return 0;
    }
    printf("c:%d\n",c);
    return 0;
}
			
			   
			
			
			
	

