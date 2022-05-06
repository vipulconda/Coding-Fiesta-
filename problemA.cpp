// हर हर महादेव
using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
 
int main()
{
   int t;
   cin>>t;
   while(t--){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
   if(max(x-a,0)+max(y-b,0)<=c)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   }
}
 
