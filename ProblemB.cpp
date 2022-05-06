// हर हर महादेव
using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
int round(int a[],int i,int j){
int num=0;
  while(a[i]>=a[j]){
    a[i]/=2;
    num++;
  }
  return num;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int i=n-2;i>=0;i--){
      if(a[i+1]>0)ans+=round(a,i,i+1);
      else {ans=-1;break;}
    }
    cout<<ans<<endl;
   }
}


