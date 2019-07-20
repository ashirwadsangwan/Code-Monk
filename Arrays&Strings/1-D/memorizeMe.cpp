#include <iostream>
using namespace std;

int main(){
    int n, arr[10000], q, b, x;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> x;
        arr[x]++;
    }
    cin >> q;
    while (q--){
        cin >> b;
        if (arr[b]>0){
            cout << arr[b] << endl;
        }
        else{
            cout << "NOT PRESENT" << endl;
        }
    }
}