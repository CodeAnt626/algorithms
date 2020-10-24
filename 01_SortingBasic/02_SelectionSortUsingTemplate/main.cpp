#include <iostream>
#include <string>
#include "Student.h"

using namespace std;
template<typename T>
void selectionSort(T arr[], int size){
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
        
    }
    
}

int main(int argc, char const *argv[])
{
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    selectionSort(a, 10);
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    double b[5] = {5.5,4.1,3.14,6.6,8.6};
    selectionSort(b, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
    string c[4] = {"d","c","b","a"};
    selectionSort(c, 4);
    for (int i = 0; i < 4; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

    Student d[4] = {{"D",95}, {"C",90}, {"B",85}, {"A",80}};
    selectionSort(d,4);
    for (int i = 0; i < 4; i++)
    {
        cout<<d[i];
    }
    cout<<endl;
    return 0;
}
