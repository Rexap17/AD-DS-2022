#include <iostream>
#include <vector>
using namespace std;
 
void bubbleSort(vector<int> list)
{
    int i, j;
    int n = list.size();
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (list[j] > list[j + 1])
                swap(list[j], list[j + 1]);
}
 
void printArray(vector<int> list)
{
    int i;
    int size = list.size();
    for (i = 0; i < size; i++)
        cout << list[i] << " ";
    cout << endl;
}
 
int main()
{
    std::vector<int> list = {1, 3, 5, 4, -5, 100, 7777, 2014};
    bubbleSort(list);
    cout << "Sorted array: \n";
    printArray(list);
    return 0;
}