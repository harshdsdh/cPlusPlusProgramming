//Find the largest and smallest numbers that you can represent with types int, long int, short int, float, and double in your programming environment.

#include<iostream>
#include<limits>

using namespace std;

int main(){
    
    cout<<"int smallest number: "<<numeric_limits<int>::min()<<" to "<<"int largest number: "<<numeric_limits<int>::max()<<endl;
    
    cout<<"long int smallest: "<<numeric_limits<long int>::min()<<" to largest long int "<<numeric_limits<long int>::max()<<endl;
    
    cout<<"short int smallest: "<<numeric_limits<short int>::min()<<" to largest short int: "<<numeric_limits<short int>::max()<<endl;
    
    cout<<"float smallest: "<<numeric_limits<float>::min()<<" to largest float: "<<numeric_limits<float>::max()<<endl;
    
    cout<<"double smallest: "<<numeric_limits<double>::min()<<" to largest double: "<<numeric_limits<double>::max()<<endl;
    return 0;
}