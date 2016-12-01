//Fergal O'Shea

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cmath>


std::string make_password_dope(std::string lame_password) {
	
	std::string dope_password = lame_password;

	dope_password[0] = abs((lame_password[0] + rand()) % 94) + 32;

	for (int i = 1; i < lame_password.size()-1; i++) {
		dope_password[i] = (abs)((lame_password[i] + rand()*((int)pow(lame_password[i - 1], lame_password[i + 1]))) % 94) + 32;
	}
	

	dope_password[lame_password.size()-1] = (abs)((int)lame_password[lame_password.size()-1] + rand() % 94) + 32;
	 
	//dope_password[lame_password.size() + 1] = NULL;

	return dope_password;
}



void main() {
	std::string input_password;
	std::string wikid_password;

	std::cout << "Please enter the password you wish to make super cool: ";
	std::cin >> input_password;
	std::cout << std::endl;

	wikid_password = make_password_dope(input_password);

	std::cout << "Your new password is : " << wikid_password;

	std::cin >> input_password;


}
