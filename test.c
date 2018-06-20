#include <iostream>
using namespace std;
void main()
{
	for(int i=0;i<26;i++)
	{		
		if(i%2==0)// если число делится на два без остатка
		{
			continue;// остановить итерацию цикла и перейти к i++
		}
		cout<<i<<"\n";
		}
}
