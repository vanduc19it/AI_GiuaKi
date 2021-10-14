#include<bits/stdc++.h> 
using namespace std;
int n,m;
vector <int> k[105];
bool visit[105];
void dfs(int u){
		visit[u] = true;
		cout << u << ' ';
		

	for(int i =0;i<k[u].size();i++)
		if(!visit[k[u][i]]) 
			dfs(k[u][i]);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	
	freopen("dfs.inp", "r",stdin);
	freopen("dfs.out", "w",stdout);
	
	cin >> n >> m;
	for(int i =0;i<=m;i++)
	{
		int u,v;
		cin>> u >> v;
		k[u].push_back(v); 
	}
	dfs(0); 
	return 0;
}
