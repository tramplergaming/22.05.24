#include <iostream>
#include <Windows.h>
#include <string>

class Animal 
{
public:
    Animal(const std::string& animalType, const std::string& animalName, const std::string& animalSound, int animalAge) : type(animalType), name(animalName), sound(animalSound), age(animalAge) 
    {

    }

    void Inf() 
    {
        std::cout << type << " " << name << " " << age << " лет " << sound << std::endl;
    }
private:
    std::string name;
    std::string sound;
    std::string type;
    int age;
};

class Cat : public Animal 
{
public:
    Cat(const std::string& name, int age) : Animal("Кот", name, "Мяу", age)
    {

    }
};

class Dog : public Animal 
{
public:
    Dog(const std::string& name, int age) : Animal("Собака", name, "Гав", age)
    {
    
    }
};

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Cat barsik("Барсик", 5);
    Dog baron("Барон", 10);

    barsik.Inf();
    baron.Inf();

    return 0;
}