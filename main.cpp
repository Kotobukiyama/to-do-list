#include <iostream>
#include <windows.h>

int main()
{
    std::string tasks[10] {""};

    //We need to know how many tasks we have
    int taskCount {0};

    int option {-1};
    while (option != 4)
    {
        std::cout << "--- TO DO LIST ---\n";
        std::cout << "1 - To Add a New Task\n";
        std::cout << "2 - To View Tasks\n";
        std::cout << "3 - Delete tasks\n";
        std::cout << "4 - Terminate the program\n";

        std::cin >> option;

    }

    return 0;
}
