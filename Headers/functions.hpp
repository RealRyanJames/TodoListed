#include <iostream>
#include <string>

std::string UserChosenQuestion(std::string readUser)
{
    std::string userRead = readUser;
    return userRead;
}

void writeToConsole(std::string lineConsole, std::string line_1, std::string line_2)
{
    std::cout << lineConsole << std::endl;
    std::cout << line_1 << std::endl;
    std::cout << line_2 << std::endl;
}

void Init()
{
    std::string str;
    std::string user = UserChosenQuestion(str);

    std::string t1{};
    std::string t2{};
    std::string t3{};

    std::cout << "Enter Todo 1: " << std::endl;
    std::getline(std::cin, t1);

    std::cout << "Enter Todo 2: " << std::endl;
    std::getline(std::cin, t2);

    std::cout << "Enter Todo 3: " << std::endl;
    std::getline(std::cin, t3);

    writeToConsole(t1, t2, t3);
}
