#include <iostream>

using namespace std;

int main()
{
int n,x,y,a,b;
while(cin>>n && n != 0){
cin>>x>>y;
for(int i=0;i<n;i++){
cin>>a>>b;
if(a==x||b==y){
cout<< "divisa"<<endl;
}
else if(a>x&&b>y){
cout<<"NE"<<endl;
}
else if(a<x&&b<y){
cout<<"SO"<<endl;
}
else if(a>x&&b<y){
cout<<"SE"<<endl;
}
else if(a<x&&b>y){
cout<<"NO"<<endl;
}
}
}
}

