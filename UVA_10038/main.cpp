#include <iostream>
#include <math.h>
#include <stdlib.h>     /* abs */
#include <algorithm>    // std::sort

using namespace std;

int main()
{
int n,temp,no;
int arr[3005]={};
while(cin>>n){
no = 1;
arr[3005]={};
for(int i=0;i<n;i++){
cin>>temp;
arr[i]=temp;
}
if(n==1){
cout<<"Jolly"<<endl;
}
else if(n==2){
if(abs(arr[1]-arr[0])==1){
cout<<"Jolly"<<endl;
}else{
cout<<"Not jolly"<<endl;
}
}
else{
for(int j=1;j<n;j++){
arr[j-1] = abs(arr[j] - arr[j-1]);
}
sort(arr,arr+n-1);
for(int k=1;k<n-1;k++){
if((arr[0]!=1)||(arr[k]-arr[k-1]!=1)){
cout<<"Not jolly"<<endl;
no=0;
break;
}
}
if(no){
cout<<"Jolly"<<endl;
}

}

}


}
