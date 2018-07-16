#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
double h,m,mininhour,total,totalindegree;
char dot;
while(cin>>h>>dot>>m && (h!=0||m!=0)){
mininhour = (h*5+((m/60)*5));
total = abs(mininhour - m);
totalindegree = total * 6;
if(360-totalindegree<totalindegree){totalindegree=360-totalindegree;}
printf("%.3lf",totalindegree);
cout<<endl;
}

}
