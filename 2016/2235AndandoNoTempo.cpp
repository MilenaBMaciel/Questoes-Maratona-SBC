#include <bits/stdc++.h> 
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define F first
#define S second
#define PB push_back
#define LL long long
#define MP make_pair
#define II pair<int,int>
#define dgb(x) cout << #x << " = " << x << endl 

int main(){ _

    LL a,b,c; cin >> a >> b >> c;
    
    if(a == b || a==c || b==c){
        cout << "S" << endl;
        return 0;
    }
    if( a+b == c || a+c == b || b+c == a){
        cout << "S" << endl;
        return 0;
    }
    cout << "N" << endl;
    return 0;
}