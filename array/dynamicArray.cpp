#include <iostream>

using namespace std;

int main()
{

    /////////////////////////////////////////////////////////
    int n,m,cb=0; cin >> n >> m ;

    int *arr = new int[n*m];//2d array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            // Assign values to
            // the memory block
            arr[(i*m) + j] = ++cb;
            // arr[i*m] = arr[i][0]
        }
    }

     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            cout << arr[(i*m) + j] << " ";
            // arr[i*m] = arr[i][0]
        }
        cout << "\n";
    }





//////////////////////////////////////////////////////////////////////
    int *b  = (int*) malloc(sizeof(int)*n);//1d array with malloc /c
    int **bb = (int**)malloc(sizeof(int*)*n); // array of array 2darrray

////////////////////////////////////////////////////////////////////
    int **c = new int*[n];
    for(int i=0;i<m;i++){
        c[i] = new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            c[i][j] = 1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
