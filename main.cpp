/*****************************************************************************
# Author:           Devri Anderson, Noah Kelley
# Lab:              Discussion #5
# Date:             October 29, 2021
# Description:      This program creates a login name.
# Input:            firstName, lastName, fourDigits
# Output:           userName
# Sources:          Zybooks Ch. 5
******************************************************************************/
#include <iostream>
#include <string>

using namespace std;


int main() {
  string firstName = " ";
  string lastName = " ";
  int fourDigits = 0;
  string userName = " ";
  
  cout << "Welcome! To recieve a username, please enter your first and last name followed by a 4 digit number, seperated by spaces." << endl;

  cin >> firstName;
  cin >> lastName;
  cin >> fourDigits;
  cout << endl;
  
  if (lastName.length() <= 5)  {
    ;
  }
  else  {
    lastName = lastName.substr(0, 5);
  }

  userName = lastName + firstName.substr(0, 1) + to_string(fourDigits % 100);

  cout << "Your username is: " << userName << "." << endl;
  cout << "\nThank you for using this program!" << endl;


  return 0;
}



