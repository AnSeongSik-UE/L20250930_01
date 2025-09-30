#include <iostream>

using namespace std;

int main()
{
	int AmountOfNumber = 0;
	unsigned long long Number = 0;
	bool bIsReached = true;
	unsigned long long N = 1;
	unsigned long long Result = 0;

	std::cin >> AmountOfNumber;

	for (int i = 0; i < AmountOfNumber; ++i)
	{
		std::cin >> Number;
		while (bIsReached)
		{
			if (Number <= N)
			{
				bIsReached = false;
			}
			else
			{
				N *= 2;
			}
		}
		if (i == 0)
		{
			Result = N;
		}
		else
		{
			Result = Result ^ N;
		}
		bIsReached = true;
		N = 1;
	}

	cout << Result << endl;

	return 0;
}