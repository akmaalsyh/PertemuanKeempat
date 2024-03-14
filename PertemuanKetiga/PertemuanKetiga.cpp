#include <iostream>
using namespace std;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "masukan Elemen Array" << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionsort() {
    int i, n, j, temp;
    int arr[40];

    for (i = 1; i <= n - 1; i++) { //step 1
        temp = arr[i]; //step 2

        j = 1 - 1; // step 3

        while (j >= 0 && arr[j] > temp); // step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j--; //step 4b
        }
        
        arr [j + 1] = temp; //step 5
}

    int arr[20];
    int n;



void display() {
    cout << endl;
    cout << "===================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "===================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl; // Output setiap element array pada garis baru

    }
    cout << "jumlah pass = " << n - 1 << endl; //menampilkan total angka dari elemen yang benar
    cout << endl;
}
    arr[j + 1] = temp;                                //5. simpan nilai temp ke dalam arr[j+1]
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
