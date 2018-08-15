#include <iostream>
#include <set>

using namespace std;

int main()
{
int number,counter,len1,len2,right;
string word,player;
while(cin>>number && number != -1){
std::set<char> myset;
std::set<char> myset2;
std::set<char> myset3;
cin>>word;
cin>>player;
counter=0;
right = 0;
len1 = word.length();
len2 = player.length();
for(int i=0;i<len2;i++){
    if(myset.size()>=7){break;}
    char test = player.at(i);
    if(word.find(test)==-1){
        counter++;
        myset.insert(test);
    }else{
    for(int j=0;j<len1;j++){
        myset3.insert(word.at(j));
        if(word.at(j)==player.at(i)){
        myset2.insert(player.at(i));
        right++;
        }
    }
    }
}

if(myset2.size()==len1||((myset3.size()==myset2.size())&&myset3.size()!=0)){
cout<<"Round "<<number<<endl;
cout<<"You win."<<endl;
}else if(counter>=7&&myset.size()>=7){
cout<<"Round "<<number<<endl;
cout<<"You lose."<<endl;
}else{
cout<<"Round "<<number<<endl;
cout<<"You chickened out."<<endl;
}


}

}
