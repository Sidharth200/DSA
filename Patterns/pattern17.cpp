#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        //printingspace
        int stars = n-row;
        while(stars){
            cout<<" ";
            stars--;
        }
        //printingmiddle
        int col = 1;
        while(col<=row){
            cout<<col;
            col++;
        }
        //printingend
        int col1 = 1;
        while(col1<=row-1){
            cout<<row-col1;
            col1++;
        }
        cout<<endl;
        row++;
    }
}