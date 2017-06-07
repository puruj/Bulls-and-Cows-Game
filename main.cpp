#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();

int main() {

	PrintIntro();
	PlayGame();

	return 0; // exit console
}

void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++) {
		string Guess = GetGuess();
		cout << "Your guess is " << Guess << endl;
		cout << endl;
	}
}

void PrintIntro() {
	//constexpr means something can evaluated now
	constexpr int WORD_LENGTH = 5;

	//introduce game
	cout << "Bulls & Cow Game\n";
	cout << "Guess this " << WORD_LENGTH << " letter isogram?\n";
	cout << endl;
	return;
}

string GetGuess() {
	// get guess from user
	cout << "Enter your guess: ";
	string Guess = "";
	// makes it so it gets whole line as input
	getline(cin, Guess);
	return  Guess ;
}