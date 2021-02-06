
#include<iostream>
using namespace std;

int memory[1000];

//int callcount=1;

int Fibonacci(int n)
{
    
    if (n <= 1)
        return n;
 
    if (memory[n] != 0)
        return memory[n];
 
    else 
    {
  //      callcount++;
        memory[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
        return memory[n];
    }
}
 
int main()
{
    int n = 6;
    cout << Fibonacci(20) << endl;
    // cout << callcount << endl; // only for calculating Calls
    return 0;
}