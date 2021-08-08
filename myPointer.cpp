#include <iostream>
using namespace std;

void myBirthday(int* age);
int main()
{
  int myAge  = 25;
  cout << "before my age  "<<myAge<< endl;
  cout <<"\n"<<endl;

  myBirthday(&myAge);
  cout<< "after my age bd  "<<myAge<<endl;
}

void myBirthday(int* age){
    (*age)++;
    cout << "just celebrated  "<<(*age)<< ". birthday"<<endl;
  cout <<"\n"<<endl;

}