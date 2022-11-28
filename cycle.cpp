#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int row;
    cout << "row: ";
    cin >> row;
    
    for(size_t i = row; i > 0; i--) {
        for(size_t j = 0; j < i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(size_t i = 1; i <= row; i++) {
        for(size_t j = 0; j < i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;
    int b = 3;
    for(size_t i = row; i > 0; i--) {
        for(size_t j = 0; j < i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
        cout << setw(b);
        b+=2;
    }
    cout << endl;
    int a = row + (row - 1);
    for(size_t i = 1; i <= row; i++) {
        cout << setw(a);
        for(size_t j = 0; j < i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
        a-=2;
    }

    


    return 0;
}
