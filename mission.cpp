#include<bits/stdc++.h>
using namespace std;
int calchouse(int input1, int input2[][2]){

    int sum=0,count=0;
    int defaultarr[8][8];

    //initialize default array
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            defaultarr[i][j]=0;
        }
    }

    //manipulate the inputs
    for(int i=0;i<input1;i++){
        for(int j=0;j<2;j++){
            if(j==0){
                int val=input2[i][j];
                for(int k=0;k<8;k++){
                    defaultarr[val][k]=defaultarr[val][k] + 1;
                }
            }else{
                int val=input2[i][j];
                for(int k=0;k < 8;k++){
                    defaultarr[k][val]=defaultarr[k][val] + 1;
                }
            }
        }
    }

    //print array
    cout<<endl;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<defaultarr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //add houses
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(defaultarr[i][j]==0){}
            else{
                count = count + 1;
            }
        }
    }
    
return count;
}

int main(){
    int input1;
    cin>>input1;
    int input2[input1][2];
    for(int i=0;i<input1;i++){
        for(int j=0;j<2;j++){
            cin>>input2[i][j];
        }
    }
    cout<<calchouse(input1, input2);
}