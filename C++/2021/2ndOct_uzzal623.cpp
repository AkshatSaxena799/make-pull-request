#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col, i = 0, j = 0;
    cout<<"Enter The Number of Rows:- ";
    cin>>row;
    cout<<"Enter The Number of Columns:- ";
    cin>>col;
    vector<vector<int> >arr(row,vector<int>(col,0));
    bool check = true; 
    for( j=1; j<=col; j++)
    {
        arr[i][j-1] = j;
        if(i==0)
        {     
           check = false;
        }
        if(i==(row-1))
        {
           check = true;
        }
        if(check) --i;
        else  ++i;
    }

    for ( i=0;i<row;i++)
    {
        for ( j=0;j<col;j++)
        {
            if(arr[i][j]!=0)
                cout << arr[i][j] <<" ";
            else
                cout << "  ";
        }
        cout<<endl;
    }
}  
