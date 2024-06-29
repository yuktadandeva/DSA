int main() {
    //find largest number
    int n;
    cout<<"enter size ofarray : ";
    cin>>n;
    
    int a[100];
    cout<<"enter "<< n<< " elements : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int mx= INT_MIN;
    int i;
    for(i=0; i<n; i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    cout<<"max element value "<< mx;
  
    return 0;
}
