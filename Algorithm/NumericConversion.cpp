//
//  NumericConversion.cpp
//  Algorithm
//
//  Created by niu0217 on 2022/12/24.
//

#include "NumericConversion.hpp"

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/26        niu0217            V1.0         完成函数编写
********************************************************************** */
int BinToInt(const string& strData)
{
    int iValue = 0; //保存最后的十进制数
    long int iIndex = strData.size() - 1; //平方的起始数
    for(int i = 0; i <= strData.size() - 1 && iIndex >= 0; iIndex--,i++)
    {
        iValue += (strData[i] - 48)*pow(2, iIndex);
    }
    return iValue;
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/26        niu0217            V1.0         完成函数编写
********************************************************************** */
int BinToInt(int iData)
{
    int iValue = 0; // 保存最终的值
    for(int i = 0; iData != 0; i++)
    {
        iValue += (iData%10)*pow(2, i);
        iData /= 10; // 每次都需要更新iData的值
    }
    return iValue;
}
