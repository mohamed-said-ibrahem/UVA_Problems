
#include <iostream>

using namespace std;

int main()
{
int n,a,b,c,mini,maxi;
cin>>n;
for(int i = 0;i < n;i++){
    cin>>a>>b>>c;
    bool sol = false;
    for(int x = -22;x <= 22&&!sol;x++){
     for(int y = -100;y <= 100&&!sol;y++){
      for(int z = -100;z <= 100&&!sol;z++){
        if(x!=y&&x!=z&&y!=z&&x+y+z==a&&x*y*z==b&&(x*x)+(y*y)+(z*z)==c){
            if(!sol){
                if(x<y){
                    mini = x;
                    maxi = y;
                }else{
                    mini = y;
                    maxi = x;
                }
                cout<<mini<<" "<<maxi<<" "<<z<<endl;
                sol = true;
            }
        }
    }
    }
    }
    if(!sol){
        cout<<"No solution."<<endl;
    }
}



}
