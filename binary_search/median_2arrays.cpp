#include<bits/stdc++.h> 
#include <array>
using namespace std; 
int main()
{
	array<int,2> A = { 1,2};
	array<int,3> B = { 3,4,5};
	array <int,100> arr3 = {};
	int r =A.size();
	int s =B.size();
	int i=0,j=0,k=0;
while (i<r && j <s) 
    { 
  
        if (A[i] < B[j]) 
            arr3[k++] = A[i++]; 
        else
            arr3[k++] = B[j++]; 
    } 
  
    while (i < r) {
	
        arr3[k++] = A[i++]; 
}
    while (j < s){
	 
        arr3[k++] = B[j++]; 
}
int m = r+s;
 for (int k=0; k < m; k++){
 
	cout<<arr3[k]<<" ";
}
float mid=0;
for (int k=0; k < r+s; k++){

if(m%2==0)
	mid=(arr3[(m-1)/2] + arr3[m/2])/2.0;
else
mid=arr3[m/2];	
}
cout<<endl;
cout<<mid;	
		return 0;
}
