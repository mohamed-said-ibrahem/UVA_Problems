#include <iostream>
#include <algorithm>    // std::min

using namespace std;

int main()
{
int a,b,c,d,e,coun1,coun2,number,temp,small,mini,maxi,last;
while(cin>>a>>b>>c>>d>>e &&a!=0&&b!=0&&c!=0&&d!=0&&e!=0){
mini = min(a,b);
mini = min(mini,c);
maxi = max(a,b);
maxi = max(maxi,c);
if(a!=mini&&a!=maxi){last=a;}
else if(b!=mini&&b!=maxi){last=b;}
else {last = c;}
coun1=0;coun2=0;number=0;
if(d<e){small = d;}else{small= e;}
if(e<a){coun1++;}if(e<b){coun1++;}if(e<c){coun1++;}
if(d<a){coun2++;}if(d<b){coun2++;}if(d<c){coun2++;}

if(coun1>=2&&coun2>=1 ||coun1>=1&&coun2>=2){cout<<-1<<endl;}else{
if(coun1==0&&coun2==0){
number =1;
while(number==a||number==b||number==c||number==e||number==d){
number++;
}
if(number>52){cout<<-1<<endl;}else{cout<<number<<endl;}
}
else if((coun1==0&&coun2==1)||(coun2==0&&coun1==1)){
if(coun1==1&&coun2==0){
temp = d;
d=e;
e=temp;
}
if(d<a){
if(b<c){
number = c+1;
while(number==a||number==b||number==c||number==e||number==d){
number++;
}
if(number>52){cout<<-1<<endl;}else{cout<<number<<endl;}
}else{
number = b+1;
while(number==a||number==b||number==c||number==e||number==d){
number++;
}
if(number>52){cout<<-1<<endl;}else{cout<<number<<endl;}
}
}
else if(d<b){
if(a<c){
number = c+1;
while(number==a||number==b||number==c||number==e||number==d){
number++;
}
if(number>52){cout<<-1<<endl;}else{cout<<number<<endl;}
}else{
number = a+1;
while(number==a||number==b||number==c||number==e||number==d){
number++;
}
if(number>52){cout<<-1<<endl;}else{cout<<number<<endl;}
}
}
else{

if(a<b){
number = b+1;
while(number==a||number==b||number==c||number==e||number==d){
number++;
}
if(number>52){cout<<-1<<endl;}else{cout<<number<<endl;}
}else{
number = a+1;
while(number==a||number==b||number==c||number==e||number==d){
number++;
}
if(number>52){cout<<-1<<endl;}else{cout<<number<<endl;}
}

}

}

else if((coun1==0&&coun2>=2)||(coun2==0&&coun1>=2)){
number = maxi;
while(number==a||number==b||number==c||number==e||number==d){
number++;
}
if(number>52){cout<<-1<<endl;}else{cout<<number<<endl;}
}
else if((coun1==1&&coun2==1)){
number = last;
while(number==a||number==b||number==c||number==e||number==d){
number++;
}
if(number>52){cout<<-1<<endl;}else{cout<<number<<endl;}

}
}

}
}
