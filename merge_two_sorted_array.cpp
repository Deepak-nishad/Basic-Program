#include<iostream>
using namespace std;
void merge(int arr1[],int arr2[],int n1,int n2,int arr3[])
{
	int i,j,k;
	i=j=k=0;
	while(i<n1 &&j<n2)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			arr3[k]=arr2[j];
			k++;
			j++;
		}
	}
	
	cout<<i<<endl;
	cout<<j<<endl;
	while (i < n1)
        arr3[k++] = arr1[i++];
    while (j < n2)
        arr3[k++] = arr2[j++];
        
        /*
    for(;i<n1 &&i<n2;)
    {
    
	if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			arr3[k]=arr2[j];
			k++;
			j++;
		}	
	}
	

 for(;i<n1;)
 {
 	arr3[k]=arr1[i];
 	k++;
 	i++;
 }
 
 for(;j<n2;)
 {
 	arr3[k]=arr2[j];
 	k++;
 	j++;
 }*/
 
}
int main()
{
	int arr1[]={2,4,5,8};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[]={1,6,7,9,15,20,48,52};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	int arr3[n1+n2];
	merge(arr1,arr2,n1,n2,arr3);
	for (int i=0; i <n1+n2; i++)
        cout << arr3[i] << " ";
}
