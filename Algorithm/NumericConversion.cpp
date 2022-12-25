//
//  NumericConversion.cpp
//  Algorithm
//
//  Created by niu0217 on 2022/12/24.
//

#include "NumericConversion.hpp"

// 二进制转换成十进制
int BinToInt(const string& strData)
{
    int IValue = 0; //保存最后的十进制数
    long int IIndex = strData.size() - 1; //平方的起始数
    for(int i = 0; i <= strData.size() - 1 && IIndex >= 0; IIndex--,i++)
    {
        IValue += (strData[i] - 48)*pow(2, IIndex);
    }
    return IValue;
}
