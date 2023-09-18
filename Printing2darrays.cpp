#include <iostream>
using namespace std;

int main()
{
    // Four ways to declare 2d arrays
    int arr[3][3];
    // int arr[3][3]={0};
    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}

    // taking input row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking input column wise
    //  for (int j = 0; j < 3; j++){
    //      for (int i = 0; i < 3; i++){
    //          cin >> arr[i][j];
    //      }
    //  }

     // printing row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
