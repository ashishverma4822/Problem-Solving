//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int firstO(int arr[],int n,int k){
	    int s=0;
	    int e=n-1;
	    int ans2=-1;
	    int mid=s+(e-s)/2;
	    while(s<=e){
	        mid=s+(e-s)/2;
	        if(arr[mid]==k){
	            ans2=mid;
	            e=mid-1;
	        }
	        if(arr[mid]<k){
	            s=mid+1;
	        }
	        if(arr[mid]>k){
	            e=mid-1;
	        }
	    }
	    return ans2;
	}
	int lastO(int arr[],int n,int k){
	    int s=0;
	    int e=n-1;
	    int ans1=-1;
	    int mid=s+(e-s)/2;
	    while(s<=e){
	        mid=s+(e-s)/2;
	        if(arr[mid]==k){
	            ans1=mid;
	            s=mid+1;
	        }
	        if(arr[mid]<k){
	            s=mid+1;
	        }
	        if(arr[mid]>k){
	            e=mid-1;
	        }
	    }
	    return ans1;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int i=firstO(arr,n,x);
	    int j=lastO(arr,n,x);
	    if(i==-1 || j==-1){
	        return 0;
	    }
	    return j-i+1;
	}
};
