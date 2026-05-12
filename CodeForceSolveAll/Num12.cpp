#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int power;
    int value = 5;
    cout << "Enter the power: ";
    cin >> power;

    long long result = pow(value, power);
    cout << "Answer: " << result << endl;
    return 0;
}
