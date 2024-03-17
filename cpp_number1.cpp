// Debug.cpp

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// function return number entered by user
int getNumber()
{
int number;
int number2;

cout << "Enter an integer: then number2 ";
cin >> number >> number2;

return number;

} // end function getNumber


// funtion main begins program execution
int main() 
{
// call function getNumber
// store result in int variable number
int number = getNumber(); 

if ( number <= 0 )
return 0;

else
for ( int i = 1; i <= number; i++ ) 
cout << i << endl; // print from 1 to the number
 
return 0; // indicate that program ended successfully

} // end main
