#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;

    cin >> str;
    int n = str.length();
    for (int i=0; i<n; i++){
        if (str[i]==str[n-i-1]){
            cout << "YES" << endl;
            break;
        }
        else{
            cout << "NO" << endl;
            break;
        }
    }
      
}