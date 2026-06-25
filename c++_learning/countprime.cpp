#include <iostream>
using namespace std;
int main() {
    int n;
    int z=0;
    cin>>n;
    for(int k=n-1; k>0;k--) {
        int c=0;
        for (int t=2; t<k;t++){
            c++;
            if (k%t == 0) break;
        }
        if (c==k-2) {
        	z=z+1;
        	}
    }
    cout<<"tr"<<z;
    return 0;
}