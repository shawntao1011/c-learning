#include <iostream>

struct s1
{
    int i:8;
    char j:4;
    int a:4;
    double b;
};

struct s2
{
    int i:8;
    char j:4;
    double b;
    int a:4;
};

struct s3
{
    int i;
    char j;
    double b;
    int a;
};

int main()
{
    struct s1 s;
    std::cout << sizeof(s1) << std::endl;
    std::cout << sizeof(s2)<<std::endl;
    std::cout<<sizeof(s3)<<std::endl;
    std::cout<<s.a<<std::endl;    
    return 0;
}

