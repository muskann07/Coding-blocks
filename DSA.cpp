// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Namaste duniya"<<endl;
//     return(0);
// }
// #include<iostream>
// using namespace std;
// int main() {
//     cout << "Hiiiiiiiiii" << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int number;
//     cout<<"enter a no.";
//     cin<<number;
//     cout<<"your no.:"<<number;
//     return 0;
// }
int findLargest(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[]={2,6,7,3,1,8};
    int n=6;
    int largest=findLargest(arr,n);
    cout<<"largest element in array:"<<largest;
    return 0;  
}