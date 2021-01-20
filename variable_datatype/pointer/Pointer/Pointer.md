# Pointer

## * and &
*name means taking the value of the address it points to

'*' means decrease *level, & means increase level

```c++

int a=10;

int*p=&a;

*p= 100;

//a->100;

```

## size of pointer variable 
```c++
    char* p1;
    short *p2;
    int* p3;
    int** p4;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;

    //4 4 4 4

``` 

## footstep and width
```c++
    int num=0x01020304;
    char* p1=(char*)&num;
    short* p2=(char*)&num;
    int* p3=&num;

    cout<<*p1<<endl;
    cout<<*p2<<endl;
    cout<<*p3<<endl;

```