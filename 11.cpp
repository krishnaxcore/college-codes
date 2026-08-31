//count OCCURRENCES OF AN ELEMENT

#include <iostream>
using namespace std;

int main() {
    int n, key, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }

    cout << "Occurrences = " << count;

    return 0;
}