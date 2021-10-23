#include <iostream>

int main() {
	//prints the introduction
	std::cout << "You are a rebel spy and have entered the enemy's secret garrison.";
	std::cout << std::endl;
	std::cout << "You are on floor 0. A 3 combination lock is on the door.";
	std::cout << std::endl;
	std::cout << "You'll need to enter the correct code to continue...";


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

	std::cout << "Enter a Guess";
	std::cout << std::endl;
	int GuessA, GuessB, GuessC;
	std::cin >> GuessA;
	std::cin >> GuessB;
	std::cin >> GuessC;
	int GuessSum, GuessProduct;
	GuessSum = GuessA + GuessB + GuessC;
	GuessProduct = GuessA * GuessB * GuessC;
	std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;
	std::cout << "Sum of numbers: " << GuessSum << std::endl;
	std::cout << "Multipling numbers: " << GuessProduct << std::endl;



	return 0;
}