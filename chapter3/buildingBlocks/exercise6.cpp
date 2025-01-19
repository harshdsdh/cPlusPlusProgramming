// Write a client program that uses the data type in Programs 3.3 and 3.4 for the following task: 
//Read a sequence of points (pairs of floating-point numbers) from standard input, and find the one that is closest to the first.

#include <iostream>
#include <math.h>

using namespace std;

struct point {
    float x; float y;
};

float distance(point a, point b){
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

int main(int argc, char* argv[]){
    struct point orig_point, point1, point2;
    orig_point.x = 1.0;
    orig_point.y = 1.0;

    point1.x = stof(argv[1]);
    point1.y = stof(argv[2]);

    point2.x = stof(argv[3]);
    point2.y = stof(argv[4]);

    if (distance(point1, orig_point)<=distance(point2, orig_point)){

        cout<<"min point is : "<< point1.x<<" "<<point1.y<<endl;
        
    }
    else{
        cout<<"min point is : "<<point2.x<<" "<<point2.y<<endl;
    }

        return 0;
    
    
}


