/********************************************************  
 COSC 501  
 Lab 4  
 Elliott Plack  
 22 SEP 2013           Due date: 30 SEP 2013  
 Problem: Write a C++ program that gives the phone keypad
	key that corresponds with an input letter
 Algorithm: Using a variety of loops, the program first
	determine if the input is invalid, and if so tell the
	user why. Then it will repeat for a new input. If the
	input is valid, it will determine the digit using
	the switch function.
********************************************************/
  
  
#include <iostream>  // for input output  
using namespace std; 
  
int main() 
{
	char input_letter('A'); // declares input_letter to 'A' so that while doesn't fail if null or something
	
	// Welcome message
	cout << "This program determines the digit on a telephone keypad that corresponds\n"
		<< "with a given letter. Press $ at any time to quit.";
	
	// program loop is below. It repeats the entire function until the input becomes $
	while(input_letter != '$') // as long as input_letter is not $ do the thing below
	{
		cout << "\nEnter an uppercase letter: ";
		cin >> input_letter; // Get input
		cin.ignore(256,'\n'); // Only takes the first letter entered
		
		// This first if else statement determines if the input is OK to proceed to the switch
		if (input_letter == '$') // is the input $? if yes, proceed to switch, otherwise...
			break; // if the entry becomes $, quit here
		else if (!(isalpha(input_letter))) // check to see if the input is not an alphabet char (a-z, A-Z)
		{
			if (isdigit(input_letter)) // if not an alphabet char, is it a letter?
			{
				cout << "Invalid Entry. You entered the number " << input_letter << ".\n";
				continue; // continue allows the main while loop to continue
			}
			cout << "Invalid Entry. You entered the symbol " << input_letter << ".\n"; 
			continue;
		}
		else if (!(isupper(input_letter))) // lowercase check
		{
			cout << "Invalid Entry. You entered the lowercase letter '" << input_letter << "'.\n";
			continue;
		}

		switch(input_letter)  // switch function, after the input letter is determined to be valid
		{
			case 'A':
			case 'B':
			case 'C':  // repeat all cases and the case will go to the next.
				cout << "The digit that corresponds with the letter " << input_letter << " on the phone keypad is 2.\n";
				break;
			case 'D':
			case 'E':
			case 'F':
				cout << "The digit that corresponds with the letter " << input_letter << " on the phone keypad is 3.\n";
				break;
			case 'G':
			case 'H':
			case 'I':
				cout << "The digit that corresponds with the letter " << input_letter << " on the phone keypad is 4.\n";
				break;
			case 'J':
			case 'K':
			case 'L':
				cout << "The digit that corresponds with the letter " << input_letter << " on the phone keypad is 5.\n";
				break;
			case 'M':
			case 'N':
			case 'O':
				cout << "The digit that corresponds with the letter " << input_letter << " on the phone keypad is 6.\n";
				break;
			case 'P':
			case 'R':
			case 'S':
				cout << "The digit that corresponds with the letter " << input_letter << " on the phone keypad is 7.\n";
				break;
			case 'T':
			case 'U':
			case 'V':
				cout << "The digit that corresponds with the letter " << input_letter << " on the phone keypad is 8.\n";
				break;
			case 'W':
			case 'X':
			case 'Y':
				cout << "The digit that corresponds with the letter " << input_letter << " on the phone keypad is 9.\n";
				break;
			case 'Q':
			case 'Z':
				cout << "There is no digit that corresponds with the letter " << input_letter << " on the phone keypad!\n";
				break;
			case '$': // since the loop will have begun running when the user types $, this tells the loop to stop here
				break;
			default:
				cout << "You entered an invalid entry.\n"; // this should never come up.
		}
	}
	return 0;
}
