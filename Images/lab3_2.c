#include <stdio.h>
#include <math.h>
int Max(int a[],int n)
{
    int max,i;
 	max=a[0];
    for(i=1; i<n; i++)
    {
		if(max<a[i])
		    max=a[i];       
    }
    return max;
}
int Min(int a[],int n)
{
    int min,i;
 	min=a[0];
    for(i=1; i<n; i++)
    {
        if(min>a[i])
		    min=a[i];   
    }
    return min;
}
float average(int a[],int n)
{
    float avg,sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    avg = sum / (float)n;
    return avg;
}
float std_deviation(int a[],int n, int avg)
{
    float var, sd,sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + pow((a[i] - avg), 2);
    }
    var = sum / (float)n;
    sd = sqrt(var);
    return sd;
}
int main()
{
    int a[1000],i,j,n,p,q;
    float r,s;
    char c;
    printf("\nEnter size of the array : ");
    scanf("%d", &n);
    printf("\nEnter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nPress 1 for finding out the maximum value");
    printf("\nPress 2 for finding out the minimum value");
    printf("\nPress 3 for finding out the average value");
    printf("\nPress 4 for finding out the standard deviation");
    printf("\n\nEnter your choice : ");
    scanf("%d",&j);
    switch(j)
    {
        case 1: p=Max(a,n);
                printf("\nMaximum of array is : %d",p); 
                break;
        case 2: q=Min(a,n);
                printf("\nMinimum of array is : %d",q);
                break;
        case 3: r=average(a,n);
                printf("\nAverage of all elements = %.2f", r);
                break;
        case 4: s=std_deviation(a,n,r);
                printf("Standard deviation = %.2f", s);
                break;
        default: printf("\nInvalid option!!");
    }
    return 0;
}

