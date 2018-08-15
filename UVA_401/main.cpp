#include <iostream>

using namespace std;

int main()
{
string word;
int temp,mir,counter,temp2;
char arr[2][35];
arr[0][0] = 'A';arr[1][0] = 'A';arr[0][1] = 'E';arr[1][1] = '3';arr[0][2] = 'H';arr[1][2] = 'H';arr[0][3] = 'I';
arr[1][3] = 'I';arr[0][4] = 'J';arr[1][4] = 'L';arr[0][5] = 'L';arr[1][5] = 'J';arr[0][6] = 'M';arr[1][6] = 'M';arr[0][7] = 'O';arr[1][7] = 'O';arr[0][8] = 'S';arr[1][8] = '2';
arr[0][9] = 'T';arr[1][9] = 'T';arr[0][10] = 'U';arr[1][10] = 'U';arr[0][11] = 'V';arr[1][11] = 'V';arr[0][12] = 'W';arr[1][12] = 'W';arr[0][13] = 'X';arr[1][13] = 'X';
arr[0][14] = 'Y';arr[1][14] = 'Y';arr[0][15] = 'Z';arr[1][15] = '5';arr[0][16] = '1';arr[1][16] = '1';arr[0][17] = '2';arr[1][17] = 'S';arr[0][18] = '3';arr[1][18] = 'E';
arr[0][19] = '5';arr[1][19] = 'Z';arr[0][20] = '8';arr[1][20] = '8';
while(cin>>word){
int length = word.length();
temp = 1;
for(int i=0,j=length-1;i<length-1,j>=0;i++,j--){
if(word.at(i)!=word.at(j)){
    temp =0;
    break;}
}

if(temp){
mir =1;
counter = 0;
   for(int j=0;j<length;j++){
        for(int k=0;k<21;k++){
            if(word.at(j)==arr[0][k]){
            if(arr[0][k]==arr[1][k])
            counter++;
            }
        }

   }
   if(counter == length){
   cout<<word<<" -- is a mirrored palindrome."<<endl;
      cout<<endl;
   }else{
   cout<<word<<" -- is a regular palindrome."<<endl;
   cout<<endl;
   }

}else{
string nw="";
    for(int i=0;i<length;i++){
        for(int j=0;j<21;j++){
        if(word.at(i)==arr[0][j]){
        nw = nw+ arr[1][j];
        }
        }
    }
    temp2=1;
    if(nw.length()!=length){
    temp2 = 0;
    }else{
    for(int i=0,j=length-1;i<length-1,j>=0;i++,j--){
        if(word.at(i)!=nw.at(j)){
        temp2 =0;
        }
    }
    }
    if(temp2){
       cout<<word<<" -- is a mirrored string."<<endl;
          cout<<endl;
    }
    else {
       cout<<word<<" -- is not a palindrome."<<endl;
          cout<<endl;
    }

}


}


}
