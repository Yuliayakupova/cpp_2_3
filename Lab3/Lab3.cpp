#include <iostream>
#include <string>

#include "io.h"

using namespace std;

int main() {
    
    while (true) {
        string input;
        cout << "0. Exit from program" << endl
             << "1. Convert from Arabic to Roman" << endl
             << "2. Convert from Roman to Arabic" << endl;
        cin >> input;

		if (is_integer(input) == false) {
			cout << "Need to enter an integer number! Please, try again: " << endl;
			continue;
		}

		int chooseOperation = stoi(input);

		switch (chooseOperation) {
		case 0:
			cout << "Thank you! Bye!" << endl;
			return;
			break;	
		case 1:
			cout << "Convert from Arabic to Roman" << endl;
			void procedureArabicToRoman();
			break;
		case 2:
			cout << "Convert from Roman to Arabic" << endl;
			void procedureRomanToArabic();
			break;
		}
    }
}
