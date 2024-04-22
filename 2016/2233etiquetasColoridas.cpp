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
const int MAX = 110;

LL cHexD(string a){
    int num = 0;
    int tam= a.size() - 1;
    for(int i=tam; i>=0; i--){
        if(a[i]>='0' && a[i]<='9') num += (a[i]-'0')*pow(16, tam-i);
        else num += (a[i]-'a'+10)*pow(16, tam-i);
    }
    
    return num;
}
string cDecH (LL a){
    LL b;
    string c;
    while(a>=16){
        b = a%16;
        if(b<10) c+= '0' + b;
        else c+= 'a' + (b-10);
        a = a/16;
    }
    if(a<10) c+= '0' + a;
    else c+= 'a' + (a-10);
    reverse(c.begin(),c.end());
    return c;
}
int main(){ _ 
    string r,g,b; cin >> r >> g >> b;
    LL r2 = cHexD(r), g2 = cHexD(g), b2 = cHexD(b);
    LL nG = pow(r2/g2, 2);
    LL nR = pow(g2/b2,2)*nG;
    
    cout << cDecH(1+nG+nR) << endl;
    
    return 0;
}