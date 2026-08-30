//Minimum Element in Array
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int minimum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum)
            minimum = arr[i];
    }

    cout << "Minimum element = " << minimum;

    return 0;
}