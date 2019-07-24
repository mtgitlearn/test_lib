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

int main(void)
{
    cout << "Test!" << endl;
    return 0;
}
