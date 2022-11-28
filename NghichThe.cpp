#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>

using namespace std;

const int MAX = 3e4+1;
int arr[MAX];
int count = 0;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* T?o c�c m?ng t?m */
    int L[n1], R[n2];
 
    /* Copy d? li?u sang c�c m?ng t?m */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* G?p hai m?ng t?m v?a r?i v�o m?ng arr*/
    i = 0; // Kh?i t?o ch? s? b?t d?u c?a m?ng con d?u ti�n
    j = 0; // Kh?i t?o ch? s? b?t d?u c?a m?ng con th? hai
    k = l; // IKh?i t?o ch? s? b?t d?u c?a m?ng luu k?t qu?
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            count++;
        }
        k++;
    }
 
    /* Copy c�c ph?n t? c�n l?i c?a m?ng L v�o arr n?u c� */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy c�c ph?n t? c�n l?i c?a m?ng R v�o arr n?u c� */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l l� ch? s? tr�i v� r l� ch? s? ph?i c?a m?ng c?n du?c s?p x?p */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Tuong t? (l+r)/2, nhung c�ch n�y tr�nh tr�n s? khi l v� r l?n
        int m = l+(r-l)/2;
 
        // G?i h�m d? quy ti?p t?c chia d�i t?ng n?a m?ng
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
	ios_base::sync_with_stdio(0);
	arr = {3,1,2};
	mergeSort(arr, 0, 2);
	cout<<count;
	return 0;
}


