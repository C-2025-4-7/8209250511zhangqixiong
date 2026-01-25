#include <iostream>
#include "temperature.h"
#include <iomanip>
using namespace std;

int main()
{
	double celsius, fahrenheit;
	cout << "Celsius\t\tFahrenheit" << endl;
	for (celsius = 40.0; celsius >= 31.0; celsius -= 1.0)
	{
		fahrenheit = clesius_to_fah(celsius);
		cout << fixed << setprecision(1);
		cout << celsius << "\t\t" << fahrenheit << "\t" << endl;
	}

	cout << "\nFahrenheit\t\Celsius" << endl;
	for (fahrenheit = 120.0; fahrenheit >= 30.0; fahrenheit -= 10.0)
	{
		celsius = fah_to_celsius(fahrenheit);
		cout << fixed << setprecision(1);
		cout << fahrenheit << "\t\t" << celsius << "\t" << endl;
	}
	return 0;
}
