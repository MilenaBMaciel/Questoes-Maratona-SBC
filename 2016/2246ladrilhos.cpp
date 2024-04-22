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


int h, l; 
int g[210][210];
bool vis[210][210];

int dfs(int i, int j, int val, int tam){
    vis[i][j] = true;
    
    int a=0, b=0, c =0, d = 0;
    if( i<h-1 && g[i+1][j] == val && !vis[i+1][j]){
        
        a += dfs(i+1, j, val, 1);
    }
    if( i>0 && g[i-1][j] == val && !vis[i-1][j]){
        
        b += dfs(i-1, j, val, 1);
    }
    if( j<l-1 && g[i][j+1] == val && !vis[i][j+1]){
        
        c += dfs(i, j+1, val, 1);
    }
    if( j>0 && g[i][j-1] == val && !vis[i][j-1]){
        
        d += dfs(i, j-1, val, 1);
    }
    
    return tam += a + b + c + d;
}


int main(){ _

    cin >> h >> l;
    
    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            cin >> g[i][j];
            vis[i][j] = false;
        }
    }
    
    
    int menor = 40100;
    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){ 
            if (!vis[i][j]){
                int tam = dfs(i, j, g[i][j], 1);
                menor = min(menor, tam);
                
            }
        }
    }
    
    cout << menor << endl;
    
    return 0;
}
