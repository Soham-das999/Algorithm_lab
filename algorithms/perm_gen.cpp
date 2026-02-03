#include <iostream> 
#include<string>
using namespace std; 
 
void perm_gen(string a, int l, int r) 
{ 
    if (l == r) 
        cout<<a<<endl; 
    else
    { 
        for (int i = l; i <= r; i++) 
        { 
            swap(a[l], a[i]); 
            perm_gen(a, l+1, r); 
            swap(a[l], a[i]); 
        } 
    } 
} 
 
int main() 
{ 
    string str = "ABC"; 
    int n = str.size(); 
    perm_gen(str, 0, n-1); 
    return 0; 
} 
