#include <algorithm>
#include <cstdio>
#include <iostream>

namespace BigINT
{
#define BigINT_MAX 1001
#define BigINT_DATA_MAX 1000000000000000000
    struct BigINT
    {
    public:
        BigINT();
        BigINT(long long DATA_MAX);
        void printself();
        BigINT operator=(const long long &b);
        BigINT operator=(const BigINT &b);
        BigINT operator+(const BigINT &b);

    private:
        /* data */
        unsigned long long *data;
        unsigned long long len;
        bool sign;
    };
}