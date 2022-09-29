#include <stdio.h>

int main3234()
{
    /*
    unsigned int a = 10;
    while (a<=20)
    {
        printf("%d\n", a);
        a++;
    }
    printf("Hello World!\n");
*/

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", funname(funname(i)));
    }

    return(0);

/*
int input;
scanf("%d", &input);
if (input == 10){
    printf("10");
}
else if (input == 10){
    printf("11");
} 
else if (input == 10){
    printf("12");
}
*/

    int input;
switch (input)
{
case 10:
    printf("10");
    break;
case 11:
    printf("11");
    break;
case 12:
    printf("12");
    break;
case 13:
    printf("13");
    break;
}


return(0);
}

int funname(int a)
{
    return a * a;
}