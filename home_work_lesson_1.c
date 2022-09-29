#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)


int fun_right(int num)
{
	int a = num % 10;
	return a;
}

int fun_right_point_2(int num)
{
	int a = num % 100;
	a = a / 10;
	return a;
}

int prime(int num)
{
    int count = 0;
    int ind;
    for (int i = 1; i <= num; i++)
    {
        ind = num % i;
        if (ind == 0)
        {
            count++;
        }
    }
    if (count <= 2)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }
    return 0;
}

void prime_point_2()
{
    int count = 0;
    int ind;
    for (int j = 1; j < 100; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            ind = j % i;
            if (ind == 0){
            count++;
            }
        }
     if (count <= 2){
        printf("%d is a prime number\n", j);
     }
    count = 0;
    }
}

int mirror(int num)
{
    int hold = num;
    int r = 0;

    while (hold != 0)
    {
        r = r * 10;
        r = r + hold % 10;
        hold = hold / 10;
    }

    if (num == r)
    {
        printf("the number %d is a mirrored number", num);
    }
    else
    {
        printf("the number %d is not a mirrored number", num);
    }
}

int main()
{
	/* task 1 - butiful
	
	printf("%d",fun_right(1121));
	*/

	/* task 2 - beautiful

	printf("%d", fun_right_point_2(1121));
	*/

    /* task 3 - very beautiful
    printf("%d", prime(4));
    */


    /* task 4 - the most beautiful ever
    prime_point_2();
    */
 

    ///* task 5 - the most extraordinary ever
    mirror(101);
    //*/


	return 0;
}


