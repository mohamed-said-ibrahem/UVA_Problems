#include <iostream>

using namespace std;

int main()
{
int counter = 0;
int points,kingSpades,kingHearts,kingDiamonds,kingClubs,queenSpades,queenHearts,queenDiamonds,queenClubs,jackSpades,jackHearts,jackDiamonds,jackClubs;
string a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13;
string arr[10000][13]={};
while(cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10>>a11>>a12>>a13){
points = 0;kingSpades = 0;kingHearts = 0;kingDiamonds = 0;kingClubs = 0;
queenSpades = 0;queenHearts = 0;queenDiamonds = 0;queenClubs = 0;
jackSpades = 0,jackHearts = 0,jackDiamonds = 0,jackClubs = 0;
arr[counter][0] = a1;
arr[counter][1] = a2;
arr[counter][2] = a3;
arr[counter][3] = a4;
arr[counter][4] = a5;
arr[counter][5] = a6;
arr[counter][6] = a7;
arr[counter][7] = a8;
arr[counter][8] = a9;
arr[counter][9] = a10;
arr[counter][10] = a11;
arr[counter][11] = a12;
arr[counter][12] = a13;
for(int i = 0; i < 13; i++){
string word = arr[counter][i];
if(word[0]=='A'){points+=4;}
else if(word[0]=='K'){points+=3;
if(word[1]=='S'){kingSpades++;}
else if(word[1]=='H'){kingHearts++;}
else if(word[1]=='D'){kingDiamonds++;}
else if(word[1]=='C'){kingClubs++;}
}
else if(word[0]=='Q'){points+=2;
if(word[1]=='S'){queenSpades++;}
else if(word[1]=='H'){queenHearts++;}
else if(word[1]=='D'){queenDiamonds++;}
else if(word[1]=='C'){queenClubs++;}
}
else if(word[0]=='J'){points+=1;
if(word[1]=='S'){jackSpades++;}
else if(word[1]=='H'){jackHearts++;}
else if(word[1]=='D'){jackDiamonds++;}
else if(word[1]=='C'){jackClubs++;}
}

}
for(int i = 0; i < 13; i++){
string word2 = arr[counter][i];



}
counter++;




}

}
