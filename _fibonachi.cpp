#include <iostream>

int fibo(int);

int main()
{
    int n = 0;
    int sum = 0;
    while(fibo(n) < 4000000)
    {
        if (fibo(n) % 2)
        {
            sum += fibo(n);
        }
        n++;
    }
    std::cout << sum;
}
int fibo(int limit)
{
   if (limit == 0 || limit == 1) 
   {
        return limit;
   }
   return fibo(limit - 1) + fibo(limit - 2);
}