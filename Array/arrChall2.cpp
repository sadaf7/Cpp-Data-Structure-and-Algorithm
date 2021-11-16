/*Take 5 integer input and copy arrays in another array
and print in reverse order,*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n],arr2[n];
    for(int i=0;i<=n;i++){
        cin >> arr[i];
    }
    int j=0;
    for(int i=n;i>=0;i--){
        arr2[i]=arr[j];
        j++;
    }
    for(int i=0;i<=n;i++){
        cout << arr2[i] << " ";
    }
}
