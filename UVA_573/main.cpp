#include <iostream>

using namespace std;

int main()
{
double height_of_well,can_clim_per_day,should_slide_at_night,counter=0,fatigue,distance_climbed;
double distance_up,initial,after_climping,after_sliding;
while(cin>>height_of_well>>can_clim_per_day>>should_slide_at_night>>fatigue && height_of_well!=0){
fatigue = fatigue/100;
distance_climbed = can_clim_per_day;
counter = 0;
after_climping=0,after_sliding=0;
while(1){
if(distance_climbed<0)
distance_climbed=0;

counter++;
after_climping =after_climping +  distance_climbed;
after_sliding = after_sliding+(distance_climbed-should_slide_at_night);
if(after_climping>height_of_well){
cout<<"success on day "<<counter<<endl;
break;
}

if(after_sliding<0){
cout<<"failure on day "<<counter<<endl;
break;
}
after_climping = after_climping - should_slide_at_night;
distance_climbed = distance_climbed-fatigue*can_clim_per_day;

}

}

}
