#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[100005], n, sum = 0;
void Try(int i){
    for(int j = 1; j<=n; j++){
        a[i] = j;
        sum += a[i];
        if(sum == n){
           
        }
        else   Try(i+1);
    }
}
int main(){

}