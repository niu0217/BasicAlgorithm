//
//  NumericConversion.hpp
//  BasicAlgorithmProject
//
//  Created by niu0217 on 2022/12/31.
//

#ifndef NumericConversion_hpp
#define NumericConversion_hpp

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

/* **********************************************************
作者：niu0217
日期：2022/12/26
函数功能：二进制数转换成十进制
输入参数：二进制数（表示为string类型）
输出参数：十进制数(int)
返回值：
其他：
*********************************************************** */
int BinToInt(const string& strData);

/* **********************************************************
作者：niu0217
日期：2022/12/26
函数功能：二进制数转换成十进制
输入参数：二进制数（表示为int类型）
输出参数：十进制数(int)
返回值：
其他：
*********************************************************** */
int BinToInt(int iData);

// 十六进制转换成十进制

// 二进制转换成十六进制

// 十进制转换成十六进制

// 十进制转换成二进制
unsigned int IntToBin(const string& strData);

// 十六进制转换成二进制

/* **********************************************************
作者：niu0217
日期：2022/12/26
函数功能：测试所有函数
输入参数：
输出参数：
返回值：
其他：
*********************************************************** */
void Test();

#endif /* NumericConversion_hpp */
