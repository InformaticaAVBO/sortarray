#include <iostream>
using namespace std;

void printArray( int v[], int l  ) {
    for (int i=0; i<l; i++) {
        cout << v[i] << "\t";
    }
    cout << endl;
}


int main()
{
    int vett[] = { 3, 23, -12, 145 };

    printArray( vett, 4 );

    return 0;
}