#include <iostream>
using namespace std;

class ArrayChecker {
private:
    int *arr;
    int n;

public:
    ArrayChecker(int size) {
        n = size;
        arr = new int[n];
    }

    void input() {
        cout << "enter elements in array: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    bool checkSorted() {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }

    void displayResult() {
        if (checkSorted())
            cout << "array is sorted";
        else
            cout << "not sorted";
    }

    ~ArrayChecker() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "enter no of elements : ";
    cin >> n;

    ArrayChecker obj(n);
    obj.input();
    obj.displayResult();

    return 0;
}
