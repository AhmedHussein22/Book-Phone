#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
string arrayName[50] = { "ahmed mohamed", "ali ahmed" };
string arrayNumber[50] = { "0114545", "0111947" };
string name;
string number;
bool kimo;
int n = 2;
void searchNumber()
{
	kimo = false;
	cout << "Enter the number that you want: ";
	cin >> number;
	for (int i = 0; i<n; i++)
	{
		if (arrayNumber[i].find(number) >= 0 && arrayNumber[i].find(number) <= 100)
		{
			cout << " the number " << arrayNumber[i] << " is exist, and its name is :" << arrayName[i] << endl;
			kimo = true;
		}
	}
	if (kimo == false)
		cout << " The number not found \n";
}
void searchName()
{
	kimo = false;
	cout << "Enter the name that3er you want: ";
	getline(cin, name);
	for (int i = 0; i < n; i++)
	{
		if (arrayName[i].find(name) >= 0 && arrayName[i].find(name) <= 100)
		{
			cout << " the name is " << arrayName[i] << " is exist, and its number is :" << arrayNumber[i] << endl;
			kimo = true;
		}
	}
	if (kimo == false)
		cout << " The name not found \n";
}
void addcontact()
{
h:cout << " Enter the new number ";
	getline(cin, number);
	if (number >= "a"&&number <= "z")
	{
		cout << "Invalid number...\n enter again..\n";
		goto h;
	}
	cout << "\nAnd his name is:  ";
	getline(cin, name);
	for (int i = 0; i < n; i++)
	{
		arrayName[n] = name;
		arrayNumber[n] = number;
	}
	n++;
}
void deletecontact()
{
	cout << " Enter the name that you want to delete  ";
	getline(cin, name);
	for (int i = 0; i < n; i++)
	{
		if (arrayName[i].find(name) >= 0 && arrayName[i].find(name) <= 100)
		{
			cout << " the name is " << arrayName[i] << " is exist, and its number is :" << arrayNumber[i] << endl;
			kimo = true;
		}
	}
	if (kimo == false)
		cout << " The name not found \n";
	else
	{
		cout << "write the  number of  name that you want to delete   ";
		getline(cin, number);
		for (int i = 0; i < n; i++)
		{
			if (arrayNumber[i].find(number) >= 0 && arrayNumber[i].find(number) <= 100)
			{
				cout << "the name  is  (" << arrayName[i] << ")  and his number  ' " << arrayNumber[i] << " ' has been deleted  \n";
				swap(arrayName[i], arrayName[n - 1]);
				swap(arrayNumber[i], arrayNumber[n - 1]);
				n--;
			}
		}
	}
}
void main()
{
	char check;
	do
	{
		system("cls");
		cout << "Welcome to Telephone Directory\n\n\n"
			<< "To search about telephone number, enter [ 1 ]\n\n"
			<< "To search about name, enter [ 2 ]\n\n"
			<< "To add a new contact in the phone directory, enter [ 3 ]\n\n"
			<< "To delete a contact from the phone directory, enter [ 4 ]\n\n";
		cin >> check;
		getline(cin, name);
		switch (check)
		{
		case '1':
			searchNumber();
			break;
		case '2':
			searchName();
			break;
		case '3':
			addcontact();
			break;
		case '4':
			deletecontact();
			break;
		default:
			cout << "You Are Existed";
		}
		cout << "Do you continue (y/n)  :  ";
		cin >> check;
	} while (check != 'n' && check != 'N');
}