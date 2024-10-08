#include<iostream>
using namespace std;
//Base class fruit
class Fruit{
  public:
  void fruit(){
  cout<<"I am a fruit"<<endl;
}
};
//class Sweet derived from Fruit
class Sweet:public Fruit{
  public:
  void sweet(){
    cout<<"I am sweet"<<endl;
  }
};
//class Apple derived from class Sweet
class Apple:public Sweet{
  public:
  void apple(){
    cout<<"I am a Apple"<<endl;
  }
};
int main(){
  Apple myfruit;
  myfruit.apple();
  myfruit.sweet();
  myfruit.fruit();
  return 0;
}