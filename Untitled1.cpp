#include<iostream>
using namespace std;
int main()
{
	int binarysearch(int arr[],int lb, int ub,int x)
	
		if(ub>=lb)
		{
		
		int mid= lb+(ub-lb)/2;
		{
		if(arr[mid]==x)
		return mid;
		elseif(arr[mid]>x)
		return binarysearch (arr,lb,mid-1,x);
		else
		return binarysearch (arr,ub,mid+1,x);
		
	}
	return -1;
}
}
int main(void)
{
	int arr[]= {2,4,16,25,40,80};
	int x=80;
	int n=sizeof (arr)/sizeof(arr[0]);
	int result= binarysearch(arr,n-1,x,0);
	(return ==-1)
	?cout<<"element is not present at index";
	:cout<<"element is present in the array at the index";
	return 0;
}
