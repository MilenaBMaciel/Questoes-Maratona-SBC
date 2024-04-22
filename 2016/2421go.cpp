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
    int n, p; cin >> n >> p;
    vector<vector<int>> memo (n+10);
    for(int i=0; i<=n; i++) memo[i] = vector<int>(n+10, 0);
    
    int cP = p, cB = p;
    for(int i=0; i<p; i++){
        int a, b; cin >> a >> b;
        memo[a][b] = 1;
    }
    for(int i=0; i<p; i++){
        int a, b; cin >> a >> b;
        memo[a][b] = 2;
    }
    
    for(int i=2; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            for(int k=1; k<=n+1-i; k++){
                int val = 0;
                if(memo[j][k] == 1 || memo[j+1][k] == 1 || memo[j+1][k+1] == 1 ||memo[j][k+1] == 1)
                    val = 1;
                if(memo[j][k] == 2 || memo[j+1][k] == 2 || memo[j+1][k+1] == 2 ||memo[j][k+1] == 2)    
                    val += 2;
                if(memo[j][k] == 3 || memo[j+1][k] == 3 || memo[j+1][k+1] == 3 ||memo[j][k+1] == 3)    
                    val = 3;
                memo[j][k] = val;
                if(val == 1)cP++;
                else if(val == 2)cB++;
            }
        }
    }
    
    cout << cP << " " << cB << endl;

    return 0;
}