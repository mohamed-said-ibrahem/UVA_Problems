#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int n,x,y;
double total = 0;
int store_1;
int store_2;
string name;
int  arr[10][10];
 while(cin>>n && n != 0){

for(int i=0;i<2*n;i++){
cin>>name>>x>>y;
arr[i][0] = x;
arr[i][1] = y;
}
for(int j=0;j<2*n;j++){
double result = 1000000;
for(int k=j+1;k<2*n;k++){
int num1_x = arr[j][0];
int num2_x = arr[k][0];
int num1_y = arr[j][1];
int num2_y = arr[k][1];
if (num1_x==-1){result =0;break;}
if(num2_x==-1){continue;}
double value = sqrt(pow(num1_x-num2_x,2)+pow(num2_y-num1_y,2));
if(value <  result){
result = value;
store_1 = j;
store_2 = k;

}

}
arr[store_1][0]= -1;
arr[store_2][0]= -1;
arr[store_1][1]= -1;
arr[store_2][1]= -1;

total = total + result;
}
cout << total-1000000;
}


}
