#include <iostream>
using namespace std;

//col wise sum
void printColSum(int arr[][3],int row, int col){
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
           sum+=arr[j][i];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    printColSum(arr,3,3);
    return 0;
}
