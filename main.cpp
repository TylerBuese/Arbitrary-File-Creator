#include "file.h"

int main()
{
    std::cout << "Please enter how large you'd like the file to be (in KB): ";
    int size;
    std::cin >> size;
    File file;
    file.CreateFile("File", "C:\\Users\\Tyler\\Desktop\\New folder\\stuff.txt", size * 1024);
    return 0;
}
