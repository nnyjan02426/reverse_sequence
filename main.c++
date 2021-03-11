#include<iostream>
using namespace std;

/*
TASK DESCRIPTION
Write a program to read a positive integer n
and a sequence of n integers,
then print the sequence reversely.
*/

/* simple ver.
int main(){
    int n = 0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int j=n-1; j>-1; j--){
        cout << arr[j] << ' ';
    }

    return 0;
}
*/

int main(){
    int con=1;
    while(con){
        cout << endl;
        int n = 0;
        //User enter a positive integer n, n is the sequence's length
        while(n==0){
            cout << "Please enter a positive integer: ";
            cin >> n;
            if((n!=0)&&(0<n)&&(n<1000)){
                break;
            }
            else{
                cout << "The integer must be higher than 0, lower than 1000." << endl;
                n = 0;
            }
        }
        int arr[n];

        //User enter a sequence of n integers, the integers will be stored in an array
        cout << "Please enter " << n << " integers: ";
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        //Numbers in the array are printed from the largest index
        cout << "The reversed sequence of integers: ";
        for(int j=n-1; j>-1; j--){
            cout << arr[j] << ' ';
        }

        //User chooses if he/she wants to continue the program
        cout << endl << "Do you want to continue? (y=1/n=0)";
        cin >> con;
        while((con!=0) && (con!=1)){
            cout << "Please enter 1 or 0: ";
            cin >> con;
        }
    }

    return 0;
}