#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i=0;i<n;i++){
        cin >> arr1[i];
    }
    for (int j=0; j<n; j++){
        cin >> arr2[j];
    }
    for (int k=0; k<n; k++){
        cout << arr1[k]+arr2[k] << " ";
    }
}   