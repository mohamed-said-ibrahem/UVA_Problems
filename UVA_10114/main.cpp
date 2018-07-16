#include <iostream>

using namespace std;
double arr[1000000];
int main()
{
int d,x,counter;
double b,c,y,car_value,take,value,a,down;
while(cin>>a>>b>>c>>d &&(a>0)){
for (int i=0;i<1000000;i++){
arr[i]=0;
}
take = 0;
counter = 0;
for(int i=0;i<d;i++){
cin>>x>>y;
arr[x] = y;
}
down = c;
car_value = (b+c)*(1-arr[0]);
value = c;
counter++;
if(c<car_value){cout<<counter-1<<" months"<<endl;}
while(c>=value){
if(counter==0){c = c-b;}
else {c=c-(down/a);}
if(arr[counter]){
    take = arr[counter];
}
value = car_value*(1-take);
car_value = value;
counter++;
}
if(counter==2){
cout<<counter-1<<" month"<<endl;
}
else{
cout<<counter-1<<" months"<<endl;

}

}

}

//need MODIFICATION
