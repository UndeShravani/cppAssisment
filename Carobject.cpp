#include <iostream>
#include <string>
using namespace std;
class Car{
  public:
  string brand;
  string model;
  int year;
};
int main() 
{
  //create an object of Car
  Car carobj1;
  carobj1.brand="Tata Motors";
  carobj1.model="Tiago";
  carobj1.year=2016;
  //create an object car
  Car carobj2;
  carobj2.brand="Mahindra";
  carobj2.brand="Thar";
  carobj2.year=2010;
  //create an object car 
  Car carobj3;
  carobj3.brand="Maruti Suzuki";
  carobj3.model="Swift";
  carobj3.year=2005;
  //Print attribute values 
  cout<<carobj1.brand<<"Tata Motors"<<endl;
  cout<<carobj1.model<<"Tiago"<<endl;
  cout<<carobj1.year<<endl;
  
  
  cout<<carobj2.brand<<"Mahindra"<<endl;
  cout<<carobj2.model<<"Thar"<<endl;
  cout<<carobj2.year<<endl;
  
  
  cout<<carobj3.brand<<"Maruti Suzuki"<<endl;
  cout<<carobj3.model<<"Swift"<<endl;
  cout<<carobj2.year<<endl;
  
   
   return 0;
}