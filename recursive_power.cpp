#include <iostream>

int RecursivePower(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    return n * RecursivePower(n, p - 1);
}

int main()
{
    int base = 2;   // Base number
    int exponent = 3; // Exponent

    int result = RecursivePower(base, exponent);

    std::cout << base << " raised to the power of " << exponent << " is " << result << std::endl;

    return 0;
}
