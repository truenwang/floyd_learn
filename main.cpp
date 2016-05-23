#include <iostream>
#include <stdlib.h>
#define SZ 5

//void floydp(int n1,int W[],int* D[],int* P[]);
 void floydp(int n1,int W[SZ][SZ],int D[SZ][SZ],int P[SZ][SZ]);
using namespace std;
int main() {
    int i=0,j=0;
    int W1[SZ][SZ]={0}; //use random to creat a 4*4 array
    int D1[SZ][SZ]={0};
	int P[SZ][SZ]={0};
    cout<<"you'll creat a 4*4 array."<<endl;
    cout<<"The array valus range is 1~10 or unlimited(please input 10000)"<<endl;
        for(i=0; i<SZ; i++){
            for(j=0;j<SZ;j++){
                cout<<"please input "<<i<<"row "<< j<<"cloumn value：";
                cin>>W1[i][j];
            }
        }
        //getchar();
    	cout<<"W is : "<<endl;

        for(int i=0; i<SZ; i++){
            for(int j=0;j<SZ;j++){
                cout<<W1[i][j]<<"\t";
            }
           cout << endl;
        }
    
        floydp(SZ, W1,D1,P);
	cout<<endl<<endl<<"P is"<<endl;
        for(int i=0; i<SZ; i++){
            for(int j=0;j<SZ;j++){
                cout<<P[i][j]<<"\t";
            }
           cout << endl;
        }
	cout<<endl<<endl<<"D1 is"<<endl;

		
        for(int i=0; i<SZ; i++){
            for(int j=0;j<SZ;j++){
                cout<<W1[i][j]<<"\t";
            }
           cout << endl;
        }




        return 0;
    }

    void floydp(int n1,int W[SZ][SZ],int D[SZ][SZ],int P[SZ][SZ]){
        int i=0,j=0,k=0;
        
        for(i=0;i<n1;i++){
            for(j=0;j<n1;j++){
                P[i][j]=0;
            }
        }
        D=W;
	
        for(k=0;k<n1;k++){
            for(i=0;i<n1;i++){
                for(j=0;j<n1;j++){
                    if(D[i][k]+D[k][j]<D[i][j]){
                        P[i][j]=k+1;
                        D[i][j]=D[i][k]+D[k][j];
                    }
                    
                }
            }
        }
    
    }



