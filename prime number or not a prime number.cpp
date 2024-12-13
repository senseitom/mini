#include <iostream>
#include <cmath>
using namespace std;
int main() {
int numbers[5];
    cout << "Enter five positive integer numbers:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        while (true)
        {
            cout << "Enter number " << i + 1 << ": ";
            cin >> numbers[i];
            if (numbers[i] > 0) break;
            else cout << "Please enter a positive integer." << endl;
        }
    }

    cout << "\nResults:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        bool is_prime = true;
        if (numbers[i] <= 1)
        {
            is_prime = false;
        }
        else
        {
            for (int j = 2; j <= sqrt(numbers[i]); ++j)
            {
                if (numbers[i] % j == 0)
                {
                    is_prime = false;
                    break;
                }
            }
        }
        if (is_prime)
        {
            cout << numbers[i] << " is a prime number." << endl;
        }
        else
        {
            cout << numbers[i] << " is not a prime number." << endl;
        }
    }

    return 0;
}
