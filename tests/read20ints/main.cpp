#include <iostream>

using namespace std;

int main () {
    int smallestInt;
    int evenCount = 0;
    int count = 1;
    int number = 0;

    while (count <= 20) {
        cout << "Enter a number: ";
        cin >> number;

        if (count == 1) {
            smallestInt = number;
        }

        if (number < smallestInt) {
            smallestInt = number;
        }

        if (number % 2 == 0) {
            evenCount++;
        }

        count++;
    }

    cout << "The smallest int is: " << smallestInt << endl;
    cout << "The even count is: " << evenCount << endl;
}