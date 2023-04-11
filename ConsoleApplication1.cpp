//Берчук Сергей Утс/б 22-2-о вариант 1
/*
 * 1. Объявить указатели на две переменные указанного типа. Используя указатели
 * произвести операции сложения и вычитания над переменными. Вывести адреса
 * указателей. Типы переменных указаны по таблице float
*/

#include <iostream>

int main()
{
    float float_num_1 = 0.04;
    float float_num_2 = 0.02;

    float* pfloat_num_1 = &float_num_1;
    float* pfloat_num_2 = &float_num_2;

    float addition = *pfloat_num_1 + *pfloat_num_2;
    float subtraction = *pfloat_num_1 - *pfloat_num_2;

    std::cout << "Sum operation \n"
        << "float_num_1 + float_num_2 = " << addition << std::endl;

    std::cout << std::endl;

    std::cout << "Subtraction operation \n"
        << "float_num_1 + float_num_2 = " << subtraction << std::endl;

    std::cout << std::endl;

    std::cout << "Pointer addresses: \n"
        << "pfloat_num_1: " << pfloat_num_1 << std::endl
        << "pfloat_num_2: " << pfloat_num_2 << std::endl;

    return 0;
}
/*
 * 2. Написать функцию для обмена значений переменных(типа float), указанных выше. Передача по
 * указателю. Выполнить программу по шагам и выписать в тетрадь адреса указателей
 * и величины переменных.
*/
#include <iostream>

void swap(float* pnum_1, float* pnum_2)
{
    std::cout << "Pointer info after start function swap" << std::endl;
    std::cout << "pfloat_num_1: " << "adress: " << &pnum_1 << " value: " << pnum_1 << " value for adress: " << *pnum_1 << std::endl;
    std::cout << "pfloat_num_2: " << "adress: " << &pnum_2 << " value: " << pnum_2 << " value for adress: " << *pnum_2 << std::endl;
    std::cout << std::endl;

    float temp = *pnum_1;
    *pnum_1 = *pnum_2;

    std::cout << "Pointer info after *pnum_1 = *pnum_2" << std::endl;
    std::cout << "pfloat_num_1: " << "adress: " << &pnum_1 << " value: " << pnum_1 << " value for adress: " << *pnum_1 << std::endl;
    std::cout << "pfloat_num_2: " << "adress: " << &pnum_2 << " value: " << pnum_2 << " value for adress: " << *pnum_2 << std::endl;
    std::cout << std::endl;

    *pnum_2 = temp;

    std::cout << "Pointer info after *pnum_2 = temp" << std::endl;
    std::cout << "pfloat_num_1: " << "adress: " << &pnum_1 << " value: " << pnum_1 << " value for adress: " << *pnum_1 << std::endl;
    std::cout << "pfloat_num_2: " << "adress: " << &pnum_2 << " value: " << pnum_2 << " value for adress: " << *pnum_2 << std::endl;
    std::cout << std::endl;
}

int main()
{
    float float_num_1 = 0.04;
    float float_num_2 = 0.02;

    float* pfloat_num_1 = &float_num_1;
    float* pfloat_num_2 = &float_num_2;

    std::cout << "Values of variables before function swap:\n"
        << "float_num_1: " << float_num_1 << std::endl
        << "float_num_2: " << float_num_2 << std::endl;
    std::cout << std::endl;

    swap(pfloat_num_1, pfloat_num_2);

    std::cout << "Values of variables after function swap:\n"
        << "float_num_1: " << float_num_1 << std::endl
        << "float_num_2: " << float_num_2 << std::endl;

    return 0;
}
/*
 * 3. Объявить динамический массив типа float. Размер массива задаёт пользователь. Заполнить
 * массив случайными числами. Вывести на экран адреса и значения элементов
 * массива.
*/

#include <iostream>
#include<ctime>

int main()
{
    srand(time(0));
    float* p = nullptr;

    int nsize;
    std::cout << "please, enter count of massive elements: ";
    std::cin >> nsize;

    p = new float[nsize];

    for (int i = 0; i < nsize; i++)
    {
        p[i] = (float)(rand()) / RAND_MAX * (20 + 10) - 10;
        std::cout << "(" << &p[i] << ") = " << p[i] << std::endl;

    }

    delete[] p;

    return 0;
}
/*
 * 4. Объявить сущность и описать её свойства. Объявить динамический массив
 * сущностей. Реализовать функцию, которая изменяет значения элемента (структура)
 * массива. Заполнить атрибуты числовыми и текстовыми значениями (диапазон
 * значений определить самостоятельно).
 * a. автомобиль
*/

#include <iostream>
#include <string>
#include <iomanip>

struct Car {
    std::string brand;   // марка
    std::string model;   // модель
    int yearOfIssue;     // год выпуска
    int mileage;         // пробег (км)
    int power;           // мощность (л.с.)
};

// функция для изменения свойств автомобиля
void modifyCar(Car& car) {
    car.yearOfIssue = rand() % 21 + 2000;  // год выпуска от 2000 до 2020
    car.mileage = rand() % 100001;  // пробег от 0 до 100000 км
    car.power = rand() % 201 + 100;  // мощность от 100 до 300 л.с.
}

// функция для заполнения данными структур в массиве
void FillCarsData(Car* cars, int size)
{
    for (int i = 0; i < size; i++) {
        (cars + i)->brand = "Brand " + std::to_string(i + 1);
        (cars + i)->model = "Model " + std::to_string(i + 1);
        (cars + i)->yearOfIssue = rand() % 21 + 2000;
        (cars + i)->mileage = rand() % 100001;
        (cars + i)->power = rand() % 201 + 100;
    }
}

// функция для красивого вывода массива
void printCars(Car* cars, int size) {
    std::cout << std::setw(10) << "Brand" << std::setw(10) << "Model"
        << std::setw(10) << "Year" << std::setw(10) << "Mileage"
        << std::setw(10) << "Power" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << std::setw(10) << cars[i].brand
            << std::setw(10) << cars[i].model
            << std::setw(10) << cars[i].yearOfIssue
            << std::setw(10) << cars[i].mileage
            << std::setw(10) << cars[i].power << std::endl;
    }
}

int main() {
    int size;
    std::cout << "Enter the length of cars array: ";
    std::cin >> size;

    Car* cars = new Car[size];
    FillCarsData(cars, size);
    printCars(cars, size);

    int index;
    std::cout << "Enter the index of the car to modify: ";
    std::cin >> index;

    modifyCar(cars[index]);
    printCars(cars, size);

    delete[] cars;

    return 0;
}