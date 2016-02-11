#include <bits/stdc++.h>
using namespace std;
void quickSort(vector <int> &arr, int i, int n) {
   // Complete this function
   if(n <= 1) { return; } 
   if(n-i <= 1) {return; }
   int size = n-i;
   int wall = 0;
   int pivot = rand()%size;
   iter_swap(arr.begin()+i, arr.begin()+i+pivot);
   for(int j = i+1; j<n; j++){
	if(arr[j]<arr[i]) {
		wall++;
		iter_swap(arr.begin()+j, arr.begin()+i+wall);
	}	
   }
   iter_swap(arr.begin()+i, arr.begin()+i+wall);
   for(int j=i; j<n; j++){
	   cout<<arr[j]<<" ";
   }
   cout<<endl;
   quickSort(arr, i, wall+i);
   quickSort(arr, wall+1, n);
   

}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr, 0, arr.size());
    for(auto i:arr){
	    cout<<i<<" ";
    }

    return 0;
}

