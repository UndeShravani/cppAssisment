
 #include<iostream>
using namespace std;
//Base class vehicle
class Vehicle{
  public:
  void vehicle(){
  cout<<"I am a vehicle"<<endl;
}
};
//classTwowheeler derived from vehicle
class Twowheeler:public Vehicle{
  public:
  void twowheeler(){
    cout<<"I have Two wheels"<<endl;
  }
};
//class car derived from class Twowheeler
class Bike:public Twowheeler{
  public:
  void bike(){
    cout<<"I am a bike"<<endl;
  }
};
int main(){
  Bike myBike;
  myBike.bike();
  myBike.twowheeler();
  myBike.vehicle();
  return 0;
}