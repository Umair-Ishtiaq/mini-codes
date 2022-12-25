#include<iostream>
using namespace std;
int main()
{
	cout << "Input :\n";
	int arr[5][6];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "Output :\n";
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << arr[i][j]<< " ";
		}
		cout << endl;
	}

}
