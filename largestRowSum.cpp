#include <iostream>
using namespace std;

void largestRowsum(int arr[][3],int row, int col){
    int maxi=INT_MIN;
    int rowIndex=-1;
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
           sum+=arr[i][j];
        }
        if (sum>maxi)
        {
            maxi=sum;
            rowIndex=i;
        }
    }
    cout << "\nThe maximum sum is " << maxi << " ";
    cout << "The row is at index " << rowIndex;
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
    
    largestRowsum(arr,3,3); 
    return 0;
}
