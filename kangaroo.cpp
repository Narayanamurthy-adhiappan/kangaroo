#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    int temp;
    if (x1 == x2)
        return "YES";
    if (x1 > x2){
        temp = x1;
        x1 = x2;
        x2 = temp;
        temp = v1;
        v1 = v2;
        v2 = temp;
    }
    if(v1 < v2)
            return "NO";
        else{
            while(x1 < x2){
                x1 = x1 + v1;
                x2 = x2 + v2;
            }
            if(x1 == x2)
                return "YES";
            else
                return "NO";
        }
        
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
