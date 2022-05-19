#ifndef __CACHE__
#define __CACHE__
#include <iostream>
#include <algorithm>
#include <vector>
struct Eq
{
    long long int x1{0}, x2{0}, result{0};
    bool operator==(const Eq &ref)
    {
        return (this->x1 == ref.x1 && this->x2 == ref.x2);
    };
};
extern std::vector<Eq> cache;
extern struct Eq value;

long long int Cache(const long long int &x1, const long long int &x2)
{
    value.x1=x1;
    value.x2=x2;
    for (const auto &eq : cache)
    {
        if (value== eq)
        {
            std::cerr<<"\ncaching value ...";
            return eq.result;
        };
    };
    return -1;
};
long long int multy(const long long int &x1, const long long int &x2)
{
    auto val{Cache(x1,x2)};
    if(val!=-1)
    {
        return val;
    };

    value.result= (x1 * x2);
    std::cerr<<"Generating Cache ...\n";
    cache.push_back(value);
    return value.result;
};

#endif