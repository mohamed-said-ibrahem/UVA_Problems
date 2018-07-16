#include <iostream>
#include <math.h>
using namespace std;

int main()
{
double a,b,c,d;
double eq1,eq2,eq3;
while(cin>>a>>b>>c>>d &&(a!=0||b!=0||c!=0||d!=0)){
if(a-b<0){eq1 = (1-((b-a)/40))*360;}
else{eq1 = ((a-b)*360)/40;}
if(c-b<0){eq2 = (1-((b-c)/40))*360;}
else{eq2 = ((c-b)*360)/40;}
if(d-c<0){eq3 = ((c-d)*360)/40;}
else{eq3 = (1-((d-c)/40))*360;}
cout<<1080 + eq1 + eq2 + eq3<<endl;


}

}
