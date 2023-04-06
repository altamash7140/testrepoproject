#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"enter no of rows:";
    cin>> m;

    cout<<"enter no of collumns:";
    cin>>n;

    int array[m][n];
    cout<<"enter elements of matrix:";
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>array[i][j];
        }
    }
    int transpose[n][m];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
             transpose[i][j] = array[j][i] ;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<transpose[i][j]<<" ";
        }cout<<endl;
    }



    return 0;
}