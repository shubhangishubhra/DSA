#include <bits/stdc++.h>
using namespace std;

int factTR(int N, int a) 
{ 
    if (N == 0)  
        return a; 
  
    return factTR(N-1, N*a); 
} 

int main()
{
    int N = 5, a = 1;
    int result = factTR(N, a);
    cout << "The factorial of " << N << " is " << result << endl;
    return 0;
}
