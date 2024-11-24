#include<iostream>
using namespace std;
int main(){
    int n,i,s_value,flag=0,mid;
    cout<<"enter the array length :";
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cout<<"Data ["<<i<<"]:";
        cin>>a[i];
    }
    cout<<"Enter the search value :";
    cin>>s_value;
    int low=0,high=n-1;
    while (low<=high)
    {
        mid=low+(high-low)/2;
        if (a[mid==s_value])
        {
            flag++;
            break;
        }
        else if(a[mid]>s_value){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if (flag==0)
    {
        cout<<"Data is not founded and its index number is :"<<mid;
    }
    else{
        cout<<"Data is founded!";
    }
    return 0;
}