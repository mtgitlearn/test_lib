#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Sum of first n numbers, simple linear algorithm

// Params: integer n 
// Return: integer s, contains sum 1 + 2 + ... + n 
// works for O(n)
int linear_sum(int n)
{
   int s = 0;
   for(int i = 1; i <= n; ++i)
        s += i;
   return s; 
}

// Sum of first n numbers, math approach

// Params: integer n 
// Return: integer s, contains n(n+1)/2 = 1 + 2 + ... + n 
// works for O(1)
int constant_sum(int n)
{
   return n*(n+1)/2;
}

// Sum of numbers in interval [n1, n2]
int range_sum(int n1, int n2)
{
   int s = 0;
   for(int i = n1; i <= n2; ++i)
     s += i;
   return s;  
   //return linear_sum(n2)-linear_sum(n1-1);
}

int main(void)
{
    cout << "Test!" << endl;
    cout << "New line added!" << endl;
    return 0;
}
