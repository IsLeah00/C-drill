#include <iostream>

int main()
{
std::cout << "Please enter your first name!\n";
	std::string first_name;
	std::cin >> first_name;
std::cout << "Hello, " << first_name <<"!\n";

std::cout << "Please enter the name of your friend!\n";
	std::string friend_name;
	std::cin >> friend_name;

	char friend_sex = 0;
std::cout << "Please enter an m if the friend is male and an f if the friend is female!\n";
	std::cin >> friend_sex;

std::cout << "Please enter the name of another person you want to write to!\n";
	std::string First_name;
	std::cin >> First_name;

	int (age);
	std::cout << "Please enter the age of the recipient!\n";
	std::cin >> age;

if (age <= 0 || age >= 110) 
{
	std::cout << "Error: You are kidding!\n"; return int (age);
}





std::cout << "Dear, " << First_name <<"!\n";

std::cout << "How are you? I'm fine.\n";
std::cout << "I miss you.\n"; 

std::cout << "Have you seen " << friend_name <<" lately?\n";

	if  (friend_sex== 'm') std::cout << "If you see " << friend_name << " please ask him to call me.\n";
	else std::cout << "If you see " << friend_name << " please ask her to call me.\n";

	if (age <= 0 || age >= 110) std::cout << "Error: You are kidding!\n";
	else std::cout << "I hear you just had a birthday and you are " << age << " years old!\n";


	if (age <= 12)
	 {
	 	std::cout << "Next year you will be " << age+1 << ".\n";
	 }
	 if (age == 17)
	 {
	 	std::cout << "Next year you will be able to vote.\n";
	 }
	 if (age >= 70)
	 {
	 	std::cout << "I hope you are enjoying retirement.\n";
	 }


std::cout << "I am looking forward to hearing from you soon.\n";
std::cout << "Yours sincerely, \n\n\n"; 
std::cout << first_name <<"\n";

	return 0;
}