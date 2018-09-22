#include <cstdio>
using namespace std;
int readInt()
{
	char c = getchar_unlocked();
	int x = 0;
	while(!(c >= '0' && c <= '9'))
	{
		c = getchar_unlocked();
	}
	while(c >= '0' && c <= '9')
	{
		x = x*10 + c-'0';
		c = getchar_unlocked();
	}
	return x;
}
void printInt(int a)
{
	if(a < 10)
	{
		putchar_unlocked(a + 48);
	}
	else
	{
		putchar_unlocked(a/10 + 48);
		putchar_unlocked(a%10 + 48);
	}
	putchar_unlocked('\n');
}

int main()
{
	int n = readInt(), i, j;
	/**     


	YOUR LOGIC HERE



	*/



	    
	return 0;
}