#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int testcases, answer = 1, mod = 1000000007;
    
    cin >> testcases;
    
    long int a[testcases];
        
    for(int i = 0; i < testcases ; i++){
    	
		cin >> a[i];
		answer = (answer * a[i]) % (1000000007);
		
    }
    
    cout << answer << endl;
}