#include <iostream>
using namespace std;

int main()
{
	int h;
	string day;
	cin >> h >> day;

	if (day == "Sunday" || h<10 || h> 18)
	{
		cout << "closed" << endl;
	}
	else
	{
		cout << "open" << endl;
			
	}
	return 0;
}
