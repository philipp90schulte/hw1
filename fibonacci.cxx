/**
Author: Philipp Schulte
Date: 29.10.2015

Description: 
The following programm implements the Fibonacci number algorithm.
f(0) = 0
f(1) = 1
f(n) = f(n-2) + f(n-1)

The user can calculate more than one fibonacci number and can select an iterative or recursive implementation.

*/

#include <iostream>

/**
 * Function name: recfib
 * 
 * Input variables: n - int type
 * 
 * Output: the calculation of the recursive call or 1
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
 * Function name: itfib
 * 
 * Input variables: n - int type
 * 
 * Output: result - int type
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
	// some 
  cout << "Welcome to my Fibonacci calculator." << endl;
  
  cout << "In the following you can calculate the Fibonacci number of an entered number." << endl;
  
  cout << "For every calculation you can decide if the number shall be calculated iterativ or recursive." << endl;
  
  cout << "After the calculation you will be asked for calculation a next number. If you enter 'no' the programm will be closed." << endl;

//define variables:
  int N,lastfib, it=1; // the entered number of the user
  string nextfib = "yes";
  

  // start a while loop for more than one fibonacci calculation.
  while (nextfib == "yes") {
	  
	  // Get the number which shall be calculate
	  cout << "Enter a number to calculate the Fibonacci number: ";
	  cin >> N;
	  
	  // Ask the user for the calculation algorithm
	  cout << "Do you want to calculate the fibonacci number recursive (0) or iterative (1)?";
	  cin >> it;
	  
	  // Perfom calculation
	  if (it == 0)
		  lastfib = itfib(N);
	  else
		  lastfib = recfib(N);
	  
	  // Ask for additional fibonacci calculations
	  cout << "The result is: " << lastfib << endl;
	  
	  cout << "Do you want to calculate one more fibonacci number (yes / no)? ";
	  	    cin >> nextfib;
  
  }
  
  cout << "So long!." << endl;
  
// Finisch program
  return 0;
}
