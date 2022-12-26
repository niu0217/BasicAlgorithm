#include<iostream>
#include "NumericConversion.hpp"
using namespace std;

/* **********************************************************
作者：niu0217
日期：2022/12/26
函数功能：测试所有函数
输入参数：
输出参数：
返回值：
其他：
*********************************************************** */
void Test()
{
    // 测试二进制转换成十进制
    string strData = "1111";
    cout<<BinToInt(strData)<<endl;
    int iData = 111;
    cout<<BinToInt(iData)<<endl;
}

int main()
{
    Test();
}
