/*
Chapter 1 Question 7
Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column is set to 0.
*/

#include <iostream>
#define R 3
#define C 4
using namespace std;

void modifyMatrix(bool mat[R][C])
{
	bool row[R];
	bool col[C];

	int i, j;


	/* Initialize all values of row[] as 0 */
	for (i = 0; i < R; i++)
	{
		row[i] = 0;
	}


	/* Initialize all values of col[] as 0 */
	for (i = 0; i < C; i++)
	{
		col[i] = 0;
	}


	/* Store the rows and columns to be marked as 1 in row[] and col[]
	arrays respectively */
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (mat[i][j] == 1)
			{
				row[i] = 1;
				col[j] = 1;
			}
		}
	}

	/* Modify the input matrix mat[] using the above constructed row[] and
	col[] arrays */
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (row[i] == 1 || col[j] == 1)
			{
				mat[i][j] = 1;
			}
		}
	}
}

/* A utility function to print a 2D matrix */
void printMatrix(bool mat[R][C])
{
	int i, j;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			cout << mat[i][j];
		}
		cout << endl;
	}
}

/* Driver program to test above functions */
int main()
{
	bool mat[R][C] = { { 1, 0, 0, 1 },
	{ 0, 0, 1, 0 },
	{ 0, 0, 0, 0 },
	};

	cout << "Input Matrix" << endl;
	printMatrix(mat);

	modifyMatrix(mat);

	cout << "Matrix after modification \n";
	printMatrix(mat);
	system("pause");
	return 0;
}
