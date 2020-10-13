
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include<time.h>
int main()
{

	
	srand((unsigned)time(NULL));
	std::vector<int>v1(8); ///要素8,すべて0で初期化

	//iteratorを使ったfor文の回し方
	

//	for (int i = 0; i < v1.size(); i++)
	int counter = 0;
	for(std::vector<int>::iterator itr =v1.begin(); itr!= v1.end();++itr)
	{

		*itr = rand();
		printf("v1[%d] =%d\n", counter, *itr);

		counter++;
	}

	printf("\n");
}