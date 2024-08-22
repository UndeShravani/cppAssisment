#include <iostream>
#include<string>
using namespace std;
class Student{
  public:
  //Properties (data members)
  string name;
  int rollNumber;
  int age;
  //Function to display student information
  void displayInfo(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll Number:"<<rollNumber<<endl;
    cout<<"Age:"<<age<<endl;
  }
};

int main() 
{
  //Create objects (instances) of the Student class
  Student s1;
  Student s2;
  //Set properties for student s1
  s1.name="Shravani";
  s1.rollNumber=001;
  s1.age=17;
  //Set information for student s2
  s2.name="Krishna";
  s2.rollNumber=102;
  s2.age=22;
  //Display information for each student
  cout<<"S1 Information:"<<endl;
  s1.displayInfo();
  cout<<endl;
  cout<<"S2 Information:"<<endl;
  s2.displayInfo();
  cout<<endl;
  return 0;
}