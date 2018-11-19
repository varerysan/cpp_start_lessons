#include <iostream>
#include <fstream>
#include <array>
#include <vector>

class Statistics
{
public:
    std::array<int,256> stat;
    
    void clear()
    {
        for( auto &s : stat) s = 0;
    }

    Statistics()
    {
        clear();
    }
    
    
    
    void addData( const std::vector<uint8_t> data )
    {
        clear();
        for(const auto d : data)
        {
            stat[d]++;
        }
    }
    
    void print()
    {
        for( int k = 0; k < 256; k++ )
        {
            int num = stat[k];
            std::cout << k << ":" << num << std::endl;
        }
    }
    
    

};

class Processor
{
public:
    Statistics statistics;
    
    const int max_size = 65536;
    
    std::vector<uint8_t> buffer;
    
    Processor()
    {
        buffer.reserve(max_size);
    
    }
    
    void addFile(std::string name)
    {
        std::ifstream file(name, std::ios::binary);
        char value;
        
        while( file.get(value) && buffer.size() < max_size )
        {
            int v = value;
            if( v < 0 ) v = 256 + v;
            buffer.push_back(v);
            std::cout << "pv=" << std::hex <<v << std::endl;
        }
        
        statistics.addData(buffer);
    
    }
    
    void print()
    {
        int pos = 0;
        for(const auto &v : buffer)
        {
            int k = v;
            std::cout << pos << " k=" << std::hex << k << std::endl;
            pos++;
        }
        std::cout << "----------------------" << std::endl;
        statistics.print();
    }

};

void read()
{
    Processor processor;
    processor.addFile("data.txt");
    processor.print();
    
    return;
}

int main()
{
    std::cout << "Hello Huffman" << std::endl;
    read();
    return 0;
}

