/* Q3. Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)*/

//library
#include<iostream>
using namespace std;

//declaring function for arranging the array elements 
void sort(int a[],int n){
	int o,t,i;
 	
	//Using do
 	do{
	o=0;
		for(i=0;i<(n-1);i++)
   		{	if (a[i]>a[i+1])
    			{ t=a[i];
     			  a[i]=a[i+1];
    			  a[i+1]=t;
     			  o+=1;
		    	}
		}
	}
	while(o!=0);
      
}

//Setting functions to find the kth maximum and kth minimum element of array
void kthlarge(int a[],int n,int k){ 
	cout<<"The "<< k<<"th largest element is "<<a[n-k]<<endl;
}
void kthsmall(int a[],int n,int k){ 
	cout<<"The "<< k<<"th smallest element is "<<a[k-1]<<endl;
}

//main function 
int main(){
	int a[10],n,k;
 	
	//Enter the array limits
	cout<<"How many elements should be there in the array? "<<endl;
 	cin>>n;
 	
	//Enter the array elements
	cout<<"Enter array elements "<<endl;
 	for(int i=0;i<n;i++)
  	cin>>a[i];
 	
	//calling the function to arrange elements in order
	sort(a,n);
	
	//Enter the velue of the k
	cout<<"The value of k is ";
	cin>>k;
	
	//calling functions for kth largest and smallest elements
	kthlarge(a,n,k);
	kthsmall(a,n,k);
	 
	
return 0;
}
