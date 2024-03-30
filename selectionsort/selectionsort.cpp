#include <iostream>
using namespace std;

int arr[20];
int n;

void selectionsort(int arr[], int n) {
    for (int j = 0; j < n; j++) {
        int minIndex = j;
        for (int i = j + 1; i < n; i++) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }
        // swap arr[j] with arr[minIndex]
        if (minIndex != j) {
            std::swap(arr[j], arr[minIndex]);
        }
    }
}

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "Array dapat mempunyai maksimal 20 elemen.\n";
        }
    }

    cout << endl;
    cout << "============================" << endl;
    cout << "Lebokno elemen array ng kene" << endl;
    cout << "============================" << endl;

    for (int j = 0; j < n; j++) {
        cout << "data ke-" << (j + 1) << ": ";
        cin >> arr[j];
    }
}

void display() {
    cout << endl;
    cout << "==================================" << endl;
    cout << "Element Array Yang Telah Tersusun" << endl;
    cout << "==================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main() {
    input();
    selectionsort(arr, n);
    display();

    return 0;
}