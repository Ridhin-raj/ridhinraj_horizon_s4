/*

ans for  partA 

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


double CalculateDistance(double x1, double x2, double y1, double y2){
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


// fuction to calculate the time to reach the destination


double CalculateTime(double distance, double u, double a, double vmax){
    double time = 0;
    
    /*
    case 1: distance is short, no reach max speed
    case 2 : distance is  long. reach max speed 
    */



    /*
    v = u + at
    or 
    definition of acceleration

    a = (final velocity - initial velocity ) / time taken
    
    
    */ 

    // time to reach destiniation at max speed;
    double t1 = (vmax - u)/a;

    /*
    s = ut + 1/2 at^2
    using this equation find the distance travels before reaching max speed
    */ 

    double distance1 = ( u * t1 ) + ( 0.5 * a * t1 * t1 );

    // rover never reach max speed

    if ( distance1 >= distance ){

        // v^2 = u^2 + 2as
        // does not reach max speed

        time = ( -u + sqrt( u * u + 2 * a * distance ));

    }
    else {

        // rover reaches max speed
        double remainingDistance = distance - distance1 ;

        // time = distace / speed 
        double t2 = remainingDistance / vmax ; 
        
        time = t1 + t2;
    }

    return time;


}

int main(){
    double x1, x2 , y1, y2;
    double u, a, vmax;

    cout << "Enter origin coordinates (x1, y1)"<<endl;
    cin >> x1 >> y1;

    cout << "Enter destination coordinates (x2, y2)"<<endl;
    cin >> x2 >> y2;

    cout << "Enter initial velocity :";
    cin>> u;

    cout << "Enter final veloctiy : ";
    cin >> vmax;

    cout << "Enter the acceleration : ";
    cin >> a;

    

    double distance = CalculateDistance(x1, x2, y1, y2);

    double time = CalculateTime(distance, u, a, vmax);

    cout << "Distance from origin to destination :"<< distance <<"m"<<endl;

    cout << "time taken :" << time << "s" << endl;


    return 0;
}

