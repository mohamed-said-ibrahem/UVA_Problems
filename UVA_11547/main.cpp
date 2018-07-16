#include <iostream>

using namespace std;

int main()
{

int t,a,answer;
cin>>t;
for(int i=0;i<t;i++){
cin>>a;
answer =((((((567*a)/9)+7492)*235)/47)-498)/10;
if (answer<0)answer*=-1;
cout<<answer%10<<endl;
}

}
