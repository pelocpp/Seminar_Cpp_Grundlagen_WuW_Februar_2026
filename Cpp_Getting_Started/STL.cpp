#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

void stl_01()
{
    std::vector<int> numbers;
 //   std::list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    for (int i = 0; i != numbers.size(); ++i) {
        std::cout << numbers[i] << std::endl;
    }
}


void stl_02()
{
    // std::vector<int> numbers;
    std::list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Zum Zwecke des Erklärens !!!!!

    std::list<int>::iterator pos = numbers.begin();

    if (pos == numbers.end()) {
        std::cout << "Done." << std::endl;
        return;
    }

    int value = *pos;
    std::cout << value << std::endl;

    ++pos;

    if (pos == numbers.end()) {
        std::cout << "Done." << std::endl;
        return;
    }

    value = *pos;
    std::cout << value << std::endl;

    ++pos;

    if (pos == numbers.end()) {
        std::cout << "Done." << std::endl;
        return;
    }

    value = *pos;
    std::cout << value << std::endl;

    ++pos;

    if (pos == numbers.end()) {
        std::cout << "Done." << std::endl;
        return;
    }

    value = *pos;
    std::cout << value << std::endl;

}

void stl_03()
{
    std::vector<int> numbers;
    //   std::list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::vector<int>::iterator pos = numbers.begin();
    std::vector<int>::iterator end = numbers.end();

    while (pos != end) {

        int value = *pos;
        std::cout << value << std::endl;

        ++pos;
    }
}

void stl_04()
{
    // std::vector<int> numbers;
    std::list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    auto pos = numbers.begin(); // Automatic Type Deduction
    auto end = numbers.end();

    while (pos != end) {

        int value = *pos;
        std::cout << value << std::endl;

        ++pos;
    }
}

// =================================================

void print(int value)
{
    std::cout << value << std::endl;
}

void stl_05()
{
    std::vector<int> numbers;
    //   std::list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::for_each(
        numbers.begin(),
        numbers.end(),
        print
    );
}

// =================================================

// OHNE &:   Zugriff auf eine KOPIE

// MIT &:    Zugriff auf das Original
//            das Element im Container



void print2(int& value)
{
    value = value * 2;

    std::cout << "In print2: " <<  value << std::endl;
}

void stl_06()
{
    std::vector<int> numbers;
    //   std::list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::for_each(
        numbers.begin(),
        numbers.end(),
        print2
    );

    std::for_each(
        numbers.begin(),
        numbers.end(),
        print2
    );

    std::for_each(
        numbers.begin(),
        numbers.end(),
        print
    );
}

 // =============================================

void stl_07()
{
    std::vector<int> numbers;

    numbers.reserve(80);

    for (int i = 0; i != 100; ++i) {
        numbers.push_back(2 *i);
        std::cout << "Size: " << numbers.size() << " - Capacity: " << numbers.capacity() << std::endl;
    }

    numbers.shrink_to_fit();
    std::cout << "Size: " << numbers.size() << " - Capacity: " << numbers.capacity() << std::endl;

}


void stl_08()
{
    std::vector<int> numbers;
    //   std::list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    std::for_each(
        numbers.begin(),
        numbers.end(),      // Lambda
        [] (int value) {
           std::cout << "Inplace: " << value << std::endl;
        }
    );
}


// ====================================================

void stl()
{
    stl_08();
}
