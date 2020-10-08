#include <stdio.h>
void fizzbuzz(int n)
{
   
    if (n == 0)
    {
        return;
    }

    fizzbuzz(n-1);

    if(n%15 == 0)
        printf("FizzBuzz\t");
    
    else if(n%5 == 0)
        printf("Buzz\t");

    else if(n%3 == 0)
        printf("Fizz\t");

    else
        printf("%d\t",n);
    return;
}

int main()
{
    int i;

    fizzbuzz(20);

    return 0;
}
