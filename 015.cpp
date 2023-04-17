// 015.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>  
using namespace std;
int main()
{
	string s, ss[27],sS[27]; int sn[27] = {0};
	s = "\n";
	getline(cin, s);
	int k = 0;
	int i,j;
	ss[0] = " ";
	for(i= 0; i <= 25; i++)
	{
		ss[i + 1] = char('a' + i);
		sS[i + 1] = char('A' + i);
	}
	
	for (i = 0; i <= s.length(); i++)
	{
		for (j = 0; j < 27; j++)
		{
			string a, b,c;
			a = s[i]; b = ss[j],c=sS[j];
			if (a == b) sn[j]+=1;
			if (a == c) sn[j] += 1;
		}
	}
	cout << sn[0] + 1<< "\n";
	for (i = 1; i < 27; i++)
	{
		if (sn[i] > 0) cout << ss[i] << " : " << sn[i] << "\n";
	}
}

