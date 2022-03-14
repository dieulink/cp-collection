#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
struct xau
{
	char a;
	long long d;
	long long stt;
};
bool sxt(xau x, xau y)
{
	return x.d < y.d;
}
bool sxt2(xau x, xau y)
{
	return x.stt < y.stt;
}
xau s[1000000];
using namespace std;
int main()
{
	string st;
	cin >> st;
	int j = 0;
	s[j].d = 0;
	for (long long i = st.length(); i > 0; i--)
	{
		if (st[i] == st[i - 1])
		{
			s[j].d++;
		}

		else
		{
			s[j].a = st[i];
			s[j].d++;
			j++;
			s[j].d = 0;
		}
	}
	s[j].a = st[0];
		s[j].d++;
			for (int i = 1; i <= j; i++) s[i].stt = i;
			sort(s + 1, s + j + 1, sxt);
			int k = -5;
			for (int i = j; i > 1; i--)
				if (s[i].d != s[i - 1].d)
				{
					k = s[i - 1].d;
					break;
				};
			sort(s + 1, s + j + 1, sxt2);
			for (int i = 1; i <= j; i++) if (s[i].d == k)
			{
				cout << s[i].a << " " << s[i].d;
				break;
			}
			if (k == -5) cout << "-1";
		return 0;

}
