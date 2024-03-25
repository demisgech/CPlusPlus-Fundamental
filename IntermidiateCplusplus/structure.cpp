#include <iostream>
using namespace std;

struct Address
{
    string street;
    string city;
    string zipCode;
};

struct Customer
{
    int id;
    string name;
    string email;
    Address address;
};

int main()
{
    Address address{"Koye", "Kality", "12dd1"};
    Customer customer = {1, "Demis", "Email", address};

    // cout << "ID: ";
    // cin >> customer.id;

    // cout << "Name: ";
    // cin >> customer.name;

    // cout << "Email: ";
    // cin >> customer.email;

    // cout << "ID: " << customer.id << endl
    //      << "Name: " << customer.name << endl
    //      << "Email: " << customer.email << endl;

    // cout << customer.address.city << endl;

    Customer customer2 = {
        1,
        "Demis",
        "demis@gmail.com",
        {"22 Merkato",
         "Addis Ababa",
         "12dd2"}};

    return 0;
}