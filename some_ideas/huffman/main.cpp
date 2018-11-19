#include <iostream>
#include <fstream>
#include <array>

class Statistics
{
public:
    std::array<int,256> stat;
    
    void clear()
    {
        for( const auto &s : stat) s = 0;
    }

    Statistics()
    {
        clear();
    }
    
    
    
    void addData( const vector<uint_8> data )
    {
        clear();
        for(const auto d : data)
        {
            stat[d]++;
        }
    }
    
    

};

class Processor
{
public:
    Statistics statistics;
    
    const int max_size = 65536;
    
    vector<uint_8> buffer;
    
    Processor()
    {
        buffer.reserve(max_size);
    
    }
    
    void addFile(std::string name)
    {
        
        char value;
        while( file.get(value) && buffer.size() < max_size )
        {
            int v = value;
            std::cout << "v=" << v << std::endl;
        }
    
    }

};

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

