#include <iostream>
#include <string>

struct score
{
    int number;
    std::string name;
    double balance;
};
void newBalance(score* A)
{
    int newB = 0;
    std::cin >> newB;
    A->balance = newB;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    std::string n;
    double b;
    score A;
    std::cout << "Введите номер счета: ";
    std::cin >> num;
    A.number = num;
    std::cout << "Введите имя владельца: ";
    std::cin >> n;
    A.name = n;
    std::cout << "Введите баланс: ";
    std::cin >> b;
    A.balance = b;
    std::cout << "Введите новый баланс: ";
    newBalance(&A);
    std::cout << "Ваш счёт: " << A.name << ", " << A.number << ", " << A.balance;
}
