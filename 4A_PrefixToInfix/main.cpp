#include "tubes.h"

int main() {
    stack S;
    createStack(S);
    string prefix;
    int n;
    string hasil;
    cout<<"Jumlah Prefix Yang Akan Di Input: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"======================================="<<endl;
        cout << "Masukan Prefix: ";
        cin >> prefix;
        hasil = prefixToInfix(prefix, S);
        cout << "Infix : " << hasil<<endl;
        cout<<"======================================="<<endl;
    }

    return 0;
}
