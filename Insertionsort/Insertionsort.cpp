#include <iostream>
#include<array>

void insertion_sort(auto arr[], int len){

    for (int i = 1; i < len; i++){
        int key = arr[i];
        int j = i - 1;

        while (key < arr[j] && j >= 0){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    
}

int main() {

    char chars[5] = {'b','c','a','d','x'};
    int numbs[5] = {2,3,7,5,1};

    int chars_len = sizeof(chars)/sizeof(chars[0]);
    int numbs_len = sizeof(numbs)/sizeof(numbs[0]);

    insertion_sort(chars, chars_len);

    for (int i = 0; i < chars_len; i++) {
        std::cout << chars[i] << "\n";
    }
    return 0;
}