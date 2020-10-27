
#include <iostream>
class Calculator
{

public:
    int add(int a, int b);
    int Mul(int a, int b =2);


};

int Calculator::add(int a, int b)
{

    return (a + b);
}

int Calculator::Mul(int a, int b)
{

    return (a * b);
}


int main()
{
    Calculator calc;
    std::cout << calc.add(10, 20) << std::endl;
    std::cout << calc.add(10, 20) << std::endl;

}

