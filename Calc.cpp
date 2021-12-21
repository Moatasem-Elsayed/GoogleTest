#include "Calc.hpp"
Student::Student()
{
}
Student::Student(int score, std::string name) : score(score), name(name)
{
    std::cout << "Constructor is called " << std::endl;
}
bool Student::DisplayResult()
{
    if (score >= 50)
    {
        return true;
    }
    else
    {
        return false;
    }
}