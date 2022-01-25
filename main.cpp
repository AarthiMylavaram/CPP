/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arr[10]={7,2,2,2,4,2,1,2,7,2};
    int x;
    int value=0;
    for(int i=0;i<10;i++){
        x=0;
        for(int j=0;j<10;j++){
            if(arr[i]==arr[j]){
            x++;
            }
        }
        if(x>5){
            value=arr[i];
        }
    }
    if(value==0){
        cout<<"There is no majority element in the given array";}
        
    else{
        cout<<"The majority element is"<<value;
    }
    return(0);
    
}
