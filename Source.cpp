#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cmath>


std::string make_password_dope_ascii(std::string lame_password) {
	
	std::string dope_password = lame_password;

	dope_password[0] = abs((lame_password[0] + rand()) % 94) + 32;

	for (int i = 1; i < lame_password.size()-1; i++) {
		dope_password[i] = (abs)((lame_password[i] + rand()*((int)pow(lame_password[i - 1], lame_password[i + 1]))) % 94) + 32;
	}
	

	dope_password[lame_password.size()-1] = (abs)(((int)lame_password[lame_password.size()-1] + rand()) % 94) + 32;
	 
	//dope_password[lame_password.size() + 1] = NULL;

	return dope_password;
}

std::string make_password_dope_letters_and_numbers(std::string lame_password) {

	std::string dope_password = lame_password;

	dope_password[0] = abs((lame_password[0] + rand()) % 94) + 32;
	//While not a letter or number
	while (dope_password[0] < 48 || dope_password[0]>122 || dope_password[0] > 57 && dope_password[0] < 65 || dope_password[0]>90 && dope_password[0] < 97) {
		int counter = 1;
		dope_password[0] = abs(dope_password[0]+(int)pow(dope_password[0],counter) % 94) + 32;
		counter++;
	}

	for (int i = 1; i < lame_password.size() - 1; i++) {
		dope_password[i] = (abs)((lame_password[i] + rand()*((int)pow(lame_password[i - 1], lame_password[i + 1]))) % 94) + 32;
		while (dope_password[i] < 48 || dope_password[i]>122 || dope_password[i] > 57 && dope_password[i] < 65 || dope_password[i]>90 && dope_password[i] < 97) {
			int counter = 1;
			dope_password[i] = abs(dope_password[i] + (int)pow(dope_password[i], counter) % 94) + 32;
			counter++;
		}
	}


	dope_password[lame_password.size() - 1] = (abs)((int)lame_password[lame_password.size() - 1] + rand() % 94) + 32;
	while (dope_password[lame_password.size() - 1] < 48 || dope_password[lame_password.size() - 1]>122 || dope_password[lame_password.size() - 1] > 57 && dope_password[lame_password.size() - 1] < 65 || dope_password[lame_password.size() - 1]>90 && dope_password[lame_password.size() - 1] < 97) {
		int counter = 1;
		dope_password[lame_password.size() - 1] = abs(dope_password[lame_password.size() - 1] + (int)pow(dope_password[lame_password.size() - 1], counter) % 94) + 32;
		counter++;
	}

	//dope_password[lame_password.size() + 1] = NULL;

	return dope_password;
}


void main() {
	std::string input_password;
	std::string wikid_password;
	std::string again = "yes";


	while (again == "yes") {

		srand((int)"jjhjhjhkgkudbiygfyitdyvyfyiyvrsjtvdyrcdy");

		std::cout << "Please enter the password you wish to make super cool: ";
		std::cin >> input_password;
		std::cout << std::endl;

		wikid_password = make_password_dope_ascii(input_password);

		std::cout << "Your new password is : " << wikid_password;

		std::cout << std::endl << std::endl << "would you like to continue? (yes/no): ";
		std::cin >> again;
		std::cout << std::endl;
	}

}