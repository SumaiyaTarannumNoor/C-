#include<iostream>
#include <string.h>
using namespace std;

int main()
{

    int arr1[300][300],arr2[300][300],multiply[300][300],sum, m1, n1, m2, n2, i, j,k,*p[300],*q[300],*r[300];


    cout << endl <<"Enter the row dimension of the matrix: "<<endl;
    cin>>m1;

    cout<< endl << "Enter the column dimension of the matrix: "<< endl;
    cin>>n1;

    cout<<endl<<"Enter the element for first matrix: \n"<<endl;

    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){

            cin>>arr1[i][j];
        }
    }


    cout<<endl<<"Enter the row dimension of the matrix: "<<endl;
    cin>>m2;

    cout<<endl<<"Enter the column dimension of the matrix: "<<endl;
    cin>>n2;
    if(n1!=m2){
        cout<<endl<<"dimension error\n"<<endl;
        return 0;
    }
    cout<<endl<<"Enter the element for second matrix: \n"<<endl;
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            cin>>arr2[i][j];
        }
    }


    //for(int i=0;i<m1;i++) p[i]=&arr1[i][j];
    //for(int i=0;i<m1;i++) q[i]=&arr2[i][j];
    //for(int i=0;i<m1;i++) r[i]=&matrix[i][j];


    for(int i=0;i<m1;i++){

         multiply[i][j]=0;
        for(int j=0;j<n2;j++){
             //*(*(r+i)+sum) = 0;
           multiply[i][j]= multiply[i][j]+ arr1[i][k]*arr2[k][j];
             //cout<<endl<<"\t"<<*(*(r+i)+j))endl;
        }
      }


    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            cout<<endl<<"\t"<<multiply[i][j]<<endl;
        }
        cout<<endl<<"\n"<<endl;
    }

}
