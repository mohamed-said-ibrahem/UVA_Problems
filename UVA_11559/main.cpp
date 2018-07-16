#include <iostream>

using namespace std;

int main()
{
int arr[15];
int n,b,h,w,cost,room,total_amount,answer=1000000;
while(cin>>n>>b>>h>>w){
answer=1000000;
for(int l=0;l<15;l++){
arr[l]=0;
}
for(int i =0 ;i<h;i++){
cin>>cost;
total_amount = n*cost;
for(int j=0;j<w;j++){
    cin>>room;
    arr[j] = room;
}
if(total_amount<=b){
for(int k=0;k<w;k++){
if(arr[k]>=n){
answer =  min(answer,total_amount);
}
}
}

}
if(answer==1000000){
cout<<"stay home"<<endl;
}
else{
cout<<answer<<endl;

}

}

}
