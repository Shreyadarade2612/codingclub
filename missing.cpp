#include <iostream>
using namespace std;
int findMissingValArray(int arr[], int N){
   for(int i = 0; i < N; i++){
      if(arr[i] != (i+1))
         return (i+1);
   }
   return -1;
}
int main(){
   int arr[] = {1, 2, 3, 4, 6};
   int N = sizeof(arr)/sizeof(arr[0]);
   cout<<"The missing value from the array is "<<findMissingValArray(arr, N);
   return 0;
}
