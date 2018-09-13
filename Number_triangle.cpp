#include<iostream>
#include<algorithm>
#include<vector>
#include<Windows.h>

using namespace std;

int main()
{
	int col = 0;
	cin >> col;
	vector<vector<int>> v1(col);
	vector<vector<int>> v2(col);

	for (int i = 0; i < col; i++)
	{
		v1[i].resize(col);
	}	
	for (int i = 0; i < col; i++)
	{
		v2[i].resize(col);
	}
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> v1[i][j];
		}
	}
	for (int i = 0; i < col; i++)
	{
		v2[col - 1][i] = v1[col - 1][i];
	}
	for (int i = col-2; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			v2[i][j] = v1[i][j] + max(v2[i + 1][j], v2[i + 1][j + 1]);
		}
	}
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << v1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "#####################################################" << endl;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j< col; j++)
		{
			cout << v2[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}