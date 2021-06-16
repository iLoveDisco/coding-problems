#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int w;
    cin >> w;
    if(w == 2 || !isEven(w)) {
        cout << "NO";
        
    } else {
        cout << "YES";
    }
}

