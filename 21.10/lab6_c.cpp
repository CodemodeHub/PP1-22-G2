#include <iostream>
using namespace std;

void checkSimilarArray(int n){
    int cnt = 0; 
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
      cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if( a[i] == b[j] && b[j] != 0 ){
                b[j] = 0;
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
}

int main(){
    int n;   
    cin >> n;
    checkSimilarArray(n);
}