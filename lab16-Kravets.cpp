# lab16-Kravets.cpр
// lab16_Kravets.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "windows.h"
using namespace std;

class Person
{
private:
    string lastName;
    string firstName;
    string middleName;
    string address;
    string gender;
    string education;
    int birthYear;

public:
    void set(string ln, string fn, string mn, string addr, string g, string ed, int by)
    {
        lastName = ln;
        firstName = fn;
        middleName = mn;
        address = addr;
        gender = g;
        education = ed;
        birthYear = by;
    }

    string getLastName()
    {
        return lastName;
    }

    string getFirstName()
    {
        return firstName;
    }

    string getMiddleName()
    {
        return middleName;
    }

    string getAddress()
    {
        return address;
    }

    string getGender()
    {
        return gender;
    }

    string getEducation()
    {
        return education;
    }

    int getBirthYear()
    {
        return birthYear;
    }

    int getAge(int currentYear)
    {
        return currentYear - birthYear;
    }

    void show()
    {
        cout << endl << "ПІБ: " << lastName << " " << firstName << " " << middleName << endl;
        cout << "Адреса: " << address << endl;
        cout << "Стать: " << gender << " | Освіта: " << education << " | Рік народження: " << birthYear << endl;
    }
};

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 5;
    Person people[SIZE];

    people[0].set("Іваненко", "Іван", "Іванович", "Київ, вул. Хрещатик 1", "чоловіча", "вища", 1985);
    people[1].set("Петренко", "Олена", "Петрівна", "Львів, вул. Франка 5", "жіноча", "вища", 1992);
    people[2].set("Сидоренко", "Петро", "Олексійович", "Одеса, вул. Дерибасівська 10", "чоловіча", "середня", 2005);
    people[3].set("Коваленко", "Марія", "Василівна", "Харків, вул. Сумська 20", "жіноча", "середня спеціальна", 1978);
    people[4].set("Шевченко", "Тарас", "Григорович", "Дніпро, пр. Яворницького 15", "чоловіча", "вища", 1999);

    int currentYear = 2026;
    int targetAge;

    cout << "Введіть вік для пошуку громадян: ";
    cin >> targetAge;
    cout << endl;

    cout << "а) Громадяни, вік яких перевищує " << targetAge << " років" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (people[i].getAge(currentYear) > targetAge)
        {
            people[i].show();
        }
    }
    cout << endl;

    cout << "б) Громадяни з вищою освітою" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (people[i].getEducation() == "вища")
        {
            people[i].show();
        }
    }
    cout << endl;

    cout << "в) Громадяни чоловічої статі" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (people[i].getGender() == "чоловіча")
        {
            people[i].show();
        }
    }
    cout << endl;
}
