/**
Author: Philipp Schulte
Date: 29.10.2015

Description: 
The following programm implements the Fibonacci number algorithm.
*/

#include <iostream>

/**
 * Function name: recfib
 * 
 * Input variables:
 * 
 * Output:
 * 
 */
int recfib(int n) {
	// proves if the entered number is 0 or 1
	if ((n == 1) or (n == 0))
		// if this is true the function returns 1
		return 1;
	else
		// if n > 1 the function returns the sum of the recusive calls n-1 and n-2
		return recfib(n-1) + recfib(n-2);
}

/**
 * Function name:
 * 
 * Input variables:
 * 
 * Output:
 * 
 */
int itfib(int n) {
	int result,  last=1; int seclast=1;
	// proves if the entered number is 0 or 1
	if ((n == 1) or (n == 0))
		// if this is true the function returns 1
		return 1;
	else {
		for (int i=2; i<=n; i++) {
			result = last + seclast;
			seclast = last;
			last = result;
		}
		return result;
	}
}

using namespace std;

int main(){
  cout << "Welcome to my Fibonacci calculator." << endl;
  
  cout << "In the following you can calculate the Fibonacci number of an entered number." << endl;
  
  cout << "For every calculation you can decide if the number shall be calculated iterativ or recursive." << endl;
  
  cout << "After the calculation you will be asked for calculation a next number. If you enter 'no' the programm will be closed." << endl;

//define variables:
  int N,lastfib, it=1; // the entered number of the user
  string nextfib = "yes";
  

  
  while (nextfib == "yes") {
	  
	  cout << "Enter a number to calculate the Fibonacci number: ";
	    cin >> N;
  
	  cout << "Do you want to calt the fibonacci number recursive (0) or iterative (1)?";
	  cin >> it;
  
	  if (it == 0)
		  lastfib = itfib(N);
	  else
		  lastfib = recfib(N);
  
	  cout << "The result is: " << lastfib << endl;
	  
	  cout << "Do you want to calculate one more fibonacci number (yes / no)? ";
	  	    cin >> nextfib;
  
  }
  
  cout << "So long!." << endl;
  
//
  return 0;
}
