//������ - ������������ ����� ���������� ��������� ������������ � ������
//� ����� �������� ������������� ��������������
#include<iostream>
#include<string>//���������� ����������� �������� �� �������� �++



int main() {
	system("chcp 1251>nul");
	int n;
	//���������� ������ �� ����� �
	/*char c_str[]{'H', 'I', '!', '\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Hello world!" };
	std::cout << c_str2 << std::endl;*/
	//������ ������ string - ������
	/*//������ �� ����� ���������������� �++
	std::string str;//��� ������(�� ��� �������), ��������� ����������
	std::cout << str << std::endl;//������ ������
	str = "Hello world!";
	std::cout << str << std::endl;//hello world!
	str = "Bye world!";
	std::cout << str << std::endl;//Bye world!

	//������������ ����� - ��� ������� ������� ���� ��� ����� ����� � ���� �����
	str += "!!!!!:(";//������������ � �������������(���������� ������ � ����� ������)
	std::cout << str << std::endl;//Bye world!!!!!!:(*/

	//���� ������
	/*std::cout << "������ ��� ���� ���?\n����->";
	std::string name;
	std::cin >> name;//���� ������ �����(�� ������� �����������)
	std::cout << "������," << name << "!\n";
	std::cin.ignore();//������� ������ �����, ����� ������ ����� cin
	std::cout << "� ��� �� ���������?\n���� ->";
	std::string job;//��������� ������ � �������
	std::getline(std::cin, job);//���� ������, ������� ������� �� �� ������ �����, � �� ����������
	std::cout << "���! " << job << " �����!\n";
	std::cout << "C������ ���?\n����->";
	int age;
	std::cin >> age;
	std::cout << "����� �� � ��� ���� " << age << " ���...\n";*/

	//������ ����� 
	//����� - ����������� ������� ������������� ������ ���� ������� � ����������� ������������� ���� ��������

	/*std::string my_str = "Hello world!";

	//������ length � size, ������ ������������
	//std::cout << my_str.length() << std::endl;//12 �������� ����� ������ �� ������ ������
	//std::cout << my_str.size() << std::endl;//����� size ����� ����� �� ��� ����� length
	
	//����� insert(), ����������� ��������� � ������
	//my_str.insert(3, "WWW");
	//std::cout << my_str << std::endl;//HelWWWlo world!

	//����� replace(), �������� ����� ������ �� �����
	//my_str.replace(3, 5, "WWW");
	//std::cout << my_str << std::endl;//HelWWWrld!

	//����� find(), ������������ ������� ������� ��������� ��������� � ������
	//std::cout << my_str.find("l") << std::endl;//�������� 2, �.�. ����� l �� ������� 2
	//find("l", 5) - ����� �������� � ������� 5

	//����� rfind(), ������������ ������� ���������� ��������� ��������� � ������
	//std::cout << my_str.rfind("o") << std::endl;//7
	//std::cout << my_str.rfind("o", 6) << std::endl;//4(����� ���������� � 6-�� �������

	//����� substr(), (4, 5,) - � ����� �������4, ������� �����5, ������������ ��������� �� ������
	//std::cout << my_str.substr(4, 5) << std::endl;// o world!*/
	//������� ��� ������ �� ��������

	//������� �������� ������������ ���������� ����������� ����� � ������
	int num = 123;
	std::string num_str = std::to_string(num);//"123"//������� ���������� ����� � ������
	num_str += '!';
	std::cout << "num_str = " << num_str << std::endl;



	//������� stoi ������������ ����� int , ������ �� ������
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num = " <<num<< std::endl;



	return 0;
}