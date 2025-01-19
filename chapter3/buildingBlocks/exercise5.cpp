// Implement the necessary functions to allow Program 3.2 to be used for random bits (numbers that can take only the values 0 or 1).



#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int random(int maxVal){
    int random = rand()%2;
    return random;
}

int compute_average_and_std(int r, int N){
    float m1 = 0;
    float m2 = 0;

    for(int i=0;i<N;i++){
        int n = random(r);
        m1+=(float) n/N;
        m2+= (float) n*n/N;
    }
    cout<<"average for r = "<<r<<" and N = "<< N<<" is: "<< m1<<endl;
    cout<<"std dev for r = "<<r<<" and N = "<< N<<" is: "<< sqrt(m2-m1*m1)<<endl;
    return 0;
}

int main(int argc, char* argv[]){
    int maxVal, N;

    for(maxVal = 10; maxVal<=1000; maxVal*=10){
        for(N = 1e3; N<=1e6; N*=10){
                compute_average_and_std(maxVal, N);
        }
    }

    return 0;


}