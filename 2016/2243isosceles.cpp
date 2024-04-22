#include <bits/stdc++.h> 
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define F first
#define S second
#define PB push_back
#define LL long long
#define MP make_pair
#define II pair<int,int>
#define pLL pair<LL,LL>
#define dgb(x) cout << #x << " = " << x << endl 

int main(){ _ 

    int n; cin >> n;
    vector<int> col(n+3);

    for(int i=0; i<n; i++) cin >> col[i];

    vector<II> alt(n+3);
    int ult=0;
    for(int i=0; i<n; i++){
        ult = (col[i] >= ult+1? ult+1 : col[i]);
        alt[i].F = ult;
    }
    ult = 0;
    for(int i=n-1; i>=0; i--){
        ult = (col[i] >= ult+1? ult+1 : col[i]);
        alt[i].S = ult;
    }
    int maior=0;
    for(int i=0; i<n; i++){
        maior = max(maior, min(alt[i].F,alt[i].S));
    }
    cout << maior << endl;

    return 0;
}
