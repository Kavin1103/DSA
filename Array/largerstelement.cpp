#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<=n-1; i++){
        cin>> arr[i];
    }
    int largest = arr[0];
    for(int j=0; j<=n-1; j++){
        if(arr[j]>largest){
            largest = arr[j];
        }
    }
    cout<<"The largest is"<< largest;
    return 0;
}
