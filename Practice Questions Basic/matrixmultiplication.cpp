#include<iostream>
using namespace std;
int main()
{
	int t;
	cout<<"testcases:";
	cin>>t;
	while(t--)
	{
		int r1;
		cout<<"rows in matrix1:";
		cin>>r1;
		int c1;
		cout<<"column in matrix1:";
		cin>>c1;
			int matrix1[r1][c1];
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				cin>>matrix1[i][j];
			}
		}
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				cout<<matrix1[i][j]<<" ";
			}
			cout<<endl;
		}
		int r2;
		int c2;
		cout<<"rows in matrix 2";
		cin>>r2;
		cout<<"columns in matrix 2";
		cin>>c2;
		int matrix2[r2][c2];
		for(int i=0;i<r2;i++)
		{
			for(int j=0;j<c2;j++)
			{
				cin>>matrix2[i][j];
			}
		}
		for(int i=0;i<r2;i++)
		{
			for(int j=0;j<c2;j++)
			{
				cout<<matrix2[i][j]<<" ";
			}
			cout<<endl;
		}
		if(c1!=r2)
		{
			cout<<"Matrix multiplication not possible"<<endl;
		    continue;
		}
		else
	{
		int result[r1][c2];
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				result[i][j]=0;
				for(int k=0;k<c1;k++)
				{
					result[i][j]+=matrix1[i][k]*matrix2[k][j];
				}
			}
		}
		cout<<"Resultant matrix:"<<endl;
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				cout<<result[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
	return 0;
}
