#include <stdio.h>
#include <stdlib.h>

long *Load_File (char *Filename, int *Size)
{
	FILE *file;
	file = fopen( "Filename", "r");
	if(file)
	{
		fscanf(file, "%d", Size);
		long *array[*Size];
		for(int i = 0; i < (*Size-1); i++)
		{
			fscanf(file, "%ld", array[i]);
		}		
		fclose(file);
		return array;
	}

}
int Save_File (char *Filename, long *Array, int Size)
{
	FILE *file;
	file = fopen("Filename", "w");
	if(file != NULL)
	{
		scanf("%d\n", &Size);
		for(int i = 0; i < (Size-1); i++)
		{
			scanf("%ld\n", &Array[i]);
		}
		fclose(file);
		return Size;
	}
}
void Shell_Insertion_Sort (long *Array, int Size, double *NComp, double *NMove)
{
	int k;
	int i;
	int temp_r;
	int *smooth = NULL;
	int n = 1;
	//smooth number
	smooth = Smooth_number(n)
	while (smooth[n] < Size)
	{
		n++;
		smooth = Smooth_number(n);
	}
	n--;
	//actual sorting
	for(n; n > 0; n--)
	{
		k = smooth[n];
		for(int j = k; j < (Size-1); j++)
		{
			temp_r = Array[j];
			NMove++;
			i = j;
			while( (i >= k) && (array[i-k] > temp_r)
			{
				r[i] = r[i-k];
				i = i-k;
				NComp++;
				NMove++;
			}
			if(i >=k )
			{
				NComp++;
			}
			r[i] = temp_r;
			NMove++;
		}
	}
}

void Improved_Bubble_Sort (long *Array, int Size, double *NComp, double *NMove)
{
	int N;
	int last_swap;
	int i;
	int temp;
	N = Size / 1.3;
	while( N >= 1)
	{
		for(int j = N; j < (Size -1 ); j++)
		{
			do
			{
				last_swap = -1;
				i = j-N;
				do
				{
					if (Array[i] > Array[i+N)
					{
						NComp++;
						temp = Array[i] ;
						Array[i] = Array[i+N];
						Array[i+N] = temp;
						NMove = NMove + 3;
						last_swap = i;
					}
					NComp++;
					i = i + N;
				}while (i < Size)
			}while(last_swap >= 0)
		}
		N = N / 1.3;
	}
}
void Save_Seq1 (char *Filename, int N)
{
	FILE *file;
	int *smooth = NULL;
	int n = 0;
	
	file = fopen("Filename", "w");
	
	do
	{
		n++;
		smooth = Smooth_number(n);
	}while (smooth[n] < N)
		
	n--;
	
	if(file != NULL)
	{
		for(int i = 0; i < (n-1); i++)
		{
			scanf("%ld\n", &smooth[i]);
		}
		fclose(file);
		return;
	}
}
void Save_Seq2 (char *Filename, int N)
{
	FILE *file;
	file = fopen("Filename", "w");
	if(file != NULL)
	{
		for(N; N > 1; N = N / 1.3)
		{
			scanf("%ld\n", N);
		}
		fclose(file);
		return;
	}
}

int *Smooth_number (int n)
{
	int res[n];
	int res[0] = 1;
	int u2;
	int u3;
	p_2 = 0;
	p_3 = 0;	
	for (int y = 1; y <= n; y++)
	{
		if (res[p2] * 2 == res[n-1])
		{
			p2 += 1;
		}
		if (res[p3] * 3 == res[n-1])
		{
			p3 += 1;
		}
		u2 = res[p2] *2;
		u3 = res[p3] *3;
		if(u2 < u3)
		{
			p2 += 1;
			res[n] = u2;
		}
		else
		{
			p3 += 1;
			res[n] = u3;
		}
	}
	return res;
}