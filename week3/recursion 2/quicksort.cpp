#include<iostream>
using namespace std;
int partition(int a[],int si, int ei){
int count_smaller_elements=0;
for(int i=si+1;i<=ei;i++){
    if(a[i]<=a[si]){
        count_smaller_elements++;
    }
}
int temp=a[si+count_smaller_elements];
a[si+count_smaller_elements]=a[si];
a[si]=temp;
int partitionIndex=si+count_smaller_elements;
int x=a[partitionIndex];

int i=si;
int j=ei;
while( i<partitionIndex && j>partitionIndex){
      if(a[i]<=x) {
        i++;
        }else if(a[j]>x){
            j--;
        }else{
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        return partitionIndex;




}
}
void quick_sort(int a[],int si,int ei){
    if(si>=ei) return;
    int partitionIndex=partition(a,si,ei);
    quick_sort(a,si,partitionIndex-1);
    quick_sort(a,partitionIndex+1,ei);
}
int main(){

}















// /*
// 	The function is called with the parameters:
// 	quickSort(input, 0, size - 1);

// */

// int partitionArray(int input[], int start, int end) {
// 	// Write your code here
// int count_smaller_elements=0;
// for(int i=start+1;i<=end;i++){
//     if(input[i]<=input[start]){
//         count_smaller_elements++;
//     }
// }
// int temp=input[start+count_smaller_elements];
// input[start+count_smaller_elements]=input[start];
// input[start]=temp;
// int partitionIndex=start+count_smaller_elements;
// int x=input[partitionIndex];

// int i=start;
// int j=end;
// while( i<partitionIndex && j>partitionIndex){
//       if(input[i]<=x) {
//         i++;
//         }else if(input[j]>x){
//             j--;
//         } else {
//             int temp = input[i];
//             input[i] = input[j];
//             input[j] = temp;
//         }
//         return partitionIndex;
// }
// }

// void quickSort(int input[], int start, int end) {
// 	/*
// 		Don't write main().
// 		Don't read input, it is passed as function argument.
// 		Change in the given array itself.
// 		Taking input and printing output is handled automatically.
// 	*/
// 	if(input[start]>=input[end]){
// 		return;
// 	}
// 	int partitionIndex= partitionArray(input, start, end);
// 	 quickSort(input, start, partitionIndex-1);
// 	 quickSort(input, partitionIndex+1, end);
// }