// हर हर महादेव
using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
 
int main()
{
  int t;
  cin>>t;
  while(t--){
   string s;
   cin>>s;
   int n=s.size();
   int one=-1,zero=-1;
   for(int i=0;i<n;i++){
     if(s[i]=='1'){one=i;}
   }
 
   for(int i=0;i<n;i++){
     if(s[i]=='0'){zero=i;break;}
   }
   int ans;
   if(one==-1 && zero==-1)ans=n;
   else if(zero==-1){ans=n-one;}
   else if(one==-1)ans=zero+1;
   else ans=zero-one+1;
   cout<<ans<<endl;
  }
}
 
