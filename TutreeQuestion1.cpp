#include<iostream>

using namespace std;


int main(){


    // this for loop will print the upper triangle
    for (int j=1;j<=7;j++){
        for(int i=j;i<=7;i++)
          cout<<i<<" ";
        cout<<endl;
        if(j<7)
           for(int k=1;k<=j;k++)
              cout<<" ";
    }

   // and this for loop will print the lower triangle
    for(int j=7;j>=1;j--){
             for(int k=1;k<j;k++)
                   cout<<" ";
        for(int i=j;i<=7;i++){


            cout<<i<<" ";
        }
        cout<<endl;

    }



return 0;
}
