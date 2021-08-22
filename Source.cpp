#include <iostream>
#include <ctime>
#include <string.h>
#include <string>
using namespace std;

struct Automobile {
    string Company;
    string Model;
    double lenth;
    double klirens;
    float V_engine;
    float power_engine;
    double D_wheel;
    short year;
    string color;
    string type_of_trans;
};
void OutputOneAuto(Automobile auto_)
{
    cout << "Company: " << auto_.Company << endl;
    cout << "Model: " << auto_.Model << endl;
    cout << "Color: " << auto_.color << endl;
    cout << "Year: " << auto_.year << endl;
    cout << "Type of transmission: " << auto_.type_of_trans << endl;
    cout << "Lenth: " << auto_.lenth << endl;
    cout << "Klirens: " << auto_.klirens << endl;
    cout << "V_engine: " << auto_.V_engine << endl;
    cout << "Power of engine: " << auto_.power_engine << endl;;
    cout << "Diametr of wheel: " << auto_.D_wheel << endl;;
}
void CreateOneAuto(Automobile& auto_)
{
    cin.ignore();
    cout << "Input Company: ";
    getline(cin, auto_.Company);
    cout << "Input Model: ";
    getline(cin, auto_.Model);
    cout << "Input Color: ";
    getline(cin, auto_.color);
    cout << "Input Type of transmission: ";
    getline(cin, auto_.type_of_trans);
    cout << "Input year: ";
    cin >> auto_.year;
    cout << "Input lenth: ";
    cin >> auto_.lenth;
    cout << "Input klirens: ";
    cin >> auto_.klirens;
    cout << "Input V_engine: ";
    cin >> auto_.V_engine;
    cout << "Input power of engine: ";
    cin >> auto_.power_engine;
    cout << "Input Diametr of wheel: ";
    cin >> auto_.D_wheel;
}
void SearchForCompany(string search_company, Automobile* autos, int size)
{
    system("cls");
    for (size_t i = 0; i < size; i++)
    {
        if (search_company == autos[i].Company)
        {
            cout << "#>-------------<Automobile #" << i + 1 << ">-------------<#" << endl;
            OutputOneAuto(autos[i]);
            cout << endl;
        }
    }
}
void ShowCarsArray(Automobile* autos, int size)
{
    system("cls");
    for (size_t i = 0; i < size; i++)
    {
        cout << "#>-------------<Automobile #" << i + 1 << ">-------------<#" << endl;
        OutputOneAuto(autos[i]);
        cout << endl;
    }
}
Automobile* CreateAutomobileArray(int size)
{
    system("cls");
    Automobile* autos = new Automobile[size];
    for (size_t i = 0; i < size; i++)
    {
        cout << "#>-------------<Automobile #" << i + 1 << ">-------------<#" << endl;
        CreateOneAuto(autos[i]);
        cout << endl;
    }
    return autos;
}
int main()
{
    int size;
    cout << "Enter amount of cars: ";
    cin >> size;
    Automobile* autos = CreateAutomobileArray(size);
    ShowCarsArray(autos, size);
    string str;
    cin.ignore();
    cout << "Enter Company for search-->";
    getline(cin, str);
    SearchForCompany(str, autos, size);
    return 0;
}