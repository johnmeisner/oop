// C++ Program to show the syntax/working of Objects as a
// part of Object Oriented PProgramming
#include <iostream>
#include <string>
using namespace std;
using std::cout;

class person {
	char name[20] = "John";
	int height = 70;   // in inches
	int id = 1;
	int age = 71;

public:
//	void getdetails() {}
	int getdetails() {return 5;}

	string getname() {return name;}
	int getage() {return age;}
};

int main()
{

	person p1; // p1 is a object
	cout << endl << "Hello ... I am " << p1.getname() << " and am " << endl;
	cout << p1.getage() << endl;
	cout << "years old" << endl << endl;

	return 0;
}
