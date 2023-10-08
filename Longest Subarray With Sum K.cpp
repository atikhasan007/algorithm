#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int k ;
cin>>k;
int left = 0;
int right = 0;

int maxLen = 0;
int sum = arr[0];

while(right<n){
    while(left<=right && sum>k){
        sum = sum - arr[left];
        left++;
    }
    if(sum==k){
        maxLen = max(maxLen, right-left + 1);

    }
    right++;
    if(right<n){
        sum = sum + arr[right];
    }
}
cout<<maxLen<<endl;

}
