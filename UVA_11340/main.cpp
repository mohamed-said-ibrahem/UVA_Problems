#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
int n,number,value,lines;
int cents=0;
string s;
char chr;
char chars[10001]={};
int values[10001]={};
cin>>n;
for(int i=0;i<n;i++){
    cents=0;
cin>>number;
for(int j=0;j<number;j++){
cin>>chr>>value;
chars[j] = chr;
values[j] = value;
}
cin>>lines;
cin.ignore();
for(int k=0;k<lines;k++){
std::getline(std::cin,s);
for(int l=0;l<number;l++){
char srch = chars[l];
int amount = count(s.begin(), s.end(), srch);
cents = cents + amount*values[l];
}
}
double r = (double) cents/100;
printf("%0.2lf$\n", r);
}

}
