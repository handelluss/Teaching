#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World!\n"; // Выводим в консоль Hello World! с переносом строки
	cout << "Hello World!" << endl; // Тоже самое, что и выше
	cout << "Hi" << " " << "Boy" << endl;;; // Выводим, используя несколько операторов <<
	/*
		Заметим, что выше мы использовали несколько точек 
		запятой подряд - компилятор такую загагулину примет,
		но подобным промышлять не стоит, поскольку
		абсолютно бесполезно
	*/ 

	setlocale(LC_ALL, ""); // Используем кодировку - муть какая-то
	cout << "ВАНЯ" << endl;


	int x; // Объявляем переменную
	x = 1; // Присваиваем этой переменной значение единицы
	cout << x << " "; //Выводим эту переменную
	x = -100500; // Присваиваем переменной другое значение
	cout << x << endl; // Выводим обновленную переменную
	cout << 1090 << endl; // Выводим константу

	int a = 100; // Объявляем и сразу же инициализируем переменную
	cout << a;
	
	/*
		Не путайте термины:
			Объявление - грубо говоря создание переменной
			Инициализация - сразу после того, как объявили переменную, задаём ей значение
			Присваивание - задавание переменной какого-либо значения
	*/

	int l, t, z;
	l = t = z = 10; // имеем право вот таким образом каждой переменной присвоить значение десятки
	cout << l << " " << t << " " << z << endl;

	int b, c = 11, d; // можем некоторые переменные проинициализировать, а некоторые просто объявить
	b = 123;
	d = 4565;
	cout << b << " " << c << " " << d << endl << endl << endl;

	// int a = 11; - НЕЛЬЗЯ, так как выше в программе мы уже объявили переменную a

	// ниже простенькая программа
	cout << "Please enter integer number: ";
	int p;
	cin >> p;
	cout << "You have entered ";
	cout << p;

	// операторы +, -, * работают на интуитивном уровне: 
	int q, m;
	cin >> q >> m;
	cout << q + 20 - m << endl;
	int sum = q + 20 - 10;
	cout << sum * 2 << endl;


	// в паскале - div, а в с++ - /
	// в паскале - mod, а в с++ - %
	int p1, p2;
	cin >> p1 >> p2;
	cout << p1 / p2 << " " << p1 % p2 << endl;
	/* 
		При работе с отрицательными числами нужно быть аккуратным.
		Подробней разберём попозже
	*/
}