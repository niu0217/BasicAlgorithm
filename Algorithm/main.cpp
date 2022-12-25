#include<iostream>
#include "NumericConversion.hpp"
using namespace std;

// 测试二进制转换成十进制
void Test_BinToInt()
{
    string strData = "1111";
    cout<<BinToInt(strData)<<endl;
}

int main()
{
    Test_BinToInt();
}
