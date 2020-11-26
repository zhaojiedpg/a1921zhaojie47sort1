#include "paixug.h"

void InsertSort(int a[],int n){
	int i,j,temp;
	for (i=1; i<n; i++){
		temp = a[i];
		j =i -1;
		while (j>=0 && a[j]>temp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
}

void SelectSort(int a[],int n){
	int i, j, k, m;
	for (i=0; i<n-1; i++){
		m = a[i];
		k = i;
		for (j=i=1; j<n; j++)
			if (a[j] < m){
				m=a[j]; k=j;

			}
		a[k] = a[j];
		a[i] = m;
	}
}
