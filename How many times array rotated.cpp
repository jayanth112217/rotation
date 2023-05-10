class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int pivot=-1;
	    for(int i=0;i<n-1;i++){
	        if(arr[i]>arr[i+1]) {
	            pivot = i;
	            break;
	        }
	    }
	    if(pivot == -1) return 0;
	    else{
	        return pivot+1;
	    }
	}

};