#include <iostream>

int main() {
	std::cout << "Enter digit: ";
	std::string digit;
	std::cin >> digit;
	int countDot = 0;
	int countMinus = 0;
	int haveDigit = 0;
	int haveE = 0;

	bool good = false;

	if ((digit[0] >= '0' && digit[0] <= '9') || digit[0] == '-' || digit[0] == '.') {
		for (int i = 0; i < digit.length(); i++) {

			if (digit[i] >= '0' && digit[i] <= '9') {
				haveDigit++;
			}

			if (digit[i] == '.') {
				countDot++;
			}

			if (digit[i] == '-') {
				countMinus++;
			}

			if (digit[i] == 'e') {
				haveE++;
			}

				 
		}
	}
	else good = false;

	if (haveDigit >= 1 && countDot <= 1 && countMinus <= 1 && haveE < 1) {
		good = true; 
	}

	
	if (good) {
		std::cout << "Yes";
	}
	else std::cout << "No";


}
