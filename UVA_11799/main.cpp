#include <iostream>

using namespace std;

int main()
{

int t,number,a,maxspad;
cin>>t;
for(int i=0;i<t;i++){
maxspad = 0;
cin>>number;
for(int j=0;j<number;j++){
cin>>a;
maxspad = max(maxspad,a);
}
cout<<"Case "<<i+1<<": "<<maxspad<<endl;
}

}
