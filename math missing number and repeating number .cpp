#include<bits/stdc++.h>
using namespace std;
int main(){

long long n;
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
long long sn = (n*(n+1))/2;
long long s2n = (n*(n+1)*(2*n*1))/6;
long long s = 0;
long long s2 = 0;
for(int i=0;i<n;i++){
    s +=arr[i];
    s2 +=(long long)arr[i]*(long long)arr[i];
}

long long  val1 = s - sn;///x - y
long long val2 = s2 - s2n;
val2 = val2/val1;///x + y
long long x = (val1 + val2)/2;///repeating num
long long y = (x-val1);///


cout<<x+1<<" "<<y+1<<endl;




}
