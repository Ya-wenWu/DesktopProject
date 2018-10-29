// test_C++_interview1.cpp : 定義主控台應用程式的進入點。
//
#include "stdafx.h"
#include <iostream> 
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;



int main()
{
	cout << "Hello\n";

	printLastKLine("src.txt",6);
    return 0;
}

///倒數K行,撰寫輸出檔案的倒數K行
///環狀陣列
void printLastKLine(char* filename, int _k = 0)
{
	const int K = 10;
	int size = 0;
	std::string line[K];

	ifstream file(filename); //ifstream處理檔案輸入
	//file.open(filename);//我自己加的
	//if (_k != 0) line[K] = line[_k];

	/*逐行讀擋到環狀陣列*/
	/* peek()讓eof不會被視為一行 */
	while (file.peek()!=EOF) {
		getline(file,line[size % K]); //可以讀取包含空白得字串 ????????
		size++;
	}

	/* 計算環狀陣列的起始與大小 */
	int start = size > K ? (size % K) : 0;
	int count = min(K,size);

	/*依序讀入順序輸出元素*/
	for (int i = 0; i < count; i++) {
		cout << line[(start + i) % K] << endl;//???????????????
	}
}

//new
//读取一系列int数据，并将它们存储到vector对象中，
//然后使用algorithm头文件中定义的名为count的函数，
//统计某个指定的值出现了多少次
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main_2()
{
	int ival, searchValue;
	vector<int> ivec;

	//读入int型数据并存储到vector对象中，直至遇到文件结束符
	cout << "Enter some integers(Ctrl+Z to end): " << endl;
	while (cin >> ival)
		ivec.push_back(ival);

	cin.clear(); // 使输入流重新有效

				 //读入欲统计其出现次数的int值
	cout << "Enter an integer you want to search: " << endl;
	cin >> searchValue;

	//使用count函数统计该值出现的次数并输出结果
	cout << count(ivec.begin(), ivec.end(), searchValue)
		<< "  elements in the vector have value "
		<< searchValue << endl;

	return 0;
}



