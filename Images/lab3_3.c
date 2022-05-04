#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100
int Findmaxnumber(int a[], int n, int l)
{
    int max;
    if(n >= l-2)
    {
        if(a[n] > a[n + 1])
            return a[n];
        else
            return a[n + 1];
    }
 
    max = Findmaxnumber(a, n + 1, l);
 
    if(a[n] > max)
        return a[n];
    else
        return max;
}
int Findminnumber(int a[], int n, int l)
{
    int min;
 
    if(n >= l-2)
    {
        if(a[n] < a[n + 1])
            return a[n];
        else
            return a[n + 1];
    }
 
    min = Findminnumber(a, n + 1, l);
 
    if(a[n] < min)
        return a[n];
    else
        return min;
}
int main()
{
    int a[MAX_SIZE], n, max, min;
    int i;
    printf("\nEnter size of the array : ");
    scanf("%d", &n);
    printf("\nEnter %d elements in array :\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = Findmaxnumber(a, 0, n);
    min = Findminnumber(a, 0, n);
    printf("\nMinimum element in array: %d\n", min);
    printf("\nMaximum element in array: %d\n", max);
    return 0;
}