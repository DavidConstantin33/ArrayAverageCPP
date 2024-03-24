#include <iostream>
using namespace std;


int main() {
    cout << "Enter your numbers,\n enter 's' to stop:\n";

    int maxSize = 100;
    float arr[maxSize];
    float sum = 0.0;
    int n = 0;

    string input;
    while (true) {
        cin >> input;
        if (input == "s")
            break;
        if (n == maxSize) {
            cout << "Maximum limit reached. Exiting input loop.\n";
            break;
        }

        float number = stof(input);
        arr[n++] = number;
    }

    for (int i = 0; i < n; i++)
        sum += arr[i];

    if (n > 0)
        cout << "Average: " << sum / n << endl;
    else
        cout << "No numbers entered.\n";

    return 0;
}
