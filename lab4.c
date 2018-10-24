#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, k, l, j=0, max, p, t;

    printf("Enter the size of your array: ");
    do
    {
        scanf("%i",&n);
    }
    while (n<1||n>50);

    int mas[n+3];

    printf("Start filling your array: \n");
    for (i=0;i<n;i++)
    {
        printf("Element%i = ",i+1);
        scanf("%i",&mas[i]);
    }

    printf("TASK2\n");
    printf("Choose the possition from where to take out elements: ");
    scanf("%i",&k);

    if (k<n)
    {
        l=(k-1);
        while (l<n)
        {
            printf("%i\n",mas[l]);
            l++;
        }

        while (j<(k-1))
        {
            printf("%i\n",mas[j]);
            j++;
        }
    }
    else
    {
        printf("Your number is bigger than array's size. Try again");
        return 0;
    }


    printf("TASK3 and TASK4\n");
    max=mas[0];
    for (i=0;i<n;i++)
    {
        if (mas[i]>max)
        {
            max=mas[i];
        }
    }

    int mas2[n+3];
    int q =0;

    for (i=0;i<n;i++)
    {
        p=i;
        if (mas[i]==max)
        {
            q++;
            do
            {
                t=mas[p];
                mas[p]=mas[p+1];
                mas[p+1]=t;
                p++;
            }
            while (p<(n));
        }
        mas2[i]=mas[i];
    }
    
    j=0;
    l=(k-1);
    while (l>=0)
        {
            printf("%i\n",mas2[l]);
            l--;
        }

    for (j<(n-q);j>(k-1))
        {
            printf("%i\n",mas2[j]);
            j++;
        }
}
