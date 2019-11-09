#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned long long int number = 600851475143;
    unsigned long long int number_max = 0;

    for (unsigned long long int i = 3; i <= 600851475143/2; i += 2)
    {
        if (600851475143 % i == 0)
        {
            cout << "Found " << i << " and " << 600851475143 / i;
            number_max = max(i, 600851475143 / i);
        }
    }

    if (number_max == 0)
    {
        cout << "No prime factor found" << endl;
    }
    else
    {
        cout << number_max << " is the largest prime factor of the 600851475143" << endl;
    }
    

    return 0;
}