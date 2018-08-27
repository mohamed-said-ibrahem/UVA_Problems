#include <iostream>

using namespace std;

int main()
{
int n,second,t=0;
while(cin>>n && n!=0){
if(t){cout<<endl;}
int noAnswer = 1;
t=1;
for(int second = 1234; second <= 98765/n; second++){
int first = second*n;
int temp,used = (second < 10000); // used will be 00...00001 if the zero are taken here
temp = first;
while(temp){
used = used | 1 << (temp%10); //mark right most digit to 1 as a bit manipulation string for ex 8 --> 100000000
temp = temp / 10 ; //remove right most digit
}
temp = second;
//the same as the first one so at the end if used --> 11111 11111 so all the digits are unique
while(temp){
used = used | 1 << (temp%10); //mark right most digit to 1 as a bit manipulation string for ex 8 --> 10000000
temp = temp / 10 ; //remove right most digit
}
if(used == (1<<10)-1){ // all the digits are uniqe 1 2 3 4 5 6 7 8 9 0 one time occured
noAnswer = 0;
printf("%0.5d / %0.5d = %d",first, second, n);
cout<<endl;
}
}
if(noAnswer){
cout <<"There are no solutions for "<<n<<"."<<endl;
}
}
}
