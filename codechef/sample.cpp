#include<iostream>
using namespace std;

void transverse(int n, int arr[]){
cout << "The elements in the array are: ";
for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
cout << "\n";
}

void insert(int n, int arr[100], int ind, int val){
ind--;
if(ind >= n || ind < 0){
        cout << "\nIndex is out of bounds.\nUpdation unsuccessful.\n";
}
else{
cout << "\nInsertion Successful.\nThe elements are: ";
for(int i = n; i > ind; i--){
    arr[i] = arr[i - 1];
}
arr[ind] = val;
for(int i = 0; i < n + 1; i++){
    cout << arr[i] << " ";
}
}
}

void del(int n, int arr[100], int ind){
ind--;
if(ind >= n || ind < 0){
        cout << "\nIndex is out of bounds.\nUpdation unsuccessful.\n";
}
else{
cout << "\nDeletion Successful.\nThe elements are: ";
for(int i = ind; i < n - 1; i++){
    arr[i] = arr[i + 1];
}
n--;
for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
}
}

void update(int n, int arr[], int ind, int val){
    ind--;
    if(ind >= n || ind < 0){
        cout << "\nIndex is out of bounds.\nUpdation unsuccessful.\n";
    }
    else{
    arr[ind] = val;
    cout << "Updation Successful.\nThe elements are: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    }
}

void search(int n, int arr[], int val){
    int cnt = 0;
for(int i = 0; i < n; i++){
    if(arr[i] == val){
        cout << val << " is located at index " << i + 1 << ".\n";
        cnt++;
        break;
    }
}
if(!cnt) cout << val << " is not located in this array.\n";
}

int main(){
int n, q;
cout << "\nEnter the number of elements: ";
cin >> n;
int arr[n];
cout << "\nEnter the elements of the array: ";
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
cout << "\n";
cout << "Choose any of the operations,\nTransversal --> 1\nInsertion --> 2\nDeletion --> 3\nUpdation --> 4\nSearch --> 5\nExit --> 0\n\n";
cin >> q;
switch (q)
{
case 1:
    cout << "\n";
    transverse(n, arr);
    break;
case 2:
    cout << "\nEnter the index and value of the new element: ";
    int ind1, val1;
    cin >> ind1 >> val1;
    insert(n, arr, ind1, val1);
    break;
case 3:
    cout << "\nEnter the index you want to delete: ";
    int ind2;
    cin >> ind2;
    del(n, arr, ind2);
    break;
case 4:
    cout << "\nEnter the index and the new value of the element you want to update: ";
    int ind3, val3;
    cin >> ind3 >> val3;
    update(n, arr, ind3, val3);
    break;
case 5:
    cout << "\nEnter the value you want to search for: ";
    int val4;
    cin >> val4;
    search(n, arr, val4);
    break;
case 0:
   break;   
default:
    cout << "\nEnter a valid input, i.e, 0, 1, 2, 3, 4 or 5\n";
} 
    return 0;
}