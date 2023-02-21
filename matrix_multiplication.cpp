 #include <iostream>

using namespace std;

int main()
{
    int r1,c1;
    cout<<"\n\t\tenter the row and column of 1st matrix\n";
    cin>>r1>>c1;
    int A[r1][c1];
    cout<<"\n\t\tenter the elements of 1st matrix\n";
    for(int i = 0 ; i < r1 ; i++){
        for(int j =0 ; j<c1;j++){
            cin>>A[i][j];
        }
    }
    
    cout<<"\n\t\t 1st matrix is:\n";
    for(int i = 0 ; i < r1 ; i++){
        for(int j =0 ; j<c1;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int r2,c2;
    cout<<"\n\t\tenter the row and column of 2nd matrix\n";
    cin>>r2>>c2;
    int B[r2][c2];
    cout<<"\n\t\tenter the elements of 2nd matrix\n";
    for(int i = 0 ; i < r2 ; i++){
        for(int j =0 ; j<c2;j++){
            cin>>B[i][j];
        }
    }
    cout<<"\n\t\t 2nd matrix is :\n";
    for(int i = 0 ; i < r2 ; i++){
        for(int j =0 ; j<c2;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int Mul[r1][c2];
    if(c1!=r2){
        cout<<"\n\t\tMultiplication not possible\n";
    }
    else{
        
        for(int i = 0 ; i < r1 ; i++){
            for(int j = 0 ; j < c2 ; j++){
                int ans=0;
                for(int k = 0;k<c1;k++){
                    ans+=A[i][k]+B[k][j];
                }
                Mul[i][j]=ans;
            }
        }
        cout<<"\n\t\tMultiplication of two matrix is: \n";
        for(int i = 0 ; i < r1 ; i++){
            for(int j = 0 ; j < c2 ; j++){
                cout<<Mul[i][j]<<" ";   
             
            }   
            cout<<endl;
            }    
    }
    
    return 0;
}
