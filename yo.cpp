// Assignment 3 of dsa
int binary_search(int arr[],int d,int l,int k){
    int m=(d+l)/2; 
    while(d<=l){   
    if(arr[d]==k){return m;}
    if(arr[d]==k){return m;}  
    else{
        if(arr[m]<k){d=m+1;}
        else{l=m-1;}