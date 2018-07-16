#include <iostream>

using namespace std;

int main()
{
int n,done,counterz=0,countery=0,degree;
string a,first,direction;
while(cin>>n&&n!=0){
done = 0;
degree = 0;
counterz=0;
countery=0;
first = "+x";
for(int i=0;i<n-1;i++){
cin>>direction;
if(first[1] == direction[1]) {
  			if((first == "-y" && direction == "+y") ||
  				 (first == "+y" && direction == "-y") ||
  				 (first == "-z" && direction == "+z") ||
  				 (first == "+z" && direction == "-z")) {
  					first = "+x";
  			} else first = "-x";
  		}
  		else if(first[1] == 'x' && direction[1] == 'y') {
  			if(first[0] == direction[0]) first = "+y";
  			else first = "-y";
  		} else if((first[1] == 'x' && direction[1] == 'z')) {
  			if(first[0] == direction[0]) first = "+z";
  			else first = "-z";
  		}
  	}
  	  	cout << first <<endl;

}
}
