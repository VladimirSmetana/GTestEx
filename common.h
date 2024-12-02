#ifndef COMMON
#define COMMON

#include <stdio.h>
#include <vector>

int sum(const int &a, const int &b, const int &c)
{
    return a + b + c;
}

int dev(const double &a, const double &b, double *res)
{
    if (b == 0)
    {
        return -1;
    }
    else
    {
        *res = a / b;
        return 0;
    }
}

std::vector<int> vec_merg(std::vector<int> &a, std::vector<int> &b)
{
    std::vector<int> res;
    
    for (auto a_ : a)
    {
        res.push_back(a_);
    }
    for (auto b_ : b)
    {
        res.push_back(b_);
    }

    return res;
}

#endif // COMMON