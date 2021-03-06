// Створіть клас Circle (коло). Реалізуйте через перевантажені оператори:  -Перевірку на рівність радіусів двох кіл(операція « == »);
#include <iostream>
using namespace std;
class Circle {
private:
	double radius;
public:
	Circle() {}//конструктор
	friend istream& operator>>(istream& in, Circle& r) {//перегружаємо оператор >> для введення даних
		cout << "radius=";
		in >> r.radius;
		return in;
	}
	friend std::ostream& operator<<(std::ostream& os, Circle& r) {//перегружаємо оператор << для виведення даних
		os<<r.radius <<std::endl;
		return os;
	}

	bool operator==(const Circle& other) {//перегружаємо оператор « == » для порівняння даних
		return this->radius == other.radius;
	}
	~Circle() {}//деструктор
};

int main()
{
	Circle R1;//об'єкт класу для першого радіуса
	Circle R2;//об'єкт класу для другого радіуса
	cin >> R1;//перегружаємо оператор >> для введення даних
	cin>> R2;//перегружаємо оператор >> для введення даних
	cout<<"R1="<< R1;//виводимо R1, перегружаємо оператор << для виведення даних
	cout << "R2="<< R2;//виводимо R2, перегружаємо оператор << для виведення даних
	bool check = R1 == R2;//перегружаємо оператор « == »
	cout<<"Overloading operator '=='" << check;//виводимо результат порівняння
}
