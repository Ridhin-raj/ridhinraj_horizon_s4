/*

ans for  partA without error handling

in this file calcuate distance b/w two points in 2D plane 
using the equation distance = ((x2 - x1)^2 + (y2 - y1)^2)^1/2

we assume input coordinates scale as in meters
so distance is in meters

for 3D plane 
distance = ((x2 - x1)^2 + (y2 - y1)^2 + (z2 - z1)^2)^1/2

error handling

user may input strings,,
once there is any run time error program stop running.



spcial cases :

horizontal only 
vertical only 
same two points 


*/



#include<iostream>
#include<cmath>
using namespace std;


// this function returns the distance b/w two points in the 2d plane 
// passes the parameters as  (x1,y1) and x2,y2) 


double Distance(double x1, double x2, double y1, double y2){
    /*
    distance = ((x2 - x1)^2 + (y2 - y1)^2)^1/2
    find the distance between two points in a 2D plane. use above equation
    
    in case 3D 
    

    */

    // edge cases
    
    
    // same two point distance is  always 0

   if(x1 == x2 && y1 == y2)
   return 0;

//    horizontal movement only
   if( x1 == x2 )
   {
    return sqrt(pow( y2 - y1, 2));

   }

//    vertical movement only 
   if ( y1 == y2)
   {
    return sqrt(pow( x2 - x1, 2));

   }




    double distance = sqrt(pow(x2 - x1, 2)+ pow(y2 - y1, 2));
    return distance;
}


int main(){
    double x1, x2 , y1, y2;

    cout << "Enter origin coordinates (x1, y1)"<<endl;
    cin >> x1 >> y1;

    cout << "Enter destination coordinates (x2, y2)"<<endl;
    cin >> x2 >> y2;

    double distance = Distance(x1, x2, y1, y2);

    cout << "Distance from origin to destination :"<< distance <<"m"<<endl;
    return 0;
}

