# System function

**utility**:

lauch a program in another program

**paramter**:
the path of the program

## hello1.cpp
```c++
#include <iostream>

int main()
{
    std::cout<<"hello1"<<endl;
    return 0;
}

```

## main.cpp
```c++
#include <stdlib.h>

int main()
{
    system('../hello.out');
    return 0;
}
```

# output

```
hello1
hello
```