#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

	// entry point of app
int main()
{
	PrintIntro();
	PlayGame();
	bool AskToPlayAgain();

	return 0; // end program
}

void PrintIntro()
{
	// Introduce the game
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I am thinking of?\n\n";
	return;
}


string GetGuess()
{
	// Get a guess from player
	string Guess = "";
	cout << "What is your guess? ......";
	// cin >> Guess;
	getline(cin, Guess);
	return Guess;
}

void  PlayGame()
{
	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
		for (int count = 1; count <= NUMBER_OF_TURNS; count++)
		{
			string Guess = GetGuess();
			// print guess back
			cout << "Your guess was: " << Guess << endl;
			cout << endl;
		}
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again?";
	string Response = "";
	getline(cin, Response);

	cout << "First Charater: " << Response[0];
	cout << endl;

	return false;
}