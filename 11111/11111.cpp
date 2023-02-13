// 11111.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;



void PrintArr(int arr[], int size)
{
	
	cout << "Минимальное число = " << min;

}

void randomArr(int arr[], int size)
{
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
	 int min = arr[0];
	 for (int j = 0; j < size; j++)
	 {
		 if (arr[j] < min)
		 {
			 arr[j] = min;
		 }
	 }
	 cout << "Минимальное число = " << min;
	 return;
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

	cout << "Минимальное значение в массиве" << "\n";


}




