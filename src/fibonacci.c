//
// Created by marker on 19-5-22.
//

#include <stdio.h>

unsigned long Fibonacci(unsigned n);

int main ()
{
    int ans;
    ans=Fibonacci(15);
    printf("the ans is %d",ans);
    return 0;
}

unsigned long Fibonacci(unsigned n)
{
    if(n>2)
    {
        printf("before!\n");
        return Fibonacci(n-1)+Fibonacci(n-2);
    }

    else
    {
        return 1;

    }


}