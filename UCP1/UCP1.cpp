

#include <iostream>
using namespace std;

int haikal[42];
int n;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada haikal : ";
        cin >> n;
        if (n <= 42)
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
        cin >> haikal[i];

    }

}
void SelectionSortArray() { //procedur untuk mengurutkan array dengan metode selection sort

    void ucp() {
        for (int j = 0; j < n - 1; j++) { //step 1
            int min_index = j; //step 2a
            for (int i = j + 1; i < n - 1; i++) { //step 2b
                if (haikal[i] < haikal[min_index]) { //step 2c
                    min_index = i; //step 2ci
                }
            }
            swap(haikal[j], haikal[min_index]); //step 3
        }

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

int main()
{
    input();
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu

