#include <iostream>
#include <fstream>


void read()
{
    std::ifstream file("data.txt", std::ios::binary);
    if( ! file )
    {
        std::cout << "Can't open file" <<std::endl;
        return;
    }
    
    char value;
    while( file.get(value) )
    {
        int v = value;
        std::cout << "v=" << v << std::endl;
    }

}

int main()
{
    std::cout << "Hello Huffman" << std::endl;
    read();
    return 0;
}

