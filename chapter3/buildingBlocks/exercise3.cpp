// Test the random-number generator on your system by generating 
// N random numbers of type double between 0 and 1, transforming them to integers between 0 and r – 1 
// by multiplying by r and truncating the result, and computing the average and 
// standard deviation for r = 10, 100, and 1000 and N = 103, 104, 105, and 106.

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double randomNumber(){
    return rand()/(double)RAND_MAX;
}

int coomputeAvgStdDev(int r, int N){
    float m1=0; 
    float m2=0;
    int n;
    
    for(int i = 0;i<N;i++){
        n = (int)(randomNumber()*r);
        m1 += (float) (n)/N;
        m2 +=(float) n*n/N;
    }

    cout<< "r = "<<r<<" N = "<<N<<" mean = "<<m1<<endl;
    cout<< "r = "<<r<<" N = "<<N<<" std dev = "<<sqrt(m2-m1*m1)<<endl;
    return 0;
}



int main(){

    int r, N;

    for (r=10;r<=1000;r*=10){

        for(N=1e3; N<=1e6; N*=10){

            coomputeAvgStdDev(r,N);

        }
    }
    return 0;
}