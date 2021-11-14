#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int maxNum=-19999999;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<=n;i++){
        maxNum=max(maxNum,arr[i]);
        cout << maxNum << " " ;
    }
}
