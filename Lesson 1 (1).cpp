#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream push("in.txt");

	const int N = 5;
	int array_1[N] = { 1, 2, 3, 4, 5 };
	const int M = 6;
	int array_2[M] = { 10, 20, 30, 40, 50, 60 };

	push << N << std::endl;
	for (int i = 0; i < N; i++)
	{
		push << array_1[i] << ' ';
	}	push << std::endl;

	push << M << std::endl;
	for (int i = 0; i < M; i++)
	{
		push << array_2[i] << ' ';
	}
	push.close();


	ifstream swapped("in.txt");

	int N_swap = 0;
	swapped >> N_swap;

	int array_1_swap[N];
	for (int i = 0; i < N; i++)
	{
		swapped >> array_1_swap[i];
	}
	for (int i = 0, j = 1; i < N, j < N; i++, j++)
	{
		swap(array_1_swap[i], array_1_swap[j]);
	}

	int M_swap = 0;
	swapped >> M_swap;

	int array_2_swap[M];
	for (int i = M - 1; i >= 0; i--)
	{
		swapped >> array_2_swap[i]; 
	}
	swap(array_2_swap[1], array_2_swap[5]);
	swap(array_2_swap[2], array_2_swap[4]);
	swapped.close();


	ofstream take_swap("out.txt");

	take_swap << M_swap << std::endl;
	for (int i = 0; i < M; i++)
	{
		take_swap << array_2_swap[i] << " ";
	}	take_swap << std::endl;

	take_swap << N_swap << std::endl;
	for (int i = 0; i < N; i++)
	{
		take_swap << array_1_swap[i] << " ";
	}	take_swap << std::endl;
	take_swap.close();

}