#include <iostream>
using namespace std;

int maximum (int x, int y) {
    int r;

    if (x>y) {
        r=x;
    }
    else
    {
        r=y;
    }

    return r;
}
int main() {
    int n1, n2, n3, n4, max;

    cout<<"Calcolo del massimo fra 4 numeri"<<endl;
    cout<<"Inserisci 4 valori"<<endl;
    cin>>n1>>n2>>n3>>n4;

    max=maximum(n1, n2);
    max=maximum(max, n3);
    max=maximum(max, n4);

    cout<<"Il valore massimo è "<<max<<endl;

    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
