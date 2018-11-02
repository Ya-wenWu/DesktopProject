#include "stdafx.h"
#include "reverse_string.h"


reverse_string::reverse_string(char *str)
{
	char* end = str;
	char tmp;
	if (str) {

		//計算字串長度
		while (*end){   //數字串的結束點
			++end; //往下一個字元
		}
		--end;//往前一個字元,因為最後一個字元是\0,也就是null

		//交換字串開始與結束字元
		//直到指標在中間相會
		while (str){
			tmp = *str;
			*str++ = *end;//????
			*end-- = tmp;
		}

	}

}


reverse_string::~reverse_string()
{
}
