//строка - упорядоченый набор символьных элементов объединенных в массив
//в конце которого располагается нультерминатор
#include<iostream>
#include<string>//библиотека позволяющая работать со строками с++



int main() {
	system("chcp 1251>nul");
	int n;
	//символьный массив из языка с
	/*char c_str[]{'H', 'I', '!', '\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Hello world!" };
	std::cout << c_str2 << std::endl;*/
	//Объект класса string - строка
	/*//Строки из языка программирования с++
	std::string str;//это объект(мы его создали), строковая переменная
	std::cout << str << std::endl;//пустая строка
	str = "Hello world!";
	std::cout << str << std::endl;//hello world!
	str = "Bye world!";
	std::cout << str << std::endl;//Bye world!

	//конкатенация строк - это процесс слияния двух или более строк в одну новую
	str += "!!!!!:(";//конкатенация с присваиванием(добавление текста в конец строки)
	std::cout << str << std::endl;//Bye world!!!!!!:(*/

	//Ввод строки
	/*std::cout << "Привет как твое имя?\nВвод->";
	std::string name;
	std::cin >> name;//ввод одного слова(до первого разделителя)
	std::cout << "Привет," << name << "!\n";
	std::cin.ignore();//очистка потока ввода, нужна только после cin
	std::cout << "А кем ты работаешь?\nВвод ->";
	std::string job;//объявляем строку с работой
	std::getline(std::cin, job);//ввод строки, который состоит не из одного слова, а из нескольких
	std::cout << "Ого! " << job << " Круто!\n";
	std::cout << "Cколько лет?\nВвод->";
	int age;
	std::cin >> age;
	std::cout << "Когда то и мне было " << age << " лет...\n";*/

	//Методы строк 
	//метод - специальная функция принадлежащяя какому либо объекту и применяемая исключительно этим объектом

	/*std::string my_str = "Hello world!";

	//Методы length и size, методы возвращающие
	//std::cout << my_str.length() << std::endl;//12 получаем длину строки на данный момент
	//std::cout << my_str.size() << std::endl;//метод size точно такой же как метод length
	
	//Метод insert(), вставляющий подстроку в строку
	//my_str.insert(3, "WWW");
	//std::cout << my_str << std::endl;//HelWWWlo world!

	//Метод replace(), заменяет часть строки на новую
	//my_str.replace(3, 5, "WWW");
	//std::cout << my_str << std::endl;//HelWWWrld!

	//Метод find(), возвращающий позицию первого вхождения подстроки в строку
	//std::cout << my_str.find("l") << std::endl;//получаем 2, т.к. буква l на позиции 2
	//find("l", 5) - поиск начнется с позиции 5

	//Метод rfind(), возвращающий позицию последнего вхождения подстроки в строку
	//std::cout << my_str.rfind("o") << std::endl;//7
	//std::cout << my_str.rfind("o", 6) << std::endl;//4(поиск начинается с 6-ой позиции

	//Метод substr(), (4, 5,) - с какой позиции4, сколько взять5, возвращающий подстроку из строки
	//std::cout << my_str.substr(4, 5) << std::endl;// o world!*/
	//Функции для работы со строками

	//функция тустринг возвращающая результаты превращения числа в строку
	int num = 123;
	std::string num_str = std::to_string(num);//"123"//функция превращает числа в строки
	num_str += '!';
	std::cout << "num_str = " << num_str << std::endl;



	//функция stoi возвращающая число int , взятое из строки
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num = " <<num<< std::endl;



	return 0;
}