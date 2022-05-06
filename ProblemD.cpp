// हर हर महादेव
using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
void dfs(vector<vector<int>>&adj,vector<int> &visited,int node,queue<int>&st){
st.push(node);
visited[node]=1;
if(adj[node].size()==1){
cout<<st.size()<<endl;
while(!st.empty()){cout<<st.front()<<" ";st.pop();}
cout<<endl;
}
for(auto x: adj[node]){
 if(visited[x]==0){
    dfs(adj,visited,x,st);
 }
}
}
int main()
{
  int t;
  cin>>t;
  while(t--){
     int n;
     cin>>n;
     int p[n];
     for(int i=0;i<n;i++)cin>>p[i];
     set<int>xp;
     for(int i=0;i<n;i++){xp.insert(p[i]);}
     int num=xp.size();
     vector<vector<int>>adj(n+1);
     for(int i=0;i<n;i++){
       adj[i+1].push_back(p[i]);
       adj[p[i]].push_back(i+1);
     }
     vector<int>visited(n+1,0);
     int root;
     for(int i=0;i<n;i++){
        if(p[i]==i+1){root=i+1;break;}
     }
     if(n>1){cout<<n-num<<endl;
     queue<int>st;
     dfs(adj,visited,root,st);}
     else {cout<<1<<endl<<1<
       <endl<<1<<endl;}
 
  }
}
