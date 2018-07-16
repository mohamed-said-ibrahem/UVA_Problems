#include <iostream>
#include <algorithm>

using namespace std;

int arr[101];
int main()
{
int t,n,mini,total;
cin>>t;
for(int i=0;i<t;i++){
total = 0;
cin>>n;
for(int j=0;j<n;j++){
cin>>arr[j];
}
sort(arr,arr+n);
mini = arr[0];
for(int k=1;k<n;k++){
total = total + (arr[k]-mini);
mini = arr[k];
}
total = 2*total;
cout<<total<<endl;
}
}
