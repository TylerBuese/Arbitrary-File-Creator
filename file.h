#include <iostream>
#include <fstream>

class File 
{
    private:
    std::string FileName;
    std::string FileLocation;
    int FileSize;

    
    public:
    void CreateFile(std::string name, std::string location, int size)
    {
        std::ofstream file;
        file.open(location, std::ios_base::app);
        for (int i = 0; i < size; i++) 
        {
            file << "0";
        }
        file.close();
    }

};
