#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
        int n;
        cout<<"How many elements tobe sorted??\t";
        cin>>n;

        int myArray[n];
        cout<<"Enter the elements\t";
        for(int i=0;i<n;i++)
        cin>>myArray[i];

        sort(myArray,myArray+n);

        for(int i=0;i<n;i++)
        cout<<myArray[i]<<" ";
}
