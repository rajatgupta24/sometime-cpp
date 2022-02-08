#include<iostream>
using namespace std;

void patterns1(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void patterns2(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void patterns3(int n) {
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void patterns4(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
}

void patterns5(int n) {
    int row = (2*n) -1;
    for(int i=0;i<row;i++){
        if (i<n) {
            for(int j=0;j<=i;j++){
                cout<<"*";
            }            
        } else {
            int col = (2*n) - (i+1);
            for(int j=0;j<col;j++){
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}

void patterns6(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void patterns7(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void patterns8(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

void patterns9(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        for(int j=i+1;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main() {
    patterns1(5);
    cout<<"\n";

    patterns2(5);
    cout<<"\n";

    patterns3(5);
    cout<<"\n";

    patterns4(5);
    cout<<"\n";

    patterns5(5);
    cout<<"\n";

    patterns6(5);
    cout<<"\n";

    patterns7(5);
    cout<<"\n";

    patterns8(5);
    cout<<"\n";

    patterns9(5);
    cout<<"\n";

    return 0;
}
