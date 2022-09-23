#include <iostream>

//Реализовать метод проверки логина и пароля.На вход подается логин и пароль, на выходе истина, если прошел авторизацию, ложь, если нет.Логин: root, Password : Sperasoft.
//Используя этот метод, написать программу :пользователь вводит логин и пароль, программа пропускает его дальше или нет, выводя соответственные сообщения.
//Ограничить ввод пароля тремя попытками.


int main()
{
	const int TRYES = 3;

	std::string login = "root";

	std::string password = "Sperasoft";

	std::string log;

	std::string pass;

	bool correct = false;

	for (int i = 1; i <= TRYES; i++)
	{
		std::cout << "Insert login and password \n";

		std::cin >> log >> pass;

		if (login == log && password == pass)
		{
			correct = true;
			break;
		}
		else
		{
			std::cout << "login and password incorrect, try again \n \n";
		}
	}
	
	if (correct == true)
	{
		std::cout << "Welcome \n";
	}
	else 
	{
		std::cout << "You run out of tryes \n";
	}


	return 0;
}
