// Add a function to the point data type (Programs 3.3 and 3.4) that determines whether or not three points are collinear, 
// to within a numerical tolerance of 10-4. Assume that the points are all in the unit square.


#include <iostream>
using namespace std;

struct point{
    float x; float y;
};

float slope(point a, point b){
    float m = (b.y - a.y)/(b.x - a.x);
    return m;
}

int main(int argc, char* argv[]){
    point first, second, third;
    first.x = stof(argv[1]);
    first.y = stof(argv[2]);

    second.x = stof(argv[3]);
    second.y = stof(argv[4]);

    third.x = stof(argv[5]);
    third.y = stof(argv[6]);

    float m = slope(first, second);

    float c = first.y - m*first.x;

    float potentialThirdPointY = m*third.x + c;
    
    if(abs(potentialThirdPointY - third.y)<=1e-4){
        cout<<"points are collinear";
    }
    else{
        cout<<"points are not collinear";
    }
    return 0;

}