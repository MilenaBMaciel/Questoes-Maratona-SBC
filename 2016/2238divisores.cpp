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
const int INF = 0x3f3f3f3f;
const LL LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _ 

    LL a, b, c, d; cin >> a >> b >> c >> d;
    LL resp;
    if(c%a!=0 || a%b == 0 || d%c==0){
        cout << -1 << endl;
        return 0;
    }
    for(int i=1; a*i<=c; i++){
        resp = a*i;
        if(c%resp==0 && resp%b!=0 && d%resp!=0) break; 
    }
    cout << resp << endl;
    
    return 0;
}