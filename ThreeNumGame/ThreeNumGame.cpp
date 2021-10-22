#include <iostream>

int main() {
	//prints the introduction
	std::cout << "You are a rebel spy and have entered the enemy's secret garrison.";
	std::cout << std::endl;
	std::cout << "You are on floor 0. A 3 combination lock is on the door.";
	std::cout << std::endl;
	std::cout << "You'll need to enter the correct code to continue...";


	//declare 3 number code
	const int a = 4;
	const int b = 3;
	const int c = 2;

	//gives the hint to player for the puzzle
	const int sum = a + b + c;
	const int product = a * b * c;

	//print the sum and product to terminal
	std::cout << std::endl << std::endl;
	std::cout << "There are 3 numbers in the code" << std::endl;
	std::cout << "The sum of the 3 numbers are:" << sum << std::endl;
	std::cout << "The numbers multiple to give:" << product << std::endl;
	return 0;
}