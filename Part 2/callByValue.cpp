#include <iostream>
using namespace std;

void swap(int x, int y){

    int t = x ;
    x = y ;
    y = t;
    cout <<"After Swaping    x -:  "<<x<<"  y -:"<<y<< endl;
    return;

}

void simpleInterest(int principle, float rate, int time){
    cout<<"Simple Interest is -: "<< (principle*rate*time) / 100 << endl;
}

int main() {
    
    int x = 5; 
    int y = 6;

    cout <<"Before Swaping   x -:  "<<x<<"  y -:"<<y<< endl;

    swap(x,y);

/*     int principal = 1000; // Principal amount
    float rate = 5.5;     // Annual interest rate in percentage
    int time = 3;         // Time in years

    simpleInterest(principal,rate,time); */


    
    return 0;
}