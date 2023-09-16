#include <bits/stdc++.h>
using namespace std;

void print(int n)

{
// Base case we already know the solution
    if(n <=0)
    {
        return;
    }

    else 
    {
        cout << n << " ";
        print(n-1);
    }
}

int main()
{
    int n = 5;
    print(n);
    return 0;
}