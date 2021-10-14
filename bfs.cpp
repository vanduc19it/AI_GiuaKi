#include<bits/stdc++.h> 
using namespace std;
const int N = 1005;
int n,m,k;
vector <int> g[N];
bool visit[N];
void bfs(int st){
		queue <int> q;
		q.push(st);
		visit[st] = true;
	
		while(!q.empty()){
			int u = q.front();
			cout << u << ' ';
			q.pop();
			
			for(int i = 0;i<g[u].size();i++)
				if(!visit[g[u][i]]) {
					visit[g[u][i]] = true;
					q.push(g[u][i]);
				}
			
		}


}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	
	freopen("bfs.inp", "r",stdin);
	freopen("bfs.out", "w",stdout);
	
	cin >> n >> m >> k;
	for(int i =1;i<=m;i++)
	{
		int u,v;
		cin>> u >> v;
		g[u].push_back(v);
		
	}
	bfs(k); 
	
	return 0;
} 
