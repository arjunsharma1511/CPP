#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}
int main(){
    int x=5,y=10;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}