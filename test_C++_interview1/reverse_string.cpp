#include "stdafx.h"
#include "reverse_string.h"


reverse_string::reverse_string(char *str)
{
	char* end = str;
	char tmp;
	if (str) {

		//�p��r�����
		while (*end){   //�Ʀr�ꪺ�����I
			++end; //���U�@�Ӧr��
		}
		--end;//���e�@�Ӧr��,�]���̫�@�Ӧr���O\0,�]�N�Onull

		//�洫�r��}�l�P�����r��
		//������Цb�����۷|
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
