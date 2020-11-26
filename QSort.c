#include "paixug.h"

int Partition(int a[],int low,int high){
	int x = a[low];
	while(low < high){
		while (low <high && a[high]>=x) high--;
		if (low <high){
			a[low] = a[high];
			low++;
		}
		while (low<high && a[low]<=x) low++;
		if (low < high){
			a[high] = a[low];
			high--;
		}
	}
	a[low] = x;
	return low;
}

int Partition2(int a[],int low,int high){
	int i=low, j=high+1, x=a[low], t;
	while (i<j){
		do i++;while (a[i]<x);
		do j--;while (a[j]>x);
		if (i<j){
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	a[low] = a[j];
	a[j] = x;
	return j;
}

void QSort(int a[],int low,int high){
	if (low <high){
		int mid = Partition(a, low, high);
		QSort(a, low, mid-1);
		QSort(a, mid+1, high);

	}
}

void QuickSort(int a[],int n){
	QSort(a, 0, n-1);
}
