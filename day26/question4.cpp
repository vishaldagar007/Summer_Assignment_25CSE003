#include <iostream>
using namespace std;

int main()
{
    int score = 0, ans;

    cout << "===== Simple Quiz =====" << endl;

    cout << "\n1. What is the Capital of India?" << endl;
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin >> ans;

    if(ans == 2)
        score++;

    cout << "\n2. C++ was developed by?" << endl;
    cout << "1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n";
    cin >> ans;

    if(ans == 3)
        score++;

    cout << "\n3. 10 + 20 = ?" << endl;
    cout << "1. 20\n2. 30\n3. 40\n4. 50\n";
    cin >> ans;

    if(ans == 2)
        score++;

    cout << "\nYour Score = " << score << "/3" << endl;

    return 0;
}