#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
 
// function to convert decimal to binary
void decToBinary(int n)
{
    // vector to store binary number
    vector<int> binaryNum;
 
    // iterator for binary number vector
    vector<int>::iterator i;
    
    
    while (n >=1) {
 
        // storing remainder in binary array
        binaryNum.push_back(n % 2);
        cout<<n<<'\t';
        n = n / 2;
    }
    i=binaryNum.begin();
   
 
    // printing binary array in reverse order
    reverse(binaryNum.begin(),binaryNum.end());
    for(i; i != binaryNum.end(); i++)
        {cout << *i;}
        cout<<'\n'<<*(binaryNum.end());
        
        

}
 
// Driver program to test above function
int main()
{
    int n = 17;
    decToBinary(n);
    return 0;
}
