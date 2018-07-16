#include <iostream>

using namespace std;

int main()
{
string word;
int counter=0;
while(cin>>word && word !="#"){
counter++;
if(word=="HELLO"){
cout<<"Case "<<counter<<": "<<"ENGLISH"<<endl;
}
else if(word=="HOLA"){
cout<<"Case "<<counter<<": "<<"SPANISH"<<endl;
}
else if(word=="HALLO"){
cout<<"Case "<<counter<<": "<<"GERMAN"<<endl;
}
else if(word=="BONJOUR"){
cout<<"Case "<<counter<<": "<<"FRENCH"<<endl;
}
else if(word=="CIAO"){
cout<<"Case "<<counter<<": "<<"ITALIAN"<<endl;
}else if(word=="ZDRAVSTVUJTE"){
cout<<"Case "<<counter<<": "<<"RUSSIAN"<<endl;
}
else{
cout<<"Case "<<counter<<": "<<"UNKNOWN"<<endl;

}
}

}
