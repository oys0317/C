#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        for(int j=n;j>0; j--){
            if(i+1>=j)
                cout << "#";
            else
                cout << " ";            
        }
        cout << endl;
    }
    return 0;
}
