#include <iostream>
using namespace std;

int main()
{
    int num1, num2, maxNum, lcm;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;  
    maxNum = (num1 > num2) ? num1 : num2;
    lcm = maxNum;
    while (true)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            cout << "LCM = " << lcm << endl;
            break;
        }

        lcm++;
    }

    return 0;
}