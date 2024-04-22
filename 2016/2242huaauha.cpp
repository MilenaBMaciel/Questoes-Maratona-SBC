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
    string r; cin >> r;
    vector<char> r1, r2;
    set<char> v = {'a','e','i','o','u'};
    
    int j=r.size()-1;

    for(int i=0; i<r.size(); i++){
        if(v.find(r[i]) != v.end()){
            r1.PB(r[i]);
        }
        if(v.find(r[j])!=v.end()){
            r2.PB(r[j]);
        }
        j--;
    }

    if(r1 == r2) cout << 'S' << endl;
    else cout << 'N' << endl;

    return 0;
}