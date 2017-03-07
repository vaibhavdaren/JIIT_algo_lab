
        #include <stdio.h>
        int merge(int a[], int start, int new_mid, int mid, int end){
         
            int i,j,k;
            int temp[end-start+1];
         
            i = start; j = mid; k = 0;
         
            while(i <= new_mid && j <= end){
                if(a[i]< a[j]){
                    temp[k++]= a[i++];
                }
                else if(a[i] > a[j]) {
                    temp[k++]  = a[j++];
                }
                else{
                	temp[k++]  = a[j++];
                	i++;
                }
            }
            while(i <= new_mid){
                temp[k++] = a[i++]; 
            }
            while(j <= end){
                temp[k++] = a[j++]; 
            }
            for(i=0; i<k; i++){
                a[i+start] = temp[i];
            }
            return k;
        }
        int mergeSort(int a[], int start, int end ){
         
            int mid  = (start + end)/2;
            if(start< end){
                //sort the left part
                int new_mid = mergeSort(a, start, mid);
                //sort right part
                int new_end = mergeSort(a, mid+1, end);
                //merge them together
                int k = merge(a, start, new_mid, mid+1, new_end);
         
                return start+k-1;
            }
            return end;
        }
        int main(){
        	int a[] = {2,4,3,2,2,1,1,4};
        	int size = sizeof(a)/sizeof(a[0]);
         
        	size  = mergeSort(a, 0, size-1);
        	for(int i=0; i<=size; i++){
        		printf("%d ", a[i]);
        	}
        }
         

