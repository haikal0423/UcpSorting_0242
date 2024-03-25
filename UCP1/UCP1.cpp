

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
        cin >> arr[i];

    }

}
int main()
{
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu

