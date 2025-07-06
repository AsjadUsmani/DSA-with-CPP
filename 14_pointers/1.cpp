#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout << &a << endl; // &a batayega konse address me momory ke store hua hai a ki value. 0x se start hoti hai matlab ki memory address or ye value hexadecimal hoti hai(0x61ff08)
    cout << ptr << endl; // 0x61ff08
    int **ptr2 = &ptr;
    // cout << ptr2 << endl; // 0x61ff04
    // cout << *(ptr) << endl; // 10
    // cout << *(&a) << endl; // 10
    cout << *(ptr2) << endl; // 0x61ff0c
    cout << **(ptr2) << endl; // 10
    int *ptr3 = NULL; //NULL pointer
    cout << ptr3 << endl; // 0

    //Assignment
    int b = 5;
    int *p = &b;
    int **q = &p;
    cout << *p << endl; // 5
    cout << **q << endl; // 5
    cout << p << endl; // address of b(0x61fef8)
    cout << *q << endl; // b ka address(0x61fef8)
    cout << addressof(b) << endl; // 0x61fef8
    return 0;
}


/*
Notes:
1. Pointers are special variables that is used to store addresses of other variables.
2. int *ptr = &a; //iska matlab hai maine ek ptr variable banaya hai jisme a ka address stored hai, or int ke liye int pointer or dosare variable datat type ke liye dosare type ke pointers.
eg: float b = 20; float *ptr2 = &b;
3. pointer ka khud ka bhi koi address ho sakta hai lekin uske ander jo value hai wo a ka address hai.
4. pointer to pointer- isme agar hame ek dosare pointer ka address ek or pointer me store karna hai to ham use krte hai isme(<datatype>** <ptr-name> = &<ptr-name>)
eg. int **ptr2 = &ptr;
5. De-reference operator(*): ye operator ko koi bhi variable denge to ye uske ander ki stored value fetch kar sakta hai. eg: *(b) iska matlab hai ki b ka jo address hai wha konsi value store hai. cout << *(ptr) << endl;
*/
