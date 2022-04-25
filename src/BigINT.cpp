#include "BigINT.h"
#include <iostream>

namespace BigINT
{
    BigINT::BigINT()
    {
        data = new unsigned long long[BigINT_MAX];
        len = 0;
        sign = true;
    }
    BigINT::BigINT(long long DATA_MAX)
    {
        data = new unsigned long long[DATA_MAX];
        len = 0;
        sign = true;
    }
    void BigINT::printself()
    {
        std::printf("%u", data[len - 1]);
        for (long long i = len - 2; i >= 0; i--)
            std::printf("%018u", data[i]);
    }
    BigINT BigINT::operator=(const BigINT &b)
    {
        this->len = b.len;
        this->sign = b.sign;
        for (long long i = 0; i < b.len; i++)
            this->data[i] = b.data[i];
        return *this;
    }
    BigINT BigINT::operator+(const BigINT &b)
    {
        BigINT ans;
        ans.sign = this->sign;
        ans.len = std::max(b.len, this->len);
        if (this->sign ^ b.sign)
        {
            if (this->data[ans.len - 1] < b.data[ans.len - 1])
            {
                for (long long i = 0; i < ans.len; i++)
                {
                    ans.data[i] = b.data[i] - this->data[i];
                }
            }
            else
            {
                for (long long i = 0; i < ans.len; i++)
                {
                    ans.data[i] = b.data[i] - this->data[i];
                }
                ans.sign ^= 1;
            }
        }
        else
        {
            for (long long i = 0; i < ans.len; i++)
            {
                ans.data[i] = ans.data[i] + this->data[i] + b.data[i];
                if (ans.data[i] > BigINT_DATA_MAX)
                {
                    ans.data[i] %= BigINT_DATA_MAX;
                    ans.data[i + 1] = 1;
                }
            }
            if (ans.data[ans.len])
            {
                ans.len++;
            }
        }
        return ans;
    }

    BigINT BigINT::operator=(const long long &b)
    {
        len = 1;
        sign = (b >= 0);
        data[0] = b;
        std::printf("b:%lld\r\nlen:%u sign:%d data:%018u\r\n", b, len, sign, data[0]);
        return *this;
    }
}