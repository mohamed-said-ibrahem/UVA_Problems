#include <iostream>

using namespace std;

int main()
{
int counter =0;
string input;

while(getline(cin,input)){
for(int i=0;i<input.length();i++){
    if(input.at(i) == '"'&&counter%2==0){
    cout<<"``";
    counter++;
    }
    else if(input.at(i) == '"' && counter%2!=0){
    cout<<"''";
    counter++;
    }
    else{
    cout<<input.at(i);
    }
}
cout<<'\n';
}

}
