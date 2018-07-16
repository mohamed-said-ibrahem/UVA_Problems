#include <iostream>

using namespace std;

int main()
{
int n,a,b,c,d,e,f,g;
cin>>n;
for(int i=0;i<n;i++){
cin>>a>>b>>c;
d = min(a,b);
e = min(d,c);
f = max(a,b);
g = max(f,c);
if(a != e && a != g){
cout<<"Case "<<i+1<<": "<<a<<endl;
}
else if(b != e && b != g){
cout<<"Case "<<i+1<<": "<<b<<endl;
}
else{
cout<<"Case "<<i+1<<": "<<c<<endl;
}
}

}
