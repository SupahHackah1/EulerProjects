#include <iostream>

long long int tCount(long long int a)
{
    long long int s = 0;
    for(long long int i = 1,c;;i++)
    {
        c = i;
        if(c*c*4>a)
        {
            break;
        }
        s += (a-c*c*4)/(4*c);
    }
    return s;
}
int main()
{
    std::cout<<tCount(1000000)<<std::endl;
    return 0;
}
