#include "pch.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{		
	string first_name;
	cout << "Enter your first name:";
	cin >> first_name;

	string last_name;
	cout << "Enter your age:";
	cin << last_name;

	int age;
	cout << "Enter your age:";
	cin >> age;
	*/
		
	int confidence;
	cout << "Enter your confidence in programers (0-100):";
	cin >> confidence;
	
	int dog_years = age * 7;

	cout << "Hello " << first_name << " " << last_name << ", nice to meet you! You might be"
		<< age << " in human years, but in dog years you are " << dog_years << endl;

	double confidence_percentage = confidence / 100.0;

	if (confidence_percentage < 0.5) {
		cout << "I agree, programmers can't be trusted!" << endl;
	}
	else {
		cout << "writing good code takes hard work" << endl:
	}