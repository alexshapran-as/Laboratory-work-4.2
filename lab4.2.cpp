/*
Лабораторная работа №4.2
Задание: Записать матрицу в обратном порядке
Алексей Шапран 
Группа: ИУ8-14
*/

#include <iostream> 
#include <stdlib.h>
#include <conio.h>
using namespace std; 

int main(void)
{
	double **pparray = 0; 
	double a = 0;
	int n = 0; 
	int m = 0;
	cout << "n = "; 
	cin >> n; 
	cout << "m = "; 
	cin >> m;

	pparray = (double **)malloc(n*sizeof(double *));
		for (int i = 0; i < n; i++ ) pparray[i] = (double *)malloc(m*sizeof(double));

	cout << endl << "Two-dimensional array (matrix)" << endl << endl;
		for ( int i = 0; i < n; i++ )
		{
			for ( int j = 0; j < m; j++ ) 
			{
				pparray[i][j] = rand() % 100;
				cout << pparray[i][j] << " ";
			}
		cout << endl;
		}
	cout << endl << "Two-dimensional array (matrix), which is recorded in the reverse order:" << endl << endl;
		for ( int i = 0; i < n; i++ )
		{
			for ( int j = 0; j < m/2; j++ )
			{
				a = pparray[i][j];
				pparray[i][j] = pparray[i][m-1-j];
				pparray[i][m-1-j] = a;
			}
		}

		for ( int i = 0; i < n; i++ )
		{
			for ( int j = 0; j < m; j++ )
			{
				cout << pparray[i][j] << " ";
			}
		cout << endl;
		}

		for (int i = 0; i < n; i++ ) free(pparray[i]);
		free(pparray);

	cout << endl << "Press any button to exit the program";
	_getch();
	return 0;
}