#include<iostream>
using namespace std;

	void rotate(int arr[], int n){
		int x = arr[n - 1],i;
		for (i = n - 1; i > 0; i--) {
			arr[i] = arr[i - 1];
			arr[0] = x;
}

	}
	int main() {
		
		int *arr = new int[10];
		for (int i = 0; i < 10; i++) {
			cin>>arr[i];
		}
		rotate(arr, 10);
		cout << endl;
		for (int i = 0; i < 10; i++) {
			cout << arr[i] << " ";
	}
		return 0;
	}
