#include <iostream>
#include <fstream>
#include <vector>

class File
{
private:
    std::string FileName;
    std::string FileLocation;
    int FileSize;

    void WipeFile(std::string location)
    {
        std::ofstream file;
        file.open(location);
        file << "";
        file.close();
    }

public:
    void CreateFile(std::string name, std::string location, int size)
    {
        if (size > 1073741824)
        {
            std::cout << "Unable to write file due to illegal size. Size chosen: " << size;
            return;
        }
        std::string delimiter = "\\";
        std::string token;
        size_t pos = 0;
        std::vector<std::string> strings;
        while((pos = location.find(delimiter)) != std::string::npos)
        {
            token = location.substr(0, pos);
            std::cout << token << "\n";
            location.erase(0, pos + delimiter.length());
            strings.push_back(token + "\\");
        }
        std::string NewFileLocaiton;
        for (int i = 0; i < strings.size(); i++)
        {
            NewFileLocaiton += strings[i];
        }
        WipeFile(NewFileLocaiton + name);
        std::ofstream file;
        file.open(NewFileLocaiton + name, std::ios_base::app);
        for (int i = 0; i < size; i++)
        {
            file << "0";
        }
        file.close();
    }
};
