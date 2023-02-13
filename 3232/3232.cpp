// 3232.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
using namespace std;

void distance( double x1,  double y1, double x2, double y2)
{
    double result =0;
    result = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return;
}
int main()
{
    double x1, x2, y1, y2;
    double result = 0;

    cin >> x1;
    cin >> x2;
    cin >> y1;
    cin >> y2;
     result = distance(x1,x2,y1,y2);
    cout << result;
}

