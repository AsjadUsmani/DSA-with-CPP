#include <iostream>
using namespace std;

void changeA(int *ptr)
{ // pass by reference using pointers
    *ptr = 20;
}
void changeA2(int &b)
{ // pass by reference using alias. istead of b any variable can be used.
    b = 20;
}

int main()
{
    int a = 10;
    int b = 10;
    changeA(&a);
    changeA2(b);
    cout << a << endl;
    cout << b << endl;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr = &a;
    // cout << &arr << endl; // 0x61fef4
    // cout << *arr << endl; // 1
    cout << ptr << endl;        // 0x61ff08
    cout << ++ptr << endl;      // 0x61ff0c
    cout << ptr << endl;        // 0x61ff0c
    cout << *(arr + 1) << endl; // 2
    cout << *(arr + 2) << endl; // 3
    cout << *(arr + 3) << endl; // 4
    cout << *(arr + 4) << endl; // 5
    cout << *(arr + 5) << endl; // 6
    int *ptr5;
    int *ptr6 = ptr5 + 2;        // 2 integer ki value add kiya.
    cout << ptr6 - ptr5 << endl; // 2 value aayegi matlab inke beech 2 integer ki space hai.
    return 0;
}

/*
Note:
1. there are 2 method for pass by reference - pointers and references(alias)
2. array are always pointers which have the memory address = memory address of 0th index of Array.
3. array are constant pointers means you cannot further assign another value to same array name.
4. pointers me agar increment/decrement karte hai to address ki value uske specified datatype ke size ke hisaab se kam hoti ya badhti hai. jaise int ka size 4B hota hai to agar ptr++ kiya or ptr ki value 100 thi to 104 hogi next value na ki 101.
5. Hamlog 2 pointers ko direct add nahi kar sakte lekin substract kar sakte hai or substraction ke baad value unke beech me kitne int store ho sakte hai uski value aati hai.
*/