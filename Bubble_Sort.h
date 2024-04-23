#pragma once

void Ordenamiento_intercambio(int a[], int n) {

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n; k++)
		{
			if (a[i] > a[k])
			{
				int aux = a[i];
				a[i] = a[k];
				a[k] = aux;
			}
		}
	}
}

void print(int* v, int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << " " << v[i];
		//std::cout << std::endl;
	}
}
