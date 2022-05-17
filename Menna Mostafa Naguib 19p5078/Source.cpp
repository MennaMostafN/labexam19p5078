#include <iostream>
using namespace std;
void bubbleSort(int array[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

    }
}

void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int n = 22;
    int x[] = { 2,1,2,2,3,4,2,3,1,1,2,2,2,4,4,4,2,2,3,3,1,1 };
    cout << "Given array is \n";
    printArray(x, n);
    int Unsorted[50];
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 3)
            Unsorted[i] = 1;
        //ill assume integer value 3 to be 1
        else if (x[i] == 1)
            Unsorted[i] = 2;
        //ill assume integer value 1 to be 2
        else if (x[i] == 2)
            Unsorted[i] = 3;
        //ill assume integer value 2 to be 3
        else if (x[i] == 4)
            Unsorted[i] = 4;
        //ill assume integer value 4 to be 4
        //so that i can be able to sort them using bubble sort algorithm and end up having all 3's first then all 1's then all 2's then all 4's

    }
    bubbleSort(Unsorted, n);
    for (int i = 0; i < n; i++)
    {
        if (Unsorted[i] == 1)
            x[i] = 3;
        else if (Unsorted[i] == 2)
            x[i] = 1;
        else if (Unsorted[i] == 3)
            x[i] = 2;
        else if (Unsorted[i] == 4)
            x[i] = 4;
        //ill return back the array to its original values in array x
    }
    cout << "\nSorted array is \n";
    printArray(x, n);
    return 0;
}