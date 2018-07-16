#include <iostream>

using namespace std;

int main()
{
int n,p,s,counter1,dont=1;
int temp[10000];
float r;
float arr2[10000];
string a,b,c,person;
string arr[10000];
int arr3[10000];
int countt=0,currr=0;
while(cin>>n>>p && n!=0&&p!=0){
if(countt!=0)cout<<"\n";
dont = 1;
countt++;
for(int k=0;k<10000;k++){
arr3[k] = 0;
arr2[k] = 0;
arr[k] = "";
temp[k] = 0;
}
getline(cin, a);
for(int i=0;i<n;i++){
getline(cin, a);

}

for(int j=0;j<p;j++){
getline(cin, b);

arr[j] = b;
cin>>r;
arr2[j] = r;
cin>>s;
arr3[j] = s;
getline(cin, c);
for(int l=0;l<s;l++){
getline(cin, c);

}
}
counter1=0;
int maxi = 0;
for(int i = 0;i<p;i++){
if(arr3[i]>maxi){
maxi = arr3[i];
person = arr[i];
}
}
for(int i = 0;i<p;i++){
if(arr3[i]==maxi){
counter1++;
temp[i] = 1;
}
}
if(counter1>1){
float minnni =9999999;
for(int o=0;o<p;o++){
if((minnni==arr2[o])){
dont=0;
cout<<"RFP #"<<countt<<endl;
cout<<arr[currr]<<endl;

break;
}
if(temp[o]!=0&&arr2[o]<minnni){
minnni = arr2[o];
currr = o;
}

}
if(dont){
cout<<"RFP #"<<countt<<endl;
cout<<arr[currr]<<endl;
}


}else{
cout<<"RFP #"<<countt<<endl;
cout<<person<<endl;
}



}


}
