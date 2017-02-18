#include <stdio.h>
int main (int argc,char * argv[])
{
	printf("LINE = %d\n",__LINE__);	// %d 需要传入一个整形数据
	printf("FUNC = %s \n",__FUNCTION__);// %s 需要传入一个字符串
	printf("FILE = %s\n",__FILE__);

	return 0;
}
