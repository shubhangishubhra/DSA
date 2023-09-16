#include <bits/stdc++.h>
using namespace std;

void print(int initial , int last)
{
    if(initial <= last)
    cout << initial << " ";
    print(initial+1, last);
}

int main()
{
    print(1, 10);
    return 0;
}