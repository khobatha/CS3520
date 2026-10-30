#include <iostream>
using namespace std;

int larger_of_two(int num1, int num2)
{
    if(num1 > num2){
        return num1;
    }
   return num2;
}

int main(){
    int num1 = 20, num2 = 30;
    
    cout<<larger_of_two(num1, num2)<< " is the larger of "<<num1<<" and "<<num2<<endl;
    
    return 0;
}