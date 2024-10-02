#include "arrays.h"

void get_age(int age[],int size);
void show(int age[],int size);
void sum(int age[],int size);
void average(int age[],int size);
void maximum(int age[],int size);
void minimum(int age[],int size);
int main(){

    int capacity = 3;
    int array[capacity];

    get_age(array,capacity);
    show(array,capacity);
    sum(array,capacity);
    average(array,capacity);
    maximum(array,capacity);
    minimum(array,capacity);

}

void get_age(int age[],int size){
    for (int i = 0; i < size; ++i) {
        cout << i+1 << ". Enter age: ";
        cin >> age[i];
    }
}

void show(int age[],int size){
    for (int x = 0; x < size; ++x) {
        cout << x+1 <<". " <<"Number entered is: "<< age[x] << "\n";
    }
}

void sum(int age[],int size){
    int prevNo = 0;
    for (int x = 0; x < size; ++x) {
        prevNo += age[x];
    }
    cout << "Sum of numbers entered is: "<< prevNo << endl;
}

void average(int age[],int size){
    int prevNo = 0;
    for (int x = 0; x < size; ++x) {
        prevNo += age[x];
    }
    int average = prevNo/size;
    cout << "Average of numbers entered is: "<< average << endl;
}

void maximum(int age[],int size){
    int firstNo = age[0];
    for (int i = 1; i < size; ++i) {
        if (age[i] > firstNo){
            firstNo = age[i];
        }
    }
    cout << "Maximum number entered is: "<< firstNo << endl;
}

void minimum(int age[],int size){
    int firstNo = age[0];
    for (int i = 1; i < size; ++i) {
        if (age[i] < firstNo){
            firstNo = age[i];
        }
    }
    cout << "Minimum number entered is: "<< firstNo << endl;
}