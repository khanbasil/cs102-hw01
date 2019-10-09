#include <stdio.h>

#include <stdlib.h>
//+,-,x,/
int main(int argc, char* argv[]) 
{
	double first = 0;
	double second = 0;
	double result = 0;
	char op;

	op = (argv[1][0]);
	first =atof(argv[2]);
	second =atof(argv[3]);

	//printf("Insert an Operand (+,-,x,/) and 2 Desired Numbers: \n");
	//scanf("%c %lf %lf", &op, &first, &second);
	
	if (op == '+') 
	{
		printf("%f\n", first + second);	  
	}
	else if (op == '-') 
	{
		printf("%f\n", first - second);
	}
	else if (op == 'x') 
	{
		printf("%f\n", first * second);
	}
	else if (op == '/') 
	{
		printf("%2f\n", first / second);
	}

	return 0;
}





