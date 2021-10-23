#include <iostream>

void PrintIntroduction() {
	//prints the introduction
	std::cout << "You are a rebel spy and have entered the enemy's secret garrison.\n";
	std::cout << "You are on floor 0. A 3 combination lock is on the door.\n";
	std::cout << "You'll need to enter the correct code to continue...\n";
}

void PlayGame() {

	PrintIntroduction();

	//declare 3 number code
	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;

	//gives the hint to player for the puzzle
	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	//print the sum and product to terminal
	std::cout << std::endl << std::endl;
	std::cout << "There are 3 numbers in the code" << std::endl;
	std::cout << "The sum of the 3 numbers are:" << CodeSum << std::endl;
	std::cout << "The numbers multiple to give:" << CodeProduct << std::endl;

	//store player guess
	std::cout << "Enter a Guess\n";
	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;
	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	//check if player wins if sum and product match. 
	if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
		std::cout << "You win\n";
	}
	else
	{
		std::cout << "You entered in the wrong code, gaurds are coming. You lose\n";
	}
	return;
}

int main() {
	
	PlayGame();
	return 0;
}