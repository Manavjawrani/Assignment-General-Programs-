#include <iostream>
#include <string>
using namespace std;

class Vehicle
{

   string Vehiclemodel;
   int RegNum;
   double Vehiclespeed;
   double Fuelcapacity;
   double Mileage;

public:
   Vehicle()
   {
       Vehiclemodel = "";
       RegNum = 0;
       Vehiclespeed = 0;
       Fuelcapacity = 0;
       Mileage = 0;
   }

   virtual void getAndSetData()
   {
       cout << "Enter the vehicle model : ";
       getline(cin, Vehiclemodel);

       cout << "Enter the registered number of vehicle : ";
       cin >> RegNum;

       cout << "Enter the speed of vehicle in km/hrs : ";
       cin >> Vehiclespeed;

       cout << "Enter fuel capacity of vehicle in litres : ";
       cin >> Fuelcapacity;

       cout << "Enter mileage of vehicle in km/litre : ";
       cin >> Mileage;
   }

   double fuelNeeded(double distance)
   {
       return (distance / Mileage);
   }

   double distanceCovered(double time)
   {
       return (Vehiclespeed * time);
   }

   virtual void display()
   {
       cout << "Vehicle model : " << Vehiclemodel << endl;
       cout << "Registration Number : " << RegNum << endl;
       cout << "Vehicle Speed in km/hrs : " << Vehiclespeed << endl;
       cout << "Fuel Capacity in litres : " << Fuelcapacity << endl;
       cout << "Mileage in km/litre : " << Mileage << endl;
   }
};

class Truck : public Vehicle
{
   double cargoWeightLimit;

public:
   Truck() : Vehicle{}
   {
       cargoWeightLimit = 0;
   }

   void getAndSetData()
   {
       Vehicle::getAndSetData();
       cout << "Enter Cargo Weight Limit in tons : ";
       cin >> cargoWeightLimit;
   }

   void display()
   {
       Vehicle::display();
       cout << "Cargo Weight Limit in tons : " << cargoWeightLimit << endl;
   }
};

class Bus : public Vehicle
{
   int numOfPassengers;

public:
   Bus() : Vehicle{}
   {
       numOfPassengers = 0;
   }

   Bus(double numOfPassengersInput) : Vehicle{}
   {
       numOfPassengers = numOfPassengersInput;
   }

   void getAndSetData()
   {
       Vehicle::getAndSetData();
       cout << "Enter number of Passengers : ";
       cin >> numOfPassengers;
   }

   void display()
   {
       Vehicle::display();
       cout << "Number of Passengers : " << numOfPassengers << endl;
   }
};

int main()
{
   cout << endl;

   cout << "Enter the details of the Truck" << endl;
   Truck t1;
   t1.getAndSetData();
   cout << endl;

   cout << "Enter the details of the Bus" << endl;
   Bus b1;
   cin.ignore();
   b1.getAndSetData();
   cout << endl;

   cout << "The details of the Truck are as follows" << endl;
   t1.display();

   cout << endl;

   cout << "The details of the Bus are as follows" << endl;
   b1.display();

   cout << endl;

   int truckDistance{};
   cout << "Enter the distance to be travelled using the Truck in km : ";
   cin >> truckDistance;
   cout << "The fuel needed by the Truck to travel " << truckDistance << " km is : " << t1.fuelNeeded(truckDistance) << " Litres" << endl
        << endl;

   int busDistance{};
   cout << "Enter the distance to be travelled using the Bus in km : ";
   cin >> busDistance;
   cout << "The fuel needed by the Bus to travel " << busDistance << " km is : " << b1.fuelNeeded(busDistance) << " Litres" << endl
        << endl;

   int truckTime{};
   cout << "Enter the time for which the Truck moves in hrs : ";
   cin >> truckTime;
   cout << "The distance covered by the truck in " << truckTime << " hrs is : " << t1.distanceCovered(truckTime) << " km" << endl
        << endl;

   int busTime{};
   cout << "Enter the time for which the Bus moves in hrs : ";
   cin >> busTime;
   cout << "The distance covered by the Bus in " << busTime << " hrs is : " << b1.distanceCovered(busTime) << " km" << endl
        << endl;

   return 0;
}
