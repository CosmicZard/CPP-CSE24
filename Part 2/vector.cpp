#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> v1;
    vector <int> v2 = {1,2,3,4,5};
    vector <int> v3(5,14);

    cout<<"Size of Vector 1 -: "<<v1.size()<<"\n";
    cout<<"Size of Vector 2 -: "<<v2.size()<<"\n";
    cout<<"Size of Vector 3 -: "<<v3.size()<<"\n";
    
    
    cout<<"Elements of Vector 3 -: ";
    for (int i=0;i<v3.size();i++){
        
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    return 0;
}