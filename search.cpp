//linear search 
#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}
int main()
{

    int arr[] = {1, 4, 6, 8, 10};
    int x = 8;
    cout<<search(arr,5,x);
}