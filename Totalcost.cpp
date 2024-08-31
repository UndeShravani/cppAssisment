#include <iostream>
using namespace std;
int main()
{
  //needs 15 notebooks and 20 pens
  int book=15;
  int pen=20;
  double notebookprice=2.25;
  double penprice=0.75;
  //The total cost 
  double totalbookcost=book*notebookprice;
  double totalpencost=pen*penprice;
  //result
  cout<<"Total book cost:Rs."<<totalbookcost<<endl;
  cout<<"Total pen cost:Rs."<<totalpencost<<endl;
  //total cost of the supples 
  double totalcost=book*notebookprice+pen*penprice;
  cout<<"Total cost:Rs."<<totalcost<<endl;
  return 0;
}