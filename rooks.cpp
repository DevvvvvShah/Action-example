#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,k, ans = 0;
    cin>>n>>m>>k;
    int v[n+1];
    for (int i = 1; i <= n; i++)
    {
        v[i] = 0;
    }
    
    for (int i = 0; i < m; i++)
    {
        int l,r,c;
        cin>>l>>r>>c;
        for (int j = l; j <= r; j++)
        {
            v[j] = v[j] + c;
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == k) ans++;
        cout<<v[i]<<endl;
    }
    
    cout<<ans;
    
    return 0;
}