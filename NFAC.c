#include <stdio.h>

int Factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}


int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d! = %d \n",x, Factorial(x));

}


