#include<iostream>
using namespace std;


int search(int array[],int n, int x)
{
    int i;

    for ( i=0;i<n;i++)
    {
        if (array[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main ()
{
    int array[] = {2,4,0,2,1,9};
    int x =0;
    int n = sizeof(array)/ sizeof(array[0]);
    int result = search(array,n,x);
    if (result == -1)
        cout<<"element not found";
    else
        cout<< "ELement found at index :"<< result;
}