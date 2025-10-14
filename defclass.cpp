
#include <iostream>
using namespace std;

        int main() {

            class animal
            {
                public:
                    string name;
                    string say;
                    string color;
                    
                    void displayInfo() {
                        cout << name << " " << say << " " << color << endl;
                    }
            };
            
            animal animal1;
            animal1.name = "Dog";
            animal1.say = "Woof";
            animal1.color = "Brown";
            animal1.displayInfo();
           
            animal animal2;
            animal2.name = "Cat";
            animal2.say = "Meow";
            animal2.color = "White";
            animal2.displayInfo();

            return 0;

            



            // class car {
            //     public:
            //         string brand;
            //         string model;
            //         int year;
            //         void displayInfo() {
            //             cout << brand << " " << model << " " << year << endl;
            //         }
            // };

            // car car1;
            // car1.brand = "Toyota";  
            // car1.model = "Corolla";
            // car1.year = 2020;
            // cout << car1.brand << " " << car1.model << " " << car1.year << endl;
            

            // car car2;
            // car2.brand = "Honda";  
            // car2.model = "Civic";
            // car2.year = 2019;
            // cout << car2.brand << " " << car2.model << " " << car2.year << endl;
            // return 0;

            // car1.displayInfo();
            // car2.displayInfo();
        }

