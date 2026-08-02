#include <iostream>
using namespace std;

class Array {
    int arr[100], n;

public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void largest() {
        int max = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        cout << "Largest element = " << max << endl;
    }
};

int main() {
    Array obj;

    obj.input();
    obj.largest();

    return 0;
}