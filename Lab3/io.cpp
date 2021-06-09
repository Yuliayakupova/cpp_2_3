#include "io.h"

using namespace std;

bool is_integer(string buffer) {

	for (char const& c : buffer) {
		if (std::isdigit(c) == 0) return false;
	}

	return true;
}

void procedureRomanToArabic()
{
    while (true) {
        string input, convertValue;
        int arabicValue = 0;
        cout << "Give me some roman numeric" << endl;
        cin >> input;
        if (is_integer(input) == false) {
            cout << "Need to enter an integer number! Please, try again: " << endl;
            continue;
        }
        int romanNumeric = stoi(input);

       
       /* for (int i = 0; i == romanNumeric; i++) {
            if (romanNumeric.compare(roman->value1)) {
                arabicValue = roman.value;
            }
            else if (convertValue == "CM") {
                arabicValue += 900;
            }
            else if ()


        }
        */
    }

    
}




void procedureArabicToRoman()
{
    while (true) {
        int input;
        cout << "Give me some arabic numeric" << endl;
        cin >> input;
        if (is_integer(input) == false) {
            cout << "Need to enter an integer number! Please, try again: " << endl;
            continue;
        }


    }
    
}

