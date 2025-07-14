#include<iostream>
#include<cstring>
using namespace std;

int main() {
    //Taking input in String.
    char str[100];
    // cin >> str; // this takes only a single word and ignores the rest hence below method is used in stings for taking the input.
    // cin?.getline(str, 100); // (Output: Asjad Usmani) ye by default next line pe input lena band kr deta hai to delimiter jo ki iska 3rd parameter hai usko use kiya jaa sakta hai wo batata hai kya input daalne pe input lena band hoga?
    cin.getline(str, 100, '.');
    // input: Hello Asjad Usmani How are you hope you are doing well. okay?
    // Output: Hello Asjad Usmani How are you hope you are doing well
    cout << "Output: " << str << endl;    
    return 0;
}
