#include <cs50.h>
#include <stdio.h>

int swap(int*a, int*b);
int main(void)
{
    //number of integers to sort
    int numb = get_int("how many input: ");

    //inserting each integer into the array list
    int list[numb];
    for (int i = 0; i < numb; i++)
    {
        printf("value %i: ", i + 1);
        list[i] = get_int();
        //printf("\t");
    }

    //sort array list
    int m = 0;
    while (m < numb)
    {
        int j;
        for ( j = 0; j < numb-1; j++)
        {
            if (j > numb)
            {
                break;
            }
            else if (list[j] > list[j+1])
            {
                if (j+1 <= numb)
                {
                    swap(&list[j], &list[j+1]);
                }
            }
        }
        j--;
        m++;
    }

    //print out sorted array list
    printf("Sort:");
    for (int k = 0; k < numb; k++)
    {
        printf("%i, ", list[k]);
    }
    printf("\n");
}

int swap(int*a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}