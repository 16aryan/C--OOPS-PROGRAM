# include <iostream>
using namespace std;
class solution{
public:
    void swap(int arr[] , int size){
        for(int i=0 ; i<size-2 ; i++){
            int temp = arr[i];
            arr [i] = arr[i+2];
            arr [i+2] = temp;
        }
    }
    };
