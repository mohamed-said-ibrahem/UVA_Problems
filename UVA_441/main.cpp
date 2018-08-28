#include <iostream>

using namespace std;

int arr[]={};
int main()
{
int n,a;
int tmp=0;
while(cin>>n && n!=0){
if(tmp){cout<<endl;}
tmp=1;
for(int i=0;i<n;i++){
cin>>a;
arr[i] = a;
}

for(int r = 0 ; r < n-5; r++){
for(int b = r+1; b < n-4; b++){
for(int c = b+1; c < n-3; c++){
for(int d = c+1; d < n-2; d++){
for(int e = d+1; e < n-1; e++){
for(int f = e+1; f < n; f++){
cout<<arr[r]<<" "<<arr[b]<<" "<<arr[c]<<" "<<arr[d]<<" "<<arr[e]<<" "<<arr[f]<<endl;
}
}
}
}
}
}
}

}
