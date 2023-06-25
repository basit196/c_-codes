#include <iostream>
using namespace std;

int main() {
    string VehicleName;
    int SumSuzuki = 0, SumCar = 0, SumBike = 0;
    int CountBike=0,CountCar=0,CountSuzuki=0;
    int Bike = 100, Car = 200, Suzuki = 250;

    cout << "Enter the Vehicle name or enter any other key to quit" << endl;
    cin >> VehicleName;

    while (VehicleName == "bike" || VehicleName == "car" || VehicleName == "suzuki") {
        if (VehicleName == "bike") {
            SumBike += Bike;
            
            CountBike++;
        }
        else if (VehicleName == "car") {
            SumCar += Car;
            
            CountCar++;
        }
        else if (VehicleName == "suzuki") {
            SumSuzuki += Suzuki;
            
            CountSuzuki++;
        }


        cout << "Would you like to add other Vehicle name or enter any other key to quit" << endl;
        cin >> VehicleName;
    }
    //Count the number of vihcles user have entered//
    cout << "Total Bikes is " <<CountBike<<endl;
    cout << "Total Cars is " <<CountCar<<endl;
    cout << "Total Suzuki's is " <<CountSuzuki<<endl;
    //Calculate the cost of vihcles user have entered//
    cout << "Cost of the Bikes is " << SumBike<< endl;
    cout << "Cost of the Cars is " << SumCar<< endl;
    cout << "Cost of the Suzuki is " << SumSuzuki<< endl;
    cout << "Total cost of the all vihcles you have entered is " << SumBike+SumCar+SumSuzuki<< endl;
    
    return 0;
}