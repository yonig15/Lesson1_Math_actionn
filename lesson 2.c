#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)



void fun_hezka()
{
	int num1, num2;
	int sum = 0;
	printf("please enter number:\n");


	scanf("%d %d", &num1, &num2);
	sum = pow(num1, num2);

	printf("%d\n", sum);
	
}

int main321321312()
{
	/* task 1
	switch (1)
	{
	case (1):
		printf("1\n");

	case 2:
		printf("2\n");

	case 3:
		printf("3\n");

	case 4:
		printf("4\n");

	case 5:
		printf("5\n");

	case 6:
		printf("6\n");

	case 7:
		printf("8\n");

	case 8:
		printf("9\n");

	case 9:
		printf("10\n");
		break;

	*/
	    /*task2
		for (int i = 0; i < 100; i++)
		{
			if (i % 3 == 0 || i % 7 == 0){
			printf("%d\n", i);
			}		
		}
		*/

		/*task3
	int num;
	printf("please enter number:\n");

	scanf("%d",&num);

	printf("%d\n", funhchert(num));
	*/



	fun_hezka();


	return 0;
	
}

int funhchert(int a)
{
	int sum = 0;
	int b = 2;
	for (int i = 1; i < a; i++)
	{
		switch (i)
		{
		case 1: // sum = 1*2=2
			sum = i * b;
			b++;
			break;
		case 2: // sum = 2*3=6
			sum = sum * b;
			b++;
			break;
		case 3: // sum=6*4=24   i=3
			sum = sum * b;
			b++;
			break;
		case 4: // sum=24*5   i=4
			sum = sum * b;
			b++;
			break;
		case 5:   
			sum = sum * b;
			b++;
			break;
		case 6:   
			sum = sum * b;
			b++;
			break;
		case 7: 
			sum = sum * b;
			b++;
			break;
		}
	}
	return sum;
}


