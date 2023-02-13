// lesson13022023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cmath>
using namespace std;


////v/*oid Hello()
//{
//	cout << "Hello world" << "\n";
//	return;
//}*/

//int Sqrt(int numb, int sqr)
//{
//	
//	int res = pow(numb, sqr);
//	return res;
//}
//int main()
//{
//	setlocale(0, "");
//	int number1 = 0, number2 = 0;
//
//	cout << "Тест функции возведения в квадрат" << "\n";
//	cout << "Введите число для возведения в степень" << "\n";
//	cin >> number1;
//	cout << "Введите степень" << "\n";
//	cin >> number2;
//
//	int result = Sqrt(number1, number2);
//	cout << "Результат" << result << "\n";
//}

//int main()
//{
//	
//
// Hello();
// Hello();
//}


void PrintArr ( int arr[], int size)
{
for (int i = 0; i < size; i++)
		{
	cout << arr[i];
		}
}

void randomArr(int arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
	
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	const int sizeArr = 5;
	int arrRes[sizeArr];
	cout << "Заполнение массива с помощью функций" << "\n";

	 randomArr(arrRes, sizeArr);
	 PrintArr(arrRes, sizeArr);


}