#include <iostream>
#include <string>
using namespace std;

enum status {//состо€ни€
	A,
	B,
	C,
	D,
	E,
	F
};

int main() {
	setlocale(LC_ALL, "Russian");

	int ActualStatus = A;
	bool failed = false;
	string input;// = "";
	cout << "¬ведите строку\n";
	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
		char ch = input[i];
		if (ch == 'a') {
			if (ActualStatus == A) {
				ActualStatus = B;
			}
			else
			{
				failed = true;
			}

		}

		if (ch == 'b') {
			switch (ActualStatus)
			{
			case B: ActualStatus = C; break;
			case C: ActualStatus = C; break;
			case E: ActualStatus = C; break;
			default:
				failed = true;
				break;
			}
		}

		if (ch == 'c') {
			switch (ActualStatus)
			{
			case B: ActualStatus = D; break;
			case C: ActualStatus = D; break;
			case D: ActualStatus = D; break;
			case E: ActualStatus = D; break;
			default:
				failed = true;
				break;
			}
		}

		if (ch == 'd') {
			switch (ActualStatus)
			{
			case B: ActualStatus = E; break;
			case C: ActualStatus = E; break;
			case D: ActualStatus = E; break;
			case E: ActualStatus = E; break;
			default:
				failed = true;
				break;
			}
		}

		if (ch == 'e') {
			switch (ActualStatus)
			{
			case B: ActualStatus = F; break;
			case C: ActualStatus = F; break;
			case E: ActualStatus = F; break;
			case F: ActualStatus = F; break;
			default:
				failed = true;
				break;
			}
		}
	}
	if (!failed && (ActualStatus == B || ActualStatus == E || ActualStatus == F))
	{
		cout << "автомат поддерживает выражение " << input;
		return (0);
	}
	else
	{
		cout << "автомат не поддерживает выражение " << input;
		return (0);
	}
}