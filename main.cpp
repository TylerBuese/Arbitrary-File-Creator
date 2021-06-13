#include "file.h"

int main()
{
    std::string location;
    int size;
    std::string fileName;
    std::cout << "Please enter the location of where you'd like to store the file (Note: Fully qualify your location. eg, add \\ to the end of the location.): ";
    std::cin >> location;
    std::cout << "\n";
    std::cout << "Please name the file: ";
    std::cin >> fileName;
    std::cout << "\n";
    std::cout << "Please enter how large you'd like the file to be (in KB): ";
    std::cin >> size;
    std::cout << "\n";
    File file;
    file.CreateFile(fileName, location, size * 1024);
    return 0;
}
