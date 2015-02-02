#include <iostream>

using namespace std;

int main()
{
  cout << "Hello, user." << endl;

  double bill = 0.000;

  cout << "What did your meal cost before tax?" << endl;
  cin >> bill ;
  cout << "After tax, your meal costs " << bill * 1.085 << ", right?" << endl;
  cout << "" << endl;


  double beans = 0.000;
  double liver = 0.000;
  double wine = 0.000;

  cout << "What would be the cost of some fresh fava beans?" << endl;
  cin >> beans ;
  cout << "How about a nice chianti?" << endl;
  cin >> wine ;
  cout << "What do you think fresh liver would cost?" << endl;
  cin >> liver ;
  cout << "Liver with some fava beans and a nice chianti would cost " << (beans+liver+wine) << "." << endl;
  cout << "" << endl;

  double distance = 0.000;
  double gallons = 0.000;

  cout << "How far have you driven (in miles) in your Ram 3500?" << endl;
  cin >> distance ;
  cout << "How many gallons of fuel have you used?" << endl;
  cin >> gallons ;
  cout << "Your average miles per gallon is " << (distance/gallons) << endl;
  cout << "" << endl;

  double feet = 0.000;
  double inches = 0.000;

  cout << "How tall are you in feet and inches? Report feet first, and then inches." << endl;
  cin >> feet ;
  cin >> inches ;
  cout << "Your total height in inches is " << (feet * 12 + inches) << "." << endl;

}

