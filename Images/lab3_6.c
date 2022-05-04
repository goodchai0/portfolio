#include <stdio.h>



#include <math.h>



#include <stdlib.h>



//#include<conio.h>

float mean(int a[10], int n)

{

    int i;

    float sum = 0.0;

    for (i = 0; i < n; i++)

    {

        sum = sum + a[i];

    }

    return (sum / n);

}

float stddev(int a[10], int n)

{

    int i;

    float fsum = 0.0, m;

    m = mean(a, n);

    for (i = 0; i < n; i++)

    {

        fsum = fsum + (a[i] - m) * (a[i] - m);

    }

    return (sqrt(fsum / n));

}

void swap(int *xp, int *yp)

{

    int temp = *xp;

    *xp = *yp;

    *yp = temp;

}



void selectionSort(int arr[], int n)

{

    int i, j, min_idx;



    

    for (i = 0; i < n - 1; i++)

    {



        min_idx = i;

        for (j = i + 1; j < n; j++)

            if (arr[j] < arr[min_idx])

                min_idx = j;



        swap(&arr[min_idx], &arr[i]);

    }

}



int main()



{



    float a, j, i, choice,ans;



    long long float fact;



    printf("Enter size of array:-");



    scanf("%f", &a);



    int arr[a];

    float sum = 0;

    printf("Enter elements of array:-");

    for (int i = 0; i < a; i++)

    {

        scanf("%d", &arr[i]);

        sum += arr[i];

    }

    selectionSort(arr, a);



    printf("\n\n");



    printf("\n  1. Maximum");



    printf("\n  2. Minimum ");



    printf("\n  3. Average ");



    printf("\n  4. standard Deviation");



    printf("\n  5. Exit ");



    do



    {



        printf("\n\nEnter choice => ");



        scanf("%f", &choice);



        switch (choice)



        {



        case 1:



            printf("The Maximum element:%f\n", arr[a - 1]);

            break;



        case 2:



            printf("The Minimum element:%f\n", arr[0]);



            break;



        case 3:



            printf("The Average value of all element:%.2f\n", sum / a);



            break;



        case 4:

		ans=stddev(arr, a);

		printf("The Standard Deviation :%.2f\n", ans);



        case 5:



            exit(0);



        default:



            printf("\nChoice is wrong !!!");

        }



    } while (choice <= 4);

}