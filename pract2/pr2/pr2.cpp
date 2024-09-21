// pr2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
struct Rectangle
{
    int height;
    int width;
    int square;
};

class BankAccount {
private:
    std::string accountNumber;
        double balance;
public:
    void deposit(double money)
    {
        balance += money;
    }
    void pull(double money)
    {
        balance -= money;
    }
    double getBalance()
    {
        return balance;
    }
    double izmBalance(double balance2)
    {
        balance = balance2;
        return balance;
    }
    std::string getNumber()
    {
        return accountNumber;
    }
    std::string renameNumber(std::string number)
    {
        accountNumber = number;
        return accountNumber;
    }
};

int main()
{

    //одномернный массив,вариант 4
    setlocale(0, "rus");
    //int arr[] = { 1,4,6,1,4,8,1,43,3231,465,32,45421 };//массив
    //int max = arr[0];//Начальное число для сравнения
    //int count =sizeof(arr) / sizeof(arr[0]);//Кол-во элементов в массиве
    //for (int i = 1; i <count; i++)
    //{
    //    if(arr[i]>max)//Поиск максимального элемента
    //    {
    //        max = arr[i];//Приравнивание максимального элемента
    //    }
    //}
    //std::cout << "Максимальный элемент в массиве= " << max;//Вывод
    







    //многомерный массив,вариант 4
    bool sim=true;
    int arr2[3][3]
    {
        {1,2,3},
        {2,1,2},
        {1,2,3}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr2[i][j] != arr2[j][i])
            {
                sim = false;
            }
        }
    }
    if (sim == true)std::cout << "Многомерный массив симметричен";
    else std::cout << "Многомерный массив не симметричен";



    //структуры,вариант 4 площадь прямоугольника    
   /* Rectangle rec1;
    rec1.width = 2;
    rec1.height = 3;
    rec1.square = rec1.height * rec1.width;
    std::cout << "Площадь прямоугольника с шириной " << rec1.width << " и выcотой " << rec1.height << " равен = " << rec1.square;*/

    //Класс bankAccount
    bool end = false;
    BankAccount b1;
    double balance = 0;
    b1.izmBalance(balance);
    double money;
    int vibor;
    std::string number = "5214VFG#1";
    b1.renameNumber(number);
   
    do {
        std::cout << "\n1-Пополнить \n 2-Снять \n 3-Проверить баланс\n4-Выход\n";
        std::cin >> vibor;
        if (vibor == 1)
        {
            std::cout << "Введите количество денег которые нужно положить на счет\n";
            std::cin >> money;
            b1.deposit(money);
        }
        else if (vibor == 2)
        {
            std::cout << "Введите количество денег которые нужно снять со счета\n";
            std::cin >> money;
            if (b1.getBalance() < money)
            {
                std::cout << "На счету недостаточно средств";
            }
            else b1.pull(money);
        }
        else if (vibor == 3) std::cout << "На вашем балансе " << b1.getBalance() << "\n Номер аккаунта " << b1.getNumber();
        else if(vibor==4) break;
    } while (end == false);
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
