import <iostream>;
import <format>;

int main() {
	//std::string out;

	for (int i{ 1 }; i < 101; i++) {

		if (i % 3 == 0) {
			std::cout << "Fizz";
		}
		if (i % 5 == 0) {
			std::cout << "Buzz";
		}
		else if (i % 3 != 0 ) {
			std::cout << i;
		}
		

		std::cout << std::endl;
		}


	return 0;
}