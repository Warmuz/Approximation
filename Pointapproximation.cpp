#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double y[4]={1,2,3,4};
    double x[4]={3,4,1,2};
    int n=1;
    double T[n];
    int N=3;
    double S[N];
    
    for(int k=0;k<=n;k++){
        for(int i=0;i<4;i++){
            T[k]+=y[i]*pow(x[i],k);
        }
        cout<<T[k]<<endl;
    }
    cout<<endl;
    for(int k=0;k<N;k++){
        for(int i=0;i<4;i++){
            S[k]+=pow(x[i],k);
        }
        cout<<S[k]<<endl;
    }
    return 0;
}
