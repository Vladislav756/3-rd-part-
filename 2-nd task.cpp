#include <iostream>

//����������� ����� �������� ������ � ������.�� ���� �������� ����� � ������, �� ������ ������, ���� ������ �����������, ����, ���� ���.�����: root, Password : Sperasoft.
//��������� ���� �����, �������� ��������� :������������ ������ ����� � ������, ��������� ���������� ��� ������ ��� ���, ������ ��������������� ���������.
//���������� ���� ������ ����� ���������.


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
