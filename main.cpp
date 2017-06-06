#include <iostream>
#include <string>

using namespace std;

int main() {
	//constexpr means something can evaluated now
	constexpr int WORD_LENGTH = 5;

	//introduce game
	cout << "Bulls & Cow Game\n";
	cout << "Guess this "<< WORD_LENGTH << " letter isogram?\n";
	cout << endl;

	// get guess from user
	cout << "Enter your guess\n";
	string Guess = "";
	cin >> Guess;


	//repeat guess to user
	cout << "Your guess was: " << Guess << endl;

	return 0;
}