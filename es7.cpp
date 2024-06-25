#include <iostream>

int main(){

	int *ptr = new int;
	*ptr = 12;

	std::cout << *ptr<< std::endl;

	delete ptr; 
	return 0; 
}